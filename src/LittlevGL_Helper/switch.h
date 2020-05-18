#ifndef __LITTLEV_GL_HELPER_SWITCH_H__
#define __LITTLEV_GL_HELPER_SWITCH_H__

#include <Arduino.h>
#include <lvgl.h>

void switch_set_hidden(lv_obj_t *obj, bool hide) ;
bool switch_get_hidden(lv_obj_t *obj) ;
void switch_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t switch_get_align(lv_obj_t *obj) ;
void switch_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t switch_get_x(lv_obj_t *obj) ;
void switch_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t switch_get_y(lv_obj_t *obj) ;
void switch_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t switch_get_width(lv_obj_t *obj) ;
void switch_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t switch_get_height(lv_obj_t *obj) ;
void switch_set_padding(lv_obj_t *obj, uint16_t padding) ;
uint16_t switch_get_padding(lv_obj_t *obj) ;
void switch_set_background_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_background_main_color(lv_obj_t *obj) ;
void switch_set_background_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_background_grad_color(lv_obj_t *obj) ;
void switch_set_background_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t switch_get_background_border_width(lv_obj_t *obj) ;
void switch_set_background_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_background_border_color(lv_obj_t *obj) ;
void switch_set_indicator_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_indicator_main_color(lv_obj_t *obj) ;
void switch_set_indicator_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_indicator_grad_color(lv_obj_t *obj) ;
void switch_set_indicator_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t switch_get_indicator_border_width(lv_obj_t *obj) ;
void switch_set_indicator_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_indicator_border_color(lv_obj_t *obj) ;
void switch_set_knob_on_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_knob_on_main_color(lv_obj_t *obj) ;
void switch_set_knob_on_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_knob_on_grad_color(lv_obj_t *obj) ;
void switch_set_knob_on_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t switch_get_knob_on_border_width(lv_obj_t *obj) ;
void switch_set_knob_on_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_knob_on_border_color(lv_obj_t *obj) ;
void switch_set_knob_off_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_knob_off_main_color(lv_obj_t *obj) ;
void switch_set_knob_off_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_knob_off_grad_color(lv_obj_t *obj) ;
void switch_set_knob_off_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t switch_get_knob_off_border_width(lv_obj_t *obj) ;
void switch_set_knob_off_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t switch_get_knob_off_border_color(lv_obj_t *obj) ;
void switch_set_value(lv_obj_t *obj, bool value) ;
bool switch_get_value(lv_obj_t *obj) ;
void switch_set_handler(lv_obj_t *obj, lv_event_cb_t cb) ;
lv_event_cb_t switch_get_handler(lv_obj_t *obj) ;

#endif
