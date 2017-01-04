static void
mwifiex_init_cmd_node(struct mwifiex_private *priv,
struct cmd_ctrl_node *cmd_node,
u32 cmd_oid, void *data_buf)
static struct cmd_ctrl_node *
mwifiex_get_cmd_node(struct mwifiex_adapter *adapter)
static void
mwifiex_clean_cmd_node(struct mwifiex_adapter *adapter,
struct cmd_ctrl_node *cmd_node)
static int mwifiex_cmd_host_cmd(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd, void *data_buf)
static int mwifiex_dnld_cmd_to_fw(struct mwifiex_private *priv,
struct cmd_ctrl_node *cmd_node)
static int mwifiex_dnld_sleep_confirm_cmd(struct mwifiex_adapter *adapter)
int mwifiex_alloc_cmd_buffer(struct mwifiex_adapter *adapter)
int mwifiex_free_cmd_buffer(struct mwifiex_adapter *adapter)
int mwifiex_process_event(struct mwifiex_adapter *adapter)
int mwifiex_send_cmd_sync(struct mwifiex_private *priv, uint16_t cmd_no,
u16 cmd_action, u32 cmd_oid, void *data_buf)
int mwifiex_send_cmd_async(struct mwifiex_private *priv, uint16_t cmd_no,
u16 cmd_action, u32 cmd_oid, void *data_buf)
void
mwifiex_insert_cmd_to_free_q(struct mwifiex_adapter *adapter,
struct cmd_ctrl_node *cmd_node)
void
mwifiex_insert_cmd_to_pending_q(struct mwifiex_adapter *adapter,
struct cmd_ctrl_node *cmd_node, u32 add_tail)
int mwifiex_exec_next_cmd(struct mwifiex_adapter *adapter)
int mwifiex_process_cmdresp(struct mwifiex_adapter *adapter)
void
mwifiex_cmd_timeout_func(unsigned long function_context)
void
mwifiex_cancel_all_pending_cmd(struct mwifiex_adapter *adapter)
void
mwifiex_cancel_pending_ioctl(struct mwifiex_adapter *adapter)
void
mwifiex_check_ps_cond(struct mwifiex_adapter *adapter)
void
mwifiex_hs_activated_event(struct mwifiex_private *priv, u8 activated)
int mwifiex_ret_802_11_hs_cfg(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
void
mwifiex_process_hs_config(struct mwifiex_adapter *adapter)
void
mwifiex_process_sleep_confirm_resp(struct mwifiex_adapter *adapter,
u8 *pbuf, u32 upld_len)
EXPORT_SYMBOL_GPL(mwifiex_process_sleep_confirm_resp);
int mwifiex_cmd_enh_power_mode(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
u16 cmd_action, uint16_t ps_bitmap,
void *data_buf)
int mwifiex_ret_enh_power_mode(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp,
void *data_buf)
int mwifiex_cmd_get_hw_spec(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd)
int mwifiex_ret_get_hw_spec(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
