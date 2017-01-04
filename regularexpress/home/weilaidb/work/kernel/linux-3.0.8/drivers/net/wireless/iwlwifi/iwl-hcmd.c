const char *get_cmd_string(u8 cmd)
#define HOST_COMPLETE_TIMEOUT (HZ / 2)
static void iwl_generic_cmd_callback(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct iwl_rx_packet *pkt)
static int iwl_send_cmd_async(struct iwl_priv *priv, struct iwl_host_cmd *cmd)
int iwl_send_cmd_sync(struct iwl_priv *priv, struct iwl_host_cmd *cmd)
int iwl_send_cmd(struct iwl_priv *priv, struct iwl_host_cmd *cmd)
int iwl_send_cmd_pdu(struct iwl_priv *priv, u8 id, u16 len, const void *data)
int iwl_send_cmd_pdu_async(struct iwl_priv *priv,
u8 id, u16 len, const void *data,
void (*callback)(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct iwl_rx_packet *pkt))
