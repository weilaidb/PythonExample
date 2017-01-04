#undef  CONFIG_NETWINDER_TX_DMA_PROBLEMS
#define CONFIG_NETWINDER_RX_DMA_PROBLEMS
#define CONFIG_USE_W977_PNP
#define PIO_MAX_SPEED       115200
static char *driver_name = "w83977af_ir";
static int  qos_mtt_bits = 0x07;
#define CHIP_IO_EXTENT 8
static unsigned int io[] = ;
static unsigned int irq[] = ;
static unsigned int irq[] = ;
static unsigned int dma[] = ;
static unsigned int efbase[] = ;
static unsigned int efio = W977_EFIO_BASE;
static struct w83977af_ir *dev_self[] = ;
static int  w83977af_open(int i, unsigned int iobase, unsigned int irq,
unsigned int dma);
static int  w83977af_close(struct w83977af_ir *self);
static int  w83977af_probe(int iobase, int irq, int dma);
static int  w83977af_dma_receive(struct w83977af_ir *self);
static int  w83977af_dma_receive_complete(struct w83977af_ir *self);
static netdev_tx_t  w83977af_hard_xmit(struct sk_buff *skb,
struct net_device *dev);
static int  w83977af_pio_write(int iobase, __u8 *buf, int len, int fifo_size);
static void w83977af_dma_write(struct w83977af_ir *self, int iobase);
static void w83977af_change_speed(struct w83977af_ir *self, __u32 speed);
static int  w83977af_is_receiving(struct w83977af_ir *self);
static int  w83977af_net_open(struct net_device *dev);
static int  w83977af_net_close(struct net_device *dev);
static int  w83977af_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int __init w83977af_init(void)
static void __exit w83977af_cleanup(void)
static const struct net_device_ops w83977_netdev_ops = ;
static int w83977af_open(int i, unsigned int iobase, unsigned int irq,
unsigned int dma)
static int w83977af_close(struct w83977af_ir *self)
static int w83977af_probe(int iobase, int irq, int dma)
static void w83977af_change_speed(struct w83977af_ir *self, __u32 speed)
static netdev_tx_t w83977af_hard_xmit(struct sk_buff *skb,
struct net_device *dev)
static void w83977af_dma_write(struct w83977af_ir *self, int iobase)
static int w83977af_pio_write(int iobase, __u8 *buf, int len, int fifo_size)
static void w83977af_dma_xmit_complete(struct w83977af_ir *self)
static int w83977af_dma_receive(struct w83977af_ir *self)
static int w83977af_dma_receive_complete(struct w83977af_ir *self)
static void w83977af_pio_receive(struct w83977af_ir *self)
static __u8 w83977af_sir_interrupt(struct w83977af_ir *self, int isr)
static __u8 w83977af_fir_interrupt(struct w83977af_ir *self, int isr)
static irqreturn_t w83977af_interrupt(int irq, void *dev_id)
static int w83977af_is_receiving(struct w83977af_ir *self)
static int w83977af_net_open(struct net_device *dev)
static int w83977af_net_close(struct net_device *dev)
static int w83977af_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("Winbond W83977AF IrDA Device Driver");
MODULE_LICENSE("GPL");
module_param(qos_mtt_bits, int, 0);
MODULE_PARM_DESC(qos_mtt_bits, "Mimimum Turn Time");
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io, "Base I/O addresses");
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(irq, "IRQ lines");
module_init(w83977af_init);
module_exit(w83977af_cleanup);
