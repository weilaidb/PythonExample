#define DRV_NAME "octeon_mgmt"
#define DRV_VERSION "2.0"
#define DRV_DESCRIPTION \
"Cavium Networks Octeon MII (management) port Network Driver"
#define OCTEON_MGMT_NAPI_WEIGHT 16
#define OCTEON_MGMT_RX_RING_SIZE 512
#define OCTEON_MGMT_TX_RING_SIZE 128
#define OCTEON_MGMT_RX_HEADROOM (ETH_HLEN + ETH_FCS_LEN + VLAN_HLEN)
union mgmt_port_ring_entry ;
struct octeon_mgmt ;
static void octeon_mgmt_set_rx_irq(struct octeon_mgmt *p, int enable)
static void octeon_mgmt_set_tx_irq(struct octeon_mgmt *p, int enable)
static inline void octeon_mgmt_enable_rx_irq(struct octeon_mgmt *p)
static inline void octeon_mgmt_disable_rx_irq(struct octeon_mgmt *p)
static inline void octeon_mgmt_enable_tx_irq(struct octeon_mgmt *p)
static inline void octeon_mgmt_disable_tx_irq(struct octeon_mgmt *p)
static unsigned int ring_max_fill(unsigned int ring_size)
static unsigned int ring_size_to_bytes(unsigned int ring_size)
static void octeon_mgmt_rx_fill_ring(struct net_device *netdev)
static void octeon_mgmt_clean_tx_buffers(struct octeon_mgmt *p)
static void octeon_mgmt_clean_tx_tasklet(unsigned long arg)
static void octeon_mgmt_update_rx_stats(struct net_device *netdev)
static void octeon_mgmt_update_tx_stats(struct net_device *netdev)
static u64 octeon_mgmt_dequeue_rx_buffer(struct octeon_mgmt *p,
struct sk_buff **pskb)
static int octeon_mgmt_receive_one(struct octeon_mgmt *p)
static int octeon_mgmt_receive_packets(struct octeon_mgmt *p, int budget)
static int octeon_mgmt_napi_poll(struct napi_struct *napi, int budget)
static void octeon_mgmt_reset_hw(struct octeon_mgmt *p)
struct octeon_mgmt_cam_state ;
static void octeon_mgmt_cam_state_add(struct octeon_mgmt_cam_state *cs,
unsigned char *addr)
static void octeon_mgmt_set_rx_filtering(struct net_device *netdev)
static int octeon_mgmt_set_mac_address(struct net_device *netdev, void *addr)
static int octeon_mgmt_change_mtu(struct net_device *netdev, int new_mtu)
static irqreturn_t octeon_mgmt_interrupt(int cpl, void *dev_id)
static int octeon_mgmt_ioctl(struct net_device *netdev,
struct ifreq *rq, int cmd)
static void octeon_mgmt_adjust_link(struct net_device *netdev)
static int octeon_mgmt_init_phy(struct net_device *netdev)
static int octeon_mgmt_open(struct net_device *netdev)
static int octeon_mgmt_stop(struct net_device *netdev)
static int octeon_mgmt_xmit(struct sk_buff *skb, struct net_device *netdev)
static void octeon_mgmt_poll_controller(struct net_device *netdev)
static void octeon_mgmt_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *info)
static int octeon_mgmt_get_settings(struct net_device *netdev,
struct ethtool_cmd *cmd)
static int octeon_mgmt_set_settings(struct net_device *netdev,
struct ethtool_cmd *cmd)
static const struct ethtool_ops octeon_mgmt_ethtool_ops = ;
static const struct net_device_ops octeon_mgmt_ops = ;
static int __devinit octeon_mgmt_probe(struct platform_device *pdev)
static int __devexit octeon_mgmt_remove(struct platform_device *pdev)
static struct platform_driver octeon_mgmt_driver = ;
extern void octeon_mdiobus_force_mod_depencency(void);
static int __init octeon_mgmt_mod_init(void)
static void __exit octeon_mgmt_mod_exit(void)
module_init(octeon_mgmt_mod_init);
module_exit(octeon_mgmt_mod_exit);
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR("David Daney");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
