static char version[] __devinitdata = "ether3 ethernet driver (c) 1995-2000 R.M.King v1.17\n";
static unsigned int net_debug = NET_DEBUG;
static void	ether3_setmulticastlist(struct net_device *dev);
static int	ether3_rx(struct net_device *dev, unsigned int maxcnt);
static void	ether3_tx(struct net_device *dev);
static int	ether3_open (struct net_device *dev);
static int	ether3_sendpacket (struct sk_buff *skb, struct net_device *dev);
static irqreturn_t ether3_interrupt (int irq, void *dev_id);
static int	ether3_close (struct net_device *dev);
static void	ether3_setmulticastlist (struct net_device *dev);
static void	ether3_timeout(struct net_device *dev);
#define BUS_16		2
#define BUS_8		1
#define BUS_UNKNOWN	0
typedef enum  buffer_rw_t;
static inline void ether3_outb(int v, const void __iomem *r)
static inline void ether3_outw(int v, const void __iomem *r)
#define ether3_inb(r)		()
#define ether3_inw(r)		()
static int
ether3_setbuffer(struct net_device *dev, buffer_rw_t read, int start)
#define ether3_writebuffer(dev,data,length)			\
writesw(REG_BUFWIN, (data), (length) >> 1)
#define ether3_writeword(dev,data)				\
writew((data), REG_BUFWIN)
#define ether3_writelong(dev,data)
#define ether3_readbuffer(dev,data,length)			\
readsw(REG_BUFWIN, (data), (length) >> 1)
#define ether3_readword(dev)					\
readw(REG_BUFWIN)
#define ether3_readlong(dev)	 				\
readw(REG_BUFWIN) | (readw(REG_BUFWIN) << 16)
static void ether3_ledoff(unsigned long data)
static inline void ether3_ledon(struct net_device *dev)
static int __devinit
ether3_addr(char *addr, struct expansion_card *ec)
static int __devinit
ether3_ramtest(struct net_device *dev, unsigned char byte)
static int __devinit ether3_init_2(struct net_device *dev)
static void
ether3_init_for_open(struct net_device *dev)
static inline int
ether3_probe_bus_8(struct net_device *dev, int val)
static inline int
ether3_probe_bus_16(struct net_device *dev, int val)
static int
ether3_open(struct net_device *dev)
static int
ether3_close(struct net_device *dev)
static void ether3_setmulticastlist(struct net_device *dev)
static void ether3_timeout(struct net_device *dev)
static int
ether3_sendpacket(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t
ether3_interrupt(int irq, void *dev_id)
static int ether3_rx(struct net_device *dev, unsigned int maxcnt)
static void ether3_tx(struct net_device *dev)
static void __devinit ether3_banner(void)
static const struct net_device_ops ether3_netdev_ops = ;
static int __devinit
ether3_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit ether3_remove(struct expansion_card *ec)
static struct ether3_data ether3 = ;
static struct ether3_data etherb = ;
static const struct ecard_id ether3_ids[] = ;
static struct ecard_driver ether3_driver = ;
static int __init ether3_init(void)
static void __exit ether3_exit(void)
module_init(ether3_init);
module_exit(ether3_exit);
MODULE_LICENSE("GPL");
