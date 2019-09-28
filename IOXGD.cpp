#ifndef __IOXGD_CPP__
#define __IOXGD_CPP__

#include "IOXGD.h"

static Ticker tickLV; /* timer for interrupt handler */
#define LVGL_TICK_PERIOD 20

#define DISPLAY_BUFFER_SIZE 512000
static lv_disp_buf_t disp_buf;
static lv_color_t buf[DISPLAY_BUFFER_SIZE];

static void disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
    lcd.startPushColor(area->x1, area->y1, area->x2, area->y2);
    for(uint16_t y=area->y1;y<=area->y2;y++) {
        for(uint16_t x=area->x1;x<=area->x2;x++) {
            lcd.pushColor(color_p->full);
            ++color_p;
        }
    }
    lcd.stopPushColor();

    lv_disp_flush_ready(disp); /* tell lvgl that flushing is done */
}

static void lv_tick_handler(void) {
    lv_tick_inc(LVGL_TICK_PERIOD);
}

static bool touch_pointer(lv_indev_drv_t * drv, lv_indev_data_t*data) {
    uint16_t x, y;
    data->state = touch.read(&x, &y) > 0 ? LV_INDEV_STATE_PR : LV_INDEV_STATE_REL;
    data->point.x = x;
    data->point.y = y;
    return false;
}

IOXGD::IOXGD() { }

void IOXGD::begin() {
    lcd.init();
    touch.init();
    EEPROM.begin();

    lv_init();

    lv_disp_buf_init(&disp_buf, buf, NULL, DISPLAY_BUFFER_SIZE);

    /*Initialize the display*/
    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = LCD_WIDTH;
    disp_drv.ver_res = LCD_HEIGHT;
    disp_drv.flush_cb = disp_flush;
    disp_drv.buffer = &disp_buf;
    lv_disp_drv_register(&disp_drv);

    /*Initialize the Input*/
    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = touch_pointer;
    lv_indev_drv_register(&indev_drv);

    /*Initialize the graphics library's tick*/
    tickLV.attach_ms(LVGL_TICK_PERIOD, lv_tick_handler);
}

IOXGD gd;

#endif