void wl1271_scan_complete_work(struct work_struct *work)
static int wl1271_get_scan_channels(struct wl1271 *wl,
struct cfg80211_scan_request *req,
struct basic_scan_channel_params *channels,
enum ieee80211_band band, bool passive)
#define WL1271_NOTHING_TO_SCAN 1
static int wl1271_scan_send(struct wl1271 *wl, enum ieee80211_band band,
bool passive, u32 basic_rate)
void wl1271_scan_stm(struct wl1271 *wl)
int wl1271_scan(struct wl1271 *wl, const u8 *ssid, size_t ssid_len,
struct cfg80211_scan_request *req)
static int
wl1271_scan_get_sched_scan_channels(struct wl1271 *wl,
struct cfg80211_sched_scan_request *req,
struct conn_scan_ch_params *channels,
u32 band, bool radar, bool passive,
int start)
static int
wl1271_scan_sched_scan_channels(struct wl1271 *wl,
struct cfg80211_sched_scan_request *req,
struct wl1271_cmd_sched_scan_config *cfg)
int wl1271_scan_sched_scan_config(struct wl1271 *wl,
struct cfg80211_sched_scan_request *req,
struct ieee80211_sched_scan_ies *ies)
int wl1271_scan_sched_scan_start(struct wl1271 *wl)
void wl1271_scan_sched_scan_results(struct wl1271 *wl)
void wl1271_scan_sched_scan_stop(struct wl1271 *wl)
