static __le16 ieee80211_duration(struct ieee80211_tx_data *tx, int group_addr,
int next_frag_len)
static inline int is_ieee80211_device(struct ieee80211_local *local,
struct net_device *dev)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_dynamic_ps(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_check_assoc(struct ieee80211_tx_data *tx)
static void purge_old_ps_buffers(struct ieee80211_local *local)
static ieee80211_tx_result
ieee80211_tx_h_multicast_ps_buf(struct ieee80211_tx_data *tx)
static int ieee80211_use_mfp(__le16 fc, struct sta_info *sta,
struct sk_buff *skb)
static ieee80211_tx_result
ieee80211_tx_h_unicast_ps_buf(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_ps_buf(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_check_control_port_protocol(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_select_key(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_rate_ctrl(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_sequence(struct ieee80211_tx_data *tx)
static int ieee80211_fragment(struct ieee80211_local *local,
struct sk_buff *skb, int hdrlen,
int frag_threshold)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_fragment(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_stats(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_encrypt(struct ieee80211_tx_data *tx)
static ieee80211_tx_result debug_noinline
ieee80211_tx_h_calculate_duration(struct ieee80211_tx_data *tx)
static bool __ieee80211_parse_tx_radiotap(struct ieee80211_tx_data *tx,
struct sk_buff *skb)
static bool ieee80211_tx_prep_agg(struct ieee80211_tx_data *tx,
struct sk_buff *skb,
struct ieee80211_tx_info *info,
struct tid_ampdu_tx *tid_tx,
int tid)
static ieee80211_tx_result
ieee80211_tx_prepare(struct ieee80211_sub_if_data *sdata,
struct ieee80211_tx_data *tx,
struct sk_buff *skb)
static bool __ieee80211_tx(struct ieee80211_local *local, struct sk_buff **skbp,
struct sta_info *sta, bool txpending)
static int invoke_tx_handlers(struct ieee80211_tx_data *tx)
static bool ieee80211_tx(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb, bool txpending)
static int ieee80211_skb_resize(struct ieee80211_local *local,
struct sk_buff *skb,
int head_need, bool may_encrypt)
static void ieee80211_xmit(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb)
netdev_tx_t ieee80211_monitor_start_xmit(struct sk_buff *skb,
struct net_device *dev)
netdev_tx_t ieee80211_subif_start_xmit(struct sk_buff *skb,
struct net_device *dev)
void ieee80211_clear_tx_pending(struct ieee80211_local *local)
static bool ieee80211_tx_pending_skb(struct ieee80211_local *local,
struct sk_buff *skb)
void ieee80211_tx_pending(unsigned long data)
static void ieee80211_beacon_add_tim(struct ieee80211_if_ap *bss,
struct sk_buff *skb,
struct beacon_data *beacon)
struct sk_buff *ieee80211_beacon_get_tim(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
u16 *tim_offset, u16 *tim_length)
EXPORT_SYMBOL(ieee80211_beacon_get_tim);
struct sk_buff *ieee80211_pspoll_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
EXPORT_SYMBOL(ieee80211_pspoll_get);
struct sk_buff *ieee80211_nullfunc_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
EXPORT_SYMBOL(ieee80211_nullfunc_get);
struct sk_buff *ieee80211_probereq_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len)
EXPORT_SYMBOL(ieee80211_probereq_get);
void ieee80211_rts_get(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
const void *frame, size_t frame_len,
const struct ieee80211_tx_info *frame_txctl,
struct ieee80211_rts *rts)
EXPORT_SYMBOL(ieee80211_rts_get);
void ieee80211_ctstoself_get(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
const void *frame, size_t frame_len,
const struct ieee80211_tx_info *frame_txctl,
struct ieee80211_cts *cts)
EXPORT_SYMBOL(ieee80211_ctstoself_get);
struct sk_buff *
ieee80211_get_buffered_bc(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
EXPORT_SYMBOL(ieee80211_get_buffered_bc);
void ieee80211_tx_skb(struct ieee80211_sub_if_data *sdata, struct sk_buff *skb)
