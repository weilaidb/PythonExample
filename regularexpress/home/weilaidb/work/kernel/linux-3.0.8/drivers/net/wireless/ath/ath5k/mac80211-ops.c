extern int ath5k_modparam_nohwcrypt;
static void
ath5k_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int
ath5k_start(struct ieee80211_hw *hw)
static void
ath5k_stop(struct ieee80211_hw *hw)
static int
ath5k_add_interface(struct ieee80211_hw *hw, struct ieee80211_vif *vif)
static void
ath5k_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int
ath5k_config(struct ieee80211_hw *hw, u32 changed)
static void
ath5k_bss_info_changed(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf, u32 changes)
static u64
ath5k_prepare_multicast(struct ieee80211_hw *hw,
struct netdev_hw_addr_list *mc_list)
static void
ath5k_configure_filter(struct ieee80211_hw *hw, unsigned int changed_flags,
unsigned int *new_flags, u64 multicast)
static int
ath5k_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif, struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static void
ath5k_sw_scan_start(struct ieee80211_hw *hw)
static void
ath5k_sw_scan_complete(struct ieee80211_hw *hw)
static int
ath5k_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
static int
ath5k_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static u64
ath5k_get_tsf(struct ieee80211_hw *hw)
static void
ath5k_set_tsf(struct ieee80211_hw *hw, u64 tsf)
static void
ath5k_reset_tsf(struct ieee80211_hw *hw)
static int
ath5k_get_survey(struct ieee80211_hw *hw, int idx, struct survey_info *survey)
static void
ath5k_set_coverage_class(struct ieee80211_hw *hw, u8 coverage_class)
static int
ath5k_set_antenna(struct ieee80211_hw *hw, u32 tx_ant, u32 rx_ant)
static int
ath5k_get_antenna(struct ieee80211_hw *hw, u32 *tx_ant, u32 *rx_ant)
static void ath5k_get_ringparam(struct ieee80211_hw *hw,
u32 *tx, u32 *tx_max, u32 *rx, u32 *rx_max)
static int ath5k_set_ringparam(struct ieee80211_hw *hw, u32 tx, u32 rx)
const struct ieee80211_ops ath5k_hw_ops = ;
