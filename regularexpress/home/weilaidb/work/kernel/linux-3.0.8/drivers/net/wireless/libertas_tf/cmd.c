#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static const struct channel_range channel_ranges[] = ;
static u16 lbtf_region_code_to_index[MRVDRV_MAX_REGION_CODE] =
;
static struct cmd_ctrl_node *lbtf_get_cmd_ctrl_node(struct lbtf_private *priv);
int lbtf_cmd_copyback(struct lbtf_private *priv, unsigned long extra,
struct cmd_header *resp)
EXPORT_SYMBOL_GPL(lbtf_cmd_copyback);
#define CHAN_TO_IDX(chan) ((chan) - 1)
static void lbtf_geo_init(struct lbtf_private *priv)
int lbtf_update_hw_spec(struct lbtf_private *priv)
int lbtf_set_channel(struct lbtf_private *priv, u8 channel)
int lbtf_beacon_set(struct lbtf_private *priv, struct sk_buff *beacon)
int lbtf_beacon_ctrl(struct lbtf_private *priv, bool beacon_enable,
int beacon_int)
static void lbtf_queue_cmd(struct lbtf_private *priv,
struct cmd_ctrl_node *cmdnode)
static void lbtf_submit_command(struct lbtf_private *priv,
struct cmd_ctrl_node *cmdnode)
static void __lbtf_cleanup_and_insert_cmd(struct lbtf_private *priv,
struct cmd_ctrl_node *cmdnode)
static void lbtf_cleanup_and_insert_cmd(struct lbtf_private *priv,
struct cmd_ctrl_node *ptempcmd)
void lbtf_complete_command(struct lbtf_private *priv, struct cmd_ctrl_node *cmd,
int result)
int lbtf_cmd_set_mac_multicast_addr(struct lbtf_private *priv)
void lbtf_set_mode(struct lbtf_private *priv, enum lbtf_mode mode)
void lbtf_set_bssid(struct lbtf_private *priv, bool activate, const u8 *bssid)
int lbtf_set_mac_address(struct lbtf_private *priv, uint8_t *mac_addr)
int lbtf_set_radio_control(struct lbtf_private *priv)
void lbtf_set_mac_control(struct lbtf_private *priv)
int lbtf_allocate_cmd_buffer(struct lbtf_private *priv)
int lbtf_free_cmd_buffer(struct lbtf_private *priv)
static struct cmd_ctrl_node *lbtf_get_cmd_ctrl_node(struct lbtf_private *priv)
int lbtf_execute_next_command(struct lbtf_private *priv)
static struct cmd_ctrl_node *__lbtf_cmd_async(struct lbtf_private *priv,
uint16_t command, struct cmd_header *in_cmd, int in_cmd_size,
int (*callback)(struct lbtf_private *, unsigned long,
struct cmd_header *),
unsigned long callback_arg)
void lbtf_cmd_async(struct lbtf_private *priv, uint16_t command,
struct cmd_header *in_cmd, int in_cmd_size)
int __lbtf_cmd(struct lbtf_private *priv, uint16_t command,
struct cmd_header *in_cmd, int in_cmd_size,
int (*callback)(struct lbtf_private *,
unsigned long, struct cmd_header *),
unsigned long callback_arg)
EXPORT_SYMBOL_GPL(__lbtf_cmd);
void lbtf_cmd_response_rx(struct lbtf_private *priv)
EXPORT_SYMBOL_GPL(lbtf_cmd_response_rx);
int lbtf_process_rx_command(struct lbtf_private *priv)
