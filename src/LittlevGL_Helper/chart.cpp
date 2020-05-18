#ifndef __LITTLEV_GL_HELPER_CHART_CPP__
#define __LITTLEV_GL_HELPER_CHART_CPP__

#include "chart.h"

void chart_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool chart_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden(obj);
}

void chart_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t chart_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void chart_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t chart_get_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void chart_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, y);
}

lv_coord_t chart_get_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void chart_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
	lv_obj_realign(obj);
}

lv_coord_t chart_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void chart_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
	lv_obj_realign(obj);
}

lv_coord_t chart_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void chart_set_range(lv_obj_t *obj, lv_coord_t min, lv_coord_t max) {	
	lv_chart_set_range(obj, min, max);
}

lv_coord_t chart_get_range(lv_obj_t *obj) {	
	return 0; // TODO : Not Support
}

void chart_set_division(lv_obj_t *obj, uint8_t hdiv, uint8_t vdiv) {
	lv_chart_set_div_line_count(obj, hdiv, vdiv);
}

lv_coord_t chart_get_division(lv_obj_t *obj) {	
	return 0; // TODO : Not Support
}

void chart_set_background_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_chart_set_style(obj, LV_CHART_STYLE_MAIN, style);
}

uint32_t chart_get_background_main_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.main_color);
}

void chart_set_background_grad_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_chart_set_style(obj, LV_CHART_STYLE_MAIN, style);
}

uint32_t chart_get_background_grad_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.grad_color);
}

void chart_set_radius(lv_obj_t *obj, uint32_t radius) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.radius = radius;
	lv_chart_set_style(obj, LV_CHART_STYLE_MAIN, style);
}

void chart_set_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.border.width = width;
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint16_t chart_get_border_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return style->body.border.width;
}

void chart_set_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_led_set_style(obj, LV_LED_STYLE_MAIN, style);
}

uint32_t chart_get_border_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->body.border.color);
}

uint32_t chart_get_radius(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return style->body.radius;
}

void chart_set_line_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->line.width = width;
	lv_chart_set_style(obj, LV_CHART_STYLE_MAIN, style);
}

uint16_t chart_get_line_width(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return style->line.width;
}

void chart_set_line_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return; // get style fail
	style->line.color = lv_color_hex(color);
	lv_chart_set_style(obj, LV_CHART_STYLE_MAIN, style);
}

uint32_t chart_get_line_color(lv_obj_t *obj) {
	lv_style_t* style = (lv_style_t*)lv_chart_get_style(obj, LV_CHART_STYLE_MAIN);
	if (style == NULL) return 0; // get style fail
	return lv_color_to32(style->line.color);
}

void chart_set_series_width(lv_obj_t *obj, lv_coord_t w) {
	lv_chart_set_series_width(obj, w);
}

lv_coord_t chart_get_series_width(lv_obj_t *obj) {
	return lv_chart_get_series_width(obj);
}

#endif
