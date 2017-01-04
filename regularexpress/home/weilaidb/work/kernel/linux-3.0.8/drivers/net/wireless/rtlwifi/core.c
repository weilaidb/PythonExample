static int rtl_op_start(struct ieee80211_hw *hw)
static void rtl_op_stop(struct ieee80211_hw *hw)
static void rtl_op_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int rtl_op_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void rtl_op_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int rtl_op_config(struct ieee80211_hw *hw, u32 changed)
static void rtl_op_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *new_flags, u64 multicast)
static int rtl_op_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int rtl_op_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int _rtl_get_hal_qnum(u16 queue)
static int rtl_op_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *param)
static void rtl_op_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf, u32 changed)
static u64 rtl_op_get_tsf(struct ieee80211_hw *hw)
static void rtl_op_set_tsf(struct ieee80211_hw *hw, u64 tsf)
static void rtl_op_reset_tsf(struct ieee80211_hw *hw)
static void rtl_op_sta_notify(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum sta_notify_cmd cmd,
struct ieee80211_sta *sta)
static int rtl_op_ampdu_action(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size)
static void rtl_op_sw_scan_start(struct ieee80211_hw *hw)
static void rtl_op_sw_scan_complete(struct ieee80211_hw *hw)
static int rtl_op_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif, struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static void rtl_op_rfkill_poll(struct ieee80211_hw *hw)
static void rtl_op_flush(struct ieee80211_hw *hw, bool drop)
const struct ieee80211_ops rtl_ops = ;
