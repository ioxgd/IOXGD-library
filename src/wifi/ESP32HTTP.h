#ifndef __ESP32_HTTP_H__
#define __ESP32_HTTP_H__

#include "Arduino.h"
#include "ESP32WiFi.h"

class ESP32HTTP {
	private:
	
	public:
		uint16_t payloadSize;
		uint8_t *payload;
		uint16_t httpCode;

		ESP32HTTP();
		
		bool HTTPRequest(String url, uint8_t method, String payload) ;
		bool get(String url) ;
		bool post(String url, String payload) ;

		String readString() ;
	
};

extern ESP32HTTP HTTP;

#endif