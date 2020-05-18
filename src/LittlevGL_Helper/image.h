#ifndef __LITTLEV_GL_HELPER_IMAGE_H__
#define __LITTLEV_GL_HELPER_IMAGE_H__

#include <Arduino.h>
#include <lvgl.h>

void image_set_hidden(lv_obj_t *obj, bool hide) ;
bool image_get_hidden(lv_obj_t *obj) ;
void image_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t image_get_align(lv_obj_t *obj) ;
void image_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t image_get_x(lv_obj_t *obj) ;
void image_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t image_get_y(lv_obj_t *obj) ;
void image_set_src(lv_obj_t *obj, void *src_img) ;
const void* image_get_src(lv_obj_t *obj) ;

#endif
