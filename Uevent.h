#ifndef UNSALTED_EVENT_H
#define UNSALTED_EVENT_H

#define MAX_EVENT_QUEUE 256
#define MAX_CALLBACKS 32;



typedef void (*event_callback)(i8 event_id, void *event_context);


void queue_event();


#endif //UNSALTED_EVENT_H
