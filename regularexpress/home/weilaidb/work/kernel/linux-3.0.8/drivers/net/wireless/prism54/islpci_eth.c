void
islpci_eth_cleanup_transmit(islpci_private *priv,
isl38xx_control_block *control_block)
netdev_tx_t
islpci_eth_transmit(struct sk_buff *skb, struct net_device *ndev)
static inline int
islpci_monitor_rx(islpci_private *priv, struct sk_buff **skb)
int
islpci_eth_receive(islpci_private *priv)
void
islpci_do_reset_and_wake(struct work_struct *work)
void
islpci_eth_tx_timeout(struct net_device *ndev)
