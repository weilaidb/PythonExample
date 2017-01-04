int wl1271_acx_wake_up_conditions(struct wl1271 *wl)
int wl1271_acx_sleep_auth(struct wl1271 *wl, u8 sleep_auth)
int wl1271_acx_tx_power(struct wl1271 *wl, int power)
int wl1271_acx_feature_cfg(struct wl1271 *wl)
int wl1271_acx_mem_map(struct wl1271 *wl, struct acx_header *mem_map,
size_t len)
int wl1271_acx_rx_msdu_life_time(struct wl1271 *wl)
int wl1271_acx_rx_config(struct wl1271 *wl, u32 config, u32 filter)
int wl1271_acx_pd_threshold(struct wl1271 *wl)
int wl1271_acx_slot(struct wl1271 *wl, enum acx_slot_type slot_time)
int wl1271_acx_group_address_tbl(struct wl1271 *wl, bool enable,
void *mc_list, u32 mc_list_len)
int wl1271_acx_service_period_timeout(struct wl1271 *wl)
int wl1271_acx_rts_threshold(struct wl1271 *wl, u32 rts_threshold)
int wl1271_acx_dco_itrim_params(struct wl1271 *wl)
int wl1271_acx_beacon_filter_opt(struct wl1271 *wl, bool enable_filter)
int wl1271_acx_beacon_filter_table(struct wl1271 *wl)
#define ACX_CONN_MONIT_DISABLE_VALUE  0xffffffff
int wl1271_acx_conn_monit_params(struct wl1271 *wl, bool enable)
int wl1271_acx_sg_enable(struct wl1271 *wl, bool enable)
int wl1271_acx_sta_sg_cfg(struct wl1271 *wl)
int wl1271_acx_ap_sg_cfg(struct wl1271 *wl)
int wl1271_acx_cca_threshold(struct wl1271 *wl)
int wl1271_acx_bcn_dtim_options(struct wl1271 *wl)
int wl1271_acx_aid(struct wl1271 *wl, u16 aid)
int wl1271_acx_event_mbox_mask(struct wl1271 *wl, u32 event_mask)
int wl1271_acx_set_preamble(struct wl1271 *wl, enum acx_preamble_type preamble)
int wl1271_acx_cts_protect(struct wl1271 *wl,
enum acx_ctsprotect_type ctsprotect)
int wl1271_acx_statistics(struct wl1271 *wl, struct acx_statistics *stats)
int wl1271_acx_sta_rate_policies(struct wl1271 *wl)
int wl1271_acx_ap_rate_policy(struct wl1271 *wl, struct conf_tx_rate_class *c,
u8 idx)
int wl1271_acx_ac_cfg(struct wl1271 *wl, u8 ac, u8 cw_min, u16 cw_max,
u8 aifsn, u16 txop)
int wl1271_acx_tid_cfg(struct wl1271 *wl, u8 queue_id, u8 channel_type,
u8 tsid, u8 ps_scheme, u8 ack_policy,
u32 apsd_conf0, u32 apsd_conf1)
int wl1271_acx_frag_threshold(struct wl1271 *wl, u32 frag_threshold)
int wl1271_acx_tx_config_options(struct wl1271 *wl)
int wl1271_acx_ap_mem_cfg(struct wl1271 *wl)
int wl1271_acx_sta_mem_cfg(struct wl1271 *wl)
int wl1271_acx_host_if_cfg_bitmap(struct wl1271 *wl, u32 host_cfg_bitmap)
int wl1271_acx_init_mem_config(struct wl1271 *wl)
int wl1271_acx_init_rx_interrupt(struct wl1271 *wl)
int wl1271_acx_bet_enable(struct wl1271 *wl, bool enable)
int wl1271_acx_arp_ip_filter(struct wl1271 *wl, u8 enable, __be32 address)
int wl1271_acx_pm_config(struct wl1271 *wl)
int wl1271_acx_keep_alive_mode(struct wl1271 *wl, bool enable)
int wl1271_acx_keep_alive_config(struct wl1271 *wl, u8 index, u8 tpl_valid)
int wl1271_acx_rssi_snr_trigger(struct wl1271 *wl, bool enable,
s16 thold, u8 hyst)
int wl1271_acx_rssi_snr_avg_weights(struct wl1271 *wl)
int wl1271_acx_set_ht_capabilities(struct wl1271 *wl,
struct ieee80211_sta_ht_cap *ht_cap,
bool allow_ht_operation)
int wl1271_acx_set_ht_information(struct wl1271 *wl,
u16 ht_operation_mode)
int wl1271_acx_set_ba_session(struct wl1271 *wl,
enum ieee80211_back_parties direction,
u8 tid_index, u8 policy)
int wl1271_acx_set_ba_receiver_session(struct wl1271 *wl, u8 tid_index, u16 ssn,
bool enable)
int wl1271_acx_tsf_info(struct wl1271 *wl, u64 *mactime)
int wl1271_acx_max_tx_retry(struct wl1271 *wl)
int wl1271_acx_config_ps(struct wl1271 *wl)
int wl1271_acx_set_inconnection_sta(struct wl1271 *wl, u8 *addr)
int wl1271_acx_set_ap_beacon_filter(struct wl1271 *wl, bool enable)
int wl1271_acx_fm_coex(struct wl1271 *wl)
