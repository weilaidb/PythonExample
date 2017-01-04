static int wl1251_event_scan_complete(struct wl1251 *wl,
struct event_mailbox *mbox)
static void wl1251_event_mbox_dump(struct event_mailbox *mbox)
static int wl1251_event_process(struct wl1251 *wl, struct event_mailbox *mbox)
int wl1251_event_wait(struct wl1251 *wl, u32 mask, int timeout_ms)
int wl1251_event_unmask(struct wl1251 *wl)
void wl1251_event_mbox_config(struct wl1251 *wl)
int wl1251_event_handle(struct wl1251 *wl, u8 mbox_num)
