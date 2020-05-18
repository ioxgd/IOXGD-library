#ifndef __LITTLEV_GL_HELPER_LED_CPP__
#define __LITTLEV_GL_HELPER_LED_CPP__

#include "led.h"

void led_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool led_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden(obj);
}

void led_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t led_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void led_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t led_set_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void led_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, y);
}

lv_coord_t led_set_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void led_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
	lv_obj_realign(obj);
}

lv_coord_t led_set_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void led_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
	lv_obj_realign(obj);
}

lv_coord_t led_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void led_set_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint32_t led_get_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void led_set_gradient_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint32_t led_get_gradient_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void led_set_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint16_t led_get_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void led_set_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint32_t led_get_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

void led_set_border_opacity(lv_obj_t *obj, uint8_t opa) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.border.opa = opa;
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint8_t led_get_border_opacity(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return 255; // get style fail
	return style->body.border.opa;
}

void led_set_shadow_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.shadow.width = width;
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint16_t led_get_shadow_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return style->body.shadow.width;
}

void led_set_shadow_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.shadow.color = lv_color_hex(color);
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint32_t led_get_shadow_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_led_get_style(obj, LV_LED_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.shadow.color);
}

void led_set_bright(lv_obj_t *obj, uint8_t bright) {
	lv_led_set_bright(obj, bright);
}

uint8_t led_get_bright(lv_obj_t *obj) {
	return lv_led_get_bright(obj);
}

void led_write(lv_obj_t *obj, int value) {
	led_set_bright(obj, value ? 255 : 0);
}

void led_toggle(lv_obj_t *obj) {
	led_set_bright(obj, led_get_bright(obj) > 127 ? 0 : 255);
}

int led_read(lv_obj_t *obj) {
	return led_get_bright(obj) > 127;
}

#endif
