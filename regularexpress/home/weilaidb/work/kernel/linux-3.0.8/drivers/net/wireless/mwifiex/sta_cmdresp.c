static void
mwifiex_process_cmdresp_error(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
static int mwifiex_ret_802_11_rssi_info(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf)
static int mwifiex_ret_802_11_snmp_mib(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf)
static int mwifiex_ret_get_log(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf)
static int mwifiex_ret_tx_rate_cfg(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf)
static int mwifiex_get_power_level(struct mwifiex_private *priv, void *data_buf)
static int mwifiex_ret_tx_power_cfg(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf)
static int mwifiex_ret_802_11_mac_address(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
static int mwifiex_ret_mac_multicast_adr(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
static int mwifiex_ret_802_11_tx_rate_query(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
static int mwifiex_ret_802_11_deauthenticate(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
static int mwifiex_ret_802_11_ad_hoc_stop(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
static int mwifiex_ret_802_11_key_material(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
static int mwifiex_ret_802_11d_domain_info(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
static int mwifiex_ret_802_11_rf_channel(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf)
static int mwifiex_ret_ver_ext(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf)
static int mwifiex_ret_reg_access(u16 type, struct host_cmd_ds_command *resp,
void *data_buf)
static int mwifiex_ret_ibss_coalescing_status(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
int mwifiex_process_sta_cmdresp(struct mwifiex_private *priv,
u16 cmdresp_no, void *cmd_buf)
