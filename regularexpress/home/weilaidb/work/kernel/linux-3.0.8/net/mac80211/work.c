#define IEEE80211_AUTH_TIMEOUT (HZ / 5)
#define IEEE80211_AUTH_MAX_TRIES 3
#define IEEE80211_ASSOC_TIMEOUT (HZ / 5)
#define IEEE80211_ASSOC_MAX_TRIES 3
enum work_action ;
static inline void ASSERT_WORK_MTX(struct ieee80211_local *local)
static void run_again(struct ieee80211_local *local,
unsigned long timeout)
void free_work(struct ieee80211_work *wk)
static int ieee80211_compatible_rates(const u8 *supp_rates, int supp_rates_len,
struct ieee80211_supported_band *sband,
u32 *rates)
static void ieee80211_add_ht_ie(struct sk_buff *skb, const u8 *ht_info_ie,
struct ieee80211_supported_band *sband,
struct ieee80211_channel *channel,
enum ieee80211_smps_mode smps)
static void ieee80211_send_assoc(struct ieee80211_sub_if_data *sdata,
struct ieee80211_work *wk)
static void ieee80211_remove_auth_bss(struct ieee80211_local *local,
struct ieee80211_work *wk)
static enum work_action __must_check
ieee80211_direct_probe(struct ieee80211_work *wk)
static enum work_action __must_check
ieee80211_authenticate(struct ieee80211_work *wk)
static enum work_action __must_check
ieee80211_associate(struct ieee80211_work *wk)
static enum work_action __must_check
ieee80211_remain_on_channel_timeout(struct ieee80211_work *wk)
static enum work_action __must_check
ieee80211_offchannel_tx(struct ieee80211_work *wk)
static enum work_action __must_check
ieee80211_assoc_beacon_wait(struct ieee80211_work *wk)
static void ieee80211_auth_challenge(struct ieee80211_work *wk,
struct ieee80211_mgmt *mgmt,
size_t len)
static enum work_action __must_check
ieee80211_rx_mgmt_auth(struct ieee80211_work *wk,
struct ieee80211_mgmt *mgmt, size_t len)
static enum work_action __must_check
ieee80211_rx_mgmt_assoc_resp(struct ieee80211_work *wk,
struct ieee80211_mgmt *mgmt, size_t len,
bool reassoc)
static enum work_action __must_check
ieee80211_rx_mgmt_probe_resp(struct ieee80211_work *wk,
struct ieee80211_mgmt *mgmt, size_t len,
struct ieee80211_rx_status *rx_status)
static enum work_action __must_check
ieee80211_rx_mgmt_beacon(struct ieee80211_work *wk,
struct ieee80211_mgmt *mgmt, size_t len)
static void ieee80211_work_rx_queued_mgmt(struct ieee80211_local *local,
struct sk_buff *skb)
static bool ieee80211_work_ct_coexists(enum nl80211_channel_type wk_ct,
enum nl80211_channel_type oper_ct)
static enum nl80211_channel_type
ieee80211_calc_ct(enum nl80211_channel_type wk_ct,
enum nl80211_channel_type oper_ct)
static void ieee80211_work_timer(unsigned long data)
static void ieee80211_work_work(struct work_struct *work)
void ieee80211_add_work(struct ieee80211_work *wk)
void ieee80211_work_init(struct ieee80211_local *local)
void ieee80211_work_purge(struct ieee80211_sub_if_data *sdata)
ieee80211_rx_result ieee80211_work_rx_mgmt(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb)
static enum work_done_result ieee80211_remain_done(struct ieee80211_work *wk,
struct sk_buff *skb)
int ieee80211_wk_remain_on_channel(struct ieee80211_sub_if_data *sdata,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int duration, u64 *cookie)
int ieee80211_wk_cancel_remain_on_channel(struct ieee80211_sub_if_data *sdata,
u64 cookie)
