#ifndef __ESP32_UDP_H__
#define __ESP32_UDP_H__

#include "Arduino.h"
#include "ESP32.h"

#define WRITE_BUFFER_SIZE 8192

class WiFiUDP : public Stream {
	private:
		IPAddress _remoteIP;
		uint16_t _remotePort;

		String packetHost = "";
		uint16_t packetPort = 0;

		uint8_t *writeBuffer = NULL;
		uint8_t *readBuffer = NULL;

		uint16_t writePointer = 0;

	public:
		WiFiUDP();

		uint8_t begin(uint16_t p) ;
		int beginPacket(String host, uint16_t port) ;
		int endPacket() ;
		size_t write(uint8_t) ;
		size_t write(uint8_t *buffer, size_t size) ;
		int parsePacket() ;
		int available() ;
		int read() ;
		int read(uint8_t* buffer, size_t len) ;
		int peek() ;
		void flush() ;
		IPAddress remoteIP() { return _remoteIP; };
		uint16_t remotePort() { return _remotePort };

};

#endif