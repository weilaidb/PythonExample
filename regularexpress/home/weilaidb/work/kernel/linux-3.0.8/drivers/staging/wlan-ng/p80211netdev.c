static void p80211netdev_rx_bh(unsigned long arg);
static int p80211knetdev_init(netdevice_t *netdev);
static struct net_device_stats *p80211knetdev_get_stats(netdevice_t *netdev);
static int p80211knetdev_open(netdevice_t *netdev);
static int p80211knetdev_stop(netdevice_t *netdev);
static int p80211knetdev_hard_start_xmit(struct sk_buff *skb,
netdevice_t *netdev);
static void p80211knetdev_set_multicast_list(netdevice_t *dev);
static int p80211knetdev_do_ioctl(netdevice_t *dev, struct ifreq *ifr,
int cmd);
static int p80211knetdev_set_mac_address(netdevice_t *dev, void *addr);
static void p80211knetdev_tx_timeout(netdevice_t *netdev);
static int p80211_rx_typedrop(wlandevice_t *wlandev, u16 fc);
int wlan_watchdog = 5000;
module_param(wlan_watchdog, int, 0644);
MODULE_PARM_DESC(wlan_watchdog, "transmit timeout in milliseconds");
int wlan_wext_write = 1;
module_param(wlan_wext_write, int, 0644);
MODULE_PARM_DESC(wlan_wext_write, "enable write wireless extensions");
static int p80211knetdev_init(netdevice_t *netdev)
static struct net_device_stats *p80211knetdev_get_stats(netdevice_t * netdev)
static int p80211knetdev_open(netdevice_t *netdev)
static int p80211knetdev_stop(netdevice_t *netdev)
void p80211netdev_rx(wlandevice_t *wlandev, struct sk_buff *skb)
static void p80211netdev_rx_bh(unsigned long arg)
static int p80211knetdev_hard_start_xmit(struct sk_buff *skb,
netdevice_t *netdev)
static void p80211knetdev_set_multicast_list(netdevice_t *dev)
static int p80211netdev_ethtool(wlandevice_t *wlandev, void __user *useraddr)
static int p80211knetdev_do_ioctl(netdevice_t *dev, struct ifreq *ifr, int cmd)
static int p80211knetdev_set_mac_address(netdevice_t *dev, void *addr)
static int wlan_change_mtu(netdevice_t *dev, int new_mtu)
static const struct net_device_ops p80211_netdev_ops = ;
int wlan_setup(wlandevice_t *wlandev, struct device *physdev)
int wlan_unsetup(wlandevice_t *wlandev)
int register_wlandev(wlandevice_t *wlandev)
int unregister_wlandev(wlandevice_t *wlandev)
void p80211netdev_hwremoved(wlandevice_t *wlandev)
static int p80211_rx_typedrop(wlandevice_t *wlandev, u16 fc)
static void p80211knetdev_tx_timeout(netdevice_t *netdev)
