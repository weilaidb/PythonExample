static const char version[] = "$Id: dscc4.c,v 1.173 2003/09/20 23:55:34 romieu Exp $ for Linux\n";
static int debug;
static int quartz;
static DEFINE_MUTEX(dscc4_mutex);
static u32 dscc4_pci_config_store[16];
#define	DRV_NAME	"dscc4"
#undef DSCC4_POLLING
MODULE_AUTHOR("Maintainer: Francois Romieu <romieu@cogenit.fr>");
MODULE_DESCRIPTION("Siemens PEB20534 PCI Controller");
MODULE_LICENSE("GPL");
module_param(debug, int, 0);
MODULE_PARM_DESC(debug,"Enable/disable extra messages");
module_param(quartz, int, 0);
MODULE_PARM_DESC(quartz,"If present, on-board quartz frequency (Hz)");
struct thingie ;
struct TxFD ;
struct RxFD ;
#define DUMMY_SKB_SIZE		64
#define TX_LOW			8
#define TX_RING_SIZE		32
#define RX_RING_SIZE		32
#define TX_TOTAL_SIZE		TX_RING_SIZE*sizeof(struct TxFD)
#define RX_TOTAL_SIZE		RX_RING_SIZE*sizeof(struct RxFD)
#define IRQ_RING_SIZE		64
#define TX_TIMEOUT		(HZ/10)
#define DSCC4_HZ_MAX		33000000
#define BRR_DIVIDER_MAX		64*0x00004000
#define dev_per_card		4
#define SCC_REGISTERS_MAX	23
#define SOURCE_ID(flags)	(((flags) >> 28) & 0x03)
#define TO_SIZE(state)		(((state) >> 16) & 0x1fff)
#define TO_STATE_TX(len)	cpu_to_le32(((len) & TxSizeMax) << 16)
#define TO_STATE_RX(len)	cpu_to_le32((RX_MAX(len) % RxSizeMax) << 16)
#define RX_MAX(len)		((((len) >> 5) + 1) << 5)
#define SCC_REG_START(dpriv)	(SCC_START+(dpriv->dev_id)*SCC_OFFSET)
struct dscc4_pci_priv ;
struct dscc4_dev_priv ;
#define GCMDR   0x00
#define GSTAR   0x04
#define GMODE   0x08
#define IQLENR0 0x0C
#define IQLENR1 0x10
#define IQRX0   0x14
#define IQTX0   0x24
#define IQCFG   0x3c
#define FIFOCR1 0x44
#define FIFOCR2 0x48
#define FIFOCR3 0x4c
#define FIFOCR4 0x34
#define CH0CFG  0x50
#define CH0BRDA 0x54
#define CH0BTDA 0x58
#define CH0FRDA 0x98
#define CH0FTDA 0xb0
#define CH0LRDA 0xc8
#define CH0LTDA 0xe0
#define SCC_START	0x0100
#define SCC_OFFSET      0x80
#define CMDR    0x00
#define STAR    0x04
#define CCR0    0x08
#define CCR1    0x0c
#define CCR2    0x10
#define BRR     0x2C
#define RLCR    0x40
#define IMR     0x54
#define ISR     0x58
#define GPDIR	0x0400
#define GPDATA	0x0404
#define GPIM	0x0408
#define EncodingMask	0x00700000
#define CrcMask		0x00000003
#define IntRxScc0	0x10000000
#define IntTxScc0	0x01000000
#define TxPollCmd	0x00000400
#define RxActivate	0x08000000
#define MTFi		0x04000000
#define Rdr		0x00400000
#define Rdt		0x00200000
#define Idr		0x00100000
#define Idt		0x00080000
#define TxSccRes	0x01000000
#define RxSccRes	0x00010000
#define TxSizeMax	0x1fff
#define RxSizeMax	0x1ffc
#define Ccr0ClockMask	0x0000003f
#define Ccr1LoopMask	0x00000200
#define IsrMask		0x000fffff
#define BrrExpMask	0x00000f00
#define BrrMultMask	0x0000003f
#define EncodingMask	0x00700000
#define Hold		cpu_to_le32(0x40000000)
#define SccBusy		0x10000000
#define PowerUp		0x80000000
#define Vis		0x00001000
#define FrameOk		(FrameVfr | FrameCrc)
#define FrameVfr	0x80
#define FrameRdo	0x40
#define FrameCrc	0x20
#define FrameRab	0x10
#define FrameAborted	cpu_to_le32(0x00000200)
#define FrameEnd	cpu_to_le32(0x80000000)
#define DataComplete	cpu_to_le32(0x40000000)
#define LengthCheck	0x00008000
#define SccEvt		0x02000000
#define NoAck		0x00000200
#define Action		0x00000001
#define HiDesc		cpu_to_le32(0x20000000)
#define RxEvt		0xf0000000
#define TxEvt		0x0f000000
#define Alls		0x00040000
#define Xdu		0x00010000
#define Cts		0x00004000
#define Xmr		0x00002000
#define Xpr		0x00001000
#define Rdo		0x00000080
#define Rfs		0x00000040
#define Cd		0x00000004
#define Rfo		0x00000002
#define Flex		0x00000001
#define Cfg		0x00200000
#define Hi		0x00040000
#define Fi		0x00020000
#define Err		0x00010000
#define Arf		0x00000002
#define ArAck		0x00000001
#define Ready		0x00000000
#define NeedIDR		0x00000001
#define NeedIDT		0x00000002
#define RdoSet		0x00000004
#define FakeReset	0x00000008
#define EventsMask	0xfffeef7f
#define EventsMask	0xfffa8f7a
static void dscc4_rx_irq(struct dscc4_pci_priv *, struct dscc4_dev_priv *);
static void dscc4_tx_irq(struct dscc4_pci_priv *, struct dscc4_dev_priv *);
static int dscc4_found1(struct pci_dev *, void __iomem *ioaddr);
static int dscc4_init_one(struct pci_dev *, const struct pci_device_id *ent);
static int dscc4_open(struct net_device *);
static netdev_tx_t dscc4_start_xmit(struct sk_buff *,
struct net_device *);
static int dscc4_close(struct net_device *);
static int dscc4_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int dscc4_init_ring(struct net_device *);
static void dscc4_release_ring(struct dscc4_dev_priv *);
static void dscc4_timer(unsigned long);
static void dscc4_tx_timeout(struct net_device *);
static irqreturn_t dscc4_irq(int irq, void *dev_id);
static int dscc4_hdlc_attach(struct net_device *, unsigned short, unsigned short);
static int dscc4_set_iface(struct dscc4_dev_priv *, struct net_device *);
static int dscc4_tx_poll(struct dscc4_dev_priv *, struct net_device *);
static inline struct dscc4_dev_priv *dscc4_priv(struct net_device *dev)
static inline struct net_device *dscc4_to_dev(struct dscc4_dev_priv *p)
static void scc_patchl(u32 mask, u32 value, struct dscc4_dev_priv *dpriv,
struct net_device *dev, int offset)
static void scc_writel(u32 bits, struct dscc4_dev_priv *dpriv,
struct net_device *dev, int offset)
static inline u32 scc_readl(struct dscc4_dev_priv *dpriv, int offset)
static u32 scc_readl_star(struct dscc4_dev_priv *dpriv, struct net_device *dev)
static inline void dscc4_do_tx(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static inline void dscc4_rx_update(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static inline unsigned int dscc4_tx_done(struct dscc4_dev_priv *dpriv)
static inline unsigned int dscc4_tx_quiescent(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static int state_check(u32 state, struct dscc4_dev_priv *dpriv,
struct net_device *dev, const char *msg)
static void dscc4_tx_print(struct net_device *dev,
struct dscc4_dev_priv *dpriv,
char *msg)
static void dscc4_release_ring(struct dscc4_dev_priv *dpriv)
static inline int try_get_rx_skb(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static int dscc4_wait_ack_cec(struct dscc4_dev_priv *dpriv,
struct net_device *dev, char *msg)
static int dscc4_do_action(struct net_device *dev, char *msg)
static inline int dscc4_xpr_ack(struct dscc4_dev_priv *dpriv)
static inline void dscc4_rx_skb(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static void dscc4_free1(struct pci_dev *pdev)
static int __devinit dscc4_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
;
static void dscc4_init_registers(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static inline int dscc4_set_quartz(struct dscc4_dev_priv *dpriv, int hz)
static const struct net_device_ops dscc4_ops = ;
static int dscc4_found1(struct pci_dev *pdev, void __iomem *ioaddr)
;
static void dscc4_timer(unsigned long data)
static void dscc4_tx_timeout(struct net_device *dev)
static int dscc4_loopback_check(struct dscc4_dev_priv *dpriv)
static void dscc4_pci_reset(struct pci_dev *pdev, void __iomem *ioaddr)
#define dscc4_pci_reset(pdev,ioaddr)	do  while (0)
static int dscc4_open(struct net_device *dev)
static int dscc4_tx_poll(struct dscc4_dev_priv *dpriv, struct net_device *dev)
static netdev_tx_t dscc4_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int dscc4_close(struct net_device *dev)
static inline int dscc4_check_clock_ability(int port)
static int dscc4_set_clock(struct net_device *dev, u32 *bps, u32 *state)
static int dscc4_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int dscc4_match(const struct thingie *p, int value)
static int dscc4_clock_setting(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static int dscc4_encoding_setting(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static int dscc4_loopback_setting(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static int dscc4_crc_setting(struct dscc4_dev_priv *dpriv,
struct net_device *dev)
static int dscc4_set_iface(struct dscc4_dev_priv *dpriv, struct net_device *dev)
static irqreturn_t dscc4_irq(int irq, void *token)
static void dscc4_tx_irq(struct dscc4_pci_priv *ppriv,
struct dscc4_dev_priv *dpriv)
static void dscc4_rx_irq(struct dscc4_pci_priv *priv,
struct dscc4_dev_priv *dpriv)
static struct sk_buff *dscc4_init_dummy_skb(struct dscc4_dev_priv *dpriv)
static int dscc4_init_ring(struct net_device *dev)
static void __devexit dscc4_remove_one(struct pci_dev *pdev)
static int dscc4_hdlc_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static int __init dscc4_setup(char *str)
__setup("dscc4.setup=", dscc4_setup);
static DEFINE_PCI_DEVICE_TABLE(dscc4_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, dscc4_pci_tbl);
static struct pci_driver dscc4_driver = ;
static int __init dscc4_init_module(void)
static void __exit dscc4_cleanup_module(void)
module_init(dscc4_init_module);
module_exit(dscc4_cleanup_module);
