#ifndef __IOXGD_H__
#define __IOXGD_H__

#include "Arduino.h"
#include "R61408.h"
#include "FT5216.h"

#include <lvgl.h>
#include <Ticker.h>

class IOXGD {
    public:
        IOXGD();

        void setupLittlevGL() ;

};

extern IOXGD gd;

#endif