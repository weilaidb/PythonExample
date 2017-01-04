#define IEEE80211_SCAN_INTERVAL (2 * HZ)
#define IEEE80211_SCAN_INTERVAL_SLOW (15 * HZ)
#define IEEE80211_IBSS_JOIN_TIMEOUT (7 * HZ)
#define IEEE80211_IBSS_MERGE_INTERVAL (30 * HZ)
#define IEEE80211_IBSS_INACTIVITY_LIMIT (60 * HZ)
#define IEEE80211_IBSS_MAX_STA_ENTRIES 128
static void ieee80211_rx_mgmt_auth_ibss(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len)
static void __ieee80211_sta_join_ibss(struct ieee80211_sub_if_data *sdata,
const u8 *bssid, const int beacon_int,
struct ieee80211_channel *chan,
const u32 basic_rates,
const u16 capability, u64 tsf)
static void ieee80211_sta_join_ibss(struct ieee80211_sub_if_data *sdata,
struct ieee80211_bss *bss)
static void ieee80211_rx_bss_info(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee80211_rx_status *rx_status,
struct ieee802_11_elems *elems,
bool beacon)
struct sta_info *ieee80211_ibss_add_sta(struct ieee80211_sub_if_data *sdata,
u8 *bssid,u8 *addr, u32 supp_rates,
gfp_t gfp)
static int ieee80211_sta_active_ibss(struct ieee80211_sub_if_data *sdata)
static void ieee80211_sta_merge_ibss(struct ieee80211_sub_if_data *sdata)
static void ieee80211_sta_create_ibss(struct ieee80211_sub_if_data *sdata)
static void ieee80211_sta_find_ibss(struct ieee80211_sub_if_data *sdata)
static void ieee80211_rx_mgmt_probe_req(struct ieee80211_sub_if_data *sdata,
struct sk_buff *req)
static void ieee80211_rx_mgmt_probe_resp(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee80211_rx_status *rx_status)
static void ieee80211_rx_mgmt_beacon(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee80211_rx_status *rx_status)
void ieee80211_ibss_rx_queued_mgmt(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb)
void ieee80211_ibss_work(struct ieee80211_sub_if_data *sdata)
static void ieee80211_ibss_timer(unsigned long data)
void ieee80211_ibss_quiesce(struct ieee80211_sub_if_data *sdata)
void ieee80211_ibss_restart(struct ieee80211_sub_if_data *sdata)
void ieee80211_ibss_setup_sdata(struct ieee80211_sub_if_data *sdata)
void ieee80211_ibss_notify_scan_completed(struct ieee80211_local *local)
int ieee80211_ibss_join(struct ieee80211_sub_if_data *sdata,
struct cfg80211_ibss_params *params)
int ieee80211_ibss_leave(struct ieee80211_sub_if_data *sdata)
