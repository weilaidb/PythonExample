static enum htc_phymode ath9k_htc_get_curmode(struct ath9k_htc_priv *priv,
struct ath9k_channel *ichan)
bool ath9k_htc_setpower(struct ath9k_htc_priv *priv,
enum ath9k_power_mode mode)
void ath9k_htc_ps_wakeup(struct ath9k_htc_priv *priv)
void ath9k_htc_ps_restore(struct ath9k_htc_priv *priv)
void ath9k_ps_work(struct work_struct *work)
static void ath9k_htc_vif_iter(void *data, u8 *mac, struct ieee80211_vif *vif)
static void ath9k_htc_vif_reconfig(struct ath9k_htc_priv *priv)
static void ath9k_htc_bssid_iter(void *data, u8 *mac, struct ieee80211_vif *vif)
static void ath9k_htc_set_bssid_mask(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif)
static void ath9k_htc_set_opmode(struct ath9k_htc_priv *priv)
void ath9k_htc_reset(struct ath9k_htc_priv *priv)
static int ath9k_htc_set_channel(struct ath9k_htc_priv *priv,
struct ieee80211_hw *hw,
struct ath9k_channel *hchan)
static void __ath9k_htc_remove_monitor_interface(struct ath9k_htc_priv *priv)
static int ath9k_htc_add_monitor_interface(struct ath9k_htc_priv *priv)
static int ath9k_htc_remove_monitor_interface(struct ath9k_htc_priv *priv)
static int ath9k_htc_add_station(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int ath9k_htc_remove_station(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
int ath9k_htc_update_cap_target(struct ath9k_htc_priv *priv,
u8 enable_coex)
static void ath9k_htc_setup_rate(struct ath9k_htc_priv *priv,
struct ieee80211_sta *sta,
struct ath9k_htc_target_rate *trate)
static int ath9k_htc_send_rate_cmd(struct ath9k_htc_priv *priv,
struct ath9k_htc_target_rate *trate)
static void ath9k_htc_init_rate(struct ath9k_htc_priv *priv,
struct ieee80211_sta *sta)
static void ath9k_htc_update_rate(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf)
static int ath9k_htc_tx_aggr_oper(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
enum ieee80211_ampdu_mlme_action action,
u16 tid)
void ath9k_htc_start_ani(struct ath9k_htc_priv *priv)
void ath9k_htc_stop_ani(struct ath9k_htc_priv *priv)
void ath9k_htc_ani_work(struct work_struct *work)
static void ath9k_htc_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int ath9k_htc_start(struct ieee80211_hw *hw)
static void ath9k_htc_stop(struct ieee80211_hw *hw)
static int ath9k_htc_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void ath9k_htc_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int ath9k_htc_config(struct ieee80211_hw *hw, u32 changed)
#define SUPPORTED_FILTERS			\
(FIF_PROMISC_IN_BSS |			\
FIF_ALLMULTI |				\
FIF_CONTROL |				\
FIF_PSPOLL |				\
FIF_OTHER_BSS |				\
FIF_BCN_PRBRESP_PROMISC |		\
FIF_PROBE_REQ |				\
FIF_FCSFAIL)
static void ath9k_htc_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static int ath9k_htc_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int ath9k_htc_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int ath9k_htc_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static int ath9k_htc_set_key(struct ieee80211_hw *hw,
enum set_key_cmd cmd,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static void ath9k_htc_set_bssid(struct ath9k_htc_priv *priv)
static void ath9k_htc_bss_iter(void *data, u8 *mac, struct ieee80211_vif *vif)
static void ath9k_htc_choose_set_bssid(struct ath9k_htc_priv *priv)
static void ath9k_htc_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changed)
static u64 ath9k_htc_get_tsf(struct ieee80211_hw *hw)
static void ath9k_htc_set_tsf(struct ieee80211_hw *hw, u64 tsf)
static void ath9k_htc_reset_tsf(struct ieee80211_hw *hw)
static int ath9k_htc_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta,
u16 tid, u16 *ssn, u8 buf_size)
static void ath9k_htc_sw_scan_start(struct ieee80211_hw *hw)
static void ath9k_htc_sw_scan_complete(struct ieee80211_hw *hw)
static int ath9k_htc_set_rts_threshold(struct ieee80211_hw *hw, u32 value)
static void ath9k_htc_set_coverage_class(struct ieee80211_hw *hw,
u8 coverage_class)
static int ath9k_htc_set_bitrate_mask(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
const struct cfg80211_bitrate_mask *mask)
struct ieee80211_ops ath9k_htc_ops = ;
