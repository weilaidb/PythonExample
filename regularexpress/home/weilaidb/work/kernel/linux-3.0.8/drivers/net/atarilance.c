static char version[] = "atarilance.c: v1.3 04/04/96 "
"Roman.Hodek@informatik.uni-erlangen.de\n";
#define	LANCE_DEBUG	1
static int lance_debug = LANCE_DEBUG;
static int lance_debug = 1;
module_param(lance_debug, int, 0);
MODULE_PARM_DESC(lance_debug, "atarilance debug level (0-3)");
MODULE_LICENSE("GPL");
#undef LANCE_DEBUG_PROBE
#define	DPRINTK(n,a)							\
do  while( 0 )
# define PROBE_PRINT(a)	printk a
# define PROBE_PRINT(a)
#define TX_LOG_RING_SIZE			3
#define RX_LOG_RING_SIZE			5
#define TX_RING_SIZE			(1 << TX_LOG_RING_SIZE)
#define TX_RING_LEN_BITS		(TX_LOG_RING_SIZE << 5)
#define	TX_RING_MOD_MASK		(TX_RING_SIZE - 1)
#define RX_RING_SIZE			(1 << RX_LOG_RING_SIZE)
#define RX_RING_LEN_BITS		(RX_LOG_RING_SIZE << 5)
#define	RX_RING_MOD_MASK		(RX_RING_SIZE - 1)
#define TX_TIMEOUT	(HZ/5)
struct lance_rx_head ;
struct lance_tx_head ;
struct ringdesc ;
struct lance_init_block ;
struct lance_memory ;
#define	RIEBL_RSVD_START	0xee70
#define	RIEBL_RSVD_END		0xeec0
#define RIEBL_MAGIC			0x09051990
#define RIEBL_MAGIC_ADDR	((unsigned long *)(((char *)MEM) + 0xee8a))
#define RIEBL_HWADDR_ADDR	((unsigned char *)(((char *)MEM) + 0xee8e))
#define RIEBL_IVEC_ADDR		((unsigned short *)(((char *)MEM) + 0xfffe))
static unsigned char OldRieblDefHwaddr[6] = ;
struct lance_ioreg ;
enum lance_type ;
static char *lance_names[] = ;
struct lance_private ;
#define	MEM		lp->mem
#define	DREG	IO->data
#define	AREG	IO->addr
#define	REGA(a)	(*( AREG = (a), &DREG ))
#define PKT_BUF_SZ		1544
#define	PKTBUF_ADDR(head)	(((unsigned char *)(MEM)) + (head)->base)
static struct lance_addr  lance_addr_list[] = ;
#define	N_LANCE_ADDR	ARRAY_SIZE(lance_addr_list)
#define TMD1_ENP		0x01
#define TMD1_STP		0x02
#define TMD1_DEF		0x04
#define TMD1_ONE		0x08
#define TMD1_MORE		0x10
#define TMD1_ERR		0x40
#define TMD1_OWN 		0x80
#define TMD1_OWN_CHIP	TMD1_OWN
#define TMD1_OWN_HOST	0
#define TMD3_TDR		0x03FF
#define TMD3_RTRY		0x0400
#define TMD3_LCAR		0x0800
#define TMD3_LCOL		0x1000
#define TMD3_UFLO		0x4000
#define TMD3_BUFF		0x8000
#define RMD1_ENP		0x01
#define RMD1_STP		0x02
#define RMD1_BUFF		0x04
#define RMD1_CRC		0x08
#define RMD1_OFLO		0x10
#define RMD1_FRAM		0x20
#define RMD1_ERR		0x40
#define RMD1_OWN 		0x80
#define RMD1_OWN_CHIP	RMD1_OWN
#define RMD1_OWN_HOST	0
#define CSR0	0
#define CSR1	1
#define CSR2	2
#define CSR3	3
#define CSR8	8
#define CSR15	15
#define CSR0_INIT	0x0001
#define CSR0_STRT	0x0002
#define CSR0_STOP	0x0004
#define CSR0_TDMD	0x0008
#define CSR0_TXON	0x0010
#define CSR0_RXON	0x0020
#define CSR0_INEA	0x0040
#define CSR0_INTR	0x0080
#define CSR0_IDON	0x0100
#define CSR0_TINT	0x0200
#define CSR0_RINT	0x0400
#define CSR0_MERR	0x0800
#define CSR0_MISS	0x1000
#define CSR0_CERR	0x2000
#define CSR0_BABL	0x4000
#define CSR0_ERR	0x8000
#define CSR3_BCON	0x0001
#define CSR3_ACON	0x0002
#define CSR3_BSWP	0x0004
static unsigned long lance_probe1( struct net_device *dev, struct lance_addr
*init_rec );
static int lance_open( struct net_device *dev );
static void lance_init_ring( struct net_device *dev );
static int lance_start_xmit( struct sk_buff *skb, struct net_device *dev );
static irqreturn_t lance_interrupt( int irq, void *dev_id );
static int lance_rx( struct net_device *dev );
static int lance_close( struct net_device *dev );
static void set_multicast_list( struct net_device *dev );
static int lance_set_mac_address( struct net_device *dev, void *addr );
static void lance_tx_timeout (struct net_device *dev);
static void *slow_memcpy( void *dst, const void *src, size_t len )
struct net_device * __init atarilance_probe(int unit)
static noinline int __init addr_accessible(volatile void *regp, int wordflag,
int writeflag)
static const struct net_device_ops lance_netdev_ops = ;
static unsigned long __init lance_probe1( struct net_device *dev,
struct lance_addr *init_rec )
static int lance_open( struct net_device *dev )
static void lance_init_ring( struct net_device *dev )
static void lance_tx_timeout (struct net_device *dev)
static int lance_start_xmit( struct sk_buff *skb, struct net_device *dev )
static irqreturn_t lance_interrupt( int irq, void *dev_id )
static int lance_rx( struct net_device *dev )
static int lance_close( struct net_device *dev )
static void set_multicast_list( struct net_device *dev )
static int lance_set_mac_address( struct net_device *dev, void *addr )
static struct net_device *atarilance_dev;
static int __init atarilance_module_init(void)
static void __exit atarilance_module_exit(void)
module_init(atarilance_module_init);
module_exit(atarilance_module_exit);
