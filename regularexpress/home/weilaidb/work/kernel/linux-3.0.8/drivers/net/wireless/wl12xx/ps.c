#define WL1271_WAKEUP_TIMEOUT 500
void wl1271_elp_work(struct work_struct *work)
#define ELP_ENTRY_DELAY  5
void wl1271_ps_elp_sleep(struct wl1271 *wl)
int wl1271_ps_elp_wakeup(struct wl1271 *wl)
int wl1271_ps_set_mode(struct wl1271 *wl, enum wl1271_cmd_ps_mode mode,
u32 rates, bool send)
static void wl1271_ps_filter_frames(struct wl1271 *wl, u8 hlid)
void wl1271_ps_link_start(struct wl1271 *wl, u8 hlid, bool clean_queues)
void wl1271_ps_link_end(struct wl1271 *wl, u8 hlid)
