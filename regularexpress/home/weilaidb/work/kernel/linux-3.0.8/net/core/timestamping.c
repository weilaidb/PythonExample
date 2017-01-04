static struct sock_filter ptp_filter[] = ;
static unsigned int classify(const struct sk_buff *skb)
void skb_clone_tx_timestamp(struct sk_buff *skb)
void skb_complete_tx_timestamp(struct sk_buff *skb,
struct skb_shared_hwtstamps *hwtstamps)
EXPORT_SYMBOL_GPL(skb_complete_tx_timestamp);
bool skb_defer_rx_timestamp(struct sk_buff *skb)
void __init skb_timestamping_init(void)
