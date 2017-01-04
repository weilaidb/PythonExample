#define VIA_MODULE_NAME "via-ircc"
#define CHIP_IO_EXTENT 0x40
static char *driver_name = VIA_MODULE_NAME;
static int qos_mtt_bits = 0x07;
static int dongle_id = 0;
module_param(dongle_id, int, 0);
static int via_ircc_open(struct pci_dev *pdev, chipio_t * info,
unsigned int id);
static int via_ircc_dma_receive(struct via_ircc_cb *self);
static int via_ircc_dma_receive_complete(struct via_ircc_cb *self,
int iobase);
static netdev_tx_t via_ircc_hard_xmit_sir(struct sk_buff *skb,
struct net_device *dev);
static netdev_tx_t via_ircc_hard_xmit_fir(struct sk_buff *skb,
struct net_device *dev);
static void via_hw_init(struct via_ircc_cb *self);
static void via_ircc_change_speed(struct via_ircc_cb *self, __u32 baud);
static irqreturn_t via_ircc_interrupt(int irq, void *dev_id);
static int via_ircc_is_receiving(struct via_ircc_cb *self);
static int via_ircc_read_dongle_id(int iobase);
static int via_ircc_net_open(struct net_device *dev);
static int via_ircc_net_close(struct net_device *dev);
static int via_ircc_net_ioctl(struct net_device *dev, struct ifreq *rq,
int cmd);
static void via_ircc_change_dongle_speed(int iobase, int speed,
int dongle_id);
static int RxTimerHandler(struct via_ircc_cb *self, int iobase);
static void hwreset(struct via_ircc_cb *self);
static int via_ircc_dma_xmit(struct via_ircc_cb *self, u16 iobase);
static int upload_rxdata(struct via_ircc_cb *self, int iobase);
static int __devinit via_init_one (struct pci_dev *pcidev, const struct pci_device_id *id);
static void __devexit via_remove_one (struct pci_dev *pdev);
static void iodelay(int udelay)
static DEFINE_PCI_DEVICE_TABLE(via_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci,via_pci_tbl);
static struct pci_driver via_driver = ;
static int __init via_ircc_init(void)
static int __devinit via_init_one (struct pci_dev *pcidev, const struct pci_device_id *id)
static void __exit via_ircc_cleanup(void)
static const struct net_device_ops via_ircc_sir_ops = ;
static const struct net_device_ops via_ircc_fir_ops = ;
static __devinit int via_ircc_open(struct pci_dev *pdev, chipio_t * info,
unsigned int id)
static void __devexit via_remove_one(struct pci_dev *pdev)
static void via_hw_init(struct via_ircc_cb *self)
static int via_ircc_read_dongle_id(int iobase)
static void via_ircc_change_dongle_speed(int iobase, int speed,
int dongle_id)
static void via_ircc_change_speed(struct via_ircc_cb *self, __u32 speed)
static netdev_tx_t via_ircc_hard_xmit_sir(struct sk_buff *skb,
struct net_device *dev)
static netdev_tx_t via_ircc_hard_xmit_fir(struct sk_buff *skb,
struct net_device *dev)
static int via_ircc_dma_xmit(struct via_ircc_cb *self, u16 iobase)
static int via_ircc_dma_xmit_complete(struct via_ircc_cb *self)
static int via_ircc_dma_receive(struct via_ircc_cb *self)
static int via_ircc_dma_receive_complete(struct via_ircc_cb *self,
int iobase)
static int upload_rxdata(struct via_ircc_cb *self, int iobase)
static int RxTimerHandler(struct via_ircc_cb *self, int iobase)
static irqreturn_t via_ircc_interrupt(int dummy, void *dev_id)
static void hwreset(struct via_ircc_cb *self)
static int via_ircc_is_receiving(struct via_ircc_cb *self)
static int via_ircc_net_open(struct net_device *dev)
static int via_ircc_net_close(struct net_device *dev)
static int via_ircc_net_ioctl(struct net_device *dev, struct ifreq *rq,
int cmd)
MODULE_AUTHOR("VIA Technologies,inc");
MODULE_DESCRIPTION("VIA IrDA Device Driver");
MODULE_LICENSE("GPL");
module_init(via_ircc_init);
module_exit(via_ircc_cleanup);
