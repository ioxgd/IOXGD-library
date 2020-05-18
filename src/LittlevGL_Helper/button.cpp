#ifndef __LITTLEV_GL_HELPER_BUTTON_CPP__
#define __LITTLEV_GL_HELPER_BUTTON_CPP__

#include "button.h"

void button_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool button_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden(obj);
}

void button_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t button_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void button_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t button_set_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void button_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, y);
}

lv_coord_t button_set_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void button_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
	lv_obj_realign(obj);
}

lv_coord_t button_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void button_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
	lv_obj_realign(obj);
}

lv_coord_t button_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void button_set_toggle(lv_obj_t *obj, bool tgl) {	
	lv_btn_set_toggle(obj, tgl);
}

bool button_get_toggle(lv_obj_t *obj) {	
	return lv_btn_get_toggle(obj);
}

void button_set_text(lv_obj_t *obj, String txt) {	
	// TODO
}

String button_get_text(lv_obj_t *obj) {	
	return String(); // TODO
}

void button_set_release_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_REL);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_btn_set_style(obj, LV_BTN_STATE_PR, style);
}

uint32_t button_get_release_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_REL);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void button_set_release_gradient_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_REL);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_btn_set_style(obj, LV_BTN_STATE_REL, style);
}

uint32_t button_get_release_gradient_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_REL);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void button_set_press_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_btn_set_style(obj, LV_BTN_STATE_PR, style);
}

uint32_t button_get_press_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void button_set_press_gradient_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_btn_set_style(obj, LV_BTN_STATE_PR, style);
}

uint32_t button_get_press_gradient_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}


void button_set_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style;
	
	style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_REL);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_btn_set_style(obj, LV_BTN_STATE_REL, style);
	
	style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_btn_set_style(obj, LV_BTN_STATE_PR, style);
}

uint16_t button_get_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void button_set_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style;
	
	style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_REL);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_btn_set_style(obj, LV_BTN_STATE_REL, style);
	
	style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_btn_set_style(obj, LV_BTN_STATE_PR, style);
}

uint32_t button_get_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void button_set_radius(lv_obj_t *obj, uint16_t radius) {
	lv_style_t* style;
	
	style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_REL);
	if (style == NULL) return; // get style fail
	style->body.radius = radius;
	lv_btn_set_style(obj, LV_BTN_STATE_REL, style);
	
	style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return; // get style fail
	style->body.radius = radius;
	lv_btn_set_style(obj, LV_BTN_STATE_PR, style);
}

uint16_t button_get_radius(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_btn_get_style(obj, LV_BTN_STATE_PR);
	if (style == NULL) return 0; // get style fail
	return style->body.radius;
}

void button_set_text_color(lv_obj_t *obj, uint32_t color) {
	// TODO
}

uint32_t button_get_text_color(lv_obj_t *obj) {
	return 0; // TODO
}

void button_set_font(lv_obj_t *obj, const lv_font_t* font) {
	// TODO
}

const lv_font_t* button_get_font(lv_obj_t *obj) {
	return 0; // TODO
}

void button_set_handler(lv_obj_t *obj, lv_event_cb_t cb) {
	lv_obj_set_event_cb(obj, cb);
}

lv_event_cb_t button_get_handler(lv_obj_t *obj) {
	return lv_obj_get_event_cb(obj);
}

#endif
