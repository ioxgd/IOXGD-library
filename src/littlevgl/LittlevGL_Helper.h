#define __LITTLEV_GL_HELPER_H__
#define __LITTLEV_GL_HELPER_H__

#include <lvgl.h>
#include "LittlevGL_Helper.h"

void object_set_hidden(lv_obj_t *obj, bool hide) ;
bool object_get_hidden(lv_obj_t *obj) ;
void object_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t object_get_align(lv_obj_t *obj) ;
void object_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t object_get_x(lv_obj_t *obj) ;
void object_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t object_get_y(lv_obj_t *obj) ;
void object_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t object_get_width(lv_obj_t *obj) ;
void object_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t object_get_height(lv_obj_t *obj) ;
void object_set_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t object_get_main_color(lv_obj_t *obj) ;
void object_set_gradient_color(lv_obj_t *obj, uint32_t color) ;
uint32_t object_get_gradient_color(lv_obj_t *obj) ;
void object_set_corner_radius(lv_obj_t *obj, uint32_t radius) ;
uint32_t object_get_corner_radius(lv_obj_t *obj) ;
void object_set_opacity(lv_obj_t *obj, uint8_t opa) ;
uint8_t object_get_opacity(lv_obj_t *obj) ;
void object_set_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t object_get_border_width(lv_obj_t *obj) ;
void object_set_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t object_get_border_color(lv_obj_t *obj) ;
void object_set_border_opacity(lv_obj_t *obj, uint8_t opa) ;
uint8_t object_get_border_opacity(lv_obj_t *obj) ;
void object_set_shadow_width(lv_obj_t *obj, uint16_t width) ;
uint16_t object_get_shadow_width(lv_obj_t *obj) ;
void object_set_shadow_color(lv_obj_t *obj, uint32_t color) ;
uint32_t object_get_shadow_color(lv_obj_t *obj) ;
void object_set_shadow_type(lv_obj_t *obj, lv_shadow_type_t type) ;
lv_shadow_type_t object_get_shadow_type(lv_obj_t *obj) ;


void label_set_hidden(lv_obj_t *obj, bool hide) ;
void label_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t label_get_align(lv_obj_t *obj) ;
void label_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t label_get_x(lv_obj_t *obj) ;
void label_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t label_get_y(lv_obj_t *obj) ;
void label_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t label_get_width(lv_obj_t *obj) ;
void label_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t label_get_height(lv_obj_t *obj) ;
void label_set_text(lv_obj_t *obj, String txt) ;
String label_get_text(lv_obj_t *obj) ;
void label_set_text_align(lv_obj_t *obj, lv_label_align_t align) ;
lv_label_align_t label_get_text_align(lv_obj_t *obj) ;
void label_set_color(lv_obj_t *obj, uint32_t color) ;
uint32_t label_get_color(lv_obj_t *obj) ;
void label_set_text_wrap(lv_obj_t *obj, lv_label_long_mode_t mode) ;
lv_label_long_mode_t label_get_text_wrap(lv_obj_t *obj) ;
void label_set_font(lv_obj_t *obj, const lv_font_t *font) ;
const lv_font_t* label_get_font(lv_obj_t *obj) ;

void button_set_hidden(lv_obj_t *obj, bool hide) ;
bool button_get_hidden(lv_obj_t *obj) ;
void button_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t button_get_align(lv_obj_t *obj) ;
void button_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t button_set_x(lv_obj_t *obj) ;
void button_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t button_set_y(lv_obj_t *obj) ;
void button_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t button_get_width(lv_obj_t *obj) ;
void button_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t button_get_height(lv_obj_t *obj) ;
void button_set_toggle(lv_obj_t *obj, bool tgl) ;
bool button_get_toggle(lv_obj_t *obj) ;
void button_set_text(lv_obj_t *obj, String txt) ;
String button_get_text(lv_obj_t *obj) ;
void button_set_release_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_release_main_color(lv_obj_t *obj) ;
void button_set_release_gradient_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_release_gradient_color(lv_obj_t *obj) ;
void button_set_press_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_press_main_color(lv_obj_t *obj) ;
void button_set_press_gradient_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_press_gradient_color(lv_obj_t *obj) ;
void button_set_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t button_get_border_width(lv_obj_t *obj) ;
void button_set_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_border_color(lv_obj_t *obj) ;
void button_set_radius(lv_obj_t *obj, uint16_t radius) ;
uint16_t button_get_radius(lv_obj_t *obj) ;
void button_set_text_color(lv_obj_t *obj, uint32_t color) ;
uint32_t button_get_text_color(lv_obj_t *obj) ;
void button_set_font(lv_obj_t *obj, const lv_font_t* font) ;
const lv_font_t* button_get_font(lv_obj_t *obj) ;
void button_set_handler(lv_obj_t *obj, lv_event_cb_t cb) ;
lv_event_cb_t button_get_handler(lv_obj_t *obj) ;

