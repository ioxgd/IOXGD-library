#ifndef __R61408_H__
#define __R61408_H__

#include "Arduino.h"

// Config LCD
#define LCD_WIDTH  800
#define LCD_HEIGHT 480

class R61408 {
    private:
        void write_command(uint8_t) ;
        void Write_Data_int(uint16_t) ;

    public:
        R61408();
        void init();

        void startPushColor(uint16_t, uint16_t, uint16_t, uint16_t) ;
        void pushColor(uint16_t) ;
        void stopPushColor() ;


};

extern R61408 lcd;

#endif