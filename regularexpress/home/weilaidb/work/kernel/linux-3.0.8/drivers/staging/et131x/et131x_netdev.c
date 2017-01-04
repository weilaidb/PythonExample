struct net_device_stats *et131x_stats(struct net_device *netdev);
int et131x_open(struct net_device *netdev);
int et131x_close(struct net_device *netdev);
int et131x_ioctl(struct net_device *netdev, struct ifreq *reqbuf, int cmd);
void et131x_multicast(struct net_device *netdev);
int et131x_tx(struct sk_buff *skb, struct net_device *netdev);
void et131x_tx_timeout(struct net_device *netdev);
int et131x_change_mtu(struct net_device *netdev, int new_mtu);
int et131x_set_mac_addr(struct net_device *netdev, void *new_mac);
void et131x_vlan_rx_register(struct net_device *netdev, struct vlan_group *grp);
void et131x_vlan_rx_add_vid(struct net_device *netdev, uint16_t vid);
void et131x_vlan_rx_kill_vid(struct net_device *netdev, uint16_t vid);
static const struct net_device_ops et131x_netdev_ops = ;
struct net_device *et131x_device_alloc(void)
struct net_device_stats *et131x_stats(struct net_device *netdev)
int et131x_open(struct net_device *netdev)
int et131x_close(struct net_device *netdev)
int et131x_ioctl_mii(struct net_device *netdev, struct ifreq *reqbuf, int cmd)
int et131x_ioctl(struct net_device *netdev, struct ifreq *reqbuf, int cmd)
int et131x_set_packet_filter(struct et131x_adapter *adapter)
void et131x_multicast(struct net_device *netdev)
int et131x_tx(struct sk_buff *skb, struct net_device *netdev)
void et131x_tx_timeout(struct net_device *netdev)
int et131x_change_mtu(struct net_device *netdev, int new_mtu)
int et131x_set_mac_addr(struct net_device *netdev, void *new_mac)
