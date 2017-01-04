DEFINE_SPINLOCK(sync_lock);
void sync_set_event(struct sync_object *event)
int sync_wait_on_multiple_events(struct sync_object **events,
unsigned count, unsigned timeout,
unsigned *index)
int dsp_notifier_event(struct notifier_block *this, unsigned long event,
void *data)
