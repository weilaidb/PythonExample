#define __WL1251_EVENT_H__
enum ;
struct event_debug_report  __packed;
struct event_mailbox  __packed;
int wl1251_event_unmask(struct wl1251 *wl);
void wl1251_event_mbox_config(struct wl1251 *wl);
int wl1251_event_handle(struct wl1251 *wl, u8 mbox);
int wl1251_event_wait(struct wl1251 *wl, u32 mask, int timeout_ms);
