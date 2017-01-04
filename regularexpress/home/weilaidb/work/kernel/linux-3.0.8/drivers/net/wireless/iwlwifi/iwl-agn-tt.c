static const struct iwl_tt_trans tt_range_0[IWL_TI_STATE_MAX - 1] = ;
static const struct iwl_tt_trans tt_range_1[IWL_TI_STATE_MAX - 1] = ;
static const struct iwl_tt_trans tt_range_2[IWL_TI_STATE_MAX - 1] = ;
static const struct iwl_tt_trans tt_range_3[IWL_TI_STATE_MAX - 1] = ;
static const struct iwl_tt_restriction restriction_range[IWL_TI_STATE_MAX] = ;
bool iwl_tt_is_low_power_state(struct iwl_priv *priv)
u8 iwl_tt_current_power_mode(struct iwl_priv *priv)
bool iwl_ht_enabled(struct iwl_priv *priv)
static bool iwl_within_ct_kill_margin(struct iwl_priv *priv)
bool iwl_check_for_ct_kill(struct iwl_priv *priv)
enum iwl_antenna_ok iwl_tx_ant_restriction(struct iwl_priv *priv)
enum iwl_antenna_ok iwl_rx_ant_restriction(struct iwl_priv *priv)
#define CT_KILL_EXIT_DURATION (5)
#define CT_KILL_WAITING_DURATION (300)
static void iwl_tt_check_exit_ct_kill(unsigned long data)
static void iwl_perform_ct_kill_task(struct iwl_priv *priv,
bool stop)
static void iwl_tt_ready_for_ct_kill(unsigned long data)
static void iwl_prepare_ct_kill_task(struct iwl_priv *priv)
#define IWL_MINIMAL_POWER_THRESHOLD		(CT_KILL_THRESHOLD_LEGACY)
#define IWL_REDUCED_PERFORMANCE_THRESHOLD_2	(100)
#define IWL_REDUCED_PERFORMANCE_THRESHOLD_1	(90)
static void iwl_legacy_tt_handler(struct iwl_priv *priv, s32 temp, bool force)
static void iwl_advance_tt_handler(struct iwl_priv *priv, s32 temp, bool force)
static void iwl_bg_ct_enter(struct work_struct *work)
static void iwl_bg_ct_exit(struct work_struct *work)
void iwl_tt_enter_ct_kill(struct iwl_priv *priv)
void iwl_tt_exit_ct_kill(struct iwl_priv *priv)
static void iwl_bg_tt_work(struct work_struct *work)
void iwl_tt_handler(struct iwl_priv *priv)
void iwl_tt_initialize(struct iwl_priv *priv)
void iwl_tt_exit(struct iwl_priv *priv)
