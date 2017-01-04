static int rt2x00mac_tx_rts_cts(struct rt2x00_dev *rt2x00dev,
struct data_queue *queue,
struct sk_buff *frag_skb)
void rt2x00mac_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(rt2x00mac_tx);
int rt2x00mac_start(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(rt2x00mac_start);
void rt2x00mac_stop(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(rt2x00mac_stop);
int rt2x00mac_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
EXPORT_SYMBOL_GPL(rt2x00mac_add_interface);
void rt2x00mac_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
EXPORT_SYMBOL_GPL(rt2x00mac_remove_interface);
int rt2x00mac_config(struct ieee80211_hw *hw, u32 changed)
EXPORT_SYMBOL_GPL(rt2x00mac_config);
void rt2x00mac_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
EXPORT_SYMBOL_GPL(rt2x00mac_configure_filter);
static void rt2x00mac_set_tim_iter(void *data, u8 *mac,
struct ieee80211_vif *vif)
int rt2x00mac_set_tim(struct ieee80211_hw *hw, struct ieee80211_sta *sta,
bool set)
EXPORT_SYMBOL_GPL(rt2x00mac_set_tim);
static void memcpy_tkip(struct rt2x00lib_crypto *crypto, u8 *key, u8 key_len)
int rt2x00mac_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif, struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
EXPORT_SYMBOL_GPL(rt2x00mac_set_key);
void rt2x00mac_sw_scan_start(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(rt2x00mac_sw_scan_start);
void rt2x00mac_sw_scan_complete(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(rt2x00mac_sw_scan_complete);
int rt2x00mac_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
EXPORT_SYMBOL_GPL(rt2x00mac_get_stats);
void rt2x00mac_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changes)
EXPORT_SYMBOL_GPL(rt2x00mac_bss_info_changed);
int rt2x00mac_conf_tx(struct ieee80211_hw *hw, u16 queue_idx,
const struct ieee80211_tx_queue_params *params)
EXPORT_SYMBOL_GPL(rt2x00mac_conf_tx);
void rt2x00mac_rfkill_poll(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(rt2x00mac_rfkill_poll);
void rt2x00mac_flush(struct ieee80211_hw *hw, bool drop)
EXPORT_SYMBOL_GPL(rt2x00mac_flush);
int rt2x00mac_set_antenna(struct ieee80211_hw *hw, u32 tx_ant, u32 rx_ant)
EXPORT_SYMBOL_GPL(rt2x00mac_set_antenna);
int rt2x00mac_get_antenna(struct ieee80211_hw *hw, u32 *tx_ant, u32 *rx_ant)
EXPORT_SYMBOL_GPL(rt2x00mac_get_antenna);
void rt2x00mac_get_ringparam(struct ieee80211_hw *hw,
u32 *tx, u32 *tx_max, u32 *rx, u32 *rx_max)
EXPORT_SYMBOL_GPL(rt2x00mac_get_ringparam);
