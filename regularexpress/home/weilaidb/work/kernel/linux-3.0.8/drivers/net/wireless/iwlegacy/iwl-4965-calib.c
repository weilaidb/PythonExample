struct statistics_general_data ;
void iwl4965_calib_free_results(struct iwl_priv *priv)
static int iwl4965_sens_energy_cck(struct iwl_priv *priv,
u32 norm_fa,
u32 rx_enable_time,
struct statistics_general_data *rx_info)
static int iwl4965_sens_auto_corr_ofdm(struct iwl_priv *priv,
u32 norm_fa,
u32 rx_enable_time)
static void iwl4965_prepare_legacy_sensitivity_tbl(struct iwl_priv *priv,
struct iwl_sensitivity_data *data,
__le16 *tbl)
static int iwl4965_sensitivity_write(struct iwl_priv *priv)
void iwl4965_init_sensitivity(struct iwl_priv *priv)
void iwl4965_sensitivity_calibration(struct iwl_priv *priv, void *resp)
static inline u8 iwl4965_find_first_chain(u8 mask)
static void
iwl4965_find_disconn_antenna(struct iwl_priv *priv, u32* average_sig,
struct iwl_chain_noise_data *data)
static void iwl4965_gain_computation(struct iwl_priv *priv,
u32 *average_noise,
u16 min_average_noise_antenna_i,
u32 min_average_noise,
u8 default_chain)
void iwl4965_chain_noise_calibration(struct iwl_priv *priv, void *stat_resp)
void iwl4965_reset_run_time_calib(struct iwl_priv *priv)
