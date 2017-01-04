static int iwl4965_send_tx_power(struct iwl_priv *priv);
static int iwl4965_hw_get_temperature(struct iwl_priv *priv);
#define IWL4965_UCODE_API_MAX 2
#define IWL4965_UCODE_API_MIN 2
#define IWL4965_FW_PRE "iwlwifi-4965-"
#define _IWL4965_MODULE_FIRMWARE(api) IWL4965_FW_PRE #api ".ucode"
#define IWL4965_MODULE_FIRMWARE(api) _IWL4965_MODULE_FIRMWARE(api)
static int iwl4965_verify_bsm(struct iwl_priv *priv)
static int iwl4965_load_bsm(struct iwl_priv *priv)
static int iwl4965_set_ucode_ptrs(struct iwl_priv *priv)
static void iwl4965_init_alive_start(struct iwl_priv *priv)
static bool iw4965_is_ht40_channel(__le32 rxon_flags)
static void iwl4965_nic_config(struct iwl_priv *priv)
static void iwl4965_chain_noise_reset(struct iwl_priv *priv)
static struct iwl_sensitivity_ranges iwl4965_sensitivity = ;
static void iwl4965_set_ct_threshold(struct iwl_priv *priv)
static int iwl4965_hw_set_hw_params(struct iwl_priv *priv)
static s32 iwl4965_math_div_round(s32 num, s32 denom, s32 *res)
static s32 iwl4965_get_voltage_compensation(s32 eeprom_voltage,
s32 current_voltage)
static s32 iwl4965_get_tx_atten_grp(u16 channel)
static u32 iwl4965_get_sub_band(const struct iwl_priv *priv, u32 channel)
static s32 iwl4965_interpolate_value(s32 x, s32 x1, s32 y1, s32 x2, s32 y2)
static int iwl4965_interpolate_chan(struct iwl_priv *priv, u32 channel,
struct iwl_eeprom_calib_ch_info *chan_info)
static s32 back_off_table[] = ;
static struct iwl4965_txpower_comp_entry  tx_power_cmp_tble[CALIB_CH_GROUP_MAX] = ;
static s32 get_min_power_index(s32 rate_power_index, u32 band)
struct gain_entry ;
static const struct gain_entry gain_table[2][108] = ;
static int iwl4965_fill_txpower_tbl(struct iwl_priv *priv, u8 band, u16 channel,
u8 is_ht40, u8 ctrl_chan_high,
struct iwl4965_tx_power_db *tx_power_tbl)
static int iwl4965_send_tx_power(struct iwl_priv *priv)
static int iwl4965_send_rxon_assoc(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static int iwl4965_commit_rxon(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
static int iwl4965_hw_channel_switch(struct iwl_priv *priv,
struct ieee80211_channel_switch *ch_switch)
static void iwl4965_txq_update_byte_cnt_tbl(struct iwl_priv *priv,
struct iwl_tx_queue *txq,
u16 byte_cnt)
static int iwl4965_hw_get_temperature(struct iwl_priv *priv)
#define IWL_TEMPERATURE_THRESHOLD   3
static int iwl4965_is_temp_calib_needed(struct iwl_priv *priv)
static void iwl4965_temperature_calib(struct iwl_priv *priv)
static u16 iwl4965_get_hcmd_size(u8 cmd_id, u16 len)
static u16 iwl4965_build_addsta_hcmd(const struct iwl_legacy_addsta_cmd *cmd,
u8 *data)
static inline u32 iwl4965_get_scd_ssn(struct iwl4965_tx_resp *tx_resp)
static int iwl4965_tx_status_reply_tx(struct iwl_priv *priv,
struct iwl_ht_agg *agg,
struct iwl4965_tx_resp *tx_resp,
int txq_id, u16 start_idx)
static u8 iwl4965_find_station(struct iwl_priv *priv, const u8 *addr)
static int iwl4965_get_ra_sta_id(struct iwl_priv *priv, struct ieee80211_hdr *hdr)
static void iwl4965_rx_reply_tx(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl4965_rx_beacon_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl4965_rx_handler_setup(struct iwl_priv *priv)
static struct iwl_hcmd_ops iwl4965_hcmd = ;
static void iwl4965_post_scan(struct iwl_priv *priv)
static void iwl4965_post_associate(struct iwl_priv *priv)
static void iwl4965_config_ap(struct iwl_priv *priv)
static struct iwl_hcmd_utils_ops iwl4965_hcmd_utils = ;
static struct iwl_lib_ops iwl4965_lib = ;
static const struct iwl_legacy_ops iwl4965_legacy_ops = ;
struct ieee80211_ops iwl4965_hw_ops = ;
static const struct iwl_ops iwl4965_ops = ;
static struct iwl_base_params iwl4965_base_params = ;
struct iwl_cfg iwl4965_cfg = ;
MODULE_FIRMWARE(IWL4965_MODULE_FIRMWARE(IWL4965_UCODE_API_MAX));
