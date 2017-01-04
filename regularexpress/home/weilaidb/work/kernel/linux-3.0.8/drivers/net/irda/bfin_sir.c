#define DMA_SIR_RX_XCNT        10
#define DMA_SIR_RX_YCNT        (PAGE_SIZE / DMA_SIR_RX_XCNT)
#define DMA_SIR_RX_FLUSH_JIFS  (HZ * 4 / 250)
#if ANOMALY_05000447
static int max_rate = 57600;
static int max_rate = 115200;
static void turnaround_delay(unsigned long last_jif, int mtt)
static void __devinit bfin_sir_init_ports(struct bfin_sir_port *sp, struct platform_device *pdev)
static void bfin_sir_stop_tx(struct bfin_sir_port *port)
static void bfin_sir_enable_tx(struct bfin_sir_port *port)
static void bfin_sir_stop_rx(struct bfin_sir_port *port)
static void bfin_sir_enable_rx(struct bfin_sir_port *port)
static int bfin_sir_set_speed(struct bfin_sir_port *port, int speed)
static int bfin_sir_is_receiving(struct net_device *dev)
static void bfin_sir_tx_chars(struct net_device *dev)
static void bfin_sir_rx_chars(struct net_device *dev)
static irqreturn_t bfin_sir_rx_int(int irq, void *dev_id)
static irqreturn_t bfin_sir_tx_int(int irq, void *dev_id)
static void bfin_sir_dma_tx_chars(struct net_device *dev)
static irqreturn_t bfin_sir_dma_tx_int(int irq, void *dev_id)
static void bfin_sir_dma_rx_chars(struct net_device *dev)
void bfin_sir_rx_dma_timeout(struct net_device *dev)
static irqreturn_t bfin_sir_dma_rx_int(int irq, void *dev_id)
static int bfin_sir_startup(struct bfin_sir_port *port, struct net_device *dev)
static void bfin_sir_shutdown(struct bfin_sir_port *port, struct net_device *dev)
static int bfin_sir_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_sir_resume(struct platform_device *pdev)
#define bfin_sir_suspend   NULL
#define bfin_sir_resume    NULL
static void bfin_sir_send_work(struct work_struct *work)
static int bfin_sir_hard_xmit(struct sk_buff *skb, struct net_device *dev)
static int bfin_sir_ioctl(struct net_device *dev, struct ifreq *ifreq, int cmd)
static struct net_device_stats *bfin_sir_stats(struct net_device *dev)
static int bfin_sir_open(struct net_device *dev)
static int bfin_sir_stop(struct net_device *dev)
static int bfin_sir_init_iobuf(iobuff_t *io, int size)
static const struct net_device_ops bfin_sir_ndo = ;
static int __devinit bfin_sir_probe(struct platform_device *pdev)
static int __devexit bfin_sir_remove(struct platform_device *pdev)
static struct platform_driver bfin_ir_driver = ;
static int __init bfin_sir_init(void)
static void __exit bfin_sir_exit(void)
module_init(bfin_sir_init);
module_exit(bfin_sir_exit);
module_param(max_rate, int, 0);
MODULE_PARM_DESC(max_rate, "Maximum baud rate (115200, 57600, 38400, 19200, 9600)");
MODULE_AUTHOR("Graf Yang <graf.yang@analog.com>");
MODULE_DESCRIPTION("Blackfin IrDA driver");
MODULE_LICENSE("GPL");
