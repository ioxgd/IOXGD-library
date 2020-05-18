#ifndef __LITTLEV_GL_HELPER_EVENT_HELPER_CPP__
#define __LITTLEV_GL_HELPER_EVENT_HELPER_CPP__

#include "event_helper.h"

static EventNode *event_head = NULL;
static EventNode *event_tail = NULL;

static lv_obj_t *event_object;

void event_helper_handle(lv_obj_t *obj, lv_event_t event) {
	event_object = obj;
	
	EventNode *node = event_head; // Start at Head
	while(node != NULL) {
		if (node->obj == obj && node->event == event) {
			if (node->cb) { // if callback not NULL
				node->cb();
			}
			break;
		}
		node = node->next;
	}
}

lv_obj_t *event_get_object() {
	return event_object;
}

void event_helper_add_event(lv_obj_t *obj, lv_event_t event, HelperEventCallback cb) {
	EventNode *newNode = new EventNode;
	newNode->obj = obj;
	newNode->event = event;
	newNode->cb = cb;
	newNode->next = NULL;
	
	if (event_head == NULL && event_tail == NULL) {
		event_head = newNode;
		event_tail = newNode;
	} else {
		event_tail->next = newNode; // old tail to new node
		event_tail = newNode; // set tail pointer to new
	}
}

// Button
void button_set_on_press(lv_obj_t *obj, HelperEventCallback cb) {
	event_helper_add_event(obj, LV_EVENT_PRESSED, cb);
}

void button_set_on_release(lv_obj_t *obj, HelperEventCallback cb) {
	event_helper_add_event(obj, LV_EVENT_RELEASED, cb);
}

void button_set_on_click(lv_obj_t *obj, HelperEventCallback cb) {
	event_helper_add_event(obj, LV_EVENT_CLICKED, cb);
}

// Switch
void switch_set_on_value(lv_obj_t *obj, HelperEventCallback cb) {
	event_helper_add_event(obj, LV_EVENT_VALUE_CHANGED, cb);
}

// Silder
void silder_set_on_value(lv_obj_t *obj, HelperEventCallback cb) {
	event_helper_add_event(obj, LV_EVENT_VALUE_CHANGED, cb);
}

#endif
