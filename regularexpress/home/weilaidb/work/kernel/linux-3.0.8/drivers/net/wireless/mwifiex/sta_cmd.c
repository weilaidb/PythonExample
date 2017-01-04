static int
mwifiex_cmd_802_11_rssi_info(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd, u16 cmd_action)
static int mwifiex_cmd_mac_control(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf)
static int mwifiex_cmd_802_11_snmp_mib(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action, u32 cmd_oid,
void *data_buf)
static int
mwifiex_cmd_802_11_get_log(struct host_cmd_ds_command *cmd)
static int mwifiex_cmd_tx_rate_cfg(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf)
static int mwifiex_cmd_tx_power_cfg(struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf)
static int mwifiex_cmd_802_11_hs_cfg(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action,
struct mwifiex_hs_config_param *data_buf)
static int mwifiex_cmd_802_11_mac_address(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action)
static int mwifiex_cmd_mac_multicast_adr(struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf)
static int mwifiex_cmd_802_11_deauthenticate(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
void *data_buf)
static int mwifiex_cmd_802_11_ad_hoc_stop(struct host_cmd_ds_command *cmd)
static int
mwifiex_set_keyparamset_wep(struct mwifiex_private *priv,
struct mwifiex_ie_type_key_param_set *key_param_set,
u16 *key_param_len)
static int mwifiex_cmd_802_11_key_material(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action,
u32 cmd_oid, void *data_buf)
static int mwifiex_cmd_802_11d_domain_info(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action)
static int mwifiex_cmd_802_11_rf_channel(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf)
static int mwifiex_cmd_ibss_coalescing_status(struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf)
static int mwifiex_cmd_reg_access(struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf)
int mwifiex_sta_prepare_cmd(struct mwifiex_private *priv, uint16_t cmd_no,
u16 cmd_action, u32 cmd_oid,
void *data_buf, void *cmd_buf)
int mwifiex_sta_init_cmd(struct mwifiex_private *priv, u8 first_sta)
