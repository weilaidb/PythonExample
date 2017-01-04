#define DRV_NAME	"sunqe"
#define DRV_VERSION	"4.1"
#define DRV_RELDATE	"August 27, 2008"
#define DRV_AUTHOR	"David S. Miller (davem@davemloft.net)"
static char version[] =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " " DRV_AUTHOR "\n";
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION("Sun QuadEthernet 10baseT SBUS card driver");
MODULE_LICENSE("GPL");
static struct sunqec *root_qec_dev;
static void qe_set_multicast(struct net_device *dev);
#define QEC_RESET_TRIES 200
static inline int qec_global_reset(void __iomem *gregs)
#define MACE_RESET_RETRIES 200
#define QE_RESET_RETRIES   200
static inline int qe_stop(struct sunqe *qep)
static void qe_init_rings(struct sunqe *qep)
static int qe_init(struct sunqe *qep, int from_irq)
static int qe_is_bolixed(struct sunqe *qep, u32 qe_status)
static void qe_rx(struct sunqe *qep)
static void qe_tx_reclaim(struct sunqe *qep);
static irqreturn_t qec_interrupt(int irq, void *dev_id)
static int qe_open(struct net_device *dev)
static int qe_close(struct net_device *dev)
static void qe_tx_reclaim(struct sunqe *qep)
static void qe_tx_timeout(struct net_device *dev)
static int qe_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void qe_set_multicast(struct net_device *dev)
static void qe_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static u32 qe_get_link(struct net_device *dev)
static const struct ethtool_ops qe_ethtool_ops = ;
static void qec_init_once(struct sunqec *qecp, struct platform_device *op)
static u8 __devinit qec_get_burst(struct device_node *dp)
static struct sunqec * __devinit get_qec(struct platform_device *child)
static const struct net_device_ops qec_ops = ;
static int __devinit qec_ether_init(struct platform_device *op)
static int __devinit qec_sbus_probe(struct platform_device *op)
static int __devexit qec_sbus_remove(struct platform_device *op)
static const struct of_device_id qec_sbus_match[] = ;
MODULE_DEVICE_TABLE(of, qec_sbus_match);
static struct platform_driver qec_sbus_driver = ;
static int __init qec_init(void)
static void __exit qec_exit(void)
module_init(qec_init);
module_exit(qec_exit);
