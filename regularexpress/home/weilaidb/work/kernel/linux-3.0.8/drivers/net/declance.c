static char version[] __devinitdata =
"declance.c: v0.011 by Linux MIPS DECstation task force\n";
MODULE_AUTHOR("Linux MIPS DECstation task force");
MODULE_DESCRIPTION("DEC LANCE (DECstation onboard, PMAD-xx) driver");
MODULE_LICENSE("GPL");
#define __unused __attribute__ ((unused))
#define ASIC_LANCE 1
#define PMAD_LANCE 2
#define PMAX_LANCE 3
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
#define LE_R1_OWN	0x8000
#define LE_R1_ERR	0x4000
#define LE_R1_FRA	0x2000
#define LE_R1_OFL	0x1000
#define LE_R1_CRC	0x0800
#define LE_R1_BUF	0x0400
#define LE_R1_SOP	0x0200
#define LE_R1_EOP	0x0100
#define LE_R1_POK	0x0300
#define LE_T1_OWN	0x8000
#define LE_T1_ERR	0x4000
#define LE_T1_EMORE	0x1000
#define LE_T1_EONE	0x0800
#define LE_T1_EDEF	0x0400
#define LE_T1_SOP	0x0200
#define LE_T1_EOP	0x0100
#define LE_T1_POK	0x0300
#define LE_T3_BUF       0x8000
#define LE_T3_UFL       0x4000
#define LE_T3_LCOL      0x1000
#define LE_T3_CLOS      0x0800
#define LE_T3_RTY       0x0400
#define LE_T3_TDR       0x03ff
#define LANCE_LOG_TX_BUFFERS 4
#define LANCE_LOG_RX_BUFFERS 4
#define TX_RING_SIZE			(1 << (LANCE_LOG_TX_BUFFERS))
#define TX_RING_MOD_MASK		(TX_RING_SIZE - 1)
#define RX_RING_SIZE			(1 << (LANCE_LOG_RX_BUFFERS))
#define RX_RING_MOD_MASK		(RX_RING_SIZE - 1)
#define PKT_BUF_SZ		1536
#define RX_BUFF_SIZE            PKT_BUF_SZ
#define TX_BUFF_SIZE            PKT_BUF_SZ
#undef TEST_HITS
#define ZERO 0
struct lance_rx_desc ;
struct lance_tx_desc ;
struct lance_init_block ;
#define BUF_OFFSET_CPU sizeof(struct lance_init_block)
#define BUF_OFFSET_LNC sizeof(struct lance_init_block)
#define shift_off(off, type)						\
(type == ASIC_LANCE || type == PMAX_LANCE ? off << 1 : off)
#define lib_off(rt, type)						\
shift_off(offsetof(struct lance_init_block, rt), type)
#define lib_ptr(ib, rt, type) 						\
((volatile u16 *)((u8 *)(ib) + lib_off(rt, type)))
#define rds_off(rt, type)						\
shift_off(offsetof(struct lance_rx_desc, rt), type)
#define rds_ptr(rd, rt, type) 						\
((volatile u16 *)((u8 *)(rd) + rds_off(rt, type)))
#define tds_off(rt, type)						\
shift_off(offsetof(struct lance_tx_desc, rt), type)
#define tds_ptr(td, rt, type) 						\
((volatile u16 *)((u8 *)(td) + tds_off(rt, type)))
struct lance_private ;
#define TX_BUFFS_AVAIL ((lp->tx_old<=lp->tx_new)?\
lp->tx_old+TX_RING_MOD_MASK-lp->tx_new:\
lp->tx_old - lp->tx_new-1)
struct lance_regs ;
int dec_lance_debug = 2;
static struct tc_driver dec_lance_tc_driver;
static struct net_device *root_lance_dev;
static inline void writereg(volatile unsigned short *regptr, short value)
static void load_csrs(struct lance_private *lp)
static void cp_to_buf(const int type, void *to, const void *from, int len)
static void cp_from_buf(const int type, void *to, const void *from, int len)
static void lance_init_ring(struct net_device *dev)
static int init_restart_lance(struct lance_private *lp)
static int lance_rx(struct net_device *dev)
static void lance_tx(struct net_device *dev)
static irqreturn_t lance_dma_merr_int(int irq, void *dev_id)
static irqreturn_t lance_interrupt(int irq, void *dev_id)
static int lance_open(struct net_device *dev)
static int lance_close(struct net_device *dev)
static inline int lance_reset(struct net_device *dev)
static void lance_tx_timeout(struct net_device *dev)
static int lance_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void lance_load_multicast(struct net_device *dev)
static void lance_set_multicast(struct net_device *dev)
static void lance_set_multicast_retry(unsigned long _opaque)
static const struct net_device_ops lance_netdev_ops = ;
static int __devinit dec_lance_probe(struct device *bdev, const int type)
static void __exit dec_lance_remove(struct device *bdev)
static int __init dec_lance_platform_probe(void)
static void __exit dec_lance_platform_remove(void)
static int __devinit dec_lance_tc_probe(struct device *dev);
static int __exit dec_lance_tc_remove(struct device *dev);
static const struct tc_device_id dec_lance_tc_table[] = ;
MODULE_DEVICE_TABLE(tc, dec_lance_tc_table);
static struct tc_driver dec_lance_tc_driver = ;
static int __devinit dec_lance_tc_probe(struct device *dev)
static int __exit dec_lance_tc_remove(struct device *dev)
static int __init dec_lance_init(void)
static void __exit dec_lance_exit(void)
module_init(dec_lance_init);
module_exit(dec_lance_exit);
