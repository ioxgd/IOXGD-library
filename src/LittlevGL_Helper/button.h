#ifndef __LITTLEV_GL_HELPER_BUTTON_H__
#define __LITTLEV_GL_HELPER_BUTTON_H__

#include <Arduino.h>
#include <lvgl.h>

void button_set_hidden(lv_obj_t *obj, bool hide) ;
bool button_get_hidden(lv_obj_t *obj) ;
void button_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t button_get_align(lv_obj_t *obj) ;
void button_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t button_set_x(lv_obj_t *obj) ;
void button_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t button_set_y(lv_obj_t *obj) ;
void button_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t button_get_width(lv_obj_t *obj) ;
void button_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t button_get_height(lv_obj_t *obj) ;
void button_set_toggle(lv_obj_t *obj, bool tgl) ;
bool button_get_toggle(lv_obj_t *obj) ;
void button_set_text(lv_obj_t *obj, String txt) ;
String button_get_text(lv_obj_t *obj) ;
void button_set_release_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_release_main_color(lv_obj_t *obj) ;
void button_set_release_gradient_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_release_gradient_color(lv_obj_t *obj) ;
void button_set_press_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_press_main_color(lv_obj_t *obj) ;
void button_set_press_gradient_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_press_gradient_color(lv_obj_t *obj) ;
void button_set_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t button_get_border_width(lv_obj_t *obj) ;
void button_set_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_border_color(lv_obj_t *obj) ;
void button_set_radius(lv_obj_t *obj, uint16_t radius) ;
uint16_t button_get_radius(lv_obj_t *obj) ;
void button_set_text_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_text_color(lv_obj_t *obj) ;
void button_set_font(lv_obj_t *obj, const lv_font_t* font) ;
const lv_font_t* button_get_font(lv_obj_t *obj) ;
void button_set_handler(lv_obj_t *obj, lv_event_cb_t cb) ;
lv_event_cb_t button_get_handler(lv_obj_t *obj) ;

#endif
