#define IWL_DECLARE_RATE_INFO(r, ip, in, rp, rn, pp, np)    \
[IWL_RATE_##r##M_INDEX] =
const struct iwl3945_rate_info iwl3945_rates[IWL_RATE_COUNT_3945] = ;
static inline u8 iwl3945_get_prev_ieee_rate(u8 rate_index)
#define IWL_EVT_DISABLE (0)
#define IWL_EVT_DISABLE_SIZE (1532/32)
void iwl3945_disable_events(struct iwl_priv *priv)
static int iwl3945_hwrate_to_plcp_idx(u8 plcp)
#define TX_STATUS_ENTRY(x) case TX_3945_STATUS_FAIL_ ## x: return #x
static const char *iwl3945_get_tx_fail_reason(u32 status)
static inline const char *iwl3945_get_tx_fail_reason(u32 status)
int iwl3945_rs_next_rate(struct iwl_priv *priv, int rate)
static void iwl3945_tx_queue_reclaim(struct iwl_priv *priv,
int txq_id, int index)
static void iwl3945_rx_reply_tx(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl3945_accumulative_statistics(struct iwl_priv *priv,
__le32 *stats)
void iwl3945_hw_rx_statistics(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
void iwl3945_reply_statistics(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static int iwl3945_is_network_packet(struct iwl_priv *priv,
struct ieee80211_hdr *header)
static void iwl3945_pass_packet_to_mac80211(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb,
struct ieee80211_rx_status *stats)
#define IWL_DELAY_NEXT_SCAN_AFTER_ASSOC (HZ*6)
static void iwl3945_rx_reply_rx(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
int iwl3945_hw_txq_attach_buf_to_tfd(struct iwl_priv *priv,
struct iwl_tx_queue *txq,
dma_addr_t addr, u16 len, u8 reset, u8 pad)
void iwl3945_hw_txq_free_tfd(struct iwl_priv *priv, struct iwl_tx_queue *txq)
void iwl3945_hw_build_tx_cmd_rate(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct ieee80211_tx_info *info,
struct ieee80211_hdr *hdr,
int sta_id, int tx_id)
static u8 iwl3945_sync_sta(struct iwl_priv *priv, int sta_id, u16 tx_rate)
static void iwl3945_set_pwr_vmain(struct iwl_priv *priv)
static int iwl3945_rx_init(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
static int iwl3945_tx_reset(struct iwl_priv *priv)
static int iwl3945_txq_ctx_reset(struct iwl_priv *priv)
static int iwl3945_apm_init(struct iwl_priv *priv)
static void iwl3945_nic_config(struct iwl_priv *priv)
int iwl3945_hw_nic_init(struct iwl_priv *priv)
void iwl3945_hw_txq_ctx_free(struct iwl_priv *priv)
void iwl3945_hw_txq_ctx_stop(struct iwl_priv *priv)
static int iwl3945_hw_reg_adjust_power_by_temp(int new_reading, int old_reading)
static inline int iwl3945_hw_reg_temp_out_of_range(int temperature)
int iwl3945_hw_get_temperature(struct iwl_priv *priv)
static int iwl3945_hw_reg_txpower_get_temperature(struct iwl_priv *priv)
#define IWL_TEMPERATURE_LIMIT_TIMER   6
static int iwl3945_is_temp_calib_needed(struct iwl_priv *priv)
#define IWL_MAX_GAIN_ENTRIES 78
#define IWL_CCK_FROM_OFDM_POWER_DIFF  -5
#define IWL_CCK_FROM_OFDM_INDEX_DIFF (10)
static struct iwl3945_tx_power power_gain_table[2][IWL_MAX_GAIN_ENTRIES] = ;
static inline u8 iwl3945_hw_reg_fix_power_index(int index)
#define REG_RECALIB_PERIOD (60)
static void iwl3945_hw_reg_set_scan_power(struct iwl_priv *priv, u32 scan_tbl_index,
s32 rate_index, const s8 *clip_pwrs,
struct iwl_channel_info *ch_info,
int band_index)
static int iwl3945_send_tx_power(struct iwl_priv *priv)
static int iwl3945_hw_reg_set_new_power(struct iwl_priv *priv,
struct iwl_channel_info *ch_info)
static int iwl3945_hw_reg_get_ch_txpower_limit(struct iwl_channel_info *ch_info)
static int iwl3945_hw_reg_comp_txpower_temp(struct iwl_priv *priv)
int iwl3945_hw_reg_set_txpower(struct iwl_priv *priv, s8 power)
static int iwl3945_send_rxon_assoc(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
int iwl3945_commit_rxon(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
void iwl3945_reg_txpower_periodic(struct iwl_priv *priv)
static void iwl3945_bg_reg_txpower_periodic(struct work_struct *work)
static u16 iwl3945_hw_reg_get_ch_grp_index(struct iwl_priv *priv,
const struct iwl_channel_info *ch_info)
static int iwl3945_hw_reg_get_matched_power_index(struct iwl_priv *priv,
s8 requested_power,
s32 setting_index, s32 *new_index)
static void iwl3945_hw_reg_init_channel_groups(struct iwl_priv *priv)
int iwl3945_txpower_set_from_eeprom(struct iwl_priv *priv)
int iwl3945_hw_rxq_stop(struct iwl_priv *priv)
int iwl3945_hw_tx_queue_init(struct iwl_priv *priv, struct iwl_tx_queue *txq)
static u16 iwl3945_get_hcmd_size(u8 cmd_id, u16 len)
static u16 iwl3945_build_addsta_hcmd(const struct iwl_legacy_addsta_cmd *cmd,
u8 *data)
static int iwl3945_add_bssid_station(struct iwl_priv *priv,
const u8 *addr, u8 *sta_id_r)
static int iwl3945_manage_ibss_station(struct iwl_priv *priv,
struct ieee80211_vif *vif, bool add)
int iwl3945_init_hw_rate_table(struct iwl_priv *priv)
int iwl3945_hw_set_hw_params(struct iwl_priv *priv)
unsigned int iwl3945_hw_get_beacon_cmd(struct iwl_priv *priv,
struct iwl3945_frame *frame, u8 rate)
void iwl3945_hw_rx_handler_setup(struct iwl_priv *priv)
void iwl3945_hw_setup_deferred_work(struct iwl_priv *priv)
void iwl3945_hw_cancel_deferred_work(struct iwl_priv *priv)
static int iwl3945_verify_bsm(struct iwl_priv *priv)
static int iwl3945_eeprom_acquire_semaphore(struct iwl_priv *priv)
static void iwl3945_eeprom_release_semaphore(struct iwl_priv *priv)
static int iwl3945_load_bsm(struct iwl_priv *priv)
static struct iwl_hcmd_ops iwl3945_hcmd = ;
static struct iwl_lib_ops iwl3945_lib = ;
static const struct iwl_legacy_ops iwl3945_legacy_ops = ;
static struct iwl_hcmd_utils_ops iwl3945_hcmd_utils = ;
static const struct iwl_ops iwl3945_ops = ;
static struct iwl_base_params iwl3945_base_params = ;
static struct iwl_cfg iwl3945_bg_cfg = ;
static struct iwl_cfg iwl3945_abg_cfg = ;
DEFINE_PCI_DEVICE_TABLE(iwl3945_hw_card_ids) = ;
MODULE_DEVICE_TABLE(pci, iwl3945_hw_card_ids);
