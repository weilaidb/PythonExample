#define DRV_VERSION	"1.1"
#define DRV_DESC	"Blackfin on-chip Ethernet MAC driver"
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Bryan Wu, Luke Yang");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(DRV_DESC);
MODULE_ALIAS("platform:bfin_mac");
#if defined(CONFIG_BFIN_MAC_USE_L1)
# define bfin_mac_alloc(dma_handle, size, num)  l1_data_sram_zalloc(size*num)
# define bfin_mac_free(dma_handle, ptr, num)    l1_data_sram_free(ptr)
# define bfin_mac_alloc(dma_handle, size, num) \
dma_alloc_coherent(NULL, size*num, dma_handle, GFP_KERNEL)
# define bfin_mac_free(dma_handle, ptr, num) \
dma_free_coherent(NULL, sizeof(*ptr)*num, ptr, dma_handle)
#define PKT_BUF_SZ 1580
#define MAX_TIMEOUT_CNT	500
static struct net_dma_desc_tx *tx_list_head;
static struct net_dma_desc_tx *tx_list_tail;
static struct net_dma_desc_rx *rx_list_head;
static struct net_dma_desc_rx *rx_list_tail;
static struct net_dma_desc_rx *current_rx_ptr;
static struct net_dma_desc_tx *current_tx_ptr;
static struct net_dma_desc_tx *tx_desc;
static struct net_dma_desc_rx *rx_desc;
static void desc_list_free(void)
static int desc_list_init(void)
static int bfin_mdio_poll(void)
static int bfin_mdiobus_read(struct mii_bus *bus, int phy_addr, int regnum)
static int bfin_mdiobus_write(struct mii_bus *bus, int phy_addr, int regnum,
u16 value)
static int bfin_mdiobus_reset(struct mii_bus *bus)
static void bfin_mac_adjust_link(struct net_device *dev)
#define MDC_CLK 2500000
static int mii_probe(struct net_device *dev, int phy_mode)
static irqreturn_t bfin_mac_wake_interrupt(int irq, void *dev_id)
static int
bfin_mac_ethtool_getsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
bfin_mac_ethtool_setsettings(struct net_device *dev, struct ethtool_cmd *cmd)
static void bfin_mac_ethtool_getdrvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static void bfin_mac_ethtool_getwol(struct net_device *dev,
struct ethtool_wolinfo *wolinfo)
static int bfin_mac_ethtool_setwol(struct net_device *dev,
struct ethtool_wolinfo *wolinfo)
static const struct ethtool_ops bfin_mac_ethtool_ops = ;
static void setup_system_regs(struct net_device *dev)
static void setup_mac_addr(u8 *mac_addr)
static int bfin_mac_set_mac_address(struct net_device *dev, void *p)
#define bfin_mac_hwtstamp_is_none(cfg) ((cfg) == HWTSTAMP_FILTER_NONE)
static int bfin_mac_hwtstamp_ioctl(struct net_device *netdev,
struct ifreq *ifr, int cmd)
static void bfin_dump_hwtamp(char *s, ktime_t *hw, ktime_t *ts, struct timecompare *cmp)
static void bfin_tx_hwtstamp(struct net_device *netdev, struct sk_buff *skb)
static void bfin_rx_hwtstamp(struct net_device *netdev, struct sk_buff *skb)
static cycle_t bfin_read_clock(const struct cyclecounter *tc)
#define PTP_CLK 25000000
static void bfin_mac_hwtstamp_init(struct net_device *netdev)
# define bfin_mac_hwtstamp_is_none(cfg) 0
# define bfin_mac_hwtstamp_init(dev)
# define bfin_mac_hwtstamp_ioctl(dev, ifr, cmd) (-EOPNOTSUPP)
# define bfin_rx_hwtstamp(dev, skb)
# define bfin_tx_hwtstamp(dev, skb)
static inline void _tx_reclaim_skb(void)
static void tx_reclaim_skb(struct bfin_mac_local *lp)
static void tx_reclaim_skb_timeout(unsigned long lp)
static int bfin_mac_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev)
#define IP_HEADER_OFF  0
#define RX_ERROR_MASK (RX_LONG | RX_ALIGN | RX_CRC | RX_LEN | \
RX_FRAG | RX_ADDR | RX_DMAO | RX_PHY | RX_LATE | RX_RANGE)
static void bfin_mac_rx(struct net_device *dev)
static irqreturn_t bfin_mac_interrupt(int irq, void *dev_id)
static void bfin_mac_poll(struct net_device *dev)
static void bfin_mac_disable(void)
static int bfin_mac_enable(struct phy_device *phydev)
static void bfin_mac_timeout(struct net_device *dev)
static void bfin_mac_multicast_hash(struct net_device *dev)
static void bfin_mac_set_multicast_list(struct net_device *dev)
static int bfin_mac_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static void bfin_mac_shutdown(struct net_device *dev)
static int bfin_mac_open(struct net_device *dev)
static int bfin_mac_close(struct net_device *dev)
static const struct net_device_ops bfin_mac_netdev_ops = ;
static int __devinit bfin_mac_probe(struct platform_device *pdev)
static int __devexit bfin_mac_remove(struct platform_device *pdev)
static int bfin_mac_suspend(struct platform_device *pdev, pm_message_t mesg)
static int bfin_mac_resume(struct platform_device *pdev)
#define bfin_mac_suspend NULL
#define bfin_mac_resume NULL
static int __devinit bfin_mii_bus_probe(struct platform_device *pdev)
static int __devexit bfin_mii_bus_remove(struct platform_device *pdev)
static struct platform_driver bfin_mii_bus_driver = ;
static struct platform_driver bfin_mac_driver = ;
static int __init bfin_mac_init(void)
module_init(bfin_mac_init);
static void __exit bfin_mac_cleanup(void)
module_exit(bfin_mac_cleanup);
