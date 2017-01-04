#define _IBM_LANA_DRIVER_
#undef DEBUG
#define DRV_NAME "ibmlana"
static char *MediaNames[Media_Count] = ;
static void dumpregs(struct net_device *dev)
static void dumpmem(struct net_device *dev, u32 start, u32 len)
static void PrTime(void)
static void getaddrs(struct mca_device *mdev, int *base, int *memlen,
int *iobase, int *irq, ibmlana_medium *medium)
static int wait_timeout(struct net_device *dev, int regoffs, u16 mask,
u16 value, int timeout)
static void ResetBoard(struct net_device *dev)
static void InitDscrs(struct net_device *dev)
static int InitSONIC(struct net_device *dev)
static void StopSONIC(struct net_device *dev)
static void putcam(camentry_t * cams, int *camcnt, char *addr)
static void InitBoard(struct net_device *dev)
static void StartTx(struct net_device *dev, int descr)
static void irqrbe_handler(struct net_device *dev)
static void irqrx_handler(struct net_device *dev)
static void irqtx_handler(struct net_device *dev)
static void irqtxerr_handler(struct net_device *dev)
static irqreturn_t irq_handler(int dummy, void *device)
static int ibmlana_open(struct net_device *dev)
static int ibmlana_close(struct net_device *dev)
static netdev_tx_t ibmlana_tx(struct sk_buff *skb, struct net_device *dev)
static void ibmlana_set_multicast_list(struct net_device *dev)
static int ibmlana_irq;
static int ibmlana_io;
static int startslot;
static short ibmlana_adapter_ids[] __initdata = ;
static char *ibmlana_adapter_names[] __devinitdata = ;
static const struct net_device_ops ibmlana_netdev_ops = ;
static int __devinit ibmlana_init_one(struct device *kdev)
static int ibmlana_remove_one(struct device *kdev)
module_param_named(irq, ibmlana_irq, int, 0);
module_param_named(io, ibmlana_io, int, 0);
MODULE_PARM_DESC(irq, "IBM LAN/A IRQ number");
MODULE_PARM_DESC(io, "IBM LAN/A I/O base address");
MODULE_LICENSE("GPL");
static struct mca_driver ibmlana_driver = ;
static int __init ibmlana_init_module(void)
static void __exit ibmlana_cleanup_module(void)
module_init(ibmlana_init_module);
module_exit(ibmlana_cleanup_module);
