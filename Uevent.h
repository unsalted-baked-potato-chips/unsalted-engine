#ifndef UNSALTED_EVENT_H
#define UNSALTED_EVENT_H

#include "Utypes.h"
#define MAX_EVENT_QUEUE 256
#define MAX_CALLBACKS 32


void init_event_sys();
typedef void (*event_callback)(i8 event_id, void *event_context);


void queue_event(i8, void *);


#endif //UNSALTED_EVENT_H
