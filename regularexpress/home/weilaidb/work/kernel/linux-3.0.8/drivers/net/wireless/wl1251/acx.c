int wl1251_acx_frame_rates(struct wl1251 *wl, u8 ctrl_rate, u8 ctrl_mod,
u8 mgt_rate, u8 mgt_mod)
int wl1251_acx_station_id(struct wl1251 *wl)
int wl1251_acx_default_key(struct wl1251 *wl, u8 key_id)
int wl1251_acx_wake_up_conditions(struct wl1251 *wl, u8 wake_up_event,
u8 listen_interval)
int wl1251_acx_sleep_auth(struct wl1251 *wl, u8 sleep_auth)
int wl1251_acx_fw_version(struct wl1251 *wl, char *buf, size_t len)
int wl1251_acx_tx_power(struct wl1251 *wl, int power)
int wl1251_acx_feature_cfg(struct wl1251 *wl)
int wl1251_acx_mem_map(struct wl1251 *wl, struct acx_header *mem_map,
size_t len)
int wl1251_acx_data_path_params(struct wl1251 *wl,
struct acx_data_path_params_resp *resp)
int wl1251_acx_rx_msdu_life_time(struct wl1251 *wl, u32 life_time)
int wl1251_acx_rx_config(struct wl1251 *wl, u32 config, u32 filter)
int wl1251_acx_pd_threshold(struct wl1251 *wl)
int wl1251_acx_slot(struct wl1251 *wl, enum acx_slot_type slot_time)
int wl1251_acx_group_address_tbl(struct wl1251 *wl)
int wl1251_acx_service_period_timeout(struct wl1251 *wl)
int wl1251_acx_rts_threshold(struct wl1251 *wl, u16 rts_threshold)
int wl1251_acx_beacon_filter_opt(struct wl1251 *wl, bool enable_filter)
int wl1251_acx_beacon_filter_table(struct wl1251 *wl)
int wl1251_acx_conn_monit_params(struct wl1251 *wl)
int wl1251_acx_sg_enable(struct wl1251 *wl)
int wl1251_acx_sg_cfg(struct wl1251 *wl)
int wl1251_acx_cca_threshold(struct wl1251 *wl)
int wl1251_acx_bcn_dtim_options(struct wl1251 *wl)
int wl1251_acx_aid(struct wl1251 *wl, u16 aid)
int wl1251_acx_event_mbox_mask(struct wl1251 *wl, u32 event_mask)
int wl1251_acx_low_rssi(struct wl1251 *wl, s8 threshold, u8 weight,
u8 depth, enum wl1251_acx_low_rssi_type type)
int wl1251_acx_set_preamble(struct wl1251 *wl, enum acx_preamble_type preamble)
int wl1251_acx_cts_protect(struct wl1251 *wl,
enum acx_ctsprotect_type ctsprotect)
int wl1251_acx_tsf_info(struct wl1251 *wl, u64 *mactime)
int wl1251_acx_statistics(struct wl1251 *wl, struct acx_statistics *stats)
int wl1251_acx_rate_policies(struct wl1251 *wl)
int wl1251_acx_mem_cfg(struct wl1251 *wl)
int wl1251_acx_wr_tbtt_and_dtim(struct wl1251 *wl, u16 tbtt, u8 dtim)
int wl1251_acx_bet_enable(struct wl1251 *wl, enum wl1251_acx_bet_mode mode,
u8 max_consecutive)
int wl1251_acx_ac_cfg(struct wl1251 *wl, u8 ac, u8 cw_min, u16 cw_max,
u8 aifs, u16 txop)
int wl1251_acx_tid_cfg(struct wl1251 *wl, u8 queue,
enum wl1251_acx_channel_type type,
u8 tsid, enum wl1251_acx_ps_scheme ps_scheme,
enum wl1251_acx_ack_policy ack_policy)
