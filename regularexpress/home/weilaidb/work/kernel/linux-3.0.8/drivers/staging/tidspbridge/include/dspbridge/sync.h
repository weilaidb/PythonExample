#define _SYNC_H
#define SYNC_INFINITE  0xffffffff
struct sync_object;
static inline void sync_init_event(struct sync_object *event)
static inline void sync_reset_event(struct sync_object *event)
void sync_set_event(struct sync_object *event);
static inline int sync_wait_on_event(struct sync_object *event,
unsigned timeout)
int sync_wait_on_multiple_events(struct sync_object **events,
unsigned count, unsigned timeout,
unsigned *index);
