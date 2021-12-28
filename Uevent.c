#include "Uevent.h"
#include "Udefine.h"

static event_entry event_queue[MAX_EVENT_QUEUE] = 0;
static volatile u64 current_event_index = ALL_BITS_HIGH;
static event_callback_entry callback_queue[MAX_CALLBACKS] = 0;
static volatile u64 current_callaback_index = 0;

typedef struct _event_callback_entry {
    event_callback callback;
    i8 event_id;

} event_callback_entry;

typedef struct _event_entry{
    i8 event_id;
    void *event_context;

} event_entry;

static const event_entry null_event_entry = {0, 0, 0};

void process_event(void){
    if (event_queue[current_event_index]){
        for (u64 i; callback_queue[i]; i++){
            if (callback_queue[i].event_id = event_queue[current_event_index].event_id){
                callback_queue[i].callback(event_queue[current_event_index].event_id, event_queue[current_event_index].event_context);
            }
        }
        event_queue[current_event_index]=null_event_entry;
        current_event_index = (--current_event_index)%MAX_EVENT_QUEUE;
    }
}

void queue_event(i8 event_id, void *event_context){
    event_queue[(++current_event_index)%MAX_EVENT_QUEUE] = (event_entry) {event_id, event_context};
}

i8 attach_callback(i8 event_id, event_callback){
    if (callback_index < MAX_CALLBACKS){
        callback_queue[current_callback_index] = (callback_entry) {event_id, event_callback};
        current_callback_index++;   
        return 0;
    }

    log("Callback limit reached. Cannot add any more callbacks", WARN);
    return 1;        
}
