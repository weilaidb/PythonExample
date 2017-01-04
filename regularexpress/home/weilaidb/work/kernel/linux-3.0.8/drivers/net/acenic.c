#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
#define DRV_NAME "acenic"
#undef INDEX_DEBUG
#define ACE_IS_TIGON_I(ap)	0
#define ACE_TX_RING_ENTRIES(ap)	MAX_TX_RING_ENTRIES
#define ACE_IS_TIGON_I(ap)	(ap->version == 1)
#define ACE_TX_RING_ENTRIES(ap)	ap->tx_ring_entries
#define PCI_VENDOR_ID_ALTEON		0x12ae
#define PCI_DEVICE_ID_ALTEON_ACENIC_FIBRE  0x0001
#define PCI_DEVICE_ID_ALTEON_ACENIC_COPPER 0x0002
#define PCI_DEVICE_ID_3COM_3C985	0x0001
#define PCI_VENDOR_ID_NETGEAR		0x1385
#define PCI_DEVICE_ID_NETGEAR_GA620	0x620a
#define PCI_DEVICE_ID_NETGEAR_GA620T	0x630a
#define PCI_DEVICE_ID_FARALLON_PN9000SX	0x1a
#define PCI_DEVICE_ID_FARALLON_PN9100T  0xfa
#define PCI_VENDOR_ID_SGI		0x10a9
#define PCI_DEVICE_ID_SGI_ACENIC	0x0009
static DEFINE_PCI_DEVICE_TABLE(acenic_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, acenic_pci_tbl);
#define ace_sync_irq(irq)	synchronize_irq(irq)
#define offset_in_page(ptr)	((unsigned long)(ptr) & ~PAGE_MASK)
#define ACE_MAX_MOD_PARMS	8
#define BOARD_IDX_STATIC	0
#define BOARD_IDX_OVERFLOW	-1
#if (defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)) && \
defined(NETIF_F_HW_VLAN_RX)
#define ACENIC_DO_VLAN		1
#define ACE_RCB_VLAN_FLAG	RCB_FLG_VLAN_ASSIST
#define ACENIC_DO_VLAN		0
#define ACE_RCB_VLAN_FLAG	0
#define MAX_TEXT_LEN	96*1024
#define MAX_RODATA_LEN	8*1024
#define MAX_DATA_LEN	2*1024
#define tigon2FwReleaseLocal 0
#define RX_RING_SIZE		72
#define RX_MINI_SIZE		64
#define RX_JUMBO_SIZE		48
#define RX_PANIC_STD_THRES	16
#define RX_PANIC_STD_REFILL	(3*RX_PANIC_STD_THRES)/2
#define RX_LOW_STD_THRES	(3*RX_RING_SIZE)/4
#define RX_PANIC_MINI_THRES	12
#define RX_PANIC_MINI_REFILL	(3*RX_PANIC_MINI_THRES)/2
#define RX_LOW_MINI_THRES	(3*RX_MINI_SIZE)/4
#define RX_PANIC_JUMBO_THRES	6
#define RX_PANIC_JUMBO_REFILL	(3*RX_PANIC_JUMBO_THRES)/2
#define RX_LOW_JUMBO_THRES	(3*RX_JUMBO_SIZE)/4
#define ACE_MINI_SIZE		100
#define ACE_MINI_BUFSIZE	ACE_MINI_SIZE
#define ACE_STD_BUFSIZE		(ACE_STD_MTU + ETH_HLEN + 4)
#define ACE_JUMBO_BUFSIZE	(ACE_JUMBO_MTU + ETH_HLEN + 4)
#define DEF_TX_COAL		400
#define DEF_TX_MAX_DESC		60
#define DEF_RX_COAL		120
#define DEF_RX_MAX_DESC		25
#define DEF_TX_RATIO		21
#define DEF_JUMBO_TX_COAL	20
#define DEF_JUMBO_TX_MAX_DESC	60
#define DEF_JUMBO_RX_COAL	30
#define DEF_JUMBO_RX_MAX_DESC	6
#define DEF_JUMBO_TX_RATIO	21
#if tigon2FwReleaseLocal < 20001118
#define TX_COAL_INTS_ONLY	1
#define TX_COAL_INTS_ONLY	1
#define DEF_TRACE		0
#define DEF_STAT		(2 * TICKS_PER_SEC)
static int link_state[ACE_MAX_MOD_PARMS];
static int trace[ACE_MAX_MOD_PARMS];
static int tx_coal_tick[ACE_MAX_MOD_PARMS];
static int rx_coal_tick[ACE_MAX_MOD_PARMS];
static int max_tx_desc[ACE_MAX_MOD_PARMS];
static int max_rx_desc[ACE_MAX_MOD_PARMS];
static int tx_ratio[ACE_MAX_MOD_PARMS];
static int dis_pci_mem_inval[ACE_MAX_MOD_PARMS] = ;
MODULE_AUTHOR("Jes Sorensen <jes@trained-monkey.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("AceNIC/3C985/GA620 Gigabit Ethernet driver");
MODULE_FIRMWARE("acenic/tg1.bin");
MODULE_FIRMWARE("acenic/tg2.bin");
module_param_array_named(link, link_state, int, NULL, 0);
module_param_array(trace, int, NULL, 0);
module_param_array(tx_coal_tick, int, NULL, 0);
module_param_array(max_tx_desc, int, NULL, 0);
module_param_array(rx_coal_tick, int, NULL, 0);
module_param_array(max_rx_desc, int, NULL, 0);
module_param_array(tx_ratio, int, NULL, 0);
MODULE_PARM_DESC(link, "AceNIC/3C985/NetGear link state");
MODULE_PARM_DESC(trace, "AceNIC/3C985/NetGear firmware trace level");
MODULE_PARM_DESC(tx_coal_tick, "AceNIC/3C985/GA620 max clock ticks to wait from first tx descriptor arrives");
MODULE_PARM_DESC(max_tx_desc, "AceNIC/3C985/GA620 max number of transmit descriptors to wait");
MODULE_PARM_DESC(rx_coal_tick, "AceNIC/3C985/GA620 max clock ticks to wait from first rx descriptor arrives");
MODULE_PARM_DESC(max_rx_desc, "AceNIC/3C985/GA620 max number of receive descriptors to wait");
MODULE_PARM_DESC(tx_ratio, "AceNIC/3C985/GA620 ratio of NIC memory used for TX/RX descriptors (range 0-63)");
static const char version[] __devinitconst =
"acenic.c: v0.92 08/05/2002  Jes Sorensen, linux-acenic@SunSITE.dk\n"
"                            http:
static int ace_get_settings(struct net_device *, struct ethtool_cmd *);
static int ace_set_settings(struct net_device *, struct ethtool_cmd *);
static void ace_get_drvinfo(struct net_device *, struct ethtool_drvinfo *);
static const struct ethtool_ops ace_ethtool_ops = ;
static void ace_watchdog(struct net_device *dev);
static const struct net_device_ops ace_netdev_ops = ;
static int __devinit acenic_probe_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit acenic_remove_one(struct pci_dev *pdev)
static struct pci_driver acenic_pci_driver = ;
static int __init acenic_init(void)
static void __exit acenic_exit(void)
module_init(acenic_init);
module_exit(acenic_exit);
static void ace_free_descriptors(struct net_device *dev)
static int ace_allocate_descriptors(struct net_device *dev)
static void ace_init_cleanup(struct net_device *dev)
static inline void ace_issue_cmd(struct ace_regs __iomem *regs, struct cmd *cmd)
static int __devinit ace_init(struct net_device *dev)
static void ace_set_rxtx_parms(struct net_device *dev, int jumbo)
static void ace_watchdog(struct net_device *data)
static void ace_tasklet(unsigned long dev)
static void ace_dump_trace(struct ace_private *ap)
static void ace_load_std_rx_ring(struct ace_private *ap, int nr_bufs)
static void ace_load_mini_rx_ring(struct ace_private *ap, int nr_bufs)
static void ace_load_jumbo_rx_ring(struct ace_private *ap, int nr_bufs)
static u32 ace_handle_event(struct net_device *dev, u32 evtcsm, u32 evtprd)
static void ace_rx_int(struct net_device *dev, u32 rxretprd, u32 rxretcsm)
static inline void ace_tx_int(struct net_device *dev,
u32 txcsm, u32 idx)
static irqreturn_t ace_interrupt(int irq, void *dev_id)
#if ACENIC_DO_VLAN
static void ace_vlan_rx_register(struct net_device *dev, struct vlan_group *grp)
static int ace_open(struct net_device *dev)
static int ace_close(struct net_device *dev)
static inline dma_addr_t
ace_map_tx_skb(struct ace_private *ap, struct sk_buff *skb,
struct sk_buff *tail, u32 idx)
static inline void
ace_load_tx_bd(struct ace_private *ap, struct tx_desc *desc, u64 addr,
u32 flagsize, u32 vlan_tag)
static netdev_tx_t ace_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int ace_change_mtu(struct net_device *dev, int new_mtu)
static int ace_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int ace_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static void ace_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int ace_set_mac_addr(struct net_device *dev, void *p)
static void ace_set_multicast_list(struct net_device *dev)
static struct net_device_stats *ace_get_stats(struct net_device *dev)
static void __devinit ace_copy(struct ace_regs __iomem *regs, const __be32 *src,
u32 dest, int size)
static void __devinit ace_clear(struct ace_regs __iomem *regs, u32 dest, int size)
static int __devinit ace_load_firmware(struct net_device *dev)
static void __devinit eeprom_start(struct ace_regs __iomem *regs)
static void __devinit eeprom_prep(struct ace_regs __iomem *regs, u8 magic)
static int __devinit eeprom_check_ack(struct ace_regs __iomem *regs)
static void __devinit eeprom_stop(struct ace_regs __iomem *regs)
static int __devinit read_eeprom_byte(struct net_device *dev,
unsigned long offset)
