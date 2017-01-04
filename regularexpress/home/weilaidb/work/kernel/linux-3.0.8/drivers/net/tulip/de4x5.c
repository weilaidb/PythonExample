static const char version[] __devinitconst =
KERN_INFO "de4x5.c:V0.546 2001/02/22 davies@maniac.ultranet.com\n";
#define c_char const char
struct phy_table ;
struct mii_phy ;
#define DE4X5_MAX_PHY 8
struct sia_phy ;
static struct phy_table phy_info[] = ;
#define GENERIC_REG   0x05
#define GENERIC_MASK  MII_ANLPA_100M
#define GENERIC_VALUE MII_ANLPA_100M
static c_char enet_det[][ETH_ALEN] = ;
#define SMC    1
#define ACCTON 2
static c_char srom_repair_info[][100] = ;
static int de4x5_debug = DE4X5_DEBUG;
static int de4x5_debug = (DEBUG_MEDIA | DEBUG_VERSION);
static char *args = DE4X5_PARM;
static char *args;
struct parameters ;
#define DE4X5_AUTOSENSE_MS 250
#define DE4X5_NDA 0xffe0
#define PROBE_LENGTH    32
#define ETH_PROM_SIG    0xAA5500FFUL
#define PKT_BUF_SZ	1536
#define IEEE802_3_SZ    1518
#define MAX_PKT_SZ   	1514
#define MAX_DAT_SZ   	1500
#define MIN_DAT_SZ   	1
#define PKT_HDR_LEN     14
#define FAKE_FRAME_LEN  (MAX_PKT_SZ + 1)
#define QUEUE_PKT_TIMEOUT (3*HZ)
#define DE4X5_EISA_IO_PORTS   0x0c00
#define DE4X5_EISA_TOTAL_SIZE 0x100
#define EISA_ALLOWED_IRQ_LIST
#define DE4X5_SIGNATURE
#define DE4X5_NAME_LENGTH 8
static c_char *de4x5_signatures[] = DE4X5_SIGNATURE;
#define PROBE_LENGTH    32
#define ETH_PROM_SIG    0xAA5500FFUL
#define PCI_MAX_BUS_NUM      8
#define DE4X5_PCI_TOTAL_SIZE 0x80
#define DE4X5_CLASS_CODE     0x00020000
#define DE4X5_ALIGN4      ((u_long)4 - 1)
#define DE4X5_ALIGN8      ((u_long)8 - 1)
#define DE4X5_ALIGN16     ((u_long)16 - 1)
#define DE4X5_ALIGN32     ((u_long)32 - 1)
#define DE4X5_ALIGN64     ((u_long)64 - 1)
#define DE4X5_ALIGN128    ((u_long)128 - 1)
#define DE4X5_ALIGN         DE4X5_ALIGN32
#define DE4X5_CACHE_ALIGN   CAL_16LONG
#define DESC_SKIP_LEN DSL_0
#define DESC_ALIGN
static int dec_only;
static int dec_only = 1;
#define ENABLE_IRQs
#define DISABLE_IRQs
#define UNMASK_IRQs
#define MASK_IRQs
#define START_DE4X5
#define STOP_DE4X5
#define RESET_SIA outl(0, DE4X5_SICR);
#define DE4X5_AUTOSENSE_MS  250
struct de4x5_srom ;
#define SUB_VENDOR_ID 0x500a
#define NUM_RX_DESC 8
#define NUM_TX_DESC 32
#define RX_BUFF_SZ  1536
struct de4x5_desc ;
#define DE4X5_PKT_STAT_SZ 16
#define DE4X5_PKT_BIN_SZ  128
struct pkt_stats ;
struct de4x5_private ;
static struct  last = ;
#define TX_BUFFS_AVAIL ((lp->tx_old<=lp->tx_new)?\
lp->tx_old+lp->txRingSize-lp->tx_new-1:\
lp->tx_old               -lp->tx_new-1)
#define TX_PKT_PENDING (lp->tx_old != lp->tx_new)
static int     de4x5_open(struct net_device *dev);
static netdev_tx_t de4x5_queue_pkt(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t de4x5_interrupt(int irq, void *dev_id);
static int     de4x5_close(struct net_device *dev);
static struct  net_device_stats *de4x5_get_stats(struct net_device *dev);
static void    de4x5_local_stats(struct net_device *dev, char *buf, int pkt_len);
static void    set_multicast_list(struct net_device *dev);
static int     de4x5_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int     de4x5_hw_init(struct net_device *dev, u_long iobase, struct device *gendev);
static int     de4x5_init(struct net_device *dev);
static int     de4x5_sw_reset(struct net_device *dev);
static int     de4x5_rx(struct net_device *dev);
static int     de4x5_tx(struct net_device *dev);
static void    de4x5_ast(struct net_device *dev);
static int     de4x5_txur(struct net_device *dev);
static int     de4x5_rx_ovfc(struct net_device *dev);
static int     autoconf_media(struct net_device *dev);
static void    create_packet(struct net_device *dev, char *frame, int len);
static void    load_packet(struct net_device *dev, char *buf, u32 flags, struct sk_buff *skb);
static int     dc21040_autoconf(struct net_device *dev);
static int     dc21041_autoconf(struct net_device *dev);
static int     dc21140m_autoconf(struct net_device *dev);
static int     dc2114x_autoconf(struct net_device *dev);
static int     srom_autoconf(struct net_device *dev);
static int     de4x5_suspect_state(struct net_device *dev, int timeout, int prev_state, int (*fn)(struct net_device *, int), int (*asfn)(struct net_device *));
static int     dc21040_state(struct net_device *dev, int csr13, int csr14, int csr15, int timeout, int next_state, int suspect_state, int (*fn)(struct net_device *, int));
static int     test_media(struct net_device *dev, s32 irqs, s32 irq_mask, s32 csr13, s32 csr14, s32 csr15, s32 msec);
static int     test_for_100Mb(struct net_device *dev, int msec);
static int     wait_for_link(struct net_device *dev);
static int     test_mii_reg(struct net_device *dev, int reg, int mask, bool pol, long msec);
static int     is_spd_100(struct net_device *dev);
static int     is_100_up(struct net_device *dev);
static int     is_10_up(struct net_device *dev);
static int     is_anc_capable(struct net_device *dev);
static int     ping_media(struct net_device *dev, int msec);
static struct sk_buff *de4x5_alloc_rx_buff(struct net_device *dev, int index, int len);
static void    de4x5_free_rx_buffs(struct net_device *dev);
static void    de4x5_free_tx_buffs(struct net_device *dev);
static void    de4x5_save_skbs(struct net_device *dev);
static void    de4x5_rst_desc_ring(struct net_device *dev);
static void    de4x5_cache_state(struct net_device *dev, int flag);
static void    de4x5_put_cache(struct net_device *dev, struct sk_buff *skb);
static void    de4x5_putb_cache(struct net_device *dev, struct sk_buff *skb);
static struct  sk_buff *de4x5_get_cache(struct net_device *dev);
static void    de4x5_setup_intr(struct net_device *dev);
static void    de4x5_init_connection(struct net_device *dev);
static int     de4x5_reset_phy(struct net_device *dev);
static void    reset_init_sia(struct net_device *dev, s32 sicr, s32 strr, s32 sigr);
static int     test_ans(struct net_device *dev, s32 irqs, s32 irq_mask, s32 msec);
static int     test_tp(struct net_device *dev, s32 msec);
static int     EISA_signature(char *name, struct device *device);
static int     PCI_signature(char *name, struct de4x5_private *lp);
static void    DevicePresent(struct net_device *dev, u_long iobase);
static void    enet_addr_rst(u_long aprom_addr);
static int     de4x5_bad_srom(struct de4x5_private *lp);
static short   srom_rd(u_long address, u_char offset);
static void    srom_latch(u_int command, u_long address);
static void    srom_command(u_int command, u_long address);
static void    srom_address(u_int command, u_long address, u_char offset);
static short   srom_data(u_int command, u_long address);
static void    sendto_srom(u_int command, u_long addr);
static int     getfrom_srom(u_long addr);
static int     srom_map_media(struct net_device *dev);
static int     srom_infoleaf_info(struct net_device *dev);
static void    srom_init(struct net_device *dev);
static void    srom_exec(struct net_device *dev, u_char *p);
static int     mii_rd(u_char phyreg, u_char phyaddr, u_long ioaddr);
static void    mii_wr(int data, u_char phyreg, u_char phyaddr, u_long ioaddr);
static int     mii_rdata(u_long ioaddr);
static void    mii_wdata(int data, int len, u_long ioaddr);
static void    mii_ta(u_long rw, u_long ioaddr);
static int     mii_swap(int data, int len);
static void    mii_address(u_char addr, u_long ioaddr);
static void    sendto_mii(u32 command, int data, u_long ioaddr);
static int     getfrom_mii(u32 command, u_long ioaddr);
static int     mii_get_oui(u_char phyaddr, u_long ioaddr);
static int     mii_get_phy(struct net_device *dev);
static void    SetMulticastFilter(struct net_device *dev);
static int     get_hw_addr(struct net_device *dev);
static void    srom_repair(struct net_device *dev, int card);
static int     test_bad_enet(struct net_device *dev, int status);
static int     an_exception(struct de4x5_private *lp);
static char    *build_setup_frame(struct net_device *dev, int mode);
static void    disable_ast(struct net_device *dev);
static long    de4x5_switch_mac_port(struct net_device *dev);
static int     gep_rd(struct net_device *dev);
static void    gep_wr(s32 data, struct net_device *dev);
static void    yawn(struct net_device *dev, int state);
static void    de4x5_parse_params(struct net_device *dev);
static void    de4x5_dbg_open(struct net_device *dev);
static void    de4x5_dbg_mii(struct net_device *dev, int k);
static void    de4x5_dbg_media(struct net_device *dev);
static void    de4x5_dbg_srom(struct de4x5_srom *p);
static void    de4x5_dbg_rx(struct sk_buff *skb, int len);
static int     de4x5_strncmp(char *a, char *b, int n);
static int     dc21041_infoleaf(struct net_device *dev);
static int     dc21140_infoleaf(struct net_device *dev);
static int     dc21142_infoleaf(struct net_device *dev);
static int     dc21143_infoleaf(struct net_device *dev);
static int     type0_infoblock(struct net_device *dev, u_char count, u_char *p);
static int     type1_infoblock(struct net_device *dev, u_char count, u_char *p);
static int     type2_infoblock(struct net_device *dev, u_char count, u_char *p);
static int     type3_infoblock(struct net_device *dev, u_char count, u_char *p);
static int     type4_infoblock(struct net_device *dev, u_char count, u_char *p);
static int     type5_infoblock(struct net_device *dev, u_char count, u_char *p);
static int     compact_infoblock(struct net_device *dev, u_char count, u_char *p);
static int io=0x0;
module_param(io, int, 0);
module_param(de4x5_debug, int, 0);
module_param(dec_only, int, 0);
module_param(args, charp, 0);
MODULE_PARM_DESC(io, "de4x5 I/O base address");
MODULE_PARM_DESC(de4x5_debug, "de4x5 debug mask");
MODULE_PARM_DESC(dec_only, "de4x5 probe only for Digital boards (0-1)");
MODULE_PARM_DESC(args, "de4x5 full duplex and media type settings; see de4x5.c for details");
MODULE_LICENSE("GPL");
struct InfoLeaf ;
static struct InfoLeaf infoleaf_array[] = ;
#define INFOLEAF_SIZE ARRAY_SIZE(infoleaf_array)
static int (*dc_infoblock[])(struct net_device *dev, u_char, u_char *) = ;
#define COMPACT (ARRAY_SIZE(dc_infoblock) - 1)
#define RESET_DE4X5
#define PHY_HARD_RESET
static const struct net_device_ops de4x5_netdev_ops = ;
static int __devinit
de4x5_hw_init(struct net_device *dev, u_long iobase, struct device *gendev)
static int
de4x5_open(struct net_device *dev)
static int
de4x5_init(struct net_device *dev)
static int
de4x5_sw_reset(struct net_device *dev)
static netdev_tx_t
de4x5_queue_pkt(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t
de4x5_interrupt(int irq, void *dev_id)
static int
de4x5_rx(struct net_device *dev)
static inline void
de4x5_free_tx_buff(struct de4x5_private *lp, int entry)
static int
de4x5_tx(struct net_device *dev)
static void
de4x5_ast(struct net_device *dev)
static int
de4x5_txur(struct net_device *dev)
static int
de4x5_rx_ovfc(struct net_device *dev)
static int
de4x5_close(struct net_device *dev)
static struct net_device_stats *
de4x5_get_stats(struct net_device *dev)
static void
de4x5_local_stats(struct net_device *dev, char *buf, int pkt_len)
static void
load_packet(struct net_device *dev, char *buf, u32 flags, struct sk_buff *skb)
static void
set_multicast_list(struct net_device *dev)
static void
SetMulticastFilter(struct net_device *dev)
static u_char de4x5_irq[] = EISA_ALLOWED_IRQ_LIST;
static int __init de4x5_eisa_probe (struct device *gendev)
static int __devexit de4x5_eisa_remove (struct device *device)
static struct eisa_device_id de4x5_eisa_ids[] = ;
MODULE_DEVICE_TABLE(eisa, de4x5_eisa_ids);
static struct eisa_driver de4x5_eisa_driver = ;
MODULE_DEVICE_TABLE(eisa, de4x5_eisa_ids);
static void __devinit
srom_search(struct net_device *dev, struct pci_dev *pdev)
static int __devinit de4x5_pci_probe (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit de4x5_pci_remove (struct pci_dev *pdev)
static struct pci_device_id de4x5_pci_tbl[] = ;
static struct pci_driver de4x5_pci_driver = ;
static int
autoconf_media(struct net_device *dev)
static int
dc21040_autoconf(struct net_device *dev)
static int
dc21040_state(struct net_device *dev, int csr13, int csr14, int csr15, int timeout,
int next_state, int suspect_state,
int (*fn)(struct net_device *, int))
static int
de4x5_suspect_state(struct net_device *dev, int timeout, int prev_state,
int (*fn)(struct net_device *, int),
int (*asfn)(struct net_device *))
static int
dc21041_autoconf(struct net_device *dev)
static int
dc21140m_autoconf(struct net_device *dev)
static int
dc2114x_autoconf(struct net_device *dev)
static int
srom_autoconf(struct net_device *dev)
static int
srom_map_media(struct net_device *dev)
static void
de4x5_init_connection(struct net_device *dev)
static int
de4x5_reset_phy(struct net_device *dev)
static int
test_media(struct net_device *dev, s32 irqs, s32 irq_mask, s32 csr13, s32 csr14, s32 csr15, s32 msec)
static int
test_tp(struct net_device *dev, s32 msec)
#define SAMPLE_INTERVAL 500
#define SAMPLE_DELAY    2000
static int
test_for_100Mb(struct net_device *dev, int msec)
static int
wait_for_link(struct net_device *dev)
static int
test_mii_reg(struct net_device *dev, int reg, int mask, bool pol, long msec)
static int
is_spd_100(struct net_device *dev)
static int
is_100_up(struct net_device *dev)
static int
is_10_up(struct net_device *dev)
static int
is_anc_capable(struct net_device *dev)
static int
ping_media(struct net_device *dev, int msec)
static struct sk_buff *
de4x5_alloc_rx_buff(struct net_device *dev, int index, int len)
static void
de4x5_free_rx_buffs(struct net_device *dev)
static void
de4x5_free_tx_buffs(struct net_device *dev)
static void
de4x5_save_skbs(struct net_device *dev)
static void
de4x5_rst_desc_ring(struct net_device *dev)
static void
de4x5_cache_state(struct net_device *dev, int flag)
static void
de4x5_put_cache(struct net_device *dev, struct sk_buff *skb)
static void
de4x5_putb_cache(struct net_device *dev, struct sk_buff *skb)
static struct sk_buff *
de4x5_get_cache(struct net_device *dev)
static int
test_ans(struct net_device *dev, s32 irqs, s32 irq_mask, s32 msec)
static void
de4x5_setup_intr(struct net_device *dev)
static void
reset_init_sia(struct net_device *dev, s32 csr13, s32 csr14, s32 csr15)
static void
create_packet(struct net_device *dev, char *frame, int len)
static int
EISA_signature(char *name, struct device *device)
static int
PCI_signature(char *name, struct de4x5_private *lp)
static void
DevicePresent(struct net_device *dev, u_long aprom_addr)
static void
enet_addr_rst(u_long aprom_addr)
static int
get_hw_addr(struct net_device *dev)
static int
de4x5_bad_srom(struct de4x5_private *lp)
static int
de4x5_strncmp(char *a, char *b, int n)
static void
srom_repair(struct net_device *dev, int card)
static int
test_bad_enet(struct net_device *dev, int status)
static int
an_exception(struct de4x5_private *lp)
static short
srom_rd(u_long addr, u_char offset)
static void
srom_latch(u_int command, u_long addr)
static void
srom_command(u_int command, u_long addr)
static void
srom_address(u_int command, u_long addr, u_char offset)
static short
srom_data(u_int command, u_long addr)
static void
sendto_srom(u_int command, u_long addr)
static int
getfrom_srom(u_long addr)
static int
srom_infoleaf_info(struct net_device *dev)
static void
srom_init(struct net_device *dev)
static void
srom_exec(struct net_device *dev, u_char *p)
static int
dc21041_infoleaf(struct net_device *dev)
static int
dc21140_infoleaf(struct net_device *dev)
static int
dc21142_infoleaf(struct net_device *dev)
static int
dc21143_infoleaf(struct net_device *dev)
static int
compact_infoblock(struct net_device *dev, u_char count, u_char *p)
static int
type0_infoblock(struct net_device *dev, u_char count, u_char *p)
static int
type1_infoblock(struct net_device *dev, u_char count, u_char *p)
static int
type2_infoblock(struct net_device *dev, u_char count, u_char *p)
static int
type3_infoblock(struct net_device *dev, u_char count, u_char *p)
static int
type4_infoblock(struct net_device *dev, u_char count, u_char *p)
static int
type5_infoblock(struct net_device *dev, u_char count, u_char *p)
static int
mii_rd(u_char phyreg, u_char phyaddr, u_long ioaddr)
static void
mii_wr(int data, u_char phyreg, u_char phyaddr, u_long ioaddr)
static int
mii_rdata(u_long ioaddr)
static void
mii_wdata(int data, int len, u_long ioaddr)
static void
mii_address(u_char addr, u_long ioaddr)
static void
mii_ta(u_long rw, u_long ioaddr)
static int
mii_swap(int data, int len)
static void
sendto_mii(u32 command, int data, u_long ioaddr)
static int
getfrom_mii(u32 command, u_long ioaddr)
static int
mii_get_oui(u_char phyaddr, u_long ioaddr)
static int
mii_get_phy(struct net_device *dev)
static char *
build_setup_frame(struct net_device *dev, int mode)
static void
disable_ast(struct net_device *dev)
static long
de4x5_switch_mac_port(struct net_device *dev)
static void
gep_wr(s32 data, struct net_device *dev)
static int
gep_rd(struct net_device *dev)
static void
yawn(struct net_device *dev, int state)
static void
de4x5_parse_params(struct net_device *dev)
static void
de4x5_dbg_open(struct net_device *dev)
static void
de4x5_dbg_mii(struct net_device *dev, int k)
static void
de4x5_dbg_media(struct net_device *dev)
static void
de4x5_dbg_srom(struct de4x5_srom *p)
static void
de4x5_dbg_rx(struct sk_buff *skb, int len)
static int
de4x5_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int __init de4x5_module_init (void)
static void __exit de4x5_module_exit (void)
module_init (de4x5_module_init);
module_exit (de4x5_module_exit);
