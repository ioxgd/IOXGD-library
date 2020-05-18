#ifndef __LITTLEV_GL_HELPER_CHART_H__
#define __LITTLEV_GL_HELPER_CHART_H__

#include <Arduino.h>
#include <lvgl.h>

void chart_set_hidden(lv_obj_t *obj, bool hide) ;
bool chart_get_hidden(lv_obj_t *obj) ;
void chart_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t chart_get_align(lv_obj_t *obj) ;
void chart_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t chart_get_x(lv_obj_t *obj) ;
void chart_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t chart_get_y(lv_obj_t *obj) ;
void chart_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t chart_get_width(lv_obj_t *obj) ;
void chart_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t chart_get_height(lv_obj_t *obj) ;
void chart_set_range(lv_obj_t *obj, lv_coord_t min, lv_coord_t max) ;
lv_coord_t chart_get_range(lv_obj_t *obj) ;
void chart_set_division(lv_obj_t *obj, uint8_t hdiv, uint8_t vdiv) ;
void chart_set_background_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t chart_get_background_main_color(lv_obj_t *obj) ;
void chart_set_background_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t chart_get_background_grad_color(lv_obj_t *obj) ;
void chart_set_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t chart_get_border_width(lv_obj_t *obj) ;
void chart_set_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t chart_get_border_color(lv_obj_t *obj) ;
void chart_set_radius(lv_obj_t *obj, uint32_t radius) ;
uint32_t chart_get_radius(lv_obj_t *obj) ;
void chart_set_line_width(lv_obj_t *obj, uint16_t width) ;
uint16_t chart_get_line_width(lv_obj_t *obj) ;
void chart_set_line_color(lv_obj_t *obj, uint32_t color) ;
uint32_t chart_get_line_color(lv_obj_t *obj) ;
void chart_set_series_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t chart_get_series_width(lv_obj_t *obj) ;

#endif
