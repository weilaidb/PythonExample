#define MII_READ_DELAY 10000
#define TSI108_RXRING_LEN     256
#define TSI108_RXBUF_SIZE     1536
#define TSI108_TXRING_LEN     256
#define TSI108_TX_INT_FREQ    64
#define CHECK_PHY_INTERVAL (HZ/2)
static int tsi108_init_one(struct platform_device *pdev);
static int tsi108_ether_remove(struct platform_device *pdev);
struct tsi108_prv_data ;
static struct platform_driver tsi_eth_driver = ;
static void tsi108_timed_checker(unsigned long dev_ptr);
static void dump_eth_one(struct net_device *dev)
static DEFINE_SPINLOCK(phy_lock);
static int tsi108_read_mii(struct tsi108_prv_data *data, int reg)
static void tsi108_write_mii(struct tsi108_prv_data *data,
int reg, u16 val)
static int tsi108_mdio_read(struct net_device *dev, int addr, int reg)
static void tsi108_mdio_write(struct net_device *dev, int addr, int reg, int val)
static inline void tsi108_write_tbi(struct tsi108_prv_data *data,
int reg, u16 val)
static int mii_speed(struct mii_if_info *mii)
static void tsi108_check_phy(struct net_device *dev)
static inline void
tsi108_stat_carry_one(int carry, int carry_bit, int carry_shift,
unsigned long *upper)
static void tsi108_stat_carry(struct net_device *dev)
static inline unsigned long
tsi108_read_stat(struct tsi108_prv_data * data, int reg, int carry_bit,
int carry_shift, unsigned long *upper)
static struct net_device_stats *tsi108_get_stats(struct net_device *dev)
static void tsi108_restart_rx(struct tsi108_prv_data * data, struct net_device *dev)
static void tsi108_restart_tx(struct tsi108_prv_data * data)
static void tsi108_complete_tx(struct net_device *dev)
static int tsi108_send_packet(struct sk_buff * skb, struct net_device *dev)
static int tsi108_complete_rx(struct net_device *dev, int budget)
static int tsi108_refill_rx(struct net_device *dev, int budget)
static int tsi108_poll(struct napi_struct *napi, int budget)
static void tsi108_rx_int(struct net_device *dev)
static void tsi108_check_rxring(struct net_device *dev)
static void tsi108_tx_int(struct net_device *dev)
static irqreturn_t tsi108_irq(int irq, void *dev_id)
static void tsi108_stop_ethernet(struct net_device *dev)
static void tsi108_reset_ether(struct tsi108_prv_data * data)
static int tsi108_get_mac(struct net_device *dev)
static int tsi108_set_mac(struct net_device *dev, void *addr)
static void tsi108_set_rx_mode(struct net_device *dev)
static void tsi108_init_phy(struct net_device *dev)
static void tsi108_kill_phy(struct net_device *dev)
static int tsi108_open(struct net_device *dev)
static int tsi108_close(struct net_device *dev)
static void tsi108_init_mac(struct net_device *dev)
static int tsi108_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int tsi108_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int tsi108_do_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static const struct ethtool_ops tsi108_ethtool_ops = ;
static const struct net_device_ops tsi108_netdev_ops = ;
static int
tsi108_init_one(struct platform_device *pdev)
static void tsi108_timed_checker(unsigned long dev_ptr)
static int tsi108_ether_init(void)
static int tsi108_ether_remove(struct platform_device *pdev)
static void tsi108_ether_exit(void)
module_init(tsi108_ether_init);
module_exit(tsi108_ether_exit);
MODULE_AUTHOR("Tundra Semiconductor Corporation");
MODULE_DESCRIPTION("Tsi108 Gigabit Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:tsi-ethernet");
