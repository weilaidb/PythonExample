const char *iwl_legacy_get_cmd_string(u8 cmd)
EXPORT_SYMBOL(iwl_legacy_get_cmd_string);
#define HOST_COMPLETE_TIMEOUT (HZ / 2)
static void iwl_legacy_generic_cmd_callback(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct iwl_rx_packet *pkt)
static int
iwl_legacy_send_cmd_async(struct iwl_priv *priv, struct iwl_host_cmd *cmd)
int iwl_legacy_send_cmd_sync(struct iwl_priv *priv, struct iwl_host_cmd *cmd)
EXPORT_SYMBOL(iwl_legacy_send_cmd_sync);
int iwl_legacy_send_cmd(struct iwl_priv *priv, struct iwl_host_cmd *cmd)
EXPORT_SYMBOL(iwl_legacy_send_cmd);
int
iwl_legacy_send_cmd_pdu(struct iwl_priv *priv, u8 id, u16 len, const void *data)
EXPORT_SYMBOL(iwl_legacy_send_cmd_pdu);
int iwl_legacy_send_cmd_pdu_async(struct iwl_priv *priv,
u8 id, u16 len, const void *data,
void (*callback)(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct iwl_rx_packet *pkt))
EXPORT_SYMBOL(iwl_legacy_send_cmd_pdu_async);
