static int power_level = 3;
static int tx_lpm;
static int max_rate = 4000000;
struct sa1100_irda ;
#define IS_FIR(si)		((si)->speed >= 4000000)
#define HPSIR_MAX_RXLEN		2047
static int sa1100_irda_rx_alloc(struct sa1100_irda *si)
static void sa1100_irda_rx_dma_start(struct sa1100_irda *si)
static int sa1100_irda_set_speed(struct sa1100_irda *si, int speed)
static int
__sa1100_irda_set_power(struct sa1100_irda *si, unsigned int state)
static inline int
sa1100_set_power(struct sa1100_irda *si, unsigned int state)
static int sa1100_irda_startup(struct sa1100_irda *si)
static void sa1100_irda_shutdown(struct sa1100_irda *si)
static int sa1100_irda_suspend(struct platform_device *pdev, pm_message_t state)
static int sa1100_irda_resume(struct platform_device *pdev)
#define sa1100_irda_suspend	NULL
#define sa1100_irda_resume	NULL
static void sa1100_irda_hpsir_irq(struct net_device *dev)
static void sa1100_irda_fir_error(struct sa1100_irda *si, struct net_device *dev)
static void sa1100_irda_fir_irq(struct net_device *dev)
static irqreturn_t sa1100_irda_irq(int irq, void *dev_id)
static void sa1100_irda_txdma_irq(void *id)
static int sa1100_irda_hard_xmit(struct sk_buff *skb, struct net_device *dev)
static int
sa1100_irda_ioctl(struct net_device *dev, struct ifreq *ifreq, int cmd)
static int sa1100_irda_start(struct net_device *dev)
static int sa1100_irda_stop(struct net_device *dev)
static int sa1100_irda_init_iobuf(iobuff_t *io, int size)
static const struct net_device_ops sa1100_irda_netdev_ops = ;
static int sa1100_irda_probe(struct platform_device *pdev)
static int sa1100_irda_remove(struct platform_device *pdev)
static struct platform_driver sa1100ir_driver = ;
static int __init sa1100_irda_init(void)
static void __exit sa1100_irda_exit(void)
module_init(sa1100_irda_init);
module_exit(sa1100_irda_exit);
module_param(power_level, int, 0);
module_param(tx_lpm, int, 0);
module_param(max_rate, int, 0);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("StrongARM SA1100 IrDA driver");
MODULE_LICENSE("GPL");
MODULE_PARM_DESC(power_level, "IrDA power level, 1 (low) to 3 (high)");
MODULE_PARM_DESC(tx_lpm, "Enable transmitter low power (1.6us) mode");
MODULE_PARM_DESC(max_rate, "Maximum baud rate (4000000, 115200, 57600, 38400, 19200, 9600)");
MODULE_ALIAS("platform:sa11x0-ir");
