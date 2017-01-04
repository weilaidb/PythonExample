#define __SCAN_H__
int wl1271_scan(struct wl1271 *wl, const u8 *ssid, size_t ssid_len,
struct cfg80211_scan_request *req);
int wl1271_scan_build_probe_req(struct wl1271 *wl,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len, u8 band);
void wl1271_scan_stm(struct wl1271 *wl);
void wl1271_scan_complete_work(struct work_struct *work);
int wl1271_scan_sched_scan_config(struct wl1271 *wl,
struct cfg80211_sched_scan_request *req,
struct ieee80211_sched_scan_ies *ies);
int wl1271_scan_sched_scan_start(struct wl1271 *wl);
void wl1271_scan_sched_scan_stop(struct wl1271 *wl);
void wl1271_scan_sched_scan_results(struct wl1271 *wl);
#define WL1271_SCAN_MAX_CHANNELS       24
#define WL1271_SCAN_DEFAULT_TAG        1
#define WL1271_SCAN_CURRENT_TX_PWR     0
#define WL1271_SCAN_OPT_ACTIVE         0
#define WL1271_SCAN_OPT_PASSIVE	       1
#define WL1271_SCAN_OPT_PRIORITY_HIGH  4
#define WL1271_SCAN_BAND_2_4_GHZ 0
#define WL1271_SCAN_BAND_5_GHZ 1
#define WL1271_SCAN_TIMEOUT    10000
enum ;
struct basic_scan_params  __packed;
struct basic_scan_channel_params  __packed;
struct wl1271_cmd_scan  __packed;
struct wl1271_cmd_trigger_scan_to  __packed;
#define MAX_CHANNELS_ALL_BANDS 41
#define SCAN_MAX_CYCLE_INTERVALS 16
#define SCAN_MAX_BANDS 3
enum ;
enum ;
enum ;
#define SCAN_CHANNEL_FLAGS_DFS		BIT(0)
#define SCAN_CHANNEL_FLAGS_DFS_ENABLED	BIT(1)
struct conn_scan_ch_params  __packed;
struct wl1271_cmd_sched_scan_config  __packed;
#define SCHED_SCAN_MAX_SSIDS 8
enum ;
struct wl1271_ssid  __packed;
struct wl1271_cmd_sched_scan_ssid_list  __packed;
struct wl1271_cmd_sched_scan_start  __packed;
struct wl1271_cmd_sched_scan_stop  __packed;
