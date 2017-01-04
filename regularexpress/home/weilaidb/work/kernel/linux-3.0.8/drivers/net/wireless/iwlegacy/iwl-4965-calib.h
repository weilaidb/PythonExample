#define __iwl_4965_calib_h__
void iwl4965_chain_noise_calibration(struct iwl_priv *priv, void *stat_resp);
void iwl4965_sensitivity_calibration(struct iwl_priv *priv, void *resp);
void iwl4965_init_sensitivity(struct iwl_priv *priv);
void iwl4965_reset_run_time_calib(struct iwl_priv *priv);
void iwl4965_calib_free_results(struct iwl_priv *priv);
