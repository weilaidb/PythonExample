int iwlagn_send_tx_ant_config(struct iwl_priv *priv, u8 valid_tx_ant)
static u16 iwlagn_build_addsta_hcmd(const struct iwl_addsta_cmd *cmd, u8 *data)
static void iwlagn_gain_computation(struct iwl_priv *priv,
u32 average_noise[NUM_RX_CHAINS],
u16 min_average_noise_antenna_i,
u32 min_average_noise,
u8 default_chain)
static void iwlagn_chain_noise_reset(struct iwl_priv *priv)
static void iwlagn_tx_cmd_protection(struct iwl_priv *priv,
struct ieee80211_tx_info *info,
__le16 fc, __le32 *tx_flags)
static int iwlagn_calc_rssi(struct iwl_priv *priv,
struct iwl_rx_phy_res *rx_resp)
static int iwlagn_set_pan_params(struct iwl_priv *priv)
struct iwl_hcmd_ops iwlagn_hcmd = ;
struct iwl_hcmd_ops iwlagn_bt_hcmd = ;
struct iwl_hcmd_utils_ops iwlagn_hcmd_utils = ;
