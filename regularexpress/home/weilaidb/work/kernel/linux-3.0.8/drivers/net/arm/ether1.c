#define __ETHER1_C
static unsigned int net_debug = NET_DEBUG;
#define BUFFER_SIZE	0x10000
#define TX_AREA_START	0x00100
#define TX_AREA_END	0x05000
#define RX_AREA_START	0x05000
#define RX_AREA_END	0x0fc00
static int ether1_open(struct net_device *dev);
static int ether1_sendpacket(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t ether1_interrupt(int irq, void *dev_id);
static int ether1_close(struct net_device *dev);
static void ether1_setmulticastlist(struct net_device *dev);
static void ether1_timeout(struct net_device *dev);
static char version[] __devinitdata = "ether1 ethernet driver (c) 2000 Russell King v1.07\n";
#define BUS_16 16
#define BUS_8  8
#define DISABLEIRQS 1
#define NORMALIRQS  0
#define ether1_readw(dev, addr, type, offset, svflgs) ether1_inw_p (dev, addr + (int)(&((type *)0)->offset), svflgs)
#define ether1_writew(dev, val, addr, type, offset, svflgs) ether1_outw_p (dev, val, addr + (int)(&((type *)0)->offset), svflgs)
static inline unsigned short
ether1_inw_p (struct net_device *dev, int addr, int svflgs)
static inline void
ether1_outw_p (struct net_device *dev, unsigned short val, int addr, int svflgs)
static void
ether1_writebuffer (struct net_device *dev, void *data, unsigned int start, unsigned int length)
static void
ether1_readbuffer (struct net_device *dev, void *data, unsigned int start, unsigned int length)
static int __devinit
ether1_ramtest(struct net_device *dev, unsigned char byte)
static int
ether1_reset (struct net_device *dev)
static int __devinit
ether1_init_2(struct net_device *dev)
#define NOP_ADDR	(TX_AREA_START)
#define NOP_SIZE	(0x06)
static nop_t  init_nop  = ;
#define TDR_ADDR	(0x003a)
#define TDR_SIZE	(0x08)
static tdr_t  init_tdr	= ;
#define MC_ADDR		(0x002e)
#define MC_SIZE		(0x0c)
static mc_t   init_mc   = ;
#define SA_ADDR		(0x0022)
#define SA_SIZE		(0x0c)
static sa_t   init_sa   = ;
#define CFG_ADDR	(0x0010)
#define CFG_SIZE	(0x12)
static cfg_t  init_cfg  = ;
#define SCB_ADDR	(0x0000)
#define SCB_SIZE	(0x10)
static scb_t  init_scb  = ;
#define ISCP_ADDR	(0xffee)
#define ISCP_SIZE	(0x08)
static iscp_t init_iscp = ;
#define SCP_ADDR	(0xfff6)
#define SCP_SIZE	(0x0a)
static scp_t  init_scp  = ;
#define RFD_SIZE	(0x16)
static rfd_t  init_rfd	= ;
#define RBD_SIZE	(0x0a)
static rbd_t  init_rbd	= ;
#define TX_SIZE		(0x08)
#define TBD_SIZE	(0x08)
static int
ether1_init_for_open (struct net_device *dev)
static int
ether1_txalloc (struct net_device *dev, int size)
static int
ether1_open (struct net_device *dev)
static void
ether1_timeout(struct net_device *dev)
static int
ether1_sendpacket (struct sk_buff *skb, struct net_device *dev)
static void
ether1_xmit_done (struct net_device *dev)
static void
ether1_recv_done (struct net_device *dev)
static irqreturn_t
ether1_interrupt (int irq, void *dev_id)
static int
ether1_close (struct net_device *dev)
static void
ether1_setmulticastlist (struct net_device *dev)
static void __devinit ether1_banner(void)
static const struct net_device_ops ether1_netdev_ops = ;
static int __devinit
ether1_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit ether1_remove(struct expansion_card *ec)
static const struct ecard_id ether1_ids[] = ;
static struct ecard_driver ether1_driver = ;
static int __init ether1_init(void)
static void __exit ether1_exit(void)
module_init(ether1_init);
module_exit(ether1_exit);
MODULE_LICENSE("GPL");
