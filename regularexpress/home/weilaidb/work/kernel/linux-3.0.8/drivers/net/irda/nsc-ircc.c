#define CHIP_IO_EXTENT 8
#define BROKEN_DONGLE_ID
static char *driver_name = "nsc-ircc";
#define NSC_IRCC_DRIVER_NAME                  "nsc-ircc"
static int nsc_ircc_suspend(struct platform_device *dev, pm_message_t state);
static int nsc_ircc_resume(struct platform_device *dev);
static struct platform_driver nsc_ircc_driver = ;
static int qos_mtt_bits = 0x07;
static int dongle_id;
static unsigned int io[]  = ;
static unsigned int irq[] = ;
static unsigned int dma[] = ;
static int nsc_ircc_probe_108(nsc_chip_t *chip, chipio_t *info);
static int nsc_ircc_probe_338(nsc_chip_t *chip, chipio_t *info);
static int nsc_ircc_probe_39x(nsc_chip_t *chip, chipio_t *info);
static int nsc_ircc_init_108(nsc_chip_t *chip, chipio_t *info);
static int nsc_ircc_init_338(nsc_chip_t *chip, chipio_t *info);
static int nsc_ircc_init_39x(nsc_chip_t *chip, chipio_t *info);
static int nsc_ircc_pnp_probe(struct pnp_dev *dev, const struct pnp_device_id *id);
static nsc_chip_t chips[] = ;
static struct nsc_ircc_cb *dev_self[] = ;
static char *dongle_types[] = ;
static chipio_t pnp_info;
static const struct pnp_device_id nsc_ircc_pnp_table[] = ;
MODULE_DEVICE_TABLE(pnp, nsc_ircc_pnp_table);
static struct pnp_driver nsc_ircc_pnp_driver = ;
static int  nsc_ircc_open(chipio_t *info);
static int  nsc_ircc_close(struct nsc_ircc_cb *self);
static int  nsc_ircc_setup(chipio_t *info);
static void nsc_ircc_pio_receive(struct nsc_ircc_cb *self);
static int  nsc_ircc_dma_receive(struct nsc_ircc_cb *self);
static int  nsc_ircc_dma_receive_complete(struct nsc_ircc_cb *self, int iobase);
static netdev_tx_t  nsc_ircc_hard_xmit_sir(struct sk_buff *skb,
struct net_device *dev);
static netdev_tx_t  nsc_ircc_hard_xmit_fir(struct sk_buff *skb,
struct net_device *dev);
static int  nsc_ircc_pio_write(int iobase, __u8 *buf, int len, int fifo_size);
static void nsc_ircc_dma_xmit(struct nsc_ircc_cb *self, int iobase);
static __u8 nsc_ircc_change_speed(struct nsc_ircc_cb *self, __u32 baud);
static int  nsc_ircc_is_receiving(struct nsc_ircc_cb *self);
static int  nsc_ircc_read_dongle_id (int iobase);
static void nsc_ircc_init_dongle_interface (int iobase, int dongle_id);
static int  nsc_ircc_net_open(struct net_device *dev);
static int  nsc_ircc_net_close(struct net_device *dev);
static int  nsc_ircc_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int pnp_registered;
static int pnp_succeeded;
static int __init nsc_ircc_init(void)
static void __exit nsc_ircc_cleanup(void)
static const struct net_device_ops nsc_ircc_sir_ops = ;
static const struct net_device_ops nsc_ircc_fir_ops = ;
static int __init nsc_ircc_open(chipio_t *info)
static int __exit nsc_ircc_close(struct nsc_ircc_cb *self)
static int nsc_ircc_init_108(nsc_chip_t *chip, chipio_t *info)
static int nsc_ircc_probe_108(nsc_chip_t *chip, chipio_t *info)
static int nsc_ircc_init_338(nsc_chip_t *chip, chipio_t *info)
static int nsc_ircc_probe_338(nsc_chip_t *chip, chipio_t *info)
static int nsc_ircc_init_39x(nsc_chip_t *chip, chipio_t *info)
static int nsc_ircc_probe_39x(nsc_chip_t *chip, chipio_t *info)
static int nsc_ircc_pnp_probe(struct pnp_dev *dev, const struct pnp_device_id *id)
static int nsc_ircc_setup(chipio_t *info)
static int nsc_ircc_read_dongle_id (int iobase)
static void nsc_ircc_init_dongle_interface (int iobase, int dongle_id)
static void nsc_ircc_change_dongle_speed(int iobase, int speed, int dongle_id)
static __u8 nsc_ircc_change_speed(struct nsc_ircc_cb *self, __u32 speed)
static netdev_tx_t nsc_ircc_hard_xmit_sir(struct sk_buff *skb,
struct net_device *dev)
static netdev_tx_t nsc_ircc_hard_xmit_fir(struct sk_buff *skb,
struct net_device *dev)
static void nsc_ircc_dma_xmit(struct nsc_ircc_cb *self, int iobase)
static int nsc_ircc_pio_write(int iobase, __u8 *buf, int len, int fifo_size)
static int nsc_ircc_dma_xmit_complete(struct nsc_ircc_cb *self)
static int nsc_ircc_dma_receive(struct nsc_ircc_cb *self)
static int nsc_ircc_dma_receive_complete(struct nsc_ircc_cb *self, int iobase)
static void nsc_ircc_pio_receive(struct nsc_ircc_cb *self)
static void nsc_ircc_sir_interrupt(struct nsc_ircc_cb *self, int eir)
static void nsc_ircc_fir_interrupt(struct nsc_ircc_cb *self, int iobase,
int eir)
static irqreturn_t nsc_ircc_interrupt(int irq, void *dev_id)
static int nsc_ircc_is_receiving(struct nsc_ircc_cb *self)
static int nsc_ircc_net_open(struct net_device *dev)
static int nsc_ircc_net_close(struct net_device *dev)
static int nsc_ircc_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int nsc_ircc_suspend(struct platform_device *dev, pm_message_t state)
static int nsc_ircc_resume(struct platform_device *dev)
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("NSC IrDA Device Driver");
MODULE_LICENSE("GPL");
module_param(qos_mtt_bits, int, 0);
MODULE_PARM_DESC(qos_mtt_bits, "Minimum Turn Time");
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io, "Base I/O addresses");
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(irq, "IRQ lines");
module_param_array(dma, int, NULL, 0);
MODULE_PARM_DESC(dma, "DMA channels");
module_param(dongle_id, int, 0);
MODULE_PARM_DESC(dongle_id, "Type-id of used dongle");
module_init(nsc_ircc_init);
module_exit(nsc_ircc_cleanup);
