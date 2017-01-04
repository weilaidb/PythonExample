int mwifiex_init_fw_complete(struct mwifiex_adapter *adapter)
int mwifiex_shutdown_fw_complete(struct mwifiex_adapter *adapter)
int mwifiex_init_shutdown_fw(struct mwifiex_private *priv,
u32 func_init_shutdown)
EXPORT_SYMBOL_GPL(mwifiex_init_shutdown_fw);
int mwifiex_get_debug_info(struct mwifiex_private *priv,
struct mwifiex_debug_info *info)
int mwifiex_recv_packet(struct mwifiex_adapter *adapter, struct sk_buff *skb)
int mwifiex_complete_cmd(struct mwifiex_adapter *adapter)
