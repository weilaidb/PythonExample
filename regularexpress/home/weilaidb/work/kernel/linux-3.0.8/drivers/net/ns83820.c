#define VERSION "0.23"
#define dprintk(x...)		do  while (0)
#define DRV_NAME "ns83820"
static int ihr = 2;
static int reset_phy = 0;
static int lnksts = 0;
#undef Dprintk
#define	Dprintk			dprintk
#define RX_BUF_SIZE	1500
#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
#define NS83820_VLAN_ACCEL_SUPPORT
#define NR_RX_DESC	64
#define NR_TX_DESC	128
#define REAL_RX_BUF_SIZE (RX_BUF_SIZE + 14)
#define MIN_TX_DESC_FREE	8
#define CFGCS		0x04
#define CR_TXE		0x00000001
#define CR_TXD		0x00000002
#define CR_RXE		0x00000004
#define CR_RXD		0x00000008
#define CR_TXR		0x00000010
#define CR_RXR		0x00000020
#define CR_SWI		0x00000080
#define CR_RST		0x00000100
#define PTSCR_EEBIST_FAIL       0x00000001
#define PTSCR_EEBIST_EN         0x00000002
#define PTSCR_EELOAD_EN         0x00000004
#define PTSCR_RBIST_FAIL        0x000001b8
#define PTSCR_RBIST_DONE        0x00000200
#define PTSCR_RBIST_EN          0x00000400
#define PTSCR_RBIST_RST         0x00002000
#define MEAR_EEDI		0x00000001
#define MEAR_EEDO		0x00000002
#define MEAR_EECLK		0x00000004
#define MEAR_EESEL		0x00000008
#define MEAR_MDIO		0x00000010
#define MEAR_MDDIR		0x00000020
#define MEAR_MDC		0x00000040
#define ISR_TXDESC3	0x40000000
#define ISR_TXDESC2	0x20000000
#define ISR_TXDESC1	0x10000000
#define ISR_TXDESC0	0x08000000
#define ISR_RXDESC3	0x04000000
#define ISR_RXDESC2	0x02000000
#define ISR_RXDESC1	0x01000000
#define ISR_RXDESC0	0x00800000
#define ISR_TXRCMP	0x00400000
#define ISR_RXRCMP	0x00200000
#define ISR_DPERR	0x00100000
#define ISR_SSERR	0x00080000
#define ISR_RMABT	0x00040000
#define ISR_RTABT	0x00020000
#define ISR_RXSOVR	0x00010000
#define ISR_HIBINT	0x00008000
#define ISR_PHY		0x00004000
#define ISR_PME		0x00002000
#define ISR_SWI		0x00001000
#define ISR_MIB		0x00000800
#define ISR_TXURN	0x00000400
#define ISR_TXIDLE	0x00000200
#define ISR_TXERR	0x00000100
#define ISR_TXDESC	0x00000080
#define ISR_TXOK	0x00000040
#define ISR_RXORN	0x00000020
#define ISR_RXIDLE	0x00000010
#define ISR_RXEARLY	0x00000008
#define ISR_RXERR	0x00000004
#define ISR_RXDESC	0x00000002
#define ISR_RXOK	0x00000001
#define TXCFG_CSI	0x80000000
#define TXCFG_HBI	0x40000000
#define TXCFG_MLB	0x20000000
#define TXCFG_ATP	0x10000000
#define TXCFG_ECRETRY	0x00800000
#define TXCFG_BRST_DIS	0x00080000
#define TXCFG_MXDMA1024	0x00000000
#define TXCFG_MXDMA512	0x00700000
#define TXCFG_MXDMA256	0x00600000
#define TXCFG_MXDMA128	0x00500000
#define TXCFG_MXDMA64	0x00400000
#define TXCFG_MXDMA32	0x00300000
#define TXCFG_MXDMA16	0x00200000
#define TXCFG_MXDMA8	0x00100000
#define CFG_LNKSTS	0x80000000
#define CFG_SPDSTS	0x60000000
#define CFG_SPDSTS1	0x40000000
#define CFG_SPDSTS0	0x20000000
#define CFG_DUPSTS	0x10000000
#define CFG_TBI_EN	0x01000000
#define CFG_MODE_1000	0x00400000
#define CFG_AUTO_1000	0x00200000
#define CFG_PINT_CTL	0x001c0000
#define CFG_PINT_DUPSTS	0x00100000
#define CFG_PINT_LNKSTS	0x00080000
#define CFG_PINT_SPDSTS	0x00040000
#define CFG_TMRTEST	0x00020000
#define CFG_MRM_DIS	0x00010000
#define CFG_MWI_DIS	0x00008000
#define CFG_T64ADDR	0x00004000
#define CFG_PCI64_DET	0x00002000
#define CFG_DATA64_EN	0x00001000
#define CFG_M64ADDR	0x00000800
#define CFG_PHY_RST	0x00000400
#define CFG_PHY_DIS	0x00000200
#define CFG_EXTSTS_EN	0x00000100
#define CFG_REQALG	0x00000080
#define CFG_SB		0x00000040
#define CFG_POW		0x00000020
#define CFG_EXD		0x00000010
#define CFG_PESEL	0x00000008
#define CFG_BROM_DIS	0x00000004
#define CFG_EXT_125	0x00000002
#define CFG_BEM		0x00000001
#define EXTSTS_UDPPKT	0x00200000
#define EXTSTS_TCPPKT	0x00080000
#define EXTSTS_IPPKT	0x00020000
#define EXTSTS_VPKT	0x00010000
#define EXTSTS_VTG_MASK	0x0000ffff
#define SPDSTS_POLARITY	(CFG_SPDSTS1 | CFG_SPDSTS0 | CFG_DUPSTS | (lnksts ? CFG_LNKSTS : 0))
#define MIBC_MIBS	0x00000008
#define MIBC_ACLR	0x00000004
#define MIBC_FRZ	0x00000002
#define MIBC_WRN	0x00000001
#define PCR_PSEN	(1 << 31)
#define PCR_PS_MCAST	(1 << 30)
#define PCR_PS_DA	(1 << 29)
#define PCR_STHI_8	(3 << 23)
#define PCR_STLO_4	(1 << 23)
#define PCR_FFHI_8K	(3 << 21)
#define PCR_FFLO_4K	(1 << 21)
#define PCR_PAUSE_CNT	0xFFFE
#define RXCFG_AEP	0x80000000
#define RXCFG_ARP	0x40000000
#define RXCFG_STRIPCRC	0x20000000
#define RXCFG_RX_FD	0x10000000
#define RXCFG_ALP	0x08000000
#define RXCFG_AIRL	0x04000000
#define RXCFG_MXDMA512	0x00700000
#define RXCFG_DRTH	0x0000003e
#define RXCFG_DRTH0	0x00000002
#define RFCR_RFEN	0x80000000
#define RFCR_AAB	0x40000000
#define RFCR_AAM	0x20000000
#define RFCR_AAU	0x10000000
#define RFCR_APM	0x08000000
#define RFCR_APAT	0x07800000
#define RFCR_APAT3	0x04000000
#define RFCR_APAT2	0x02000000
#define RFCR_APAT1	0x01000000
#define RFCR_APAT0	0x00800000
#define RFCR_AARP	0x00400000
#define RFCR_MHEN	0x00200000
#define RFCR_UHEN	0x00100000
#define RFCR_ULM	0x00080000
#define VRCR_RUDPE	0x00000080
#define VRCR_RTCPE	0x00000040
#define VRCR_RIPE	0x00000020
#define VRCR_IPEN	0x00000010
#define VRCR_DUTF	0x00000008
#define VRCR_DVTF	0x00000004
#define VRCR_VTREN	0x00000002
#define VRCR_VTDEN	0x00000001
#define VTCR_PPCHK	0x00000008
#define VTCR_GCHK	0x00000004
#define VTCR_VPPTI	0x00000002
#define VTCR_VGTI	0x00000001
#define CR		0x00
#define CFG		0x04
#define MEAR		0x08
#define PTSCR		0x0c
#define	ISR		0x10
#define	IMR		0x14
#define	IER		0x18
#define	IHR		0x1c
#define TXDP		0x20
#define TXDP_HI		0x24
#define TXCFG		0x28
#define GPIOR		0x2c
#define RXDP		0x30
#define RXDP_HI		0x34
#define RXCFG		0x38
#define PQCR		0x3c
#define WCSR		0x40
#define PCR		0x44
#define RFCR		0x48
#define RFDR		0x4c
#define SRR		0x58
#define VRCR		0xbc
#define VTCR		0xc0
#define VDR		0xc4
#define CCSR		0xcc
#define TBICR		0xe0
#define TBISR		0xe4
#define TANAR		0xe8
#define TANLPAR		0xec
#define TANER		0xf0
#define TESR		0xf4
#define TBICR_MR_AN_ENABLE	0x00001000
#define TBICR_MR_RESTART_AN	0x00000200
#define TBISR_MR_LINK_STATUS	0x00000020
#define TBISR_MR_AN_COMPLETE	0x00000004
#define TANAR_PS2 		0x00000100
#define TANAR_PS1 		0x00000080
#define TANAR_HALF_DUP 		0x00000040
#define TANAR_FULL_DUP 		0x00000020
#define GPIOR_GP5_OE		0x00000200
#define GPIOR_GP4_OE		0x00000100
#define GPIOR_GP3_OE		0x00000080
#define GPIOR_GP2_OE		0x00000040
#define GPIOR_GP1_OE		0x00000020
#define GPIOR_GP3_OUT		0x00000004
#define GPIOR_GP1_OUT		0x00000001
#define LINK_AUTONEGOTIATE	0x01
#define LINK_DOWN		0x02
#define LINK_UP			0x04
#define HW_ADDR_LEN	sizeof(dma_addr_t)
#define desc_addr_set(desc, addr)				\
do  while(0)
#define desc_addr_get(desc)					\
(le32_to_cpu((desc)[0]) | \
(HW_ADDR_LEN == 8 ? ((dma_addr_t)le32_to_cpu((desc)[1]))<<32 : 0))
#define DESC_LINK		0
#define DESC_BUFPTR		(DESC_LINK + HW_ADDR_LEN/4)
#define DESC_CMDSTS		(DESC_BUFPTR + HW_ADDR_LEN/4)
#define DESC_EXTSTS		(DESC_CMDSTS + 4/4)
#define CMDSTS_OWN	0x80000000
#define CMDSTS_MORE	0x40000000
#define CMDSTS_INTR	0x20000000
#define CMDSTS_ERR	0x10000000
#define CMDSTS_OK	0x08000000
#define CMDSTS_RUNT	0x00200000
#define CMDSTS_LEN_MASK	0x0000ffff
#define CMDSTS_DEST_MASK	0x01800000
#define CMDSTS_DEST_SELF	0x00800000
#define CMDSTS_DEST_MULTI	0x01000000
#define DESC_SIZE	8
struct rx_info ;
struct ns83820 ;
static inline struct ns83820 *PRIV(struct net_device *dev)
#define __kick_rx(dev)	writel(CR_RXE, dev->base + CR)
static inline void kick_rx(struct net_device *ndev)
#define start_tx_okay(dev)	\
(((NR_TX_DESC-2 + dev->tx_done_idx - dev->tx_free_idx) % NR_TX_DESC) > MIN_TX_DESC_FREE)
static void ns83820_vlan_rx_register(struct net_device *ndev, struct vlan_group *grp)
static inline void build_rx_desc(struct ns83820 *dev, __le32 *desc, dma_addr_t link, dma_addr_t buf, u32 cmdsts, u32 extsts)
#define nr_rx_empty(dev) ((NR_RX_DESC-2 + dev->rx_info.next_rx - dev->rx_info.next_empty) % NR_RX_DESC)
static inline int ns83820_add_rx_skb(struct ns83820 *dev, struct sk_buff *skb)
static inline int rx_refill(struct net_device *ndev, gfp_t gfp)
static void rx_refill_atomic(struct net_device *ndev)
static inline void queue_refill(struct work_struct *work)
static inline void clear_rx_desc(struct ns83820 *dev, unsigned i)
static void phy_intr(struct net_device *ndev)
static int ns83820_setup_rx(struct net_device *ndev)
static void ns83820_cleanup_rx(struct ns83820 *dev)
static void ns83820_rx_kick(struct net_device *ndev)
static void rx_irq(struct net_device *ndev)
{
struct ns83820 *dev = PRIV(ndev);
struct rx_info *info = &dev->rx_info;
unsigned next_rx;
int rx_rc, len;
u32 cmdsts;
__le32 *desc;
unsigned long flags;
int nr = 0;
dprintk("rx_irq(%p)\n", ndev);
dprintk("rxdp: %08x, descs: %08lx next_rx[%d]: %p next_empty[%d]: %p\n",
readl(dev->base + RXDP),
(long)(dev->rx_info.phy_descs),
(int)dev->rx_info.next_rx,
(dev->rx_info.descs + (DESC_SIZE * dev->rx_info.next_rx)),
(int)dev->rx_info.next_empty,
(dev->rx_info.descs + (DESC_SIZE * dev->rx_info.next_empty))
);
spin_lock_irqsave(&info->lock, flags);
if (!info->up)
goto out;
dprintk("walking descs\n");
next_rx = info->next_rx;
desc = info->next_rx_desc;
while ((CMDSTS_OWN & (cmdsts = le32_to_cpu(desc[DESC_CMDSTS]))) &&
(cmdsts != CMDSTS_OWN))
static void rx_action(unsigned long _dev)
static inline void kick_tx(struct ns83820 *dev)
static void do_tx_done(struct net_device *ndev)
static void ns83820_cleanup_tx(struct ns83820 *dev)
static netdev_tx_t ns83820_hard_start_xmit(struct sk_buff *skb,
struct net_device *ndev)
static void ns83820_update_stats(struct ns83820 *dev)
static struct net_device_stats *ns83820_get_stats(struct net_device *ndev)
static int ns83820_get_settings(struct net_device *ndev,
struct ethtool_cmd *cmd)
static int ns83820_set_settings(struct net_device *ndev,
struct ethtool_cmd *cmd)
static void ns83820_get_drvinfo(struct net_device *ndev, struct ethtool_drvinfo *info)
static u32 ns83820_get_link(struct net_device *ndev)
static const struct ethtool_ops ops = ;
static inline void ns83820_disable_interrupts(struct ns83820 *dev)
static void ns83820_mib_isr(struct ns83820 *dev)
static void ns83820_do_isr(struct net_device *ndev, u32 isr);
static irqreturn_t ns83820_irq(int foo, void *data)
static void ns83820_do_isr(struct net_device *ndev, u32 isr)
static void ns83820_do_reset(struct ns83820 *dev, u32 which)
static int ns83820_stop(struct net_device *ndev)
static void ns83820_tx_timeout(struct net_device *ndev)
static void ns83820_tx_watch(unsigned long data)
static int ns83820_open(struct net_device *ndev)
static void ns83820_getmac(struct ns83820 *dev, u8 *mac)
static int ns83820_change_mtu(struct net_device *ndev, int new_mtu)
static void ns83820_set_multicast(struct net_device *ndev)
static void ns83820_run_bist(struct net_device *ndev, const char *name, u32 enable, u32 done, u32 fail)
static void ns83820_mii_write_bit(struct ns83820 *dev, int bit)
static int ns83820_mii_read_bit(struct ns83820 *dev)
static unsigned ns83820_mii_read_reg(struct ns83820 *dev, unsigned phy, unsigned reg)
static unsigned ns83820_mii_write_reg(struct ns83820 *dev, unsigned phy, unsigned reg, unsigned data)
static void ns83820_probe_phy(struct net_device *ndev)
static const struct net_device_ops netdev_ops = ;
static int __devinit ns83820_init_one(struct pci_dev *pci_dev,
const struct pci_device_id *id)
static void __devexit ns83820_remove_one(struct pci_dev *pci_dev)
static DEFINE_PCI_DEVICE_TABLE(ns83820_pci_tbl) = ;
static struct pci_driver driver = ;
static int __init ns83820_init(void)
static void __exit ns83820_exit(void)
MODULE_AUTHOR("Benjamin LaHaise <bcrl@kvack.org>");
MODULE_DESCRIPTION("National Semiconductor DP83820 10/100/1000 driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ns83820_pci_tbl);
module_param(lnksts, int, 0);
MODULE_PARM_DESC(lnksts, "Polarity of LNKSTS bit");
module_param(ihr, int, 0);
MODULE_PARM_DESC(ihr, "Time in 100 us increments to delay interrupts (range 0-127)");
module_param(reset_phy, int, 0);
MODULE_PARM_DESC(reset_phy, "Set to 1 to reset the PHY on startup");
module_init(ns83820_init);
module_exit(ns83820_exit);
