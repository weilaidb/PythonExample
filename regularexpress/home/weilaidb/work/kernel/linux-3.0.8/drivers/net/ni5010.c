static const char boardname[] = "NI5010";
static char version[] __initdata =
"ni5010.c: v1.02 20060611 Jan-Pascal van Best and Andreas Mohr\n";
static unsigned int bufsize_rcv;
#define JUMPERED_INTERRUPTS
#undef JUMPERED_DMA
#undef FULL_IODETECT
static unsigned int ports[] __initdata =
;
#define NI5010_DEBUG 0
struct ni5010_local ;
static int	ni5010_probe1(struct net_device *dev, int ioaddr);
static int	ni5010_open(struct net_device *dev);
static int	ni5010_send_packet(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t ni5010_interrupt(int irq, void *dev_id);
static void	ni5010_rx(struct net_device *dev);
static void	ni5010_timeout(struct net_device *dev);
static int	ni5010_close(struct net_device *dev);
static void 	ni5010_set_multicast_list(struct net_device *dev);
static void	reset_receiver(struct net_device *dev);
static int	process_xmt_interrupt(struct net_device *dev);
#define tx_done(dev) 1
static void	hardware_send_packet(struct net_device *dev, char *buf, int length, int pad);
static void 	chipset_init(struct net_device *dev, int startp);
static void	dump_packet(void *buf, int len);
static void 	ni5010_show_registers(struct net_device *dev);
static int io;
static int irq;
struct net_device * __init ni5010_probe(int unit)
static inline int rd_port(int ioaddr)
static void __init trigger_irq(int ioaddr)
static const struct net_device_ops ni5010_netdev_ops = ;
static int __init ni5010_probe1(struct net_device *dev, int ioaddr)
static int ni5010_open(struct net_device *dev)
static void reset_receiver(struct net_device *dev)
static void ni5010_timeout(struct net_device *dev)
static int ni5010_send_packet(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t ni5010_interrupt(int irq, void *dev_id)
static void dump_packet(void *buf, int len)
static void ni5010_rx(struct net_device *dev)
static int process_xmt_interrupt(struct net_device *dev)
static int ni5010_close(struct net_device *dev)
static void ni5010_set_multicast_list(struct net_device *dev)
static void hardware_send_packet(struct net_device *dev, char *buf, int length, int pad)
static void chipset_init(struct net_device *dev, int startp)
static void ni5010_show_registers(struct net_device *dev)
static struct net_device *dev_ni5010;
module_param(io, int, 0);
module_param(irq, int, 0);
MODULE_PARM_DESC(io, "ni5010 I/O base address");
MODULE_PARM_DESC(irq, "ni5010 IRQ number");
static int __init ni5010_init_module(void)
static void __exit ni5010_cleanup_module(void)
module_init(ni5010_init_module);
module_exit(ni5010_cleanup_module);
MODULE_LICENSE("GPL");
