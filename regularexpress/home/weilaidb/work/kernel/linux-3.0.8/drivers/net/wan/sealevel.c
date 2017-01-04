struct slvl_device
;
struct slvl_board
;
static inline struct slvl_device* dev_to_chan(struct net_device *dev)
static void sealevel_input(struct z8530_channel *c, struct sk_buff *skb)
static int sealevel_open(struct net_device *d)
static int sealevel_close(struct net_device *d)
static int sealevel_ioctl(struct net_device *d, struct ifreq *ifr, int cmd)
static netdev_tx_t sealevel_queue_xmit(struct sk_buff *skb,
struct net_device *d)
static int sealevel_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static const struct net_device_ops sealevel_ops = ;
static int slvl_setup(struct slvl_device *sv, int iobase, int irq)
static __init struct slvl_board *slvl_init(int iobase, int irq,
int txdma, int rxdma, int slow)
static void __exit slvl_shutdown(struct slvl_board *b)
static int io=0x238;
static int txdma=1;
static int rxdma=3;
static int irq=5;
static int slow=0;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "The I/O base of the Sealevel card");
module_param(txdma, int, 0);
MODULE_PARM_DESC(txdma, "Transmit DMA channel");
module_param(rxdma, int, 0);
MODULE_PARM_DESC(rxdma, "Receive DMA channel");
module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "The interrupt line setting for the SeaLevel card");
module_param(slow, bool, 0);
MODULE_PARM_DESC(slow, "Set this for an older Sealevel card such as the 4012");
MODULE_AUTHOR("Alan Cox");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Modular driver for the SeaLevel 4021");
static struct slvl_board *slvl_unit;
static int __init slvl_init_module(void)
static void __exit slvl_cleanup_module(void)
module_init(slvl_init_module);
module_exit(slvl_cleanup_module);
