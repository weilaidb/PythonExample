#define __EVENT_H__
enum ;
enum ;
struct event_debug_report  __packed;
#define NUM_OF_RSSI_SNR_TRIGGERS 8
struct event_mailbox  __packed;
int wl1271_event_unmask(struct wl1271 *wl);
void wl1271_event_mbox_config(struct wl1271 *wl);
int wl1271_event_handle(struct wl1271 *wl, u8 mbox);
void wl1271_pspoll_work(struct work_struct *work);
