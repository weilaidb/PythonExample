#define EMPTY_PTR_FIFO(xcno)    (0 + ((xcno) << 3))
#define IND_FIFO_PORT_HI(xcno)  (1 + ((xcno) << 3))
#define IND_FIFO_PORT_LO(xcno)  (2 + ((xcno) << 3))
#define REQ_FIFO_PORT_HI(xcno)  (3 + ((xcno) << 3))
#define REQ_FIFO_PORT_LO(xcno)  (4 + ((xcno) << 3))
#define CON_FIFO_PORT_HI(xcno)  (5 + ((xcno) << 3))
#define CON_FIFO_PORT_LO(xcno)  (6 + ((xcno) << 3))
#define PFIFO_MASK(xcno)        (0x7f << (xcno*8))
#define FIFO_PTR_FRAMELEN_SHIFT 0
#define FIFO_PTR_FRAMELEN_MASK  (0x7ff << 0)
#define FIFO_PTR_FRAMELEN(len)  (((len) << 0) & FIFO_PTR_FRAMELEN_MASK)
#define FIFO_PTR_TIMETRIG       (1<<11)
#define FIFO_PTR_MULTI_REQ
#define FIFO_PTR_ORIGIN         (1<<14)
#define FIFO_PTR_VLAN           (1<<15)
#define FIFO_PTR_FRAMENO_SHIFT  16
#define FIFO_PTR_FRAMENO_MASK   (0x3f << 16)
#define FIFO_PTR_FRAMENO(no)    (((no) << 16) & FIFO_PTR_FRAMENO_MASK)
#define FIFO_PTR_SEGMENT_SHIFT  22
#define FIFO_PTR_SEGMENT_MASK   (0xf << 22)
#define FIFO_PTR_SEGMENT(seg)   (((seg) & 0xf) << 22)
#define FIFO_PTR_ERROR_SHIFT    28
#define FIFO_PTR_ERROR_MASK     (0xf << 28)
#define ISR_LINK_STATUS_CHANGE (1<<4)
#define ISR_IND_LO             (1<<3)
#define ISR_CON_LO             (1<<2)
#define ISR_IND_HI             (1<<1)
#define ISR_CON_HI             (1<<0)
#define ETH_MAC_LOCAL_CONFIG 0x1560
#define ETH_MAC_4321         0x1564
#define ETH_MAC_65           0x1568
#define MAC_TRAFFIC_CLASS_ARRANGEMENT_SHIFT 16
#define MAC_TRAFFIC_CLASS_ARRANGEMENT_MASK (0xf<<MAC_TRAFFIC_CLASS_ARRANGEMENT_SHIFT)
#define MAC_TRAFFIC_CLASS_ARRANGEMENT(x) (((x)<<MAC_TRAFFIC_CLASS_ARRANGEMENT_SHIFT) & MAC_TRAFFIC_CLASS_ARRANGEMENT_MASK)
#define LOCAL_CONFIG_LINK_STATUS_IRQ_EN (1<<24)
#define LOCAL_CONFIG_CON_LO_IRQ_EN (1<<23)
#define LOCAL_CONFIG_CON_HI_IRQ_EN (1<<22)
#define LOCAL_CONFIG_IND_LO_IRQ_EN (1<<21)
#define LOCAL_CONFIG_IND_HI_IRQ_EN (1<<20)
#define CARDNAME "netx-eth"
#define INTERNAL_PHY_ADR 0x1c
struct netx_eth_priv ;
static void netx_eth_set_multicast_list(struct net_device *ndev)
static int
netx_eth_hard_start_xmit(struct sk_buff *skb, struct net_device *ndev)
static void netx_eth_receive(struct net_device *ndev)
static irqreturn_t
netx_eth_interrupt(int irq, void *dev_id)
static int netx_eth_open(struct net_device *ndev)
static int netx_eth_close(struct net_device *ndev)
static void netx_eth_timeout(struct net_device *ndev)
static int
netx_eth_phy_read(struct net_device *ndev, int phy_id, int reg)
static void
netx_eth_phy_write(struct net_device *ndev, int phy_id, int reg, int value)
static const struct net_device_ops netx_eth_netdev_ops = ;
static int netx_eth_enable(struct net_device *ndev)
static int netx_eth_drv_probe(struct platform_device *pdev)
static int netx_eth_drv_remove(struct platform_device *pdev)
static int netx_eth_drv_suspend(struct platform_device *pdev, pm_message_t state)
static int netx_eth_drv_resume(struct platform_device *pdev)
static struct platform_driver netx_eth_driver = ;
static int __init netx_eth_init(void)
static void __exit netx_eth_cleanup(void)
module_init(netx_eth_init);
module_exit(netx_eth_cleanup);
MODULE_AUTHOR("Sascha Hauer, Pengutronix");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" CARDNAME);
MODULE_FIRMWARE("xc0.bin");
MODULE_FIRMWARE("xc1.bin");
MODULE_FIRMWARE("xc2.bin");
