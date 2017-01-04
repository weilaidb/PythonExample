#define __MAC80211_DRIVER_OPS
static inline void drv_tx(struct ieee80211_local *local, struct sk_buff *skb)
static inline int drv_start(struct ieee80211_local *local)
static inline void drv_stop(struct ieee80211_local *local)
static inline int drv_suspend(struct ieee80211_local *local,
struct cfg80211_wowlan *wowlan)
static inline int drv_resume(struct ieee80211_local *local)
static inline int drv_add_interface(struct ieee80211_local *local,
struct ieee80211_vif *vif)
static inline int drv_change_interface(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
enum nl80211_iftype type, bool p2p)
static inline void drv_remove_interface(struct ieee80211_local *local,
struct ieee80211_vif *vif)
static inline int drv_config(struct ieee80211_local *local, u32 changed)
static inline void drv_bss_info_changed(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
struct ieee80211_bss_conf *info,
u32 changed)
static inline u64 drv_prepare_multicast(struct ieee80211_local *local,
struct netdev_hw_addr_list *mc_list)
static inline void drv_configure_filter(struct ieee80211_local *local,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static inline int drv_set_tim(struct ieee80211_local *local,
struct ieee80211_sta *sta, bool set)
static inline int drv_set_key(struct ieee80211_local *local,
enum set_key_cmd cmd,
struct ieee80211_sub_if_data *sdata,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static inline void drv_update_tkip_key(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
struct ieee80211_key_conf *conf,
struct sta_info *sta, u32 iv32,
u16 *phase1key)
static inline int drv_hw_scan(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
struct cfg80211_scan_request *req)
static inline int
drv_sched_scan_start(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
struct cfg80211_sched_scan_request *req,
struct ieee80211_sched_scan_ies *ies)
static inline void drv_sched_scan_stop(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata)
static inline void drv_sw_scan_start(struct ieee80211_local *local)
static inline void drv_sw_scan_complete(struct ieee80211_local *local)
static inline int drv_get_stats(struct ieee80211_local *local,
struct ieee80211_low_level_stats *stats)
static inline void drv_get_tkip_seq(struct ieee80211_local *local,
u8 hw_key_idx, u32 *iv32, u16 *iv16)
static inline int drv_set_frag_threshold(struct ieee80211_local *local,
u32 value)
static inline int drv_set_rts_threshold(struct ieee80211_local *local,
u32 value)
static inline int drv_set_coverage_class(struct ieee80211_local *local,
u8 value)
static inline void drv_sta_notify(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
enum sta_notify_cmd cmd,
struct ieee80211_sta *sta)
static inline int drv_sta_add(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
struct ieee80211_sta *sta)
static inline void drv_sta_remove(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
struct ieee80211_sta *sta)
static inline int drv_conf_tx(struct ieee80211_local *local, u16 queue,
const struct ieee80211_tx_queue_params *params)
static inline u64 drv_get_tsf(struct ieee80211_local *local)
static inline void drv_set_tsf(struct ieee80211_local *local, u64 tsf)
static inline void drv_reset_tsf(struct ieee80211_local *local)
static inline int drv_tx_last_beacon(struct ieee80211_local *local)
static inline int drv_ampdu_action(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid,
u16 *ssn, u8 buf_size)
static inline int drv_get_survey(struct ieee80211_local *local, int idx,
struct survey_info *survey)
static inline void drv_rfkill_poll(struct ieee80211_local *local)
static inline void drv_flush(struct ieee80211_local *local, bool drop)
static inline void drv_channel_switch(struct ieee80211_local *local,
struct ieee80211_channel_switch *ch_switch)
static inline int drv_set_antenna(struct ieee80211_local *local,
u32 tx_ant, u32 rx_ant)
static inline int drv_get_antenna(struct ieee80211_local *local,
u32 *tx_ant, u32 *rx_ant)
static inline int drv_remain_on_channel(struct ieee80211_local *local,
struct ieee80211_channel *chan,
enum nl80211_channel_type chantype,
unsigned int duration)
static inline int drv_cancel_remain_on_channel(struct ieee80211_local *local)
static inline int drv_offchannel_tx(struct ieee80211_local *local,
struct sk_buff *skb,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int wait)
static inline int drv_offchannel_tx_cancel_wait(struct ieee80211_local *local)
static inline int drv_set_ringparam(struct ieee80211_local *local,
u32 tx, u32 rx)
static inline void drv_get_ringparam(struct ieee80211_local *local,
u32 *tx, u32 *tx_max, u32 *rx, u32 *rx_max)
static inline bool drv_tx_frames_pending(struct ieee80211_local *local)
static inline int drv_set_bitrate_mask(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
const struct cfg80211_bitrate_mask *mask)
