#ifndef __LITTLEV_GL_HELPER_OBJECT_H__
#define __LITTLEV_GL_HELPER_OBJECT_H__

#include <Arduino.h>
#include <lvgl.h>

void object_set_hidden(lv_obj_t *obj, bool hide) ;
bool object_get_hidden(lv_obj_t *obj) ;
void object_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t object_get_align(lv_obj_t *obj) ;
void object_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t object_get_x(lv_obj_t *obj) ;
void object_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t object_get_y(lv_obj_t *obj) ;
void object_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t object_get_width(lv_obj_t *obj) ;
void object_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t object_get_height(lv_obj_t *obj) ;
void object_set_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t object_get_main_color(lv_obj_t *obj) ;
void object_set_gradient_color(lv_obj_t *obj, uint32_t color) ;
uint32_t object_get_gradient_color(lv_obj_t *obj) ;
void object_set_radius(lv_obj_t *obj, uint32_t radius) ;
uint32_t object_get_radius(lv_obj_t *obj) ;
void object_set_opacity(lv_obj_t *obj, uint8_t opa) ;
uint8_t object_get_opacity(lv_obj_t *obj) ;
void object_set_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t object_get_border_width(lv_obj_t *obj) ;
void object_set_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t object_get_border_color(lv_obj_t *obj) ;
void object_set_border_opacity(lv_obj_t *obj, uint8_t opa) ;
uint8_t object_get_border_opacity(lv_obj_t *obj) ;
void object_set_shadow_width(lv_obj_t *obj, uint16_t width) ;
uint16_t object_get_shadow_width(lv_obj_t *obj) ;
void object_set_shadow_color(lv_obj_t *obj, uint32_t color) ;
uint32_t object_get_shadow_color(lv_obj_t *obj) ;
void object_set_shadow_type(lv_obj_t *obj, lv_shadow_type_t type) ;
lv_shadow_type_t object_get_shadow_type(lv_obj_t *obj) ;

#endif
