#ifndef __LITTLEV_GL_HELPER_EVENT_HELPER_H__
#define __LITTLEV_GL_HELPER_EVENT_HELPER_H__

#include "Arduino.h"
#include <lvgl.h>

typedef void(*HelperEventCallback)();

struct EventNode {
	lv_obj_t *obj;
    lv_event_t event;
	HelperEventCallback cb;
	
    EventNode *next;
};

void event_helper_handle(lv_obj_t * obj, lv_event_t event) ;
lv_obj_t *event_get_object() ;
void event_helper_add_event(lv_obj_t *obj, lv_event_t event, HelperEventCallback cb) ;

// Buttton
void button_set_on_press(lv_obj_t *obj, HelperEventCallback cb) ;
void button_set_on_release(lv_obj_t *obj, HelperEventCallback cb) ;
void button_set_on_click(lv_obj_t *obj, HelperEventCallback cb) ;

// Switch
void switch_set_on_value(lv_obj_t *obj, HelperEventCallback cb) ;

// Silder
void silder_set_on_value(lv_obj_t *obj, HelperEventCallback cb) ;

#endif
