#define __iwl_tt_setting_h__
#define IWL_ABSOLUTE_ZERO		0
#define IWL_ABSOLUTE_MAX		0xFFFFFFFF
#define IWL_TT_INCREASE_MARGIN	5
#define IWL_TT_CT_KILL_MARGIN	3
enum iwl_antenna_ok ;
enum  iwl_tt_state ;
struct iwl_tt_restriction ;
struct iwl_tt_trans ;
struct iwl_tt_mgmt ;
u8 iwl_tt_current_power_mode(struct iwl_priv *priv);
bool iwl_tt_is_low_power_state(struct iwl_priv *priv);
bool iwl_ht_enabled(struct iwl_priv *priv);
bool iwl_check_for_ct_kill(struct iwl_priv *priv);
enum iwl_antenna_ok iwl_tx_ant_restriction(struct iwl_priv *priv);
enum iwl_antenna_ok iwl_rx_ant_restriction(struct iwl_priv *priv);
void iwl_tt_enter_ct_kill(struct iwl_priv *priv);
void iwl_tt_exit_ct_kill(struct iwl_priv *priv);
void iwl_tt_handler(struct iwl_priv *priv);
void iwl_tt_initialize(struct iwl_priv *priv);
void iwl_tt_exit(struct iwl_priv *priv);
