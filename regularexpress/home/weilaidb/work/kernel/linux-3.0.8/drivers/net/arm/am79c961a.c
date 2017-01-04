#define TX_BUFFERS 15
#define RX_BUFFERS 25
static irqreturn_t
am79c961_interrupt (int irq, void *dev_id);
static unsigned int net_debug = NET_DEBUG;
static const char version[] =
"am79c961 ethernet driver (C) 1995-2001 Russell King v0.04\n";
static void write_rreg(u_long base, u_int reg, u_int val)
static inline unsigned short read_rreg(u_long base_addr, u_int reg)
static inline void write_ireg(u_long base, u_int reg, u_int val)
static inline unsigned short read_ireg(u_long base_addr, u_int reg)
#define am_writeword(dev,off,val) __raw_writew(val, ISAMEM_BASE + ((off) << 1))
#define am_readword(dev,off)      __raw_readw(ISAMEM_BASE + ((off) << 1))
static void
am_writebuffer(struct net_device *dev, u_int offset, unsigned char *buf, unsigned int length)
static void
am_readbuffer(struct net_device *dev, u_int offset, unsigned char *buf, unsigned int length)
#error Not compatible
static int
am79c961_ramtest(struct net_device *dev, unsigned int val)
static void am79c961_mc_hash(char *addr, u16 *hash)
static unsigned int am79c961_get_rx_mode(struct net_device *dev, u16 *hash)
static void
am79c961_init_for_open(struct net_device *dev)
static void am79c961_timer(unsigned long data)
static int
am79c961_open(struct net_device *dev)
static int
am79c961_close(struct net_device *dev)
static void am79c961_setmulticastlist (struct net_device *dev)
static void am79c961_timeout(struct net_device *dev)
static int
am79c961_sendpacket(struct sk_buff *skb, struct net_device *dev)
static void
am79c961_rx(struct net_device *dev, struct dev_priv *priv)
static void
am79c961_tx(struct net_device *dev, struct dev_priv *priv)
static irqreturn_t
am79c961_interrupt(int irq, void *dev_id)
static void am79c961_poll_controller(struct net_device *dev)
static int
am79c961_hw_init(struct net_device *dev)
static void __init am79c961_banner(void)
static const struct net_device_ops am79c961_netdev_ops = ;
static int __devinit am79c961_probe(struct platform_device *pdev)
static struct platform_driver am79c961_driver = ;
static int __init am79c961_init(void)
__initcall(am79c961_init);
