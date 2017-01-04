#define __iwl_calib_h__
void iwl_chain_noise_calibration(struct iwl_priv *priv);
void iwl_sensitivity_calibration(struct iwl_priv *priv);
void iwl_init_sensitivity(struct iwl_priv *priv);
void iwl_reset_run_time_calib(struct iwl_priv *priv);
static inline void iwl_chain_noise_reset(struct iwl_priv *priv)
int iwl_send_calib_results(struct iwl_priv *priv);
int iwl_calib_set(struct iwl_calib_result *res, const u8 *buf, int len);
void iwl_calib_free_results(struct iwl_priv *priv);
