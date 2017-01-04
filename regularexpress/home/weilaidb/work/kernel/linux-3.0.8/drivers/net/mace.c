static int port_aaui = -1;
#define N_RX_RING	8
#define N_TX_RING	6
#define MAX_TX_ACTIVE	1
#define NCMDS_TX	1
#define RX_BUFLEN	(ETH_FRAME_LEN + 8)
#define TX_TIMEOUT	HZ
#define BROKEN_ADDRCHG_REV	0x0941
#define TX_DMA_ERR	0x80
struct mace_data ;
#define PRIV_BYTES	(sizeof(struct mace_data) \
+ (N_RX_RING + NCMDS_TX * N_TX_RING + 3) * sizeof(struct dbdma_cmd))
static int mace_open(struct net_device *dev);
static int mace_close(struct net_device *dev);
static int mace_xmit_start(struct sk_buff *skb, struct net_device *dev);
static void mace_set_multicast(struct net_device *dev);
static void mace_reset(struct net_device *dev);
static int mace_set_address(struct net_device *dev, void *addr);
static irqreturn_t mace_interrupt(int irq, void *dev_id);
static irqreturn_t mace_txdma_intr(int irq, void *dev_id);
static irqreturn_t mace_rxdma_intr(int irq, void *dev_id);
static void mace_set_timeout(struct net_device *dev);
static void mace_tx_timeout(unsigned long data);
static inline void dbdma_reset(volatile struct dbdma_regs __iomem *dma);
static inline void mace_clean_rings(struct mace_data *mp);
static void __mace_set_address(struct net_device *dev, void *addr);
static unsigned char *dummy_buf;
static const struct net_device_ops mace_netdev_ops = ;
static int __devinit mace_probe(struct macio_dev *mdev, const struct of_device_id *match)
static int __devexit mace_remove(struct macio_dev *mdev)
static void dbdma_reset(volatile struct dbdma_regs __iomem *dma)
static void mace_reset(struct net_device *dev)
static void __mace_set_address(struct net_device *dev, void *addr)
static int mace_set_address(struct net_device *dev, void *addr)
static inline void mace_clean_rings(struct mace_data *mp)
static int mace_open(struct net_device *dev)
static int mace_close(struct net_device *dev)
static inline void mace_set_timeout(struct net_device *dev)
static int mace_xmit_start(struct sk_buff *skb, struct net_device *dev)
static void mace_set_multicast(struct net_device *dev)
static void mace_handle_misc_intrs(struct mace_data *mp, int intr, struct net_device *dev)
static irqreturn_t mace_interrupt(int irq, void *dev_id)
static void mace_tx_timeout(unsigned long data)
static irqreturn_t mace_txdma_intr(int irq, void *dev_id)
static irqreturn_t mace_rxdma_intr(int irq, void *dev_id)
static struct of_device_id mace_match[] =
;
MODULE_DEVICE_TABLE (of, mace_match);
static struct macio_driver mace_driver =
;
static int __init mace_init(void)
static void __exit mace_cleanup(void)
MODULE_AUTHOR("Paul Mackerras");
MODULE_DESCRIPTION("PowerMac MACE driver.");
module_param(port_aaui, int, 0);
MODULE_PARM_DESC(port_aaui, "MACE uses AAUI port (0-1)");
MODULE_LICENSE("GPL");
module_init(mace_init);
module_exit(mace_cleanup);
