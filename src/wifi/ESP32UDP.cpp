#ifndef __ESP32_UDP_CPP__
#define __ESP32_UDP_CPP__

WiFiUDP::WiFiUDP() { }

uint8_t WiFiUDP::begin(uint16_t port) {
    clearBuffer();

	// Serial.println("Send udp begin");
  
	SERIAL_ESP.write(0x1F); // Start 1
	SERIAL_ESP.write(0xF1); // Start 2
	SERIAL_ESP.write(0x16); // UDP begin command
	SERIAL_ESP.write((uint8_t)(port >> 8));
	SERIAL_ESP.print((uinnt8_t)(port & 0xFF));

	int state = 0;

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
				if (c == 0x16) { // UDP begin response ?
					break;
				} else {
					state = 0;
				}
			}
		} else {
			delay(1);
		}
	}
}

int WiFiUDP::beginPacket(String host, uint16_t port) {
    this->packetHost = host;
    this->packetPort = port;

    writeBuffer = (uint8_t*)malloc(WRITE_BUFFER_SIZE);
}

int WiFiUDP::endPacket() {

}

size_t WiFiUDP::write(uint8_t data) {
    return write(&data, 1);
}

size_t WiFiUDP::write(uint8_t *buffer, size_t size) {
    memcpy(&writeBuffer[writePointer], buffer, size);
    writePointer += size;
}

int WiFiUDP::parsePacket() {

}

int WiFiUDP::available() {

}

int WiFiUDP::read() {
    uint8_t c;
    read(&c, 1);
    return c;
}

int WiFiUDP::read(uint8_t* buffer, size_t len) ;

int WiFiUDP::peek() {
    // Not support
    return -1;
}

void WiFiUDP::flush() {
    // Not support
}

#endif