#ifndef __LITTLEV_GL_HELPER_OBJECT_CPP__
#define __LITTLEV_GL_HELPER_OBJECT_CPP__

#include "object.h"

void object_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool object_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden(obj);
}

void object_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t object_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void object_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t object_get_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void object_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, y);
}

lv_coord_t object_get_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void object_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
	lv_obj_realign(obj);
}

lv_coord_t object_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void object_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
	lv_obj_realign(obj);
}

lv_coord_t object_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void object_set_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_obj_set_style(obj, style);
}

uint32_t object_get_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void object_set_gradient_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_obj_set_style(obj, style);
}

uint32_t object_get_gradient_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void object_set_radius(lv_obj_t *obj, uint32_t radius) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.radius = radius;
	lv_obj_set_style(obj, style);
}

uint32_t object_get_radius(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 0; // get style fail
	return style->body.radius;
}

void object_set_opacity(lv_obj_t *obj, uint8_t opa) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.opa = opa;
	lv_obj_set_style(obj, style);
}

uint8_t object_get_opacity(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 255; // get style fail
	return style->body.opa;
}

void object_set_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_obj_set_style(obj, style);
}

uint16_t object_get_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void object_set_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_obj_set_style(obj, style);
}

uint32_t object_get_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void object_set_border_opacity(lv_obj_t *obj, uint8_t opa) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.border.opa = opa;
	lv_obj_set_style(obj, style);
}

uint8_t object_get_border_opacity(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 255; // get style fail
	return style->body.border.opa;
}

void object_set_shadow_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.shadow.width = width;
	lv_obj_set_style(obj, style);
}

uint16_t object_get_shadow_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 0; // get style fail
	return style->body.shadow.width;
}

void object_set_shadow_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.shadow.color = lv_color_hex(color);
	lv_obj_set_style(obj, style);
}

uint32_t object_get_shadow_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.shadow.color);
}

void object_set_shadow_type(lv_obj_t *obj, lv_shadow_type_t type) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.shadow.type = type;
	lv_obj_set_style(obj, style);
}

lv_shadow_type_t object_get_shadow_type(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return LV_SHADOW_BOTTOM; // get style fail
	return style->body.shadow.type;
}

#endif
