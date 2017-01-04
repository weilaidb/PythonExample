DECLARE_WAIT_QUEUE_HEAD(speakup_event);
EXPORT_SYMBOL_GPL(speakup_event);
int speakup_thread(void *data)