void led_set_hidden(lv_obj_t *obj, bool hide) ;
bool led_get_hidden(lv_obj_t *obj) ;
void led_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t led_get_align(lv_obj_t *obj) ;
void led_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t led_set_x(lv_obj_t *obj) ;
void led_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t led_set_y(lv_obj_t *obj) ;
void led_set_width(lv_obj_t *obj, lv_coord_t w);
lv_coord_t led_set_width(lv_obj_t *obj) ;
void led_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t led_get_height(lv_obj_t *obj) ;
void led_set_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t led_get_main_color(lv_obj_t *obj) ;
void led_set_gradient_color(lv_obj_t *obj, uint32_t color) ;
uint32_t led_get_gradient_color(lv_obj_t *obj) ;
void led_set_border_width(lv_obj_t *obj, uint16_t width) ;
uint16_t led_get_border_width(lv_obj_t *obj) ;
void led_set_border_color(lv_obj_t *obj, uint32_t color) ;
uint32_t led_get_border_color(lv_obj_t *obj) ;
void led_set_border_opacity(lv_obj_t *obj, uint8_t opa) ;
uint8_t led_get_border_opacity(lv_obj_t *obj) ;
void led_set_shadow_width(lv_obj_t *obj, uint16_t width) ;
uint16_t led_get_shadow_width(lv_obj_t *obj) ;
void led_set_shadow_color(lv_obj_t *obj, uint32_t color) ;
uint32_t led_get_shadow_color(lv_obj_t *obj) ;
void led_set_bright(lv_obj_t *obj, uint8_t bright) ;
uint8_t led_get_bright(lv_obj_t *obj) ;

void image_set_hidden(lv_obj_t *obj, bool hide) ;
bool image_get_hidden(lv_obj_t *obj) ;
void image_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t image_get_align(lv_obj_t *obj) ;
void image_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t image_get_x(lv_obj_t *obj) ;
void image_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t image_get_y(lv_obj_t *obj) ;
void image_set_src(lv_obj_t *obj, void *src_img) ;
const void* image_get_src(lv_obj_t *obj) ;

void chart_set_hidden(lv_obj_t *obj, bool hide) ;
bool chart_get_hidden(lv_obj_t *obj) ;
void chart_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t chart_get_align(lv_obj_t *obj) ;
void chart_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t chart_get_x(lv_obj_t *obj) ;
void chart_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t chart_get_y(lv_obj_t *obj) ;
void chart_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t chart_get_width(lv_obj_t *obj) ;
void chart_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t chart_get_height(lv_obj_t *obj) ;
void chart_set_range(lv_obj_t *obj, lv_coord_t min, lv_coord_t max) ;
lv_coord_t chart_get_range(lv_obj_t *obj) ;
void chart_set_division(lv_obj_t *obj, uint8_t hdiv, uint8_t vdiv) ;
void chart_set_background_main_color(lv_obj_t *obj, uint32_t color) ;
uint32_t chart_get_background_main_color(lv_obj_t *obj) ;
void chart_set_background_grad_color(lv_obj_t *obj, uint32_t color) ;
uint32_t chart_get_background_grad_color(lv_obj_t *obj) ;
void chart_set_corner_radius(lv_obj_t *obj, uint32_t radius) ;
uint32_t chart_get_corner_radius(lv_obj_t *obj) ;
void chart_set_line_width(lv_obj_t *obj, uint16_t width) ;
uint16_t chart_get_line_width(lv_obj_t *obj) ;
void chart_set_line_color(lv_obj_t *obj, uint32_t color) ;
uint32_t chart_get_line_color(lv_obj_t *obj) ;
void chart_set_series_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t chart_get_series_width(lv_obj_t *obj) ;


void switch_set_hidden(lv_obj_t *obj, bool hide) ;
bool switch_get_hidden(lv_obj_t *obj) ;
void switch_set_align(lv_obj_t *obj, lv_align_t align) ;
lv_align_t switch_get_align(lv_obj_t *obj) ;
void switch_set_x(lv_obj_t *obj, lv_coord_t x) ;
lv_coord_t switch_get_x(lv_obj_t *obj) ;
void switch_set_y(lv_obj_t *obj, lv_coord_t y) ;
lv_coord_t switch_get_y(lv_obj_t *obj) ;
void switch_set_width(lv_obj_t *obj, lv_coord_t w) ;
lv_coord_t switch_get_width(lv_obj_t *obj) ;
void switch_set_height(lv_obj_t *obj, lv_coord_t h) ;
lv_coord_t switch_get_height(lv_obj_t *obj) ;

#endif
