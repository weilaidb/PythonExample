static char mac_mace_string[] = "macmace";
#define N_TX_BUFF_ORDER	0
#define N_TX_RING	(1 << N_TX_BUFF_ORDER)
#define N_RX_BUFF_ORDER	3
#define N_RX_RING	(1 << N_RX_BUFF_ORDER)
#define TX_TIMEOUT	HZ
#define MACE_BUFF_SIZE	0x800
#define BROKEN_ADDRCHG_REV	0x0941
#define MACE_BASE	(void *)(0x50F1C000)
#define MACE_PROM	(void *)(0x50F08001)
struct mace_data ;
struct mace_frame ;
#define PRIV_BYTES	sizeof(struct mace_data)
static int mace_open(struct net_device *dev);
static int mace_close(struct net_device *dev);
static int mace_xmit_start(struct sk_buff *skb, struct net_device *dev);
static void mace_set_multicast(struct net_device *dev);
static int mace_set_address(struct net_device *dev, void *addr);
static void mace_reset(struct net_device *dev);
static irqreturn_t mace_interrupt(int irq, void *dev_id);
static irqreturn_t mace_dma_intr(int irq, void *dev_id);
static void mace_tx_timeout(struct net_device *dev);
static void __mace_set_address(struct net_device *dev, void *addr);
static void mace_load_rxdma_base(struct net_device *dev, int set)
static void mace_rxdma_reset(struct net_device *dev)
static void mace_txdma_reset(struct net_device *dev)
static void mace_dma_off(struct net_device *dev)
static const struct net_device_ops mace_netdev_ops = ;
static int __devinit mace_probe(struct platform_device *pdev)
static void mace_reset(struct net_device *dev)
static void __mace_set_address(struct net_device *dev, void *addr)
static int mace_set_address(struct net_device *dev, void *addr)
static int mace_open(struct net_device *dev)
static int mace_close(struct net_device *dev)
static int mace_xmit_start(struct sk_buff *skb, struct net_device *dev)
static void mace_set_multicast(struct net_device *dev)
static void mace_handle_misc_intrs(struct net_device *dev, int intr)
static irqreturn_t mace_interrupt(int irq, void *dev_id)
static void mace_tx_timeout(struct net_device *dev)
static void mace_dma_rx_frame(struct net_device *dev, struct mace_frame *mf)
static irqreturn_t mace_dma_intr(int irq, void *dev_id)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Macintosh MACE ethernet driver");
MODULE_ALIAS("platform:macmace");
static int __devexit mac_mace_device_remove (struct platform_device *pdev)
static struct platform_driver mac_mace_driver = ;
static int __init mac_mace_init_module(void)
static void __exit mac_mace_cleanup_module(void)
module_init(mac_mace_init_module);
module_exit(mac_mace_cleanup_module);
