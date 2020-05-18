#ifndef __LITTLEV_GL_HELPER_LED_H__
#define __LITTLEV_GL_HELPER_LED_H__

#include <Arduino.h>
#include <lvgl.h>

void led_set_hidden(lv_obj_t *obj, bool hide) ;
bool led_get_hidden(lv_obj_t *obj) ;
void led_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t led_get_align(lv_obj_t *obj) ;
void led_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t led_set_x(lv_obj_t *obj) ;
void led_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t led_set_y(lv_obj_t *obj) ;
void led_set_width(lv_obj_t *obj, lv_coord_t w);
lv_coord_t led_set_width(lv_obj_t *obj) ;
void led_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t led_get_height(lv_obj_t *obj) ;
void led_set_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t led_get_main_color(lv_obj_t *obj) ;
void led_set_gradient_color(lv_obj_t *obj, uint32_t color) ;
uint32_t led_get_gradient_color(lv_obj_t *obj) ;
void led_set_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t led_get_border_width(lv_obj_t *obj) ;
void led_set_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t led_get_border_color(lv_obj_t *obj) ;
void led_set_border_opacity(lv_obj_t *obj, uint8_t opa) ;
uint8_t led_get_border_opacity(lv_obj_t *obj) ;
void led_set_shadow_width(lv_obj_t *obj, uint16_t width) ;
uint16_t led_get_shadow_width(lv_obj_t *obj) ;
void led_set_shadow_color(lv_obj_t *obj, uint32_t color) ;
uint32_t led_get_shadow_color(lv_obj_t *obj) ;
void led_set_bright(lv_obj_t *obj, uint8_t bright) ;
uint8_t led_get_bright(lv_obj_t *obj) ;


void led_write(lv_obj_t *obj, int value) ;
void led_toggle(lv_obj_t *obj) ;
int led_read(lv_obj_t *obj) ;

#endif
