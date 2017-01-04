#define __PS_H__
int wl1271_ps_set_mode(struct wl1271 *wl, enum wl1271_cmd_ps_mode mode,
u32 rates, bool send);
void wl1271_ps_elp_sleep(struct wl1271 *wl);
int wl1271_ps_elp_wakeup(struct wl1271 *wl);
void wl1271_elp_work(struct work_struct *work);
void wl1271_ps_link_start(struct wl1271 *wl, u8 hlid, bool clean_queues);
void wl1271_ps_link_end(struct wl1271 *wl, u8 hlid);
#define WL1271_PS_COMPLETE_TIMEOUT 500
