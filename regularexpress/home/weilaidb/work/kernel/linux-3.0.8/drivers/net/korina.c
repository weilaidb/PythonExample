#define DRV_NAME        "korina"
#define DRV_VERSION     "0.10"
#define DRV_RELDATE     "04Mar2008"
#define STATION_ADDRESS_HIGH(dev) (((dev)->dev_addr[0] << 8) | \
((dev)->dev_addr[1]))
#define STATION_ADDRESS_LOW(dev)  (((dev)->dev_addr[2] << 24) | \
((dev)->dev_addr[3] << 16) | \
((dev)->dev_addr[4] << 8)  | \
((dev)->dev_addr[5]))
#define MII_CLOCK 1250000
#define KORINA_NUM_RDS	64
#define KORINA_NUM_TDS	64
#define KORINA_RBSIZE	1536
#define KORINA_RDS_MASK	(KORINA_NUM_RDS - 1)
#define KORINA_TDS_MASK	(KORINA_NUM_TDS - 1)
#define RD_RING_SIZE 	(KORINA_NUM_RDS * sizeof(struct dma_desc))
#define TD_RING_SIZE	(KORINA_NUM_TDS * sizeof(struct dma_desc))
#define TX_TIMEOUT 	(6000 * HZ / 1000)
enum chain_status ;
#define IS_DMA_FINISHED(X)   (((X) & (DMA_DESC_FINI)) != 0)
#define IS_DMA_DONE(X)   (((X) & (DMA_DESC_DONE)) != 0)
#define RCVPKT_LENGTH(X)     (((X) & ETH_RX_LEN) >> ETH_RX_LEN_BIT)
struct korina_private ;
extern unsigned int idt_cpu_freq;
static inline void korina_start_dma(struct dma_reg *ch, u32 dma_addr)
static inline void korina_abort_dma(struct net_device *dev,
struct dma_reg *ch)
static inline void korina_chain_dma(struct dma_reg *ch, u32 dma_addr)
static void korina_abort_tx(struct net_device *dev)
static void korina_abort_rx(struct net_device *dev)
static void korina_start_rx(struct korina_private *lp,
struct dma_desc *rd)
static void korina_chain_rx(struct korina_private *lp,
struct dma_desc *rd)
static int korina_send_packet(struct sk_buff *skb, struct net_device *dev)
static int mdio_read(struct net_device *dev, int mii_id, int reg)
static void mdio_write(struct net_device *dev, int mii_id, int reg, int val)
static irqreturn_t korina_rx_dma_interrupt(int irq, void *dev_id)
static int korina_rx(struct net_device *dev, int limit)
static int korina_poll(struct napi_struct *napi, int budget)
static void korina_multicast_list(struct net_device *dev)
static void korina_tx(struct net_device *dev)
static irqreturn_t
korina_tx_dma_interrupt(int irq, void *dev_id)
static void korina_check_media(struct net_device *dev, unsigned int init_media)
static void korina_poll_media(unsigned long data)
static void korina_set_carrier(struct mii_if_info *mii)
static int korina_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 netdev_get_link(struct net_device *dev)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int korina_alloc_ring(struct net_device *dev)
static void korina_free_ring(struct net_device *dev)
static int korina_init(struct net_device *dev)
static void korina_restart_task(struct work_struct *work)
static void korina_clear_and_restart(struct net_device *dev, u32 value)
static irqreturn_t korina_und_interrupt(int irq, void *dev_id)
static void korina_tx_timeout(struct net_device *dev)
static irqreturn_t
korina_ovr_interrupt(int irq, void *dev_id)
static void korina_poll_controller(struct net_device *dev)
static int korina_open(struct net_device *dev)
static int korina_close(struct net_device *dev)
static const struct net_device_ops korina_netdev_ops = ;
static int korina_probe(struct platform_device *pdev)
static int korina_remove(struct platform_device *pdev)
static struct platform_driver korina_driver = ;
static int __init korina_init_module(void)
static void korina_cleanup_module(void)
module_init(korina_init_module);
module_exit(korina_cleanup_module);
MODULE_AUTHOR("Philip Rischel <rischelp@idt.com>");
MODULE_AUTHOR("Felix Fietkau <nbd@openwrt.org>");
MODULE_AUTHOR("Florian Fainelli <florian@openwrt.org>");
MODULE_DESCRIPTION("IDT RC32434 (Korina) Ethernet driver");
MODULE_LICENSE("GPL");
