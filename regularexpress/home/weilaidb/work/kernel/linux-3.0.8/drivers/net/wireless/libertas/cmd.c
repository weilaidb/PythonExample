#define CAL_NF(nf)		((s32)(-(s32)(nf)))
#define CAL_RSSI(snr, nf)	((s32)((s32)(snr) + CAL_NF(nf)))
int lbs_cmd_copyback(struct lbs_private *priv, unsigned long extra,
struct cmd_header *resp)
EXPORT_SYMBOL_GPL(lbs_cmd_copyback);
static int lbs_cmd_async_callback(struct lbs_private *priv, unsigned long extra,
struct cmd_header *resp)
static u8 is_command_allowed_in_ps(u16 cmd)
int lbs_update_hw_spec(struct lbs_private *priv)
static int lbs_ret_host_sleep_cfg(struct lbs_private *priv, unsigned long dummy,
struct cmd_header *resp)
int lbs_host_sleep_cfg(struct lbs_private *priv, uint32_t criteria,
struct wol_config *p_wol_config)
EXPORT_SYMBOL_GPL(lbs_host_sleep_cfg);
int lbs_set_ps_mode(struct lbs_private *priv, u16 cmd_action, bool block)
int lbs_cmd_802_11_sleep_params(struct lbs_private *priv, uint16_t cmd_action,
struct sleep_params *sp)
static int lbs_wait_for_ds_awake(struct lbs_private *priv)
int lbs_set_deep_sleep(struct lbs_private *priv, int deep_sleep)
static int lbs_ret_host_sleep_activate(struct lbs_private *priv,
unsigned long dummy,
struct cmd_header *cmd)
int lbs_set_host_sleep(struct lbs_private *priv, int host_sleep)
int lbs_set_snmp_mib(struct lbs_private *priv, u32 oid, u16 val)
int lbs_get_snmp_mib(struct lbs_private *priv, u32 oid, u16 *out_val)
int lbs_get_tx_power(struct lbs_private *priv, s16 *curlevel, s16 *minlevel,
s16 *maxlevel)
int lbs_set_tx_power(struct lbs_private *priv, s16 dbm)
int lbs_set_monitor_mode(struct lbs_private *priv, int enable)
static int lbs_get_channel(struct lbs_private *priv)
int lbs_update_channel(struct lbs_private *priv)
int lbs_set_channel(struct lbs_private *priv, u8 channel)
int lbs_get_rssi(struct lbs_private *priv, s8 *rssi, s8 *nf)
int lbs_set_11d_domain_info(struct lbs_private *priv,
struct regulatory_request *request,
struct ieee80211_supported_band **bands)
int lbs_get_reg(struct lbs_private *priv, u16 reg, u16 offset, u32 *value)
int lbs_set_reg(struct lbs_private *priv, u16 reg, u16 offset, u32 value)
static void lbs_queue_cmd(struct lbs_private *priv,
struct cmd_ctrl_node *cmdnode)
static void lbs_submit_command(struct lbs_private *priv,
struct cmd_ctrl_node *cmdnode)
static void __lbs_cleanup_and_insert_cmd(struct lbs_private *priv,
struct cmd_ctrl_node *cmdnode)
static void lbs_cleanup_and_insert_cmd(struct lbs_private *priv,
struct cmd_ctrl_node *ptempcmd)
void lbs_complete_command(struct lbs_private *priv, struct cmd_ctrl_node *cmd,
int result)
int lbs_set_radio(struct lbs_private *priv, u8 preamble, u8 radio_on)
void lbs_set_mac_control(struct lbs_private *priv)
int lbs_allocate_cmd_buffer(struct lbs_private *priv)
int lbs_free_cmd_buffer(struct lbs_private *priv)
static struct cmd_ctrl_node *lbs_get_free_cmd_node(struct lbs_private *priv)
int lbs_execute_next_command(struct lbs_private *priv)
static void lbs_send_confirmsleep(struct lbs_private *priv)
void lbs_ps_confirm_sleep(struct lbs_private *priv)
int lbs_set_tpc_cfg(struct lbs_private *priv, int enable, int8_t p0, int8_t p1,
int8_t p2, int usesnr)
int lbs_set_power_adapt_cfg(struct lbs_private *priv, int enable, int8_t p0,
int8_t p1, int8_t p2)
struct cmd_ctrl_node *__lbs_cmd_async(struct lbs_private *priv,
uint16_t command, struct cmd_header *in_cmd, int in_cmd_size,
int (*callback)(struct lbs_private *, unsigned long, struct cmd_header *),
unsigned long callback_arg)
void lbs_cmd_async(struct lbs_private *priv, uint16_t command,
struct cmd_header *in_cmd, int in_cmd_size)
int __lbs_cmd(struct lbs_private *priv, uint16_t command,
struct cmd_header *in_cmd, int in_cmd_size,
int (*callback)(struct lbs_private *, unsigned long, struct cmd_header *),
unsigned long callback_arg)
EXPORT_SYMBOL_GPL(__lbs_cmd);
