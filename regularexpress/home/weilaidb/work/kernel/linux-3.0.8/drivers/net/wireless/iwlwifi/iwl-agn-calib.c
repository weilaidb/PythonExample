struct statistics_general_data ;
int iwl_send_calib_results(struct iwl_priv *priv)
int iwl_calib_set(struct iwl_calib_result *res, const u8 *buf, int len)
void iwl_calib_free_results(struct iwl_priv *priv)
static int iwl_sens_energy_cck(struct iwl_priv *priv,
u32 norm_fa,
u32 rx_enable_time,
struct statistics_general_data *rx_info)
static int iwl_sens_auto_corr_ofdm(struct iwl_priv *priv,
u32 norm_fa,
u32 rx_enable_time)
static void iwl_prepare_legacy_sensitivity_tbl(struct iwl_priv *priv,
struct iwl_sensitivity_data *data,
__le16 *tbl)
static int iwl_sensitivity_write(struct iwl_priv *priv)
static int iwl_enhance_sensitivity_write(struct iwl_priv *priv)
void iwl_init_sensitivity(struct iwl_priv *priv)
void iwl_sensitivity_calibration(struct iwl_priv *priv)
static inline u8 find_first_chain(u8 mask)
static void iwl_find_disconn_antenna(struct iwl_priv *priv, u32* average_sig,
struct iwl_chain_noise_data *data)
void iwl_chain_noise_calibration(struct iwl_priv *priv)
void iwl_reset_run_time_calib(struct iwl_priv *priv)
