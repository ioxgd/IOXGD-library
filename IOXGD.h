#ifndef __IOXGD_H__
#define __IOXGD_H__

#include "Arduino.h"
#include "R61408.h"
#include "FT5216.h"
#include "I2CEEPROM.h"

#include <lvgl.h>
#include <Ticker.h>

class IOXGD {
    public:
        IOXGD();

        void begin() ;

};

extern IOXGD gd;

#endif