typedef int (*uwbd_evt_handler_f)(struct uwb_event *);
struct uwbd_event ;
static struct uwbd_event uwbd_urc_events[] = ;
struct uwbd_evt_type_handler ;
static struct uwbd_evt_type_handler uwbd_urc_evt_type_handlers[] = ;
static const struct uwbd_event uwbd_message_handlers[] = ;
static
int uwbd_event_handle_urc(struct uwb_event *evt)
static void uwbd_event_handle_message(struct uwb_event *evt)
static void uwbd_event_handle(struct uwb_event *evt)
static int uwbd(void *param)
void uwbd_start(struct uwb_rc *rc)
void uwbd_stop(struct uwb_rc *rc)
void uwbd_event_queue(struct uwb_event *evt)
void uwbd_flush(struct uwb_rc *rc)
