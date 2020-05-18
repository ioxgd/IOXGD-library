#ifndef __LITTLEV_GL_HELPER_SILDER_H__
#define __LITTLEV_GL_HELPER_SILDER_H__

#include <Arduino.h>
#include <lvgl.h>

void silder_set_hidden(lv_obj_t *obj, bool hide) ;
bool silder_get_hidden(lv_obj_t *obj) ;
void silder_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t silder_get_align(lv_obj_t *obj) ;
void silder_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t silder_get_x(lv_obj_t *obj) ;
void silder_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t silder_get_y(lv_obj_t *obj) ;
void silder_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t silder_get_width(lv_obj_t *obj) ;
void silder_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t silder_get_height(lv_obj_t *obj) ; 
void silder_set_padding(lv_obj_t *obj, uint16_t padding) ;
uint16_t silder_get_padding(lv_obj_t *obj) ;
void silder_set_background_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_background_main_color(lv_obj_t *obj) ;
void silder_set_background_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_background_grad_color(lv_obj_t *obj) ;
void silder_set_background_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t silder_get_background_border_width(lv_obj_t *obj) ;
void silder_set_background_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_background_border_color(lv_obj_t *obj) ;
void silder_set_indicator_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_indicator_main_color(lv_obj_t *obj) ;
void silder_set_indicator_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_indicator_grad_color(lv_obj_t *obj) ;
void silder_set_indicator_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t silder_get_indicator_border_width(lv_obj_t *obj) ;
void silder_set_indicator_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_indicator_border_color(lv_obj_t *obj) ;
void silder_set_knob_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_knob_main_color(lv_obj_t *obj) ;
void silder_set_knob_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_knob_grad_color(lv_obj_t *obj) ;
void silder_set_knob_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t silder_get_knob_border_width(lv_obj_t *obj) ;
void silder_set_knob_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t silder_get_knob_border_color(lv_obj_t *obj) ;
bool silder_get_value(lv_obj_t *obj) ;
void silder_set_range(lv_obj_t *obj, lv_coord_t min, lv_coord_t max) ;
lv_coord_t silder_get_range(lv_obj_t *obj) ;
void silder_set_handler(lv_obj_t *obj, lv_event_cb_t cb) ;
lv_event_cb_t silder_get_handler(lv_obj_t *obj) ;

#endif
