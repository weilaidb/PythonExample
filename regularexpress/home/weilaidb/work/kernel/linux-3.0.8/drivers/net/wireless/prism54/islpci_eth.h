#define _ISLPCI_ETH_H
struct rfmon_header  __packed;
struct rx_annex_header  __packed;
#define P80211CAPTURE_VERSION 0x80211001
struct avs_80211_1_header ;
void islpci_eth_cleanup_transmit(islpci_private *, isl38xx_control_block *);
netdev_tx_t islpci_eth_transmit(struct sk_buff *, struct net_device *);
int islpci_eth_receive(islpci_private *);
void islpci_eth_tx_timeout(struct net_device *);
void islpci_do_reset_and_wake(struct work_struct *);
