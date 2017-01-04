static int max_nullfunc_tries = 2;
module_param(max_nullfunc_tries, int, 0644);
MODULE_PARM_DESC(max_nullfunc_tries,
"Maximum nullfunc tx tries before disconnecting (reason 4).");
static int max_probe_tries = 5;
module_param(max_probe_tries, int, 0644);
MODULE_PARM_DESC(max_probe_tries,
"Maximum probe tries before disconnecting (reason 4).");
#define IEEE80211_BEACON_LOSS_COUNT	7
#define IEEE80211_CONNECTION_IDLE_TIME	(30 * HZ)
static int probe_wait_ms = 500;
module_param(probe_wait_ms, int, 0644);
MODULE_PARM_DESC(probe_wait_ms,
"Maximum time(ms) to wait for probe response"
" before disconnecting (reason 4).");
#define IEEE80211_SIGNAL_AVE_WEIGHT	3
#define IEEE80211_SIGNAL_AVE_MIN_COUNT	4
#define TMR_RUNNING_TIMER	0
#define TMR_RUNNING_CHANSW	1
enum rx_mgmt_action ;
static inline void ASSERT_MGD_MTX(struct ieee80211_if_managed *ifmgd)
static void run_again(struct ieee80211_if_managed *ifmgd,
unsigned long timeout)
void ieee80211_sta_reset_beacon_monitor(struct ieee80211_sub_if_data *sdata)
void ieee80211_sta_reset_conn_monitor(struct ieee80211_sub_if_data *sdata)
static int ecw2cw(int ecw)
static u32 ieee80211_enable_ht(struct ieee80211_sub_if_data *sdata,
struct ieee80211_ht_info *hti,
const u8 *bssid, u16 ap_ht_cap_flags)
static void ieee80211_send_deauth_disassoc(struct ieee80211_sub_if_data *sdata,
const u8 *bssid, u16 stype, u16 reason,
void *cookie, bool send_frame)
void ieee80211_send_pspoll(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata)
void ieee80211_send_nullfunc(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
int powersave)
static void ieee80211_send_4addr_nullfunc(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata)
static void ieee80211_chswitch_work(struct work_struct *work)
void ieee80211_chswitch_done(struct ieee80211_vif *vif, bool success)
EXPORT_SYMBOL(ieee80211_chswitch_done);
static void ieee80211_chswitch_timer(unsigned long data)
void ieee80211_sta_process_chanswitch(struct ieee80211_sub_if_data *sdata,
struct ieee80211_channel_sw_ie *sw_elem,
struct ieee80211_bss *bss,
u64 timestamp)
static void ieee80211_handle_pwr_constr(struct ieee80211_sub_if_data *sdata,
u16 capab_info, u8 *pwr_constr_elem,
u8 pwr_constr_elem_len)
void ieee80211_enable_dyn_ps(struct ieee80211_vif *vif)
EXPORT_SYMBOL(ieee80211_enable_dyn_ps);
void ieee80211_disable_dyn_ps(struct ieee80211_vif *vif)
EXPORT_SYMBOL(ieee80211_disable_dyn_ps);
static void ieee80211_enable_ps(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata)
static void ieee80211_change_ps(struct ieee80211_local *local)
static bool ieee80211_powersave_allowed(struct ieee80211_sub_if_data *sdata)
void ieee80211_recalc_ps(struct ieee80211_local *local, s32 latency)
void ieee80211_dynamic_ps_disable_work(struct work_struct *work)
void ieee80211_dynamic_ps_enable_work(struct work_struct *work)
void ieee80211_dynamic_ps_timer(unsigned long data)
static void ieee80211_sta_wmm_params(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
u8 *wmm_param, size_t wmm_param_len)
static u32 ieee80211_handle_bss_capability(struct ieee80211_sub_if_data *sdata,
u16 capab, bool erp_valid, u8 erp)
static void ieee80211_set_associated(struct ieee80211_sub_if_data *sdata,
struct cfg80211_bss *cbss,
u32 bss_info_changed)
static void ieee80211_set_disassoc(struct ieee80211_sub_if_data *sdata,
bool remove_sta, bool tx)
void ieee80211_sta_rx_notify(struct ieee80211_sub_if_data *sdata,
struct ieee80211_hdr *hdr)
static void ieee80211_reset_ap_probe(struct ieee80211_sub_if_data *sdata)
void ieee80211_sta_tx_notify(struct ieee80211_sub_if_data *sdata,
struct ieee80211_hdr *hdr, bool ack)
static void ieee80211_mgd_probe_ap_send(struct ieee80211_sub_if_data *sdata)
static void ieee80211_mgd_probe_ap(struct ieee80211_sub_if_data *sdata,
bool beacon)
struct sk_buff *ieee80211_ap_probereq_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
EXPORT_SYMBOL(ieee80211_ap_probereq_get);
static void __ieee80211_connection_loss(struct ieee80211_sub_if_data *sdata)
void ieee80211_beacon_connection_loss_work(struct work_struct *work)
void ieee80211_beacon_loss(struct ieee80211_vif *vif)
EXPORT_SYMBOL(ieee80211_beacon_loss);
void ieee80211_connection_loss(struct ieee80211_vif *vif)
EXPORT_SYMBOL(ieee80211_connection_loss);
static enum rx_mgmt_action __must_check
ieee80211_rx_mgmt_deauth(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt, size_t len)
static enum rx_mgmt_action __must_check
ieee80211_rx_mgmt_disassoc(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt, size_t len)
static bool ieee80211_assoc_success(struct ieee80211_work *wk,
struct ieee80211_mgmt *mgmt, size_t len)
static void ieee80211_rx_bss_info(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee80211_rx_status *rx_status,
struct ieee802_11_elems *elems,
bool beacon)
static void ieee80211_rx_mgmt_probe_resp(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb)
static const u64 care_about_ies =
(1ULL << WLAN_EID_COUNTRY) |
(1ULL << WLAN_EID_ERP_INFO) |
(1ULL << WLAN_EID_CHANNEL_SWITCH) |
(1ULL << WLAN_EID_PWR_CONSTRAINT) |
(1ULL << WLAN_EID_HT_CAPABILITY) |
(1ULL << WLAN_EID_HT_INFORMATION);
static void ieee80211_rx_mgmt_beacon(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee80211_rx_status *rx_status)
void ieee80211_sta_rx_queued_mgmt(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb)
static void ieee80211_sta_timer(unsigned long data)
static void ieee80211_sta_connection_lost(struct ieee80211_sub_if_data *sdata,
u8 *bssid)
void ieee80211_sta_work(struct ieee80211_sub_if_data *sdata)
static void ieee80211_sta_bcn_mon_timer(unsigned long data)
static void ieee80211_sta_conn_mon_timer(unsigned long data)
static void ieee80211_sta_monitor_work(struct work_struct *work)
static void ieee80211_restart_sta_timer(struct ieee80211_sub_if_data *sdata)
void ieee80211_sta_quiesce(struct ieee80211_sub_if_data *sdata)
void ieee80211_sta_restart(struct ieee80211_sub_if_data *sdata)
void ieee80211_sta_setup_sdata(struct ieee80211_sub_if_data *sdata)
void ieee80211_mlme_notify_scan_completed(struct ieee80211_local *local)
int ieee80211_max_network_latency(struct notifier_block *nb,
unsigned long data, void *dummy)
static enum work_done_result
ieee80211_probe_auth_done(struct ieee80211_work *wk,
struct sk_buff *skb)
int ieee80211_mgd_auth(struct ieee80211_sub_if_data *sdata,
struct cfg80211_auth_request *req)
static enum work_done_result ieee80211_assoc_done(struct ieee80211_work *wk,
struct sk_buff *skb)
int ieee80211_mgd_assoc(struct ieee80211_sub_if_data *sdata,
struct cfg80211_assoc_request *req)
int ieee80211_mgd_deauth(struct ieee80211_sub_if_data *sdata,
struct cfg80211_deauth_request *req,
void *cookie)
int ieee80211_mgd_disassoc(struct ieee80211_sub_if_data *sdata,
struct cfg80211_disassoc_request *req,
void *cookie)
void ieee80211_cqm_rssi_notify(struct ieee80211_vif *vif,
enum nl80211_cqm_rssi_threshold_event rssi_event,
gfp_t gfp)
EXPORT_SYMBOL(ieee80211_cqm_rssi_notify);
