#define DRV_NAME	"natsemi"
#define DRV_VERSION	"2.1"
#define DRV_RELDATE	"Sept 11, 2006"
#define RX_OFFSET	2
#define NATSEMI_DEF_MSG		(NETIF_MSG_DRV		| \
NETIF_MSG_LINK		| \
NETIF_MSG_WOL		| \
NETIF_MSG_RX_ERR	| \
NETIF_MSG_TX_ERR)
static int debug = -1;
static int mtu;
static const int multicast_filter_limit = 100;
static int rx_copybreak;
static int dspcfg_workaround = 1;
#define MAX_UNITS 8
static int options[MAX_UNITS];
static int full_duplex[MAX_UNITS];
#define TX_RING_SIZE	16
#define TX_QUEUE_LEN	10
#define RX_RING_SIZE	32
#define TX_TIMEOUT  (2*HZ)
#define NATSEMI_HW_TIMEOUT	400
#define NATSEMI_TIMER_FREQ	5*HZ
#define NATSEMI_PG0_NREGS	64
#define NATSEMI_RFDR_NREGS	8
#define NATSEMI_PG1_NREGS	4
#define NATSEMI_NREGS		(NATSEMI_PG0_NREGS + NATSEMI_RFDR_NREGS + \
NATSEMI_PG1_NREGS)
#define NATSEMI_REGS_VER	1
#define NATSEMI_REGS_SIZE	(NATSEMI_NREGS * sizeof(u32))
#define NATSEMI_HEADERS		22
#define NATSEMI_PADDING		16
#define NATSEMI_LONGPKT		1518
#define NATSEMI_RX_LIMIT	2046
static const char version[] __devinitconst =
KERN_INFO DRV_NAME " dp8381x driver, version "
DRV_VERSION ", " DRV_RELDATE "\n"
"  originally by Donald Becker <becker@scyld.com>\n"
"  2.4.x kernel port by Jeff Garzik, Tjeerd Mulder\n";
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("National Semiconductor DP8381x series PCI Ethernet driver");
MODULE_LICENSE("GPL");
module_param(mtu, int, 0);
module_param(debug, int, 0);
module_param(rx_copybreak, int, 0);
module_param(dspcfg_workaround, int, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
MODULE_PARM_DESC(mtu, "DP8381x MTU (all boards)");
MODULE_PARM_DESC(debug, "DP8381x default debug level");
MODULE_PARM_DESC(rx_copybreak,
"DP8381x copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(dspcfg_workaround, "DP8381x: control DspCfg workaround");
MODULE_PARM_DESC(options,
"DP8381x: Bits 0-3: media type, bit 17: full duplex");
MODULE_PARM_DESC(full_duplex, "DP8381x full duplex setting(s) (1)");
#define PHYID_AM79C874	0x0022561b
enum ;
enum ;
static struct  natsemi_pci_info[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(natsemi_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, natsemi_pci_tbl);
enum register_offsets ;
#define PMDCSR_VAL	0x189c
#define TSTDAT_VAL	0x0
#define DSPCFG_VAL	0x5040
#define SDCFG_VAL	0x008c
#define DSPCFG_LOCK	0x20
#define DSPCFG_COEF	0x1000
#define TSTDAT_FIXED	0xe8
enum pci_register_offsets ;
enum ChipCmd_bits ;
enum ChipConfig_bits ;
enum EECtrl_bits ;
enum PCIBusCfg_bits ;
enum IntrStatus_bits ;
#define DEFAULT_INTR 0x00f1cd65
enum TxConfig_bits ;
#define TX_FLTH_VAL		((512/32) << 8)
#define TX_DRTH_VAL_START	(64/32)
#define TX_DRTH_VAL_INC		2
#define TX_DRTH_VAL_LIMIT	(1472/32)
enum RxConfig_bits ;
#define RX_DRTH_VAL		(128/8)
enum ClkRun_bits ;
enum WolCmd_bits ;
enum RxFilterAddr_bits ;
enum StatsCtrl_bits ;
enum MIntrCtrl_bits ;
enum PhyCtrl_bits ;
#define PHY_ADDR_NONE		32
#define PHY_ADDR_INTERNAL	1
#define SRR_DP83815_C	0x0302
#define SRR_DP83815_D	0x0403
#define SRR_DP83816_A4	0x0504
#define SRR_DP83816_A5	0x0505
struct netdev_desc ;
enum desc_status_bits ;
struct netdev_private ;
static void move_int_phy(struct net_device *dev, int addr);
static int eeprom_read(void __iomem *ioaddr, int location);
static int mdio_read(struct net_device *dev, int reg);
static void mdio_write(struct net_device *dev, int reg, u16 data);
static void init_phy_fixup(struct net_device *dev);
static int miiport_read(struct net_device *dev, int phy_id, int reg);
static void miiport_write(struct net_device *dev, int phy_id, int reg, u16 data);
static int find_mii(struct net_device *dev);
static void natsemi_reset(struct net_device *dev);
static void natsemi_reload_eeprom(struct net_device *dev);
static void natsemi_stop_rxtx(struct net_device *dev);
static int netdev_open(struct net_device *dev);
static void do_cable_magic(struct net_device *dev);
static void undo_cable_magic(struct net_device *dev);
static void check_link(struct net_device *dev);
static void netdev_timer(unsigned long data);
static void dump_ring(struct net_device *dev);
static void ns_tx_timeout(struct net_device *dev);
static int alloc_ring(struct net_device *dev);
static void refill_rx(struct net_device *dev);
static void init_ring(struct net_device *dev);
static void drain_tx(struct net_device *dev);
static void drain_ring(struct net_device *dev);
static void free_ring(struct net_device *dev);
static void reinit_ring(struct net_device *dev);
static void init_registers(struct net_device *dev);
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t intr_handler(int irq, void *dev_instance);
static void netdev_error(struct net_device *dev, int intr_status);
static int natsemi_poll(struct napi_struct *napi, int budget);
static void netdev_rx(struct net_device *dev, int *work_done, int work_to_do);
static void netdev_tx_done(struct net_device *dev);
static int natsemi_change_mtu(struct net_device *dev, int new_mtu);
static void natsemi_poll_controller(struct net_device *dev);
static void __set_rx_mode(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static void __get_stats(struct net_device *dev);
static struct net_device_stats *get_stats(struct net_device *dev);
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int netdev_set_wol(struct net_device *dev, u32 newval);
static int netdev_get_wol(struct net_device *dev, u32 *supported, u32 *cur);
static int netdev_set_sopass(struct net_device *dev, u8 *newval);
static int netdev_get_sopass(struct net_device *dev, u8 *data);
static int netdev_get_ecmd(struct net_device *dev, struct ethtool_cmd *ecmd);
static int netdev_set_ecmd(struct net_device *dev, struct ethtool_cmd *ecmd);
static void enable_wol_mode(struct net_device *dev, int enable_intr);
static int netdev_close(struct net_device *dev);
static int netdev_get_regs(struct net_device *dev, u8 *buf);
static int netdev_get_eeprom(struct net_device *dev, u8 *buf);
static const struct ethtool_ops ethtool_ops;
#define NATSEMI_ATTR(_name) \
static ssize_t natsemi_show_##_name(struct device *dev, \
struct device_attribute *attr, char *buf); \
static ssize_t natsemi_set_##_name(struct device *dev, \
struct device_attribute *attr, \
const char *buf, size_t count); \
static DEVICE_ATTR(_name, 0644, natsemi_show_##_name, natsemi_set_##_name)
#define NATSEMI_CREATE_FILE(_dev, _name) \
device_create_file(&_dev->dev, &dev_attr_##_name)
#define NATSEMI_REMOVE_FILE(_dev, _name) \
device_remove_file(&_dev->dev, &dev_attr_##_name)
NATSEMI_ATTR(dspcfg_workaround);
static ssize_t natsemi_show_dspcfg_workaround(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t natsemi_set_dspcfg_workaround(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static inline void __iomem *ns_ioaddr(struct net_device *dev)
static inline void natsemi_irq_enable(struct net_device *dev)
static inline void natsemi_irq_disable(struct net_device *dev)
static void move_int_phy(struct net_device *dev, int addr)
static void __devinit natsemi_init_media (struct net_device *dev)
static const struct net_device_ops natsemi_netdev_ops = ;
static int __devinit natsemi_probe1 (struct pci_dev *pdev,
const struct pci_device_id *ent)
#define eeprom_delay(ee_addr)	readl(ee_addr)
#define EE_Write0 (EE_ChipSelect)
#define EE_Write1 (EE_ChipSelect | EE_DataIn)
enum EEPROM_Cmds ;
static int eeprom_read(void __iomem *addr, int location)
#define mii_delay(ioaddr)  readl(ioaddr + EECtrl)
static int mii_getbit (struct net_device *dev)
static void mii_send_bits (struct net_device *dev, u32 data, int len)
static int miiport_read(struct net_device *dev, int phy_id, int reg)
static void miiport_write(struct net_device *dev, int phy_id, int reg, u16 data)
static int mdio_read(struct net_device *dev, int reg)
static void mdio_write(struct net_device *dev, int reg, u16 data)
static void init_phy_fixup(struct net_device *dev)
static int switch_port_external(struct net_device *dev)
static int switch_port_internal(struct net_device *dev)
static int find_mii(struct net_device *dev)
#define CFG_RESET_SAVE 0xfde000
#define WCSR_RESET_SAVE 0x61f
#define RFCR_RESET_SAVE 0xf8500000;
static void natsemi_reset(struct net_device *dev)
static void reset_rx(struct net_device *dev)
static void natsemi_reload_eeprom(struct net_device *dev)
static void natsemi_stop_rxtx(struct net_device *dev)
static int netdev_open(struct net_device *dev)
static void do_cable_magic(struct net_device *dev)
static void undo_cable_magic(struct net_device *dev)
static void check_link(struct net_device *dev)
static void init_registers(struct net_device *dev)
static void netdev_timer(unsigned long data)
static void dump_ring(struct net_device *dev)
static void ns_tx_timeout(struct net_device *dev)
static int alloc_ring(struct net_device *dev)
static void refill_rx(struct net_device *dev)
static void set_bufsize(struct net_device *dev)
static void init_ring(struct net_device *dev)
static void drain_tx(struct net_device *dev)
static void drain_rx(struct net_device *dev)
static void drain_ring(struct net_device *dev)
static void free_ring(struct net_device *dev)
static void reinit_rx(struct net_device *dev)
static void reinit_ring(struct net_device *dev)
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev)
static void netdev_tx_done(struct net_device *dev)
static irqreturn_t intr_handler(int irq, void *dev_instance)
static int natsemi_poll(struct napi_struct *napi, int budget)
static void netdev_rx(struct net_device *dev, int *work_done, int work_to_do)
static void netdev_error(struct net_device *dev, int intr_status)
static void __get_stats(struct net_device *dev)
static struct net_device_stats *get_stats(struct net_device *dev)
static void natsemi_poll_controller(struct net_device *dev)
#define HASH_TABLE	0x200
static void __set_rx_mode(struct net_device *dev)
static int natsemi_change_mtu(struct net_device *dev, int new_mtu)
static void set_rx_mode(struct net_device *dev)
static void get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int get_regs_len(struct net_device *dev)
static int get_eeprom_len(struct net_device *dev)
static int get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static void get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static void get_regs(struct net_device *dev, struct ethtool_regs *regs, void *buf)
static u32 get_msglevel(struct net_device *dev)
static void set_msglevel(struct net_device *dev, u32 val)
static int nway_reset(struct net_device *dev)
static u32 get_link(struct net_device *dev)
static int get_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom, u8 *data)
static const struct ethtool_ops ethtool_ops = ;
static int netdev_set_wol(struct net_device *dev, u32 newval)
static int netdev_get_wol(struct net_device *dev, u32 *supported, u32 *cur)
static int netdev_set_sopass(struct net_device *dev, u8 *newval)
static int netdev_get_sopass(struct net_device *dev, u8 *data)
static int netdev_get_ecmd(struct net_device *dev, struct ethtool_cmd *ecmd)
static int netdev_set_ecmd(struct net_device *dev, struct ethtool_cmd *ecmd)
static int netdev_get_regs(struct net_device *dev, u8 *buf)
#define SWAP_BITS(x)	( (((x) & 0x0001) << 15) | (((x) & 0x0002) << 13) \
| (((x) & 0x0004) << 11) | (((x) & 0x0008) << 9)  \
| (((x) & 0x0010) << 7)  | (((x) & 0x0020) << 5)  \
| (((x) & 0x0040) << 3)  | (((x) & 0x0080) << 1)  \
| (((x) & 0x0100) >> 1)  | (((x) & 0x0200) >> 3)  \
| (((x) & 0x0400) >> 5)  | (((x) & 0x0800) >> 7)  \
| (((x) & 0x1000) >> 9)  | (((x) & 0x2000) >> 11) \
| (((x) & 0x4000) >> 13) | (((x) & 0x8000) >> 15) )
static int netdev_get_eeprom(struct net_device *dev, u8 *buf)
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void enable_wol_mode(struct net_device *dev, int enable_intr)
static int netdev_close(struct net_device *dev)
static void __devexit natsemi_remove1 (struct pci_dev *pdev)
static int natsemi_suspend (struct pci_dev *pdev, pm_message_t state)
static int natsemi_resume (struct pci_dev *pdev)
static struct pci_driver natsemi_driver = ;
static int __init natsemi_init_mod (void)
static void __exit natsemi_exit_mod (void)
module_init(natsemi_init_mod);
module_exit(natsemi_exit_mod);
