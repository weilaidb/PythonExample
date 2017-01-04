#define RX_BUFFER_SIZE		128
#define RX_RING_SIZE		512
#define RX_RING_BYTES		(sizeof(struct dma_desc) * RX_RING_SIZE)
#define RX_OFFSET		2
#define TX_RING_SIZE		128
#define DEF_TX_RING_PENDING	(TX_RING_SIZE - 1)
#define TX_RING_BYTES		(sizeof(struct dma_desc) * TX_RING_SIZE)
#define TX_RING_GAP(bp)						\
(TX_RING_SIZE - (bp)->tx_pending)
#define TX_BUFFS_AVAIL(bp)					\
(((bp)->tx_tail <= (bp)->tx_head) ?			\
(bp)->tx_tail + (bp)->tx_pending - (bp)->tx_head :	\
(bp)->tx_tail - (bp)->tx_head - TX_RING_GAP(bp))
#define NEXT_TX(n)		(((n) + 1) & (TX_RING_SIZE - 1))
#define NEXT_RX(n)		(((n) + 1) & (RX_RING_SIZE - 1))
#define MACB_TX_WAKEUP_THRESH	(TX_RING_SIZE / 4)
#define MACB_RX_INT_FLAGS	(MACB_BIT(RCOMP) | MACB_BIT(RXUBR)	\
| MACB_BIT(ISR_ROVR))
static void __macb_set_hwaddr(struct macb *bp)
static void __init macb_get_hwaddr(struct macb *bp)
static int macb_mdio_read(struct mii_bus *bus, int mii_id, int regnum)
static int macb_mdio_write(struct mii_bus *bus, int mii_id, int regnum,
u16 value)
static int macb_mdio_reset(struct mii_bus *bus)
static void macb_handle_link_change(struct net_device *dev)
static int macb_mii_probe(struct net_device *dev)
static int macb_mii_init(struct macb *bp)
static void macb_update_stats(struct macb *bp)
static void macb_tx(struct macb *bp)
static int macb_rx_frame(struct macb *bp, unsigned int first_frag,
unsigned int last_frag)
static void discard_partial_frame(struct macb *bp, unsigned int begin,
unsigned int end)
static int macb_rx(struct macb *bp, int budget)
static int macb_poll(struct napi_struct *napi, int budget)
static irqreturn_t macb_interrupt(int irq, void *dev_id)
static void macb_poll_controller(struct net_device *dev)
static int macb_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void macb_free_consistent(struct macb *bp)
static int macb_alloc_consistent(struct macb *bp)
static void macb_init_rings(struct macb *bp)
static void macb_reset_hw(struct macb *bp)
static void macb_init_hw(struct macb *bp)
static inline int hash_bit_value(int bitnr, __u8 *addr)
static int hash_get_index(__u8 *addr)
static void macb_sethashtable(struct net_device *dev)
static void macb_set_rx_mode(struct net_device *dev)
static int macb_open(struct net_device *dev)
static int macb_close(struct net_device *dev)
static struct net_device_stats *macb_get_stats(struct net_device *dev)
static int macb_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int macb_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void macb_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops macb_ethtool_ops = ;
static int macb_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static const struct net_device_ops macb_netdev_ops = ;
static int __init macb_probe(struct platform_device *pdev)
static int __exit macb_remove(struct platform_device *pdev)
static int macb_suspend(struct platform_device *pdev, pm_message_t state)
static int macb_resume(struct platform_device *pdev)
#define macb_suspend	NULL
#define macb_resume	NULL
static struct platform_driver macb_driver = ;
static int __init macb_init(void)
static void __exit macb_exit(void)
module_init(macb_init);
module_exit(macb_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Atmel MACB Ethernet driver");
MODULE_AUTHOR("Haavard Skinnemoen (Atmel)");
MODULE_ALIAS("platform:macb");
