int mwifiex_handle_rx_packet(struct mwifiex_adapter *adapter,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(mwifiex_handle_rx_packet);
int mwifiex_process_tx(struct mwifiex_private *priv, struct sk_buff *skb,
struct mwifiex_tx_param *tx_param)
int mwifiex_write_data_complete(struct mwifiex_adapter *adapter,
struct sk_buff *skb, int status)
int mwifiex_recv_packet_complete(struct mwifiex_adapter *adapter,
struct sk_buff *skb, int status)
