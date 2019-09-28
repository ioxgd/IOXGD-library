#ifndef __ESP32_WIFI_H__
#define __ESP32_WIFI_H__

#include "Arduino.h"

#define SERIAL_ESP Serial1

static void clearBuffer() {
	while (SERIAL_ESP.available()) {
		SERIAL_ESP.read();
	}
}

class ESP32WiFi {
	
	private:
		String scanSSID[20];
		bool scanEncryption[20];
		
	public:
		ESP32WiFi() ;
		
		void reset() ;
		
		void begin() ;
		void connect(String ssid, String pass) ;
		bool isConnected() ;
		
		// Scan
		uint8_t scanNetworks() ;
		String SSID(uint8_t networkItem) ;
		bool isEncryption(uint8_t networkItem) ;
	
};

extern ESP32WiFi WiFi;

#endif