#ifndef __LITTLEV_GL_HELPER_SILDER_CPP__
#define __LITTLEV_GL_HELPER_SILDER_CPP__

#include "silder.h"

void silder_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool silder_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden(obj);
}

void silder_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t silder_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void silder_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t silder_get_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void silder_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, y);
}

lv_coord_t silder_get_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void silder_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
	lv_obj_realign(obj);
}

lv_coord_t silder_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void silder_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
	lv_obj_realign(obj);
}

lv_coord_t silder_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void silder_set_padding(lv_obj_t *obj, uint16_t padding) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.padding.top = padding;
	style->body.padding.bottom = padding;
	lv_slider_set_style(obj, LV_SLIDER_STYLE_BG, style);
}

uint16_t silder_get_padding(lv_obj_t *obj) {	
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return style->body.padding.top;
}

void silder_set_background_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_BG, style);
}

uint32_t silder_get_background_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void silder_set_background_grad_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_BG, style);
}

uint32_t silder_get_background_grad_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void silder_set_background_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_slider_set_style(obj, LV_SLIDER_STYLE_BG, style);
}

uint16_t silder_get_background_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void silder_set_background_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_BG, style);
}

uint32_t silder_get_background_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void silder_set_indicator_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_INDIC);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_INDIC, style);
}

uint32_t silder_get_indicator_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_INDIC);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void silder_set_indicator_grad_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_INDIC);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_INDIC, style);
}

uint32_t silder_get_indicator_grad_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_INDIC);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void silder_set_indicator_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_INDIC);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_slider_set_style(obj, LV_SLIDER_STYLE_INDIC, style);
}

uint16_t silder_get_indicator_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_INDIC);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void silder_set_indicator_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_INDIC);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_INDIC, style);
}

uint32_t silder_get_indicator_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_INDIC);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void silder_set_knob_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_KNOB);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_KNOB, style);
}

uint32_t silder_get_knob_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_KNOB);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void silder_set_knob_grad_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_KNOB);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_KNOB, style);
}

uint32_t silder_get_knob_grad_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_KNOB);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void silder_set_knob_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_KNOB);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_slider_set_style(obj, LV_SLIDER_STYLE_KNOB, style);
}

uint16_t silder_get_knob_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_KNOB);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void silder_set_knob_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_KNOB);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_slider_set_style(obj, LV_SLIDER_STYLE_KNOB, style);
}

uint32_t silder_get_knob_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_slider_get_style(obj, LV_SLIDER_STYLE_KNOB);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void silder_set_value(lv_obj_t *obj, int16_t value) {	
	lv_slider_set_value(obj, value, false);
}

bool silder_get_value(lv_obj_t *obj) {	
	return lv_slider_get_value(obj);
}

void silder_set_range(lv_obj_t *obj, lv_coord_t min, lv_coord_t max) {	
	lv_slider_set_range(obj, min, max);
}

lv_coord_t silder_get_range(lv_obj_t *obj) {	
	return 0; // TODO : Not Support
}

void silder_set_handler(lv_obj_t *obj, lv_event_cb_t cb) {
	lv_obj_set_event_cb(obj, cb);
}

lv_event_cb_t silder_get_handler(lv_obj_t *obj) {
	return lv_obj_get_event_cb(obj);
}

#endif
