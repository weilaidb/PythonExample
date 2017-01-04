#define DRV_NAME	"3c59x"
#define TX_RING_SIZE	16
#define RX_RING_SIZE	32
#define PKT_BUF_SZ		1536
static int rx_copybreak = 200;
static int rx_copybreak = 1513;
static const int mtu = 1500;
static int max_interrupt_work = 32;
static int watchdog = 5000;
#define tx_interrupt_mitigation 1
#define vortex_debug debug
static int vortex_debug = VORTEX_DEBUG;
static int vortex_debug = 1;
#define RUN_AT(x) (jiffies + (x))
static const char version[] __devinitconst =
DRV_NAME ": Donald Becker and others.\n";
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("3Com 3c59x/3c9xx ethernet driver ");
MODULE_LICENSE("GPL");
#define VORTEX_TOTAL_SIZE 0x20
#define BOOMERANG_TOTAL_SIZE 0x40
static char mii_preamble_required;
#define PFX DRV_NAME ": "
enum pci_flags_bit ;
enum ;
enum vortex_chips ;
static struct vortex_chip_info  vortex_info_tbl[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(vortex_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, vortex_pci_tbl);
#define EL3_CMD 0x0e
#define EL3_STATUS 0x0e
enum vortex_cmd ;
enum RxFilter ;
enum vortex_status ;
enum Window1 ;
enum Window0 ;
enum Win0_EEPROM_bits ;
enum eeprom_offset ;
enum Window2 ;
enum Window3 ;
#define BFEXT(value, offset, bitcount)  \
((((unsigned long)(value)) >> (offset)) & ((1 << (bitcount)) - 1))
#define BFINS(lhs, rhs, offset, bitcount)					\
(((lhs) & ~((((1 << (bitcount)) - 1)) << (offset))) |	\
(((rhs) & ((1 << (bitcount)) - 1)) << (offset)))
#define RAM_SIZE(v)		BFEXT(v, 0, 3)
#define RAM_WIDTH(v)	BFEXT(v, 3, 1)
#define RAM_SPEED(v)	BFEXT(v, 4, 2)
#define ROM_SIZE(v)		BFEXT(v, 6, 2)
#define RAM_SPLIT(v)	BFEXT(v, 16, 2)
#define XCVR(v)			BFEXT(v, 20, 4)
#define AUTOSELECT(v)	BFEXT(v, 24, 1)
enum Window4 ;
enum Win4_Media_bits ;
enum Window7 ;
enum MasterCtrl ;
#define LAST_FRAG 	0x80000000
#define DN_COMPLETE	0x00010000
struct boom_rx_desc ;
enum rx_desc_status ;
#define DO_ZEROCOPY 1
#define DO_ZEROCOPY 0
struct boom_tx_desc ;
enum tx_desc_status ;
enum ChipCaps ;
struct vortex_extra_stats ;
struct vortex_private ;
static void window_set(struct vortex_private *vp, int window)
#define DEFINE_WINDOW_IO(size)						\
static u ## size							\
window_read ## size(struct vortex_private *vp, int window, int addr)	\
\
static void								\
window_write ## size(struct vortex_private *vp, u ## size value,	\
int window, int addr)				\
DEFINE_WINDOW_IO(8)
DEFINE_WINDOW_IO(16)
DEFINE_WINDOW_IO(32)
#define DEVICE_PCI(dev) (((dev)->bus == &pci_bus_type) ? to_pci_dev((dev)) : NULL)
#define DEVICE_PCI(dev) NULL
#define VORTEX_PCI(vp)							\
((struct pci_dev *) (((vp)->gendev) ? DEVICE_PCI((vp)->gendev) : NULL))
#define DEVICE_EISA(dev) (((dev)->bus == &eisa_bus_type) ? to_eisa_device((dev)) : NULL)
#define DEVICE_EISA(dev) NULL
#define VORTEX_EISA(vp)							\
((struct eisa_device *) (((vp)->gendev) ? DEVICE_EISA((vp)->gendev) : NULL))
enum xcvr_types ;
static const struct media_table  media_tbl[] = ;
static struct  ethtool_stats_keys[] = ;
#define VORTEX_NUM_STATS    5
static int vortex_probe1(struct device *gendev, void __iomem *ioaddr, int irq,
int chip_idx, int card_idx);
static int vortex_up(struct net_device *dev);
static void vortex_down(struct net_device *dev, int final);
static int vortex_open(struct net_device *dev);
static void mdio_sync(struct vortex_private *vp, int bits);
static int mdio_read(struct net_device *dev, int phy_id, int location);
static void mdio_write(struct net_device *vp, int phy_id, int location, int value);
static void vortex_timer(unsigned long arg);
static void rx_oom_timer(unsigned long arg);
static netdev_tx_t vortex_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static netdev_tx_t boomerang_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int vortex_rx(struct net_device *dev);
static int boomerang_rx(struct net_device *dev);
static irqreturn_t vortex_interrupt(int irq, void *dev_id);
static irqreturn_t boomerang_interrupt(int irq, void *dev_id);
static int vortex_close(struct net_device *dev);
static void dump_tx_ring(struct net_device *dev);
static void update_stats(void __iomem *ioaddr, struct net_device *dev);
static struct net_device_stats *vortex_get_stats(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static int vortex_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void vortex_tx_timeout(struct net_device *dev);
static void acpi_set_WOL(struct net_device *dev);
static const struct ethtool_ops vortex_ethtool_ops;
static void set_8021q_mode(struct net_device *dev, int enable);
#define MAX_UNITS 8
static int options[MAX_UNITS] = ;
static int full_duplex[MAX_UNITS] = ;
static int hw_checksums[MAX_UNITS] = ;
static int flow_ctrl[MAX_UNITS] = ;
static int enable_wol[MAX_UNITS] = ;
static int use_mmio[MAX_UNITS] = ;
static int global_options = -1;
static int global_full_duplex = -1;
static int global_enable_wol = -1;
static int global_use_mmio = -1;
static int compaq_ioaddr, compaq_irq, compaq_device_id = 0x5900;
static struct net_device *compaq_net_device;
static int vortex_cards_found;
module_param(debug, int, 0);
module_param(global_options, int, 0);
module_param_array(options, int, NULL, 0);
module_param(global_full_duplex, int, 0);
module_param_array(full_duplex, int, NULL, 0);
module_param_array(hw_checksums, int, NULL, 0);
module_param_array(flow_ctrl, int, NULL, 0);
module_param(global_enable_wol, int, 0);
module_param_array(enable_wol, int, NULL, 0);
module_param(rx_copybreak, int, 0);
module_param(max_interrupt_work, int, 0);
module_param(compaq_ioaddr, int, 0);
module_param(compaq_irq, int, 0);
module_param(compaq_device_id, int, 0);
module_param(watchdog, int, 0);
module_param(global_use_mmio, int, 0);
module_param_array(use_mmio, int, NULL, 0);
MODULE_PARM_DESC(debug, "3c59x debug level (0-6)");
MODULE_PARM_DESC(options, "3c59x: Bits 0-3: media type, bit 4: bus mastering, bit 9: full duplex");
MODULE_PARM_DESC(global_options, "3c59x: same as options, but applies to all NICs if options is unset");
MODULE_PARM_DESC(full_duplex, "3c59x full duplex setting(s) (1)");
MODULE_PARM_DESC(global_full_duplex, "3c59x: same as full_duplex, but applies to all NICs if full_duplex is unset");
MODULE_PARM_DESC(hw_checksums, "3c59x Hardware checksum checking by adapter(s) (0-1)");
MODULE_PARM_DESC(flow_ctrl, "3c59x 802.3x flow control usage (PAUSE only) (0-1)");
MODULE_PARM_DESC(enable_wol, "3c59x: Turn on Wake-on-LAN for adapter(s) (0-1)");
MODULE_PARM_DESC(global_enable_wol, "3c59x: same as enable_wol, but applies to all NICs if enable_wol is unset");
MODULE_PARM_DESC(rx_copybreak, "3c59x copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(max_interrupt_work, "3c59x maximum events handled per interrupt");
MODULE_PARM_DESC(compaq_ioaddr, "3c59x PCI I/O base address (Compaq BIOS problem workaround)");
MODULE_PARM_DESC(compaq_irq, "3c59x PCI IRQ number (Compaq BIOS problem workaround)");
MODULE_PARM_DESC(compaq_device_id, "3c59x PCI device ID (Compaq BIOS problem workaround)");
MODULE_PARM_DESC(watchdog, "3c59x transmit timeout in milliseconds");
MODULE_PARM_DESC(global_use_mmio, "3c59x: same as use_mmio, but applies to all NICs if options is unset");
MODULE_PARM_DESC(use_mmio, "3c59x: use memory-mapped PCI I/O resource (0-1)");
static void poll_vortex(struct net_device *dev)
static int vortex_suspend(struct device *dev)
static int vortex_resume(struct device *dev)
static const struct dev_pm_ops vortex_pm_ops = ;
#define VORTEX_PM_OPS (&vortex_pm_ops)
#define VORTEX_PM_OPS NULL
static struct eisa_device_id vortex_eisa_ids[] = ;
MODULE_DEVICE_TABLE(eisa, vortex_eisa_ids);
static int __init vortex_eisa_probe(struct device *device)
static int __devexit vortex_eisa_remove(struct device *device)
static struct eisa_driver vortex_eisa_driver = ;
static int __init vortex_eisa_init(void)
static int __devinit vortex_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static const struct net_device_ops boomrang_netdev_ops = ;
static const struct net_device_ops vortex_netdev_ops = ;
static int __devinit vortex_probe1(struct device *gendev,
void __iomem *ioaddr, int irq,
int chip_idx, int card_idx)
static void
issue_and_wait(struct net_device *dev, int cmd)
static void
vortex_set_duplex(struct net_device *dev)
static void vortex_check_media(struct net_device *dev, unsigned int init)
static int
vortex_up(struct net_device *dev)
static int
vortex_open(struct net_device *dev)
static void
vortex_timer(unsigned long data)
static void vortex_tx_timeout(struct net_device *dev)
static void
vortex_error(struct net_device *dev, int status)
static netdev_tx_t
vortex_start_xmit(struct sk_buff *skb, struct net_device *dev)
static netdev_tx_t
boomerang_start_xmit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t
vortex_interrupt(int irq, void *dev_id)
static irqreturn_t
boomerang_interrupt(int irq, void *dev_id)
static int vortex_rx(struct net_device *dev)
static int
boomerang_rx(struct net_device *dev)
static void
rx_oom_timer(unsigned long arg)
static void
vortex_down(struct net_device *dev, int final_down)
static int
vortex_close(struct net_device *dev)
static void
dump_tx_ring(struct net_device *dev)
static struct net_device_stats *vortex_get_stats(struct net_device *dev)
static void update_stats(void __iomem *ioaddr, struct net_device *dev)
static int vortex_nway_reset(struct net_device *dev)
static int vortex_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int vortex_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 vortex_get_msglevel(struct net_device *dev)
static void vortex_set_msglevel(struct net_device *dev, u32 dbg)
static int vortex_get_sset_count(struct net_device *dev, int sset)
static void vortex_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static void vortex_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static void vortex_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static void vortex_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int vortex_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static const struct ethtool_ops vortex_ethtool_ops = ;
static int vortex_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void set_rx_mode(struct net_device *dev)
#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
#define VLAN_ETHER_TYPE 0x8100
static void set_8021q_mode(struct net_device *dev, int enable)
static void set_8021q_mode(struct net_device *dev, int enable)
static void mdio_delay(struct vortex_private *vp)
#define MDIO_SHIFT_CLK	0x01
#define MDIO_DIR_WRITE	0x04
#define MDIO_DATA_WRITE0 (0x00 | MDIO_DIR_WRITE)
#define MDIO_DATA_WRITE1 (0x02 | MDIO_DIR_WRITE)
#define MDIO_DATA_READ	0x02
#define MDIO_ENB_IN		0x00
static void mdio_sync(struct vortex_private *vp, int bits)
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int location, int value)
static void acpi_set_WOL(struct net_device *dev)
static void __devexit vortex_remove_one(struct pci_dev *pdev)
static struct pci_driver vortex_driver = ;
static int vortex_have_pci;
static int vortex_have_eisa;
static int __init vortex_init(void)
static void __exit vortex_eisa_cleanup(void)
static void __exit vortex_cleanup(void)
module_init(vortex_init);
module_exit(vortex_cleanup);
