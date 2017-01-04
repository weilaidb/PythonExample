static struct iwm_conf def_iwm_conf = ;
static int modparam_reset;
module_param_named(reset, modparam_reset, bool, 0644);
MODULE_PARM_DESC(reset, "reset on firmware errors (default 0 [not reset])");
static int modparam_wimax_enable = 1;
module_param_named(wimax_enable, modparam_wimax_enable, bool, 0644);
MODULE_PARM_DESC(wimax_enable, "Enable wimax core (default 1 [wimax enabled])");
int iwm_mode_to_nl80211_iftype(int mode)
static void iwm_statistics_request(struct work_struct *work)
static void iwm_disconnect_work(struct work_struct *work)
static void iwm_ct_kill_work(struct work_struct *work)
static int __iwm_up(struct iwm_priv *iwm);
static int __iwm_down(struct iwm_priv *iwm);
static void iwm_reset_worker(struct work_struct *work)
static void iwm_auth_retry_worker(struct work_struct *work)
static void iwm_watchdog(unsigned long data)
int iwm_priv_init(struct iwm_priv *iwm)
void iwm_priv_deinit(struct iwm_priv *iwm)
void iwm_reset(struct iwm_priv *iwm)
void iwm_resetting(struct iwm_priv *iwm)
int iwm_notif_send(struct iwm_priv *iwm, struct iwm_wifi_cmd *cmd,
u8 cmd_id, u8 source, u8 *buf, unsigned long buf_size)
static struct iwm_notif *iwm_notif_find(struct iwm_priv *iwm, u32 cmd,
u8 source)
static struct iwm_notif *iwm_notif_wait(struct iwm_priv *iwm, u32 cmd,
u8 source, long timeout)
int iwm_notif_handle(struct iwm_priv *iwm, u32 cmd, u8 source, long timeout)
static int iwm_config_boot_params(struct iwm_priv *iwm)
void iwm_init_default_profile(struct iwm_priv *iwm,
struct iwm_umac_profile *profile)
void iwm_link_on(struct iwm_priv *iwm)
void iwm_link_off(struct iwm_priv *iwm)
static void iwm_bss_list_clean(struct iwm_priv *iwm)
static int iwm_channels_init(struct iwm_priv *iwm)
static int __iwm_up(struct iwm_priv *iwm)
int iwm_up(struct iwm_priv *iwm)
static int __iwm_down(struct iwm_priv *iwm)
int iwm_down(struct iwm_priv *iwm)
