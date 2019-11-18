#ifndef __ESP32_HTTP_CPP__
#define __ESP32_HTTP_CPP__

#include "ESP32HTTP.h"

ESP32HTTP::ESP32HTTP() { }

bool ESP32HTTP::HTTPRequest(String url, uint8_t method, String payload) {
	clearBuffer();

	// Serial.println("Send http request");
  
	SERIAL_ESP.write(0x1F); // Start 1
	SERIAL_ESP.write(0xF1); // Start 2
	SERIAL_ESP.write(0x20); // HTTP Request command
	SERIAL_ESP.write(url.length());
	SERIAL_ESP.print(url);
	SERIAL_ESP.write(method);
	SERIAL_ESP.write(payload.length());
	SERIAL_ESP.print(payload);
	SERIAL_ESP.write((uint8_t)0); // no add header
	SERIAL_ESP.write(0x01); // dummy data

	uint8_t state = 0;
	// uint32_t start = millis();

	// Check Start
	while (1) {
		if (SERIAL_ESP.available()) {
			uint8_t c = SERIAL_ESP.read();
			if (state == 0) {
				if (c == 0x1F) {
					state = 1;
				}
			} else if (state == 1) {
				if (c == 0xF1) {
					state = 2;
				} else {
					state = 0;
				}
			} else if (state == 2) {
				if (c == 0x20) { // HTTP Request response ?
					break;
				} else {
					state = 0;
				}
			}
		} else {
			delay(1);
		}
	}

	// Serial.println("Waiting respond");

	while(SERIAL_ESP.available() < 2) delay(1); // Wait http code
	httpCode = (uint16_t)(SERIAL_ESP.read())<<8;
	httpCode |= SERIAL_ESP.read();

	while(SERIAL_ESP.available() < 2) delay(1); // Wait http respond payload count
	payloadSize = (uint16_t)(SERIAL_ESP.read())<<8;
	payloadSize |= SERIAL_ESP.read();
    // Serial.println(payloadSize);
	/* String respondPayload = "";
	while (payloadSize > 0) {
		if (SERIAL_ESP.available()) {
			respondPayload += (char)SERIAL_ESP.read();
			payloadSize--;
		} else {
			delay(1);
		}
	} */

	this->payload = (uint8_t*)malloc(payloadSize);
	uint16_t i = 0;
	uint16_t x = payloadSize;
	while (x > 0) {
		if (SERIAL_ESP.available()) {
			this->payload[i++] = SERIAL_ESP.read();
			x--;
		} else {
			delay(1);
		}
	}
	
	
/* 	Serial.println();
	Serial.println("HTTP Code: " + String(httpCode));
	Serial.println("--------------------------");
	Serial.println(respondPayload);
	Serial.println("--------------------------"); */
	

	// return respondPayload;
	return true;
}

bool ESP32HTTP::get(String url) {
	return HTTPRequest(url, 0, String(""));
}

bool ESP32HTTP::post(String url, String payload) {
	return HTTPRequest(url, 2, payload);
}

String ESP32HTTP::readString() {
	char buff[payloadSize + 1];
	memset(buff, 0, payloadSize + 1);
	memcpy(buff, payload, payloadSize);
	String msg = String(buff);
	return msg;
}

ESP32HTTP HTTP;

#endif