static int dma;
static inline struct z8530_dev* dev_to_sv(struct net_device *dev)
static void hostess_input(struct z8530_channel *c, struct sk_buff *skb)
static int hostess_open(struct net_device *d)
static int hostess_close(struct net_device *d)
static int hostess_ioctl(struct net_device *d, struct ifreq *ifr, int cmd)
static netdev_tx_t hostess_queue_xmit(struct sk_buff *skb,
struct net_device *d)
static int hostess_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static const struct net_device_ops hostess_ops = ;
static struct z8530_dev *sv11_init(int iobase, int irq)
static void sv11_shutdown(struct z8530_dev *dev)
static int io = 0x200;
static int irq = 9;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "The I/O base of the Comtrol Hostess SV11 card");
module_param(dma, int, 0);
MODULE_PARM_DESC(dma, "Set this to 1 to use DMA1/DMA3 for TX/RX");
module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "The interrupt line setting for the Comtrol Hostess SV11 card");
MODULE_AUTHOR("Alan Cox");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Modular driver for the Comtrol Hostess SV11");
static struct z8530_dev *sv11_unit;
int init_module(void)
void cleanup_module(void)
