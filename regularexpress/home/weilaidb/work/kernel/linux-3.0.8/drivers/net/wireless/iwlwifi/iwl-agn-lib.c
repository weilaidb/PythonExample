static inline u32 iwlagn_get_scd_ssn(struct iwlagn_tx_resp *tx_resp)
static void iwlagn_count_tx_err_status(struct iwl_priv *priv, u16 status)
static void iwlagn_count_agg_tx_err_status(struct iwl_priv *priv, u16 status)
static void iwlagn_set_tx_status(struct iwl_priv *priv,
struct ieee80211_tx_info *info,
struct iwl_rxon_context *ctx,
struct iwlagn_tx_resp *tx_resp,
int txq_id, bool is_agg)
#define AGG_TX_STATE_FAIL(x) case AGG_TX_STATE_ ## x: return #x
const char *iwl_get_agg_tx_fail_reason(u16 status)
static int iwlagn_tx_status_reply_tx(struct iwl_priv *priv,
struct iwl_ht_agg *agg,
struct iwlagn_tx_resp *tx_resp,
int txq_id, u16 start_idx)
void iwl_check_abort_status(struct iwl_priv *priv,
u8 frame_count, u32 status)
static void iwlagn_rx_reply_tx(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
void iwlagn_rx_handler_setup(struct iwl_priv *priv)
void iwlagn_setup_deferred_work(struct iwl_priv *priv)
int iwlagn_hw_valid_rtc_data_addr(u32 addr)
int iwlagn_send_tx_power(struct iwl_priv *priv)
void iwlagn_temperature(struct iwl_priv *priv)
u16 iwlagn_eeprom_calib_version(struct iwl_priv *priv)
static u32 eeprom_indirect_address(const struct iwl_priv *priv, u32 address)
const u8 *iwlagn_eeprom_query_addr(const struct iwl_priv *priv,
size_t offset)
struct iwl_mod_params iwlagn_mod_params = ;
void iwlagn_rx_queue_reset(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
int iwlagn_rx_init(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
static void iwlagn_set_pwr_vmain(struct iwl_priv *priv)
int iwlagn_hw_nic_init(struct iwl_priv *priv)
static inline __le32 iwlagn_dma_addr2rbd_ptr(struct iwl_priv *priv,
dma_addr_t dma_addr)
void iwlagn_rx_queue_restock(struct iwl_priv *priv)
void iwlagn_rx_allocate(struct iwl_priv *priv, gfp_t priority)
void iwlagn_rx_replenish(struct iwl_priv *priv)
void iwlagn_rx_replenish_now(struct iwl_priv *priv)
void iwlagn_rx_queue_free(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
int iwlagn_rxq_stop(struct iwl_priv *priv)
int iwlagn_hwrate_to_mac80211_idx(u32 rate_n_flags, enum ieee80211_band band)
static int iwl_get_single_channel_for_scan(struct iwl_priv *priv,
struct ieee80211_vif *vif,
enum ieee80211_band band,
struct iwl_scan_channel *scan_ch)
static int iwl_get_channels_for_scan(struct iwl_priv *priv,
struct ieee80211_vif *vif,
enum ieee80211_band band,
u8 is_active, u8 n_probes,
struct iwl_scan_channel *scan_ch)
static int iwl_fill_offch_tx(struct iwl_priv *priv, void *data, size_t maxlen)
int iwlagn_request_scan(struct iwl_priv *priv, struct ieee80211_vif *vif)
int iwlagn_manage_ibss_station(struct iwl_priv *priv,
struct ieee80211_vif *vif, bool add)
void iwl_free_tfds_in_queue(struct iwl_priv *priv,
int sta_id, int tid, int freed)
#define IWL_FLUSH_WAIT_MS	2000
int iwlagn_wait_tx_queue_empty(struct iwl_priv *priv)
#define IWL_TX_QUEUE_MSK	0xfffff
int iwlagn_txfifo_flush(struct iwl_priv *priv, u16 flush_control)
void iwlagn_dev_txfifo_flush(struct iwl_priv *priv, u16 flush_control)
#define LUT_VALUE(bt3_prio, bt3_txrx, bt_rf_act, wifi_req, wifi_prio, \
wifi_txrx, wifi_sh_ant_req) \
(bt3_prio | (bt3_txrx << 1) | (bt_rf_act << 2) | (wifi_req << 3) | \
(wifi_prio << 4) | (wifi_txrx << 5) | (wifi_sh_ant_req << 6))
#define LUT_PTA_WLAN_ACTIVE_OP(lut, op, val) \
lut[8 + ((val) >> 5)] op (cpu_to_le32(BIT((val) & 0x1f)))
#define LUT_TEST_PTA_WLAN_ACTIVE(lut, bt3_prio, bt3_txrx, bt_rf_act, wifi_req, \
wifi_prio, wifi_txrx, wifi_sh_ant_req) \
(!!(LUT_PTA_WLAN_ACTIVE_OP(lut, &, LUT_VALUE(bt3_prio, bt3_txrx, \
bt_rf_act, wifi_req, wifi_prio, wifi_txrx, \
wifi_sh_ant_req))))
#define LUT_SET_PTA_WLAN_ACTIVE(lut, bt3_prio, bt3_txrx, bt_rf_act, wifi_req, \
wifi_prio, wifi_txrx, wifi_sh_ant_req) \
LUT_PTA_WLAN_ACTIVE_OP(lut, |=, LUT_VALUE(bt3_prio, bt3_txrx, \
bt_rf_act, wifi_req, wifi_prio, wifi_txrx, \
wifi_sh_ant_req))
#define LUT_CLEAR_PTA_WLAN_ACTIVE(lut, bt3_prio, bt3_txrx, bt_rf_act, \
wifi_req, wifi_prio, wifi_txrx, \
wifi_sh_ant_req) \
LUT_PTA_WLAN_ACTIVE_OP(lut, &= ~, LUT_VALUE(bt3_prio, bt3_txrx, \
bt_rf_act, wifi_req, wifi_prio, wifi_txrx, \
wifi_sh_ant_req))
#define LUT_WLAN_KILL_OP(lut, op, val) \
lut[(val) >> 4] op (cpu_to_le32(BIT(((val) << 1) & 0x1e)))
#define LUT_TEST_WLAN_KILL(lut, bt3_prio, bt3_txrx, bt_rf_act, wifi_req, \
wifi_prio, wifi_txrx, wifi_sh_ant_req) \
(!!(LUT_WLAN_KILL_OP(lut, &, LUT_VALUE(bt3_prio, bt3_txrx, bt_rf_act, \
wifi_req, wifi_prio, wifi_txrx, wifi_sh_ant_req))))
#define LUT_SET_WLAN_KILL(lut, bt3_prio, bt3_txrx, bt_rf_act, wifi_req, \
wifi_prio, wifi_txrx, wifi_sh_ant_req) \
LUT_WLAN_KILL_OP(lut, |=, LUT_VALUE(bt3_prio, bt3_txrx, bt_rf_act, \
wifi_req, wifi_prio, wifi_txrx, wifi_sh_ant_req))
#define LUT_CLEAR_WLAN_KILL(lut, bt3_prio, bt3_txrx, bt_rf_act, wifi_req, \
wifi_prio, wifi_txrx, wifi_sh_ant_req) \
LUT_WLAN_KILL_OP(lut, &= ~, LUT_VALUE(bt3_prio, bt3_txrx, bt_rf_act, \
wifi_req, wifi_prio, wifi_txrx, wifi_sh_ant_req))
#define LUT_ANT_SWITCH_OP(lut, op, val) \
lut[(val) >> 4] op (cpu_to_le32(BIT((((val) << 1) & 0x1e) + 1)))
#define LUT_TEST_ANT_SWITCH(lut, bt3_prio, bt3_txrx, bt_rf_act, wifi_req, \
wifi_prio, wifi_txrx, wifi_sh_ant_req) \
(!!(LUT_ANT_SWITCH_OP(lut, &, LUT_VALUE(bt3_prio, bt3_txrx, bt_rf_act, \
wifi_req, wifi_prio, wifi_txrx, \
wifi_sh_ant_req))))
#define LUT_SET_ANT_SWITCH(lut, bt3_prio, bt3_txrx, bt_rf_act, wifi_req, \
wifi_prio, wifi_txrx, wifi_sh_ant_req) \
LUT_ANT_SWITCH_OP(lut, |=, LUT_VALUE(bt3_prio, bt3_txrx, bt_rf_act, \
wifi_req, wifi_prio, wifi_txrx, wifi_sh_ant_req))
#define LUT_CLEAR_ANT_SWITCH(lut, bt3_prio, bt3_txrx, bt_rf_act, wifi_req, \
wifi_prio, wifi_txrx, wifi_sh_ant_req) \
LUT_ANT_SWITCH_OP(lut, &= ~, LUT_VALUE(bt3_prio, bt3_txrx, bt_rf_act, \
wifi_req, wifi_prio, wifi_txrx, wifi_sh_ant_req))
static const __le32 iwlagn_def_3w_lookup[12] = ;
static const __le32 iwlagn_concurrent_lookup[12] = ;
void iwlagn_send_advance_bt_config(struct iwl_priv *priv)
static void iwlagn_bt_traffic_change_work(struct work_struct *work)
static void iwlagn_print_uartmsg(struct iwl_priv *priv,
struct iwl_bt_uart_msg *uart_msg)
static void iwlagn_set_kill_msk(struct iwl_priv *priv,
struct iwl_bt_uart_msg *uart_msg)
void iwlagn_bt_coex_profile_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
void iwlagn_bt_rx_handler_setup(struct iwl_priv *priv)
void iwlagn_bt_setup_deferred_work(struct iwl_priv *priv)
void iwlagn_bt_cancel_deferred_work(struct iwl_priv *priv)
static bool is_single_rx_stream(struct iwl_priv *priv)
#define IWL_NUM_RX_CHAINS_MULTIPLE	3
#define IWL_NUM_RX_CHAINS_SINGLE	2
#define IWL_NUM_IDLE_CHAINS_DUAL	2
#define IWL_NUM_IDLE_CHAINS_SINGLE	1
static int iwl_get_active_rx_chain_count(struct iwl_priv *priv)
static int iwl_get_idle_rx_chain_count(struct iwl_priv *priv, int active_cnt)
static u8 iwl_count_chain_bitmap(u32 chain_bitmap)
void iwlagn_set_rxon_chain(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
u8 iwl_toggle_tx_ant(struct iwl_priv *priv, u8 ant, u8 valid)
static const char *get_csr_string(int cmd)
void iwl_dump_csr(struct iwl_priv *priv)
static const char *get_fh_string(int cmd)
int iwl_dump_fh(struct iwl_priv *priv, char **buf, bool display)
void iwlagn_init_notification_wait(struct iwl_priv *priv,
struct iwl_notification_wait *wait_entry,
u8 cmd,
void (*fn)(struct iwl_priv *priv,
struct iwl_rx_packet *pkt,
void *data),
void *fn_data)
int iwlagn_wait_notification(struct iwl_priv *priv,
struct iwl_notification_wait *wait_entry,
unsigned long timeout)
void iwlagn_remove_notification(struct iwl_priv *priv,
struct iwl_notification_wait *wait_entry)
int iwlagn_start_device(struct iwl_priv *priv)
void iwlagn_stop_device(struct iwl_priv *priv)
