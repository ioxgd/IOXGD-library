#define __LITTLEV_GL_HELPER_C__
#define __LITTLEV_GL_HELPER_C__

#include "LittlevGL_Helper.h"

/* ========= Object START ========= */
void object_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool object_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden();
}

void object_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj1, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
}

lv_align_t object_get_align(lv_obj_t *obj) {	
	return -1; // TODO : LittlevGL no api support
}

void object_set_x(lv_obj_t *obj, lv_coord_t x) {	
	lv_obj_set_x(obj, x);
}

lv_coord_t object_set_x(lv_obj_t *obj) {	
	return lv_obj_get_x(obj);
}

void object_set_y(lv_obj_t *obj, lv_coord_t y) {	
	lv_obj_set_y(obj, x);
}

lv_coord_t object_set_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void object_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
}

lv_coord_t object_set_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void object_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
}

lv_coord_t object_set_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void object_set_main_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.main_color = lv_color_hex(color);
	lv_obj_set_style(obj, style);
}

uint32_t object_get_main_color(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 0; // get style fail
	return style->body.main_color;
}

void object_set_gradient_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.grad_color = lv_color_hex(color);
	lv_obj_set_style(obj, style);
}

uint32_t object_get_gradient_color(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 0; // get style fail
	return style->body.grad_color;
}

void object_set_corner_radius(lv_obj_t *obj, uint32_t radius) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.radius = radius;
	lv_obj_set_style(obj, style);
}

uint32_t object_get_corner_radius(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 0; // get style fail
	return style->body.radius;
}

void object_set_opacity(lv_obj_t *obj, uint8_t opa) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.opa = opa;
	lv_obj_set_style(obj, style);
}

uint8_t object_get_opacity(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 255; // get style fail
	return style->body.opa;
}

void object_set_border_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.border.width = width;
	lv_obj_set_style(obj, style);
}

uint16_t object_get_border_width(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 0; // get style fail
	return style->body.border.width;
}

void object_set_border_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.border.color = lv_color_hex(color);
	lv_obj_set_style(obj, style);
}

uint32_t object_get_border_color(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 0; // get style fail
	return style->body.border.color;
}

void object_set_border_opacity(lv_obj_t *obj, uint8_t opa) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.border.opa = opa;
	lv_obj_set_style(obj, style);
}

uint8_t object_get_border_opacity(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 255; // get style fail
	return style->body.border.opa;
}

void object_set_shadow_width(lv_obj_t *obj, uint16_t width) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.shadow.width = width;
	lv_obj_set_style(obj, style);
}

uint16_t object_get_shadow_width(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 0; // get style fail
	return style->body.shadow.width;
}

void object_set_shadow_color(lv_obj_t *obj, uint32_t color) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.shadow.color = lv_color_hex(color);
	lv_obj_set_style(obj, style);
}

uint32_t object_get_shadow_color(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return 0; // get style fail
	return style->body.shadow.color;
}

void object_set_shadow_type(lv_obj_t *obj, lv_shadow_type_t type) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return; // get style fail
	style->body.shadow.type = type;
	lv_obj_set_style(obj, style);
}

lv_shadow_type_t object_get_shadow_type(lv_obj_t *obj) {
	lv_style_t *style = lv_obj_get_style(obj);
	if (style === NULL) return LV_SHADOW_BOTTOM; // get style fail
	return style->body.shadow.type;
}

/* ========= Object END ========= */

/* ========= Label START ========= */
void label_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool label_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden();
}

void label_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj1, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
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
	lv_obj_set_y(obj, x);
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
	lv_style_t *style = lv_label_get_style(obj, LV_LABEL_STYLE_MAIN);
	if (style === NULL) return; // get style fail
	style->text.color = lv_color_hex(color);
	lv_label_set_style(obj, LV_LABEL_STYLE_MAIN, style);
}

uint32_t label_get_color(lv_obj_t *obj) {
	lv_style_t *style = lv_label_get_style(obj, LV_LABEL_STYLE_MAIN);
	if (style === NULL) return 0; // get style fail
	return style->text.color;
}

void label_set_text_wrap(lv_obj_t *obj, lv_label_long_mode_t mode) {	
	lv_label_set_long_mode(obj, mode);
}

lv_label_long_mode_t label_get_text_wrap(lv_obj_t *obj) {	
	return lv_label_get_long_mode(obj);
}

void label_set_font(lv_obj_t *obj, const lv_font_t *font) {
	lv_style_t *style = lv_label_get_style(obj, LV_LABEL_STYLE_MAIN);
	if (style === NULL) return; // get style fail
	style->text.font = font;
	lv_label_set_style(obj, LV_LABEL_STYLE_MAIN, style);
}

const lv_font_t* label_get_font(lv_obj_t *obj) {
	lv_style_t *style = lv_label_get_style(obj, LV_LABEL_STYLE_MAIN);
	if (style === NULL) return NULL; // get style fail
	return style->text.font;
}
/* ========= Label END ========= */

/* ========= Button END ========= */
void button_set_hidden(lv_obj_t *obj, bool hide) {
	lv_obj_set_hidden(obj, hide);
}

bool button_get_hidden(lv_obj_t *obj) {
	return lv_obj_get_hidden();
}

void button_set_align(lv_obj_t *obj, lv_align_t align) {	
	lv_obj_align(obj1, NULL, align, lv_obj_get_x(obj), lv_obj_get_y(obj));
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
	lv_obj_set_y(obj, x);
}

lv_coord_t button_set_y(lv_obj_t *obj) {	
	return lv_obj_get_y(obj);
}

void button_set_width(lv_obj_t *obj, lv_coord_t w) {	
	lv_obj_set_width(obj, w);
}

lv_coord_t button_set_width(lv_obj_t *obj) {	
	return lv_obj_get_width(obj);
}

void button_set_height(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
}

lv_coord_t button_set_height(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

void button_set_toggle(lv_obj_t *obj, lv_coord_t h) {	
	lv_obj_set_height(obj, h);
}

lv_coord_t button_set_toggle(lv_obj_t *obj) {	
	return lv_obj_get_height(obj);
}

#endif
