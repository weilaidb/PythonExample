bool no_sleep_autoadjust = true;
module_param(no_sleep_autoadjust, bool, S_IRUGO);
MODULE_PARM_DESC(no_sleep_autoadjust,
"don't automatically adjust sleep level "
"according to maximum network latency");
struct iwl_power_vec_entry ;
#define IWL_DTIM_RANGE_0_MAX	2
#define IWL_DTIM_RANGE_1_MAX	10
#define NOSLP cpu_to_le16(0), 0, 0
#define SLP IWL_POWER_DRIVER_ALLOW_SLEEP_MSK, 0, 0
#define ASLP (IWL_POWER_POWER_SAVE_ENA_MSK |	\
IWL_POWER_POWER_MANAGEMENT_ENA_MSK | \
IWL_POWER_ADVANCE_PM_ENA_MSK)
#define ASLP_TOUT(T) cpu_to_le32(T)
#define TU_TO_USEC 1024
#define SLP_TOUT(T) cpu_to_le32((T) * TU_TO_USEC)
#define SLP_VEC(X0, X1, X2, X3, X4)
static const struct iwl_power_vec_entry range_0[IWL_POWER_NUM] = ;
static const struct iwl_power_vec_entry range_1[IWL_POWER_NUM] = ;
static const struct iwl_power_vec_entry range_2[IWL_POWER_NUM] = ;
static const struct iwl_power_vec_entry apm_range_0[IWL_POWER_NUM] = ;
static const struct iwl_power_vec_entry apm_range_1[IWL_POWER_NUM] = ;
static const struct iwl_power_vec_entry apm_range_2[IWL_POWER_NUM] = ;
static void iwl_static_sleep_cmd(struct iwl_priv *priv,
struct iwl_powertable_cmd *cmd,
enum iwl_power_level lvl, int period)
static void iwl_power_sleep_cam_cmd(struct iwl_priv *priv,
struct iwl_powertable_cmd *cmd)
static void iwl_power_fill_sleep_cmd(struct iwl_priv *priv,
struct iwl_powertable_cmd *cmd,
int dynps_ms, int wakeup_period)
static int iwl_set_power(struct iwl_priv *priv, struct iwl_powertable_cmd *cmd)
static void iwl_power_build_cmd(struct iwl_priv *priv,
struct iwl_powertable_cmd *cmd)
int iwl_power_set_mode(struct iwl_priv *priv, struct iwl_powertable_cmd *cmd,
bool force)
int iwl_power_update_mode(struct iwl_priv *priv, bool force)
void iwl_power_initialize(struct iwl_priv *priv)
