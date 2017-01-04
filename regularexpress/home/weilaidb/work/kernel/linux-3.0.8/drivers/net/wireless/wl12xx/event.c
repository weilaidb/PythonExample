void wl1271_pspoll_work(struct work_struct *work)
;
static void wl1271_event_pspoll_delivery_fail(struct wl1271 *wl)
static int wl1271_event_ps_report(struct wl1271 *wl,
struct event_mailbox *mbox,
bool *beacon_loss)
static void wl1271_event_rssi_trigger(struct wl1271 *wl,
struct event_mailbox *mbox)
static void wl1271_event_mbox_dump(struct event_mailbox *mbox)
static int wl1271_event_process(struct wl1271 *wl, struct event_mailbox *mbox)
int wl1271_event_unmask(struct wl1271 *wl)
void wl1271_event_mbox_config(struct wl1271 *wl)
int wl1271_event_handle(struct wl1271 *wl, u8 mbox_num)
