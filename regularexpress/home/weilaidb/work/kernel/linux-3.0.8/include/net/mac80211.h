#define MAC80211_H
enum ieee80211_max_queues ;
enum ieee80211_ac_numbers ;
struct ieee80211_tx_queue_params ;
struct ieee80211_low_level_stats ;
enum ieee80211_bss_change ;
#define IEEE80211_BSS_ARP_ADDR_LIST_LEN 4
struct ieee80211_bss_conf ;
enum mac80211_tx_control_flags ;
#define IEEE80211_TX_CTL_STBC_SHIFT		23
#define IEEE80211_TX_TEMPORARY_FLAGS (IEEE80211_TX_CTL_NO_ACK |		      \
IEEE80211_TX_CTL_CLEAR_PS_FILT | IEEE80211_TX_CTL_FIRST_FRAGMENT |    \
IEEE80211_TX_CTL_SEND_AFTER_DTIM | IEEE80211_TX_CTL_AMPDU |	      \
IEEE80211_TX_STAT_TX_FILTERED |	IEEE80211_TX_STAT_ACK |		      \
IEEE80211_TX_STAT_AMPDU | IEEE80211_TX_STAT_AMPDU_NO_BACK |	      \
IEEE80211_TX_CTL_RATE_CTRL_PROBE | IEEE80211_TX_CTL_PSPOLL_RESPONSE | \
IEEE80211_TX_CTL_MORE_FRAMES | IEEE80211_TX_CTL_LDPC |		      \
IEEE80211_TX_CTL_STBC)
enum mac80211_rate_control_flags ;
#define IEEE80211_TX_INFO_DRIVER_DATA_SIZE 40
#define IEEE80211_TX_INFO_RATE_DRIVER_DATA_SIZE 24
#define IEEE80211_TX_MAX_RATES	5
struct ieee80211_tx_rate  __packed;
struct ieee80211_tx_info ;
struct ieee80211_sched_scan_ies ;
static inline struct ieee80211_tx_info *IEEE80211_SKB_CB(struct sk_buff *skb)
static inline struct ieee80211_rx_status *IEEE80211_SKB_RXCB(struct sk_buff *skb)
static inline void
ieee80211_tx_info_clear_status(struct ieee80211_tx_info *info)
enum mac80211_rx_flags ;
struct ieee80211_rx_status ;
enum ieee80211_conf_flags ;
enum ieee80211_conf_changed ;
enum ieee80211_smps_mode ;
struct ieee80211_conf ;
struct ieee80211_channel_switch ;
struct ieee80211_vif ;
static inline bool ieee80211_vif_is_mesh(struct ieee80211_vif *vif)
enum ieee80211_key_flags ;
struct ieee80211_key_conf ;
enum set_key_cmd ;
struct ieee80211_sta ;
enum sta_notify_cmd ;
enum ieee80211_tkip_key_type ;
enum ieee80211_hw_flags ;
struct ieee80211_hw ;
struct ieee80211_hw *wiphy_to_ieee80211_hw(struct wiphy *wiphy);
static inline void SET_IEEE80211_DEV(struct ieee80211_hw *hw, struct device *dev)
static inline void SET_IEEE80211_PERM_ADDR(struct ieee80211_hw *hw, u8 *addr)
static inline struct ieee80211_rate *
ieee80211_get_tx_rate(const struct ieee80211_hw *hw,
const struct ieee80211_tx_info *c)
static inline struct ieee80211_rate *
ieee80211_get_rts_cts_rate(const struct ieee80211_hw *hw,
const struct ieee80211_tx_info *c)
static inline struct ieee80211_rate *
ieee80211_get_alt_retry_rate(const struct ieee80211_hw *hw,
const struct ieee80211_tx_info *c, int idx)
enum ieee80211_filter_flags ;
enum ieee80211_ampdu_mlme_action ;
struct ieee80211_ops ;
struct ieee80211_hw *ieee80211_alloc_hw(size_t priv_data_len,
const struct ieee80211_ops *ops);
int ieee80211_register_hw(struct ieee80211_hw *hw);
struct ieee80211_tpt_blink ;
enum ieee80211_tpt_led_trigger_flags ;
extern char *__ieee80211_get_tx_led_name(struct ieee80211_hw *hw);
extern char *__ieee80211_get_rx_led_name(struct ieee80211_hw *hw);
extern char *__ieee80211_get_assoc_led_name(struct ieee80211_hw *hw);
extern char *__ieee80211_get_radio_led_name(struct ieee80211_hw *hw);
extern char *__ieee80211_create_tpt_led_trigger(
struct ieee80211_hw *hw, unsigned int flags,
const struct ieee80211_tpt_blink *blink_table,
unsigned int blink_table_len);
static inline char *ieee80211_get_tx_led_name(struct ieee80211_hw *hw)
static inline char *ieee80211_get_rx_led_name(struct ieee80211_hw *hw)
static inline char *ieee80211_get_assoc_led_name(struct ieee80211_hw *hw)
static inline char *ieee80211_get_radio_led_name(struct ieee80211_hw *hw)
static inline char *
ieee80211_create_tpt_led_trigger(struct ieee80211_hw *hw, unsigned int flags,
const struct ieee80211_tpt_blink *blink_table,
unsigned int blink_table_len)
void ieee80211_unregister_hw(struct ieee80211_hw *hw);
void ieee80211_free_hw(struct ieee80211_hw *hw);
void ieee80211_restart_hw(struct ieee80211_hw *hw);
void ieee80211_napi_schedule(struct ieee80211_hw *hw);
void ieee80211_napi_complete(struct ieee80211_hw *hw);
void ieee80211_rx(struct ieee80211_hw *hw, struct sk_buff *skb);
void ieee80211_rx_irqsafe(struct ieee80211_hw *hw, struct sk_buff *skb);
static inline void ieee80211_rx_ni(struct ieee80211_hw *hw,
struct sk_buff *skb)
int ieee80211_sta_ps_transition(struct ieee80211_sta *sta, bool start);
static inline int ieee80211_sta_ps_transition_ni(struct ieee80211_sta *sta,
bool start)
#define IEEE80211_TX_STATUS_HEADROOM	13
void ieee80211_sta_set_tim(struct ieee80211_sta *sta);
void ieee80211_tx_status(struct ieee80211_hw *hw,
struct sk_buff *skb);
static inline void ieee80211_tx_status_ni(struct ieee80211_hw *hw,
struct sk_buff *skb)
void ieee80211_tx_status_irqsafe(struct ieee80211_hw *hw,
struct sk_buff *skb);
void ieee80211_report_low_ack(struct ieee80211_sta *sta, u32 num_packets);
struct sk_buff *ieee80211_beacon_get_tim(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
u16 *tim_offset, u16 *tim_length);
static inline struct sk_buff *ieee80211_beacon_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
struct sk_buff *ieee80211_pspoll_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
struct sk_buff *ieee80211_nullfunc_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
struct sk_buff *ieee80211_probereq_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len);
void ieee80211_rts_get(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
const void *frame, size_t frame_len,
const struct ieee80211_tx_info *frame_txctl,
struct ieee80211_rts *rts);
__le16 ieee80211_rts_duration(struct ieee80211_hw *hw,
struct ieee80211_vif *vif, size_t frame_len,
const struct ieee80211_tx_info *frame_txctl);
void ieee80211_ctstoself_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
const void *frame, size_t frame_len,
const struct ieee80211_tx_info *frame_txctl,
struct ieee80211_cts *cts);
__le16 ieee80211_ctstoself_duration(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
size_t frame_len,
const struct ieee80211_tx_info *frame_txctl);
__le16 ieee80211_generic_frame_duration(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
size_t frame_len,
struct ieee80211_rate *rate);
struct sk_buff *
ieee80211_get_buffered_bc(struct ieee80211_hw *hw, struct ieee80211_vif *vif);
void ieee80211_get_tkip_key(struct ieee80211_key_conf *keyconf,
struct sk_buff *skb,
enum ieee80211_tkip_key_type type, u8 *key);
void ieee80211_wake_queue(struct ieee80211_hw *hw, int queue);
void ieee80211_stop_queue(struct ieee80211_hw *hw, int queue);
int ieee80211_queue_stopped(struct ieee80211_hw *hw, int queue);
void ieee80211_stop_queues(struct ieee80211_hw *hw);
void ieee80211_wake_queues(struct ieee80211_hw *hw);
void ieee80211_scan_completed(struct ieee80211_hw *hw, bool aborted);
void ieee80211_sched_scan_results(struct ieee80211_hw *hw);
void ieee80211_sched_scan_stopped(struct ieee80211_hw *hw);
void ieee80211_iterate_active_interfaces(struct ieee80211_hw *hw,
void (*iterator)(void *data, u8 *mac,
struct ieee80211_vif *vif),
void *data);
void ieee80211_iterate_active_interfaces_atomic(struct ieee80211_hw *hw,
void (*iterator)(void *data,
u8 *mac,
struct ieee80211_vif *vif),
void *data);
void ieee80211_queue_work(struct ieee80211_hw *hw, struct work_struct *work);
void ieee80211_queue_delayed_work(struct ieee80211_hw *hw,
struct delayed_work *dwork,
unsigned long delay);
int ieee80211_start_tx_ba_session(struct ieee80211_sta *sta, u16 tid,
u16 timeout);
void ieee80211_start_tx_ba_cb_irqsafe(struct ieee80211_vif *vif, const u8 *ra,
u16 tid);
int ieee80211_stop_tx_ba_session(struct ieee80211_sta *sta, u16 tid);
void ieee80211_stop_tx_ba_cb_irqsafe(struct ieee80211_vif *vif, const u8 *ra,
u16 tid);
struct ieee80211_sta *ieee80211_find_sta(struct ieee80211_vif *vif,
const u8 *addr);
struct ieee80211_sta *ieee80211_find_sta_by_ifaddr(struct ieee80211_hw *hw,
const u8 *addr,
const u8 *localaddr);
void ieee80211_sta_block_awake(struct ieee80211_hw *hw,
struct ieee80211_sta *pubsta, bool block);
struct sk_buff *ieee80211_ap_probereq_get(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
void ieee80211_beacon_loss(struct ieee80211_vif *vif);
void ieee80211_connection_loss(struct ieee80211_vif *vif);
void ieee80211_disable_dyn_ps(struct ieee80211_vif *vif);
void ieee80211_enable_dyn_ps(struct ieee80211_vif *vif);
void ieee80211_cqm_rssi_notify(struct ieee80211_vif *vif,
enum nl80211_cqm_rssi_threshold_event rssi_event,
gfp_t gfp);
void ieee80211_chswitch_done(struct ieee80211_vif *vif, bool success);
void ieee80211_request_smps(struct ieee80211_vif *vif,
enum ieee80211_smps_mode smps_mode);
void ieee80211_key_removed(struct ieee80211_key_conf *key_conf);
void ieee80211_ready_on_channel(struct ieee80211_hw *hw);
void ieee80211_remain_on_channel_expired(struct ieee80211_hw *hw);
enum rate_control_changed ;
struct ieee80211_tx_rate_control ;
struct rate_control_ops ;
static inline int rate_supported(struct ieee80211_sta *sta,
enum ieee80211_band band,
int index)
bool rate_control_send_low(struct ieee80211_sta *sta,
void *priv_sta,
struct ieee80211_tx_rate_control *txrc);
static inline s8
rate_lowest_index(struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta)
static inline
bool rate_usable_index_exists(struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta)
int ieee80211_rate_control_register(struct rate_control_ops *ops);
void ieee80211_rate_control_unregister(struct rate_control_ops *ops);
static inline bool
conf_is_ht20(struct ieee80211_conf *conf)
static inline bool
conf_is_ht40_minus(struct ieee80211_conf *conf)
static inline bool
conf_is_ht40_plus(struct ieee80211_conf *conf)
static inline bool
conf_is_ht40(struct ieee80211_conf *conf)
static inline bool
conf_is_ht(struct ieee80211_conf *conf)
static inline enum nl80211_iftype
ieee80211_iftype_p2p(enum nl80211_iftype type, bool p2p)
static inline enum nl80211_iftype
ieee80211_vif_type_p2p(struct ieee80211_vif *vif)
