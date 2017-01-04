struct iwl_power_vec_entry ;
static void iwl_legacy_power_sleep_cam_cmd(struct iwl_priv *priv,
struct iwl_powertable_cmd *cmd)
static int
iwl_legacy_set_power(struct iwl_priv *priv, struct iwl_powertable_cmd *cmd)
int
iwl_legacy_power_set_mode(struct iwl_priv *priv, struct iwl_powertable_cmd *cmd,
bool force)
int iwl_legacy_power_update_mode(struct iwl_priv *priv, bool force)
EXPORT_SYMBOL(iwl_legacy_power_update_mode);
void iwl_legacy_power_initialize(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_power_initialize);
