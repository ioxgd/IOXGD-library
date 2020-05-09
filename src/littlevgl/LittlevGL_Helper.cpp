#ifndef __LITTLEV_GL_HELPER_C__
#define __LITTLEV_GL_HELPER_C__

#include "LittlevGL_Helper.h"

/* ========= Object START ========= */
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
}

lv_coord_t object_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void object_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
}

lv_coord_t object_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void object_set_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t* style = (lv_style_t*)lv_obj_get_style(obj);
	if (style == NULL) return; // get style fail
	style->body.main_color = lv_color_hex(0xFF);
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

/* ========= Object END ========= */

/* ========= Label START ========= */
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
}

lv_coord_t label_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void label_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
}

lv_coord_t label_get_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void label_set_text(lv_obj_t *obj, String txt) {	
	lv_label_set_text(obj, txt.c_str());
}

String label_get_text(lv_obj_t *obj) {	
	return String(lv_label_get_text(obj));
}

void label_set_text_align(lv_obj_t *obj, lv_label_align_t align) {	
	lv_label_set_align(obj, align);
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
/* ========= Label END ========= */

/* ========= Button START ========= */
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
}

lv_coord_t button_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void button_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
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
/* ========= Button END ========= */

/* ========= LED START ========= */
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
}

lv_coord_t led_set_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void led_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
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
/* ========= LED END ========= */

/* ========= Image START ========= */
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
/* ========= Image END ========= */

/* ========= Chart START ========= */
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
}

lv_coord_t chart_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void chart_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
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
/* ========= Chart END ========= */

/* ========= Switch START ========= */
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
}

lv_coord_t switch_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void switch_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
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
/* ========= Switch END ========= */

/* ========= Slider START ========= */
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
}

lv_coord_t silder_get_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void silder_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
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

void silder_set_handler(lv_obj_t *obj, lv_event_cb_t cb) {
	lv_obj_set_event_cb(obj, cb);
}

lv_event_cb_t silder_get_handler(lv_obj_t *obj) {
	return lv_obj_get_event_cb(obj);
}
/* ========= Slider END ========= */

#endif
