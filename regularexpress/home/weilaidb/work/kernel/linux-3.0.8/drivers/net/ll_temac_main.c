#define TX_BD_NUM   64
#define RX_BD_NUM   128
u32 temac_ior(struct temac_local *lp, int offset)
void temac_iow(struct temac_local *lp, int offset, u32 value)
int temac_indirect_busywait(struct temac_local *lp)
u32 temac_indirect_in32(struct temac_local *lp, int reg)
void temac_indirect_out32(struct temac_local *lp, int reg, u32 value)
static u32 temac_dma_in32(struct temac_local *lp, int reg)
static void temac_dma_out32(struct temac_local *lp, int reg, u32 value)
static u32 temac_dma_dcr_in(struct temac_local *lp, int reg)
static void temac_dma_dcr_out(struct temac_local *lp, int reg, u32 value)
static int temac_dcr_setup(struct temac_local *lp, struct platform_device *op,
struct device_node *np)
static int temac_dcr_setup(struct temac_local *lp, struct platform_device *op,
struct device_node *np)
static void temac_dma_bd_release(struct net_device *ndev)
static int temac_dma_bd_init(struct net_device *ndev)
static int temac_set_mac_address(struct net_device *ndev, void *address)
static int netdev_set_mac_address(struct net_device *ndev, void *p)
static void temac_set_multicast_list(struct net_device *ndev)
struct temac_option  temac_options[] = ;
static u32 temac_setoptions(struct net_device *ndev, u32 options)
static void temac_device_reset(struct net_device *ndev)
void temac_adjust_link(struct net_device *ndev)
static void temac_start_xmit_done(struct net_device *ndev)
static inline int temac_check_tx_bd_space(struct temac_local *lp, int num_frag)
static int temac_start_xmit(struct sk_buff *skb, struct net_device *ndev)
static void ll_temac_recv(struct net_device *ndev)
static irqreturn_t ll_temac_tx_irq(int irq, void *_ndev)
static irqreturn_t ll_temac_rx_irq(int irq, void *_ndev)
static int temac_open(struct net_device *ndev)
static int temac_stop(struct net_device *ndev)
static void
temac_poll_controller(struct net_device *ndev)
static const struct net_device_ops temac_netdev_ops = ;
static ssize_t temac_show_llink_regs(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(llink_regs, 0440, temac_show_llink_regs, NULL);
static struct attribute *temac_device_attrs[] = ;
static const struct attribute_group temac_attr_group = ;
static int __devinit temac_of_probe(struct platform_device *op)
static int __devexit temac_of_remove(struct platform_device *op)
static struct of_device_id temac_of_match[] __devinitdata = ;
MODULE_DEVICE_TABLE(of, temac_of_match);
static struct platform_driver temac_of_driver = ;
static int __init temac_init(void)
module_init(temac_init);
static void __exit temac_exit(void)
module_exit(temac_exit);
MODULE_DESCRIPTION("Xilinx LL_TEMAC Ethernet driver");
MODULE_AUTHOR("Yoshio Kashiwagi");
MODULE_LICENSE("GPL");
