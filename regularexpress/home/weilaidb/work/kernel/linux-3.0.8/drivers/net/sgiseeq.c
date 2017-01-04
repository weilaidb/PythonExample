#undef DEBUG
static char *sgiseeqstr = "SGI Seeq8003";
#define SEEQ_RX_BUFFERS  16
#define SEEQ_TX_BUFFERS  16
#define PKT_BUF_SZ       1584
#define NEXT_RX(i)  (((i) + 1) & (SEEQ_RX_BUFFERS - 1))
#define NEXT_TX(i)  (((i) + 1) & (SEEQ_TX_BUFFERS - 1))
#define PREV_RX(i)  (((i) - 1) & (SEEQ_RX_BUFFERS - 1))
#define PREV_TX(i)  (((i) - 1) & (SEEQ_TX_BUFFERS - 1))
#define TX_BUFFS_AVAIL(sp) ((sp->tx_old <= sp->tx_new) ? \
sp->tx_old + (SEEQ_TX_BUFFERS - 1) - sp->tx_new : \
sp->tx_old - sp->tx_new - 1)
#define VIRT_TO_DMA(sp, v) ((sp)->srings_dma +                                 \
(dma_addr_t)((unsigned long)(v) -            \
(unsigned long)((sp)->rx_desc)))
static int rx_copybreak = 100;
#define PAD_SIZE    (128 - sizeof(struct hpc_dma_desc) - sizeof(void *))
struct sgiseeq_rx_desc ;
struct sgiseeq_tx_desc ;
struct sgiseeq_init_block ;
struct sgiseeq_private ;
static inline void dma_sync_desc_cpu(struct net_device *dev, void *addr)
static inline void dma_sync_desc_dev(struct net_device *dev, void *addr)
static inline void hpc3_eth_reset(struct hpc3_ethregs *hregs)
static inline void reset_hpc3_and_seeq(struct hpc3_ethregs *hregs,
struct sgiseeq_regs *sregs)
#define RSTAT_GO_BITS (SEEQ_RCMD_IGOOD | SEEQ_RCMD_IEOF | SEEQ_RCMD_ISHORT | \
SEEQ_RCMD_IDRIB | SEEQ_RCMD_ICRC)
static inline void seeq_go(struct sgiseeq_private *sp,
struct hpc3_ethregs *hregs,
struct sgiseeq_regs *sregs)
static inline void __sgiseeq_set_mac_address(struct net_device *dev)
static int sgiseeq_set_mac_address(struct net_device *dev, void *addr)
#define TCNTINFO_INIT (HPCDMA_EOX | HPCDMA_ETXD)
#define RCNTCFG_INIT  (HPCDMA_OWN | HPCDMA_EORP | HPCDMA_XIE)
#define RCNTINFO_INIT (RCNTCFG_INIT | (PKT_BUF_SZ & HPCDMA_BCNT))
static int seeq_init_ring(struct net_device *dev)
static void seeq_purge_ring(struct net_device *dev)
static struct sgiseeq_private *gpriv;
static struct net_device *gdev;
static void sgiseeq_dump_rings(void)
#define TSTAT_INIT_SEEQ (SEEQ_TCMD_IPT|SEEQ_TCMD_I16|SEEQ_TCMD_IC|SEEQ_TCMD_IUF)
#define TSTAT_INIT_EDLC ((TSTAT_INIT_SEEQ) | SEEQ_TCMD_RB2)
static int init_seeq(struct net_device *dev, struct sgiseeq_private *sp,
struct sgiseeq_regs *sregs)
static void record_rx_errors(struct net_device *dev, unsigned char status)
static inline void rx_maybe_restart(struct sgiseeq_private *sp,
struct hpc3_ethregs *hregs,
struct sgiseeq_regs *sregs)
static inline void sgiseeq_rx(struct net_device *dev, struct sgiseeq_private *sp,
struct hpc3_ethregs *hregs,
struct sgiseeq_regs *sregs)
static inline void tx_maybe_reset_collisions(struct sgiseeq_private *sp,
struct sgiseeq_regs *sregs)
static inline void kick_tx(struct net_device *dev,
struct sgiseeq_private *sp,
struct hpc3_ethregs *hregs)
static inline void sgiseeq_tx(struct net_device *dev, struct sgiseeq_private *sp,
struct hpc3_ethregs *hregs,
struct sgiseeq_regs *sregs)
static irqreturn_t sgiseeq_interrupt(int irq, void *dev_id)
static int sgiseeq_open(struct net_device *dev)
static int sgiseeq_close(struct net_device *dev)
static inline int sgiseeq_reset(struct net_device *dev)
static int sgiseeq_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void timeout(struct net_device *dev)
static void sgiseeq_set_multicast(struct net_device *dev)
static inline void setup_tx_ring(struct net_device *dev,
struct sgiseeq_tx_desc *buf,
int nbufs)
static inline void setup_rx_ring(struct net_device *dev,
struct sgiseeq_rx_desc *buf,
int nbufs)
static const struct net_device_ops sgiseeq_netdev_ops = ;
static int __devinit sgiseeq_probe(struct platform_device *pdev)
static int __exit sgiseeq_remove(struct platform_device *pdev)
static struct platform_driver sgiseeq_driver = ;
static int __init sgiseeq_module_init(void)
static void __exit sgiseeq_module_exit(void)
module_init(sgiseeq_module_init);
module_exit(sgiseeq_module_exit);
MODULE_DESCRIPTION("SGI Seeq 8003 driver");
MODULE_AUTHOR("Linux/MIPS Mailing List <linux-mips@linux-mips.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sgiseeq");
