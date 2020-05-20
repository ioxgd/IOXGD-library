/*
   Name: I2CEEPROM
   File: I2CEEPROM.cpp
   Author: IOXhop
   Website: http://www.ioxhop.com/
*/

#include "I2CEEPROM.h"

#include <stdio.h>
#include "fpioa.h"
#include "utils.h"
#include "sysctl.h"
#include <stdlib.h>
#include <string.h>

I2CEEPROM::I2CEEPROM(int addr) {
	i2c_addr = addr;
}

void I2CEEPROM::begin() {
	Wire.begin();
}

void I2CEEPROM::write(int addr, byte data) {
	Wire.beginTransmission(i2c_addr);
    Wire.write((addr>>8)&0xFF);
    Wire.write(addr&0xFF);
	Wire.write(data);
	Wire.endTransmission();
}

byte I2CEEPROM::read(int addr) {
	byte data = 0xFF;
	
    Wire.beginTransmission(i2c_addr);
    Wire.write((addr>>8)&0xFF);
    Wire.write(addr&0xFF);
    Wire.endTransmission(false);
	
    Wire.requestFrom(i2c_addr, 1);
    if (Wire.available())
		data = Wire.read();
    return data;
}

int I2CEEPROM::print(int addr, String text) {
	int len = text.length();

	Wire.beginTransmission(i2c_addr);
    Wire.write((addr>>8)&0xFF);
    Wire.write(addr&0xFF);
	Wire.write((len>>8)&0xFF);
	Wire.write(len&0xFF);
	for (int i=0;i<len;i++) {
		Wire.write(text.charAt(i));
	}
	Wire.endTransmission();
	return addr+len+2;
}

String I2CEEPROM::readString(int addr) {
	int len = read(addr)<<8 | read(addr+1);

	Wire.beginTransmission(i2c_addr);
    Wire.write((addr>>8)&0xFF);
    Wire.write(addr&0xFF);
    Wire.endTransmission(false);
	
	Wire.requestFrom(i2c_addr, len);
	String buf="";
    while(Wire.available()){
		buf += (char)Wire.read();
	}
	return buf;
}

int I2CEEPROM::writeBlock(int addr, uint8_t *buf, int size) {
	/* Wire.beginTransmission(i2c_addr);
    Wire.write((addr>>8)&0xFF);
    Wire.write(addr&0xFF);
	for (int i=0;i<size;i++) {
	  Wire.write(buf[i]);
	}
    Wire.endTransmission();
	*/
	uint8_t buff[2 + size];
	buff[0] = (addr>>8)&0xFF;
	buff[1] = addr&0xFF;
	memcpy(&buff[2], buf, size);
	Wire.writeTransmission(i2c_addr, buff, 2 + size, true);
	
	return size;
}

int I2CEEPROM::readBlock(int addr, uint8_t *buf, int size) {
	Wire.beginTransmission(i2c_addr);
    Wire.write((addr>>8)&0xFF);
    Wire.write(addr&0xFF);
    Wire.endTransmission();
	
	// int readSize = Wire.requestFrom(i2c_addr, size);
	int readSize = Wire.readTransmission(i2c_addr, buf, size, true);
	/*
	Serial.println("Read size: " + String(readSize));
	Serial.println("Available size: " + String(Wire.available()));
    for (int i=0;i<min(Wire.available(), size);i++){
		buf[i] = Wire.read();
	}
	
	return min(Wire.available(), size);
	*/
	return size;
}

I2CEEPROM EEPROM(0x50);
