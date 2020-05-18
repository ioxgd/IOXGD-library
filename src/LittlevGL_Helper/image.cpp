#ifndef __LITTLEV_GL_HELPER_IMAGE_CPP__
#define __LITTLEV_GL_HELPER_IMAGE_CPP__

#include "image.h"

void image_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool image_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden(obj);
}

void image_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t image_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void image_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t image_get_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void image_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, y);
}

lv_coord_t image_get_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void image_set_src(lv_obj_t *obj, void *src_img) {	
	lv_img_set_src(obj, src_img);
}

const void* image_get_src(lv_obj_t *obj) {	
	return lv_img_get_src(obj);
}

#endif
