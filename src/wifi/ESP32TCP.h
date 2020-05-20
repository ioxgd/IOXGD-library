#ifndef __ESP32_TCP_H__
#define __ESP32_TCP_H__

#include "Arduino.h"
#include "Client.h"
#include "ESP32.h"

class WiFiClient : public Client {
	private:
		uint8_t socket = 0;

	public:
		WiFiClient(int socket = 0) ;
		
		int connect(String host, int port) ;
		
		// from Client class
		int connect(IPAddress ip, uint16_t port) ;
		int connect(const char *host, uint16_t port) ;
		size_t write(uint8_t) ;
		size_t write(const uint8_t *buf, size_t size) ;
		int available() ;
		int read() ;
		int read(uint8_t *buf, size_t size) ;
		int peek() ;
		void flush() ;
		void stop() ;
		uint8_t connected() ;
		operator bool() {
			return connected();
		}

};

#endif
