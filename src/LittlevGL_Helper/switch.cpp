#ifndef __LITTLEV_GL_HELPER_SWITCH_CPP__
#define __LITTLEV_GL_HELPER_SWITCH_CPP__

#include "switch.h"

void switch_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool switch_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden(obj);
}

void switch_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t switch_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void switch_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t switch_get_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void switch_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, y);
}

lv_coord_t switch_get_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void switch_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
	lv_obj_realign(obj);
}

lv_coord_t switch_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void switch_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
	lv_obj_realign(obj);
}

lv_coord_t switch_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void switch_set_padding(lv_obj_t *obj, uint16_t padding) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.padding.top = padding;
	style->body.padding.bottom = padding;
	lv_sw_set_style(obj, LV_SW_STYLE_BG, style);
}

uint16_t switch_get_padding(lv_obj_t *obj) {	
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return style->body.padding.top;
}

void switch_set_background_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_BG, style);
}

uint32_t switch_get_background_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void switch_set_background_grad_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_BG, style);
}

uint32_t switch_get_background_grad_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void switch_set_background_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_sw_set_style(obj, LV_SW_STYLE_BG, style);
}

uint16_t switch_get_background_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void switch_set_background_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_BG, style);
}

uint32_t switch_get_background_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_BG);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void switch_set_indicator_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_INDIC);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_INDIC, style);
}

uint32_t switch_get_indicator_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_INDIC);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void switch_set_indicator_grad_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_INDIC);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_INDIC, style);
}

uint32_t switch_get_indicator_grad_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_INDIC);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void switch_set_indicator_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_INDIC);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_sw_set_style(obj, LV_SW_STYLE_INDIC, style);
}

uint16_t switch_get_indicator_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_INDIC);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void switch_set_indicator_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_INDIC);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_INDIC, style);
}

uint32_t switch_get_indicator_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_INDIC);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void switch_set_knob_on_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_ON);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_KNOB_ON, style);
}

uint32_t switch_get_knob_on_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_ON);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void switch_set_knob_on_grad_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_ON);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_KNOB_ON, style);
}

uint32_t switch_get_knob_on_grad_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_ON);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void switch_set_knob_on_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_ON);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_sw_set_style(obj, LV_SW_STYLE_KNOB_ON, style);
}

uint16_t switch_get_knob_on_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_ON);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void switch_set_knob_on_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_ON);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_KNOB_ON, style);
}

uint32_t switch_get_knob_on_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_ON);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void switch_set_knob_off_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_OFF);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_KNOB_OFF, style);
}

uint32_t switch_get_knob_off_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_OFF);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void switch_set_knob_off_grad_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_OFF);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_KNOB_OFF, style);
}

uint32_t switch_get_knob_off_grad_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_OFF);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void switch_set_knob_off_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_OFF);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_sw_set_style(obj, LV_SW_STYLE_KNOB_OFF, style);
}

uint16_t switch_get_knob_off_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_OFF);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void switch_set_knob_off_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_OFF);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_sw_set_style(obj, LV_SW_STYLE_KNOB_OFF, style);
}

uint32_t switch_get_knob_off_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_sw_get_style(obj, LV_SW_STYLE_KNOB_OFF);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void switch_set_value(lv_obj_t *obj, bool value) {	
	if (value) {
		lv_sw_on(obj, false);
	} else {
		lv_sw_off(obj, false);
	}
}

bool switch_get_value(lv_obj_t *obj) {	
	return lv_sw_get_state(obj);
}

void switch_set_handler(lv_obj_t *obj, lv_event_cb_t cb) {
	lv_obj_set_event_cb(obj, cb);
}

lv_event_cb_t switch_get_handler(lv_obj_t *obj) {
	return lv_obj_get_event_cb(obj);
}

#endif
