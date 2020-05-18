#ifndef __LITTLEV_GL_HELPER_LABEL_CPP__
#define __LITTLEV_GL_HELPER_LABEL_CPP__

#include "label.h"

void label_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool label_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden(obj);
}

void label_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t label_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void label_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t label_get_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void label_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, y);
}

lv_coord_t label_get_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void label_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
	lv_obj_realign(obj);
}

lv_coord_t label_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void label_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
	lv_obj_realign(obj);
}

lv_coord_t label_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void label_set_text(lv_obj_t *obj, String txt) {	
	lv_label_set_text(obj, txt.c_str());
	lv_obj_realign(obj);
}

String label_get_text(lv_obj_t *obj) {	
	return String(lv_label_get_text(obj));
}

void label_set_text_align(lv_obj_t *obj, lv_label_align_t align) {	
	lv_label_set_align(obj, align);
	lv_obj_realign(obj);
}

lv_label_align_t label_get_text_align(lv_obj_t *obj) {	
	return lv_label_get_align(obj);
}

void label_set_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_label_get_style(obj, LV_LABEL_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->text.color = lv_color_hex(color);
	lv_label_set_style(obj, LV_LABEL_STYLE_MAIN, style);
}

uint32_t label_get_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_label_get_style(obj, LV_LABEL_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->text.color);
}

void label_set_text_wrap(lv_obj_t *obj, lv_label_long_mode_t mode) {	
	lv_label_set_long_mode(obj, mode);
}

lv_label_long_mode_t label_get_text_wrap(lv_obj_t *obj) {	
	return lv_label_get_long_mode(obj);
}

void label_set_font(lv_obj_t *obj, const lv_font_t *font) {
	lv_style_t* style = (lv_style_t*)lv_label_get_style(obj, LV_LABEL_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->text.font = font;
	lv_label_set_style(obj, LV_LABEL_STYLE_MAIN, style);
}

const lv_font_t* label_get_font(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_label_get_style(obj, LV_LABEL_STYLE_MAIN);
	if (style == NULL) return NULL; // get style fail
	return style->text.font;
}

#endif
