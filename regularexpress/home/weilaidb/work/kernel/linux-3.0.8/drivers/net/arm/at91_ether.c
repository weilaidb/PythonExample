#define DRV_NAME	"at91_ether"
#define DRV_VERSION	"1.0"
#define LINK_POLL_INTERVAL	(HZ)
static inline unsigned long at91_emac_read(unsigned int reg)
static inline void at91_emac_write(unsigned int reg, unsigned long value)
static void enable_mdi(void)
static void disable_mdi(void)
static inline void at91_phy_wait(void)
static void write_phy(unsigned char phy_addr, unsigned char address, unsigned int value)
static void read_phy(unsigned char phy_addr, unsigned char address, unsigned int *value)
static void update_linkspeed(struct net_device *dev, int silent)
static irqreturn_t at91ether_phy_interrupt(int irq, void *dev_id)
static void enable_phyirq(struct net_device *dev)
static void disable_phyirq(struct net_device *dev)
static void at91ether_check_link(unsigned long dev_id)
static short __init unpack_mac_address(struct net_device *dev, unsigned int hi, unsigned int lo)
static void __init get_mac_address(struct net_device *dev)
static void update_mac_address(struct net_device *dev)
static int set_mac_address(struct net_device *dev, void* addr)
static int inline hash_bit_value(int bitnr, __u8 *addr)
static int hash_get_index(__u8 *addr)
static void at91ether_sethashtable(struct net_device *dev)
static void at91ether_set_multicast_list(struct net_device *dev)
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int location, int value)
static int at91ether_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int at91ether_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int at91ether_nwayreset(struct net_device *dev)
static void at91ether_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static const struct ethtool_ops at91ether_ethtool_ops = ;
static int at91ether_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void at91ether_start(struct net_device *dev)
static int at91ether_open(struct net_device *dev)
static int at91ether_close(struct net_device *dev)
static int at91ether_start_xmit(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *at91ether_stats(struct net_device *dev)
static void at91ether_rx(struct net_device *dev)
static irqreturn_t at91ether_interrupt(int irq, void *dev_id)
static void at91ether_poll_controller(struct net_device *dev)
static const struct net_device_ops at91ether_netdev_ops = ;
static int __init at91ether_setup(unsigned long phy_type, unsigned short phy_address,
struct platform_device *pdev, struct clk *ether_clk)
static int __init at91ether_probe(struct platform_device *pdev)
static int __devexit at91ether_remove(struct platform_device *pdev)
static int at91ether_suspend(struct platform_device *pdev, pm_message_t mesg)
static int at91ether_resume(struct platform_device *pdev)
#define at91ether_suspend	NULL
#define at91ether_resume	NULL
static struct platform_driver at91ether_driver = ;
static int __init at91ether_init(void)
static void __exit at91ether_exit(void)
module_init(at91ether_init)
module_exit(at91ether_exit)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("AT91RM9200 EMAC Ethernet driver");
MODULE_AUTHOR("Andrew Victor");
MODULE_ALIAS("platform:" DRV_NAME);
