#define IEEE80211_PROBE_DELAY (HZ / 33)
#define IEEE80211_CHANNEL_TIME (HZ / 33)
#define IEEE80211_PASSIVE_CHANNEL_TIME (HZ / 8)
struct ieee80211_bss *
ieee80211_rx_bss_get(struct ieee80211_local *local, u8 *bssid, int freq,
u8 *ssid, u8 ssid_len)
static void ieee80211_rx_bss_free(struct cfg80211_bss *cbss)
void ieee80211_rx_bss_put(struct ieee80211_local *local,
struct ieee80211_bss *bss)
static bool is_uapsd_supported(struct ieee802_11_elems *elems)
struct ieee80211_bss *
ieee80211_bss_info_update(struct ieee80211_local *local,
struct ieee80211_rx_status *rx_status,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee802_11_elems *elems,
struct ieee80211_channel *channel,
bool beacon)
ieee80211_rx_result
ieee80211_scan_rx(struct ieee80211_sub_if_data *sdata, struct sk_buff *skb)
static bool ieee80211_prep_hw_scan(struct ieee80211_local *local)
static void __ieee80211_scan_completed(struct ieee80211_hw *hw, bool aborted,
bool was_hw_scan)
void ieee80211_scan_completed(struct ieee80211_hw *hw, bool aborted)
EXPORT_SYMBOL(ieee80211_scan_completed);
static int ieee80211_start_sw_scan(struct ieee80211_local *local)
static int __ieee80211_start_scan(struct ieee80211_sub_if_data *sdata,
struct cfg80211_scan_request *req)
static unsigned long
ieee80211_scan_get_channel_time(struct ieee80211_channel *chan)
static void ieee80211_scan_state_decision(struct ieee80211_local *local,
unsigned long *next_delay)
static void ieee80211_scan_state_leave_oper_channel(struct ieee80211_local *local,
unsigned long *next_delay)
static void ieee80211_scan_state_enter_oper_channel(struct ieee80211_local *local,
unsigned long *next_delay)
static void ieee80211_scan_state_set_channel(struct ieee80211_local *local,
unsigned long *next_delay)
static void ieee80211_scan_state_send_probe(struct ieee80211_local *local,
unsigned long *next_delay)
void ieee80211_scan_work(struct work_struct *work)
int ieee80211_request_scan(struct ieee80211_sub_if_data *sdata,
struct cfg80211_scan_request *req)
int ieee80211_request_internal_scan(struct ieee80211_sub_if_data *sdata,
const u8 *ssid, u8 ssid_len,
struct ieee80211_channel *chan)
void ieee80211_scan_cancel(struct ieee80211_local *local)
int ieee80211_request_sched_scan_start(struct ieee80211_sub_if_data *sdata,
struct cfg80211_sched_scan_request *req)
int ieee80211_request_sched_scan_stop(struct ieee80211_sub_if_data *sdata)
void ieee80211_sched_scan_results(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_sched_scan_results);
void ieee80211_sched_scan_stopped_work(struct work_struct *work)
void ieee80211_sched_scan_stopped(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_sched_scan_stopped);
