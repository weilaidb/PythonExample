#define __iwl_legacy_power_setting_h__
enum iwl_power_level ;
struct iwl_power_mgr ;
int
iwl_legacy_power_set_mode(struct iwl_priv *priv, struct iwl_powertable_cmd *cmd,
bool force);
int iwl_legacy_power_update_mode(struct iwl_priv *priv, bool force);
void iwl_legacy_power_initialize(struct iwl_priv *priv);
