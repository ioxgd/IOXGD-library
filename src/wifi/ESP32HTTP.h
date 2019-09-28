#ifndef __ESP32_HTTP_H__
#define __ESP32_HTTP_H__

#include "Arduino.h"
#include "ESP32WiFi.h"

class ESP32HTTP {
	private:
	
	public:
		ESP32HTTP();
		
		String HTTPRequest(String url, uint8_t method, String payload) ;
		String get(String url) ;
		String post(String url, String payload) ;
	
};

extern ESP32HTTP HTTP;

#endif