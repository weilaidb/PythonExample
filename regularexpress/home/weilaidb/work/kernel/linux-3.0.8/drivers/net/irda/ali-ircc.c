#define CHIP_IO_EXTENT 8
#define BROKEN_DONGLE_ID
#define ALI_IRCC_DRIVER_NAME "ali-ircc"
static int ali_ircc_suspend(struct platform_device *dev, pm_message_t state);
static int ali_ircc_resume(struct platform_device *dev);
static struct platform_driver ali_ircc_driver = ;
static int qos_mtt_bits = 0x07;
static unsigned int io[]  = ;
static unsigned int irq[] = ;
static unsigned int dma[] = ;
static int  ali_ircc_probe_53(ali_chip_t *chip, chipio_t *info);
static int  ali_ircc_init_43(ali_chip_t *chip, chipio_t *info);
static int  ali_ircc_init_53(ali_chip_t *chip, chipio_t *info);
static ali_chip_t chips[] =
;
static struct ali_ircc_cb *dev_self[] = ;
static char *dongle_types[] = ;
static int  ali_ircc_open(int i, chipio_t *info);
static int  ali_ircc_close(struct ali_ircc_cb *self);
static int  ali_ircc_setup(chipio_t *info);
static int  ali_ircc_is_receiving(struct ali_ircc_cb *self);
static int  ali_ircc_net_open(struct net_device *dev);
static int  ali_ircc_net_close(struct net_device *dev);
static int  ali_ircc_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void ali_ircc_change_speed(struct ali_ircc_cb *self, __u32 baud);
static netdev_tx_t ali_ircc_sir_hard_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t ali_ircc_sir_interrupt(struct ali_ircc_cb *self);
static void ali_ircc_sir_receive(struct ali_ircc_cb *self);
static void ali_ircc_sir_write_wakeup(struct ali_ircc_cb *self);
static int  ali_ircc_sir_write(int iobase, int fifo_size, __u8 *buf, int len);
static void ali_ircc_sir_change_speed(struct ali_ircc_cb *priv, __u32 speed);
static netdev_tx_t  ali_ircc_fir_hard_xmit(struct sk_buff *skb,
struct net_device *dev);
static void ali_ircc_fir_change_speed(struct ali_ircc_cb *priv, __u32 speed);
static irqreturn_t ali_ircc_fir_interrupt(struct ali_ircc_cb *self);
static int  ali_ircc_dma_receive(struct ali_ircc_cb *self);
static int  ali_ircc_dma_receive_complete(struct ali_ircc_cb *self);
static int  ali_ircc_dma_xmit_complete(struct ali_ircc_cb *self);
static void ali_ircc_dma_xmit(struct ali_ircc_cb *self);
static int  ali_ircc_read_dongle_id (int i, chipio_t *info);
static void ali_ircc_change_dongle_speed(struct ali_ircc_cb *priv, int speed);
static void SIR2FIR(int iobase);
static void FIR2SIR(int iobase);
static void SetCOMInterrupts(struct ali_ircc_cb *self , unsigned char enable);
static int __init ali_ircc_init(void)
static void __exit ali_ircc_cleanup(void)
static const struct net_device_ops ali_ircc_sir_ops = ;
static const struct net_device_ops ali_ircc_fir_ops = ;
static int ali_ircc_open(int i, chipio_t *info)
static int __exit ali_ircc_close(struct ali_ircc_cb *self)
static int ali_ircc_init_43(ali_chip_t *chip, chipio_t *info)
static int ali_ircc_init_53(ali_chip_t *chip, chipio_t *info)
static int ali_ircc_probe_53(ali_chip_t *chip, chipio_t *info)
static int ali_ircc_setup(chipio_t *info)
static int ali_ircc_read_dongle_id (int i, chipio_t *info)
static irqreturn_t ali_ircc_interrupt(int irq, void *dev_id)
static irqreturn_t ali_ircc_fir_interrupt(struct ali_ircc_cb *self)
static irqreturn_t ali_ircc_sir_interrupt(struct ali_ircc_cb *self)
static void ali_ircc_sir_receive(struct ali_ircc_cb *self)
static void ali_ircc_sir_write_wakeup(struct ali_ircc_cb *self)
static void ali_ircc_change_speed(struct ali_ircc_cb *self, __u32 baud)
static void ali_ircc_fir_change_speed(struct ali_ircc_cb *priv, __u32 baud)
static void ali_ircc_sir_change_speed(struct ali_ircc_cb *priv, __u32 speed)
static void ali_ircc_change_dongle_speed(struct ali_ircc_cb *priv, int speed)
static int ali_ircc_sir_write(int iobase, int fifo_size, __u8 *buf, int len)
static int ali_ircc_net_open(struct net_device *dev)
static int ali_ircc_net_close(struct net_device *dev)
static netdev_tx_t ali_ircc_fir_hard_xmit(struct sk_buff *skb,
struct net_device *dev)
static void ali_ircc_dma_xmit(struct ali_ircc_cb *self)
static int  ali_ircc_dma_xmit_complete(struct ali_ircc_cb *self)
static int ali_ircc_dma_receive(struct ali_ircc_cb *self)
static int  ali_ircc_dma_receive_complete(struct ali_ircc_cb *self)
static netdev_tx_t ali_ircc_sir_hard_xmit(struct sk_buff *skb,
struct net_device *dev)
static int ali_ircc_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int ali_ircc_is_receiving(struct ali_ircc_cb *self)
static int ali_ircc_suspend(struct platform_device *dev, pm_message_t state)
static int ali_ircc_resume(struct platform_device *dev)
static void SetCOMInterrupts(struct ali_ircc_cb *self , unsigned char enable)
static void SIR2FIR(int iobase)
static void FIR2SIR(int iobase)
MODULE_AUTHOR("Benjamin Kong <benjamin_kong@ali.com.tw>");
MODULE_DESCRIPTION("ALi FIR Controller Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" ALI_IRCC_DRIVER_NAME);
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io, "Base I/O addresses");
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(irq, "IRQ lines");
module_param_array(dma, int, NULL, 0);
MODULE_PARM_DESC(dma, "DMA channels");
module_init(ali_ircc_init);
module_exit(ali_ircc_cleanup);
