#ifndef __LITTLEV_GL_HELPER_LABEL_H__
#define __LITTLEV_GL_HELPER_LABEL_H__

#include <Arduino.h>
#include <lvgl.h>

void label_set_hidden(lv_obj_t *obj, bool hide) ;
bool label_get_hidden(lv_obj_t *obj) ;
void label_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t label_get_align(lv_obj_t *obj) ;
void label_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t label_get_x(lv_obj_t *obj) ;
void label_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t label_get_y(lv_obj_t *obj) ;
void label_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t label_get_width(lv_obj_t *obj) ;
void label_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t label_get_height(lv_obj_t *obj) ;
void label_set_text(lv_obj_t *obj, String txt) ;
String label_get_text(lv_obj_t *obj) ;
void label_set_text_align(lv_obj_t *obj, lv_label_align_t align) ;
lv_label_align_t label_get_text_align(lv_obj_t *obj) ;
void label_set_color(lv_obj_t *obj, uint32_t color) ;
uint32_t label_get_color(lv_obj_t *obj) ;
void label_set_text_wrap(lv_obj_t *obj, lv_label_long_mode_t mode) ;
lv_label_long_mode_t label_get_text_wrap(lv_obj_t *obj) ;
void label_set_font(lv_obj_t *obj, const lv_font_t *font) ;
const lv_font_t* label_get_font(lv_obj_t *obj) ;

#endif
