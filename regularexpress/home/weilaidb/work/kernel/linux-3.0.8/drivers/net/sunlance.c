#undef DEBUG_DRIVER
static char lancestr[] = "LANCE";
#define DRV_NAME	"sunlance"
#define DRV_VERSION	"2.02"
#define DRV_RELDATE	"8/24/03"
#define DRV_AUTHOR	"Miguel de Icaza (miguel@nuclecu.unam.mx)"
static char version[] =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " " DRV_AUTHOR "\n";
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION("Sun Lance ethernet driver");
MODULE_LICENSE("GPL");
#define LANCE_LOG_TX_BUFFERS 4
#define LANCE_LOG_RX_BUFFERS 4
#define LE_CSR0 0
#define LE_CSR1 1
#define LE_CSR2 2
#define LE_CSR3 3
#define LE_MO_PROM      0x8000
#define	LE_C0_ERR	0x8000
#define	LE_C0_BABL	0x4000
#define	LE_C0_CERR	0x2000
#define	LE_C0_MISS	0x1000
#define	LE_C0_MERR	0x0800
#define	LE_C0_RINT	0x0400
#define	LE_C0_TINT	0x0200
#define	LE_C0_IDON	0x0100
#define	LE_C0_INTR	0x0080
#define	LE_C0_INEA	0x0040
#define	LE_C0_RXON	0x0020
#define	LE_C0_TXON	0x0010
#define	LE_C0_TDMD	0x0008
#define	LE_C0_STOP	0x0004
#define	LE_C0_STRT	0x0002
#define	LE_C0_INIT	0x0001
#define	LE_C3_BSWP	0x4
#define	LE_C3_ACON	0x2
#define	LE_C3_BCON	0x1
#define LE_R1_OWN       0x80
#define LE_R1_ERR       0x40
#define LE_R1_FRA       0x20
#define LE_R1_OFL       0x10
#define LE_R1_CRC       0x08
#define LE_R1_BUF       0x04
#define LE_R1_SOP       0x02
#define LE_R1_EOP       0x01
#define LE_R1_POK       0x03
#define LE_T1_OWN       0x80
#define LE_T1_ERR       0x40
#define LE_T1_EMORE     0x10
#define LE_T1_EONE      0x08
#define LE_T1_EDEF      0x04
#define LE_T1_SOP       0x02
#define LE_T1_EOP       0x01
#define LE_T1_POK	0x03
#define LE_T3_BUF       0x8000
#define LE_T3_UFL       0x4000
#define LE_T3_LCOL      0x1000
#define LE_T3_CLOS      0x0800
#define LE_T3_RTY       0x0400
#define LE_T3_TDR       0x03ff
#define TX_RING_SIZE			(1 << (LANCE_LOG_TX_BUFFERS))
#define TX_RING_MOD_MASK		(TX_RING_SIZE - 1)
#define TX_RING_LEN_BITS		((LANCE_LOG_TX_BUFFERS) << 29)
#define TX_NEXT(__x)			(((__x)+1) & TX_RING_MOD_MASK)
#define RX_RING_SIZE			(1 << (LANCE_LOG_RX_BUFFERS))
#define RX_RING_MOD_MASK		(RX_RING_SIZE - 1)
#define RX_RING_LEN_BITS		((LANCE_LOG_RX_BUFFERS) << 29)
#define RX_NEXT(__x)			(((__x)+1) & RX_RING_MOD_MASK)
#define PKT_BUF_SZ		1544
#define RX_BUFF_SIZE            PKT_BUF_SZ
#define TX_BUFF_SIZE            PKT_BUF_SZ
struct lance_rx_desc ;
struct lance_tx_desc ;
struct lance_init_block ;
#define libdesc_offset(rt, elem) \
((__u32)(((unsigned long)(&(((struct lance_init_block *)0)->rt[elem])))))
#define libbuff_offset(rt, elem) \
((__u32)(((unsigned long)(&(((struct lance_init_block *)0)->rt[elem][0])))))
struct lance_private ;
#define TX_BUFFS_AVAIL ((lp->tx_old<=lp->tx_new)?\
lp->tx_old+TX_RING_MOD_MASK-lp->tx_new:\
lp->tx_old - lp->tx_new-1)
#define RDP		0x00UL
#define RAP		0x02UL
#define LANCE_REG_SIZE	0x04UL
#define STOP_LANCE(__lp) \
do  while (0)
int sparc_lance_debug = 2;
#define LANCE_ADDR(x) ((long)(x) & ~0xff000000)
static void load_csrs(struct lance_private *lp)
static void lance_init_ring_dvma(struct net_device *dev)
static void lance_init_ring_pio(struct net_device *dev)
static void init_restart_ledma(struct lance_private *lp)
static int init_restart_lance(struct lance_private *lp)
static void lance_rx_dvma(struct net_device *dev)
static void lance_tx_dvma(struct net_device *dev)
static void lance_piocopy_to_skb(struct sk_buff *skb, void __iomem *piobuf, int len)
static void lance_rx_pio(struct net_device *dev)
static void lance_tx_pio(struct net_device *dev)
static irqreturn_t lance_interrupt(int irq, void *dev_id)
static void build_fake_packet(struct lance_private *lp)
static int lance_open(struct net_device *dev)
static int lance_close(struct net_device *dev)
static int lance_reset(struct net_device *dev)
static void lance_piocopy_from_skb(void __iomem *dest, unsigned char *src, int len)
static void lance_piozero(void __iomem *dest, int len)
static void lance_tx_timeout(struct net_device *dev)
static int lance_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void lance_load_multicast(struct net_device *dev)
static void lance_set_multicast(struct net_device *dev)
static void lance_set_multicast_retry(unsigned long _opaque)
static void lance_free_hwresources(struct lance_private *lp)
static void sparc_lance_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static const struct ethtool_ops sparc_lance_ethtool_ops = ;
static const struct net_device_ops sparc_lance_ops = ;
static int __devinit sparc_lance_probe_one(struct platform_device *op,
struct platform_device *ledma,
struct platform_device *lebuffer)
static int __devinit sunlance_sbus_probe(struct platform_device *op)
static int __devexit sunlance_sbus_remove(struct platform_device *op)
static const struct of_device_id sunlance_sbus_match[] = ;
MODULE_DEVICE_TABLE(of, sunlance_sbus_match);
static struct platform_driver sunlance_sbus_driver = ;
static int __init sparc_lance_init(void)
static void __exit sparc_lance_exit(void)
module_init(sparc_lance_init);
module_exit(sparc_lance_exit);
