static inline void schedule_mac_stats_update(struct adapter *ap, int secs)
static inline void cancel_mac_stats_update(struct adapter *ap)
#define MAX_CMDQ_ENTRIES	16384
#define MAX_CMDQ1_ENTRIES	1024
#define MAX_RX_BUFFERS		16384
#define MAX_RX_JUMBO_BUFFERS	16384
#define MAX_TX_BUFFERS_HIGH	16384U
#define MAX_TX_BUFFERS_LOW	1536U
#define MAX_TX_BUFFERS		1460U
#define MIN_FL_ENTRIES		32
#define DFLT_MSG_ENABLE (NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK | \
NETIF_MSG_TIMER | NETIF_MSG_IFDOWN | NETIF_MSG_IFUP |\
NETIF_MSG_RX_ERR | NETIF_MSG_TX_ERR)
#define EEPROM_SIZE 32
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR("Chelsio Communications");
MODULE_LICENSE("GPL");
static int dflt_msg_enable = DFLT_MSG_ENABLE;
module_param(dflt_msg_enable, int, 0);
MODULE_PARM_DESC(dflt_msg_enable, "Chelsio T1 default message enable bitmap");
#define HCLOCK 0x0
#define LCLOCK 0x1
static int t1_clock(struct adapter *adapter, int mode);
static int t1powersave = 1;
module_param(t1powersave, int, 0);
MODULE_PARM_DESC(t1powersave, "Enable/Disable T1 powersaving mode");
static int disable_msi = 0;
module_param(disable_msi, int, 0);
MODULE_PARM_DESC(disable_msi, "Disable Message Signaled Interrupt (MSI)");
static const char pci_speed[][4] = ;
static void t1_set_rxmode(struct net_device *dev)
static void link_report(struct port_info *p)
void t1_link_negotiated(struct adapter *adapter, int port_id, int link_stat,
int speed, int duplex, int pause)
static void link_start(struct port_info *p)
static void enable_hw_csum(struct adapter *adapter)
static int cxgb_up(struct adapter *adapter)
static void cxgb_down(struct adapter *adapter)
static int cxgb_open(struct net_device *dev)
static int cxgb_close(struct net_device *dev)
static struct net_device_stats *t1_get_stats(struct net_device *dev)
static u32 get_msglevel(struct net_device *dev)
static void set_msglevel(struct net_device *dev, u32 val)
static char stats_strings[][ETH_GSTRING_LEN] = ;
#define T2_REGMAP_SIZE (3 * 1024)
static int get_regs_len(struct net_device *dev)
static void get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int get_sset_count(struct net_device *dev, int sset)
static void get_strings(struct net_device *dev, u32 stringset, u8 *data)
static void get_stats(struct net_device *dev, struct ethtool_stats *stats,
u64 *data)
static inline void reg_block_dump(struct adapter *ap, void *buf,
unsigned int start, unsigned int end)
static void get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *buf)
static int get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int speed_duplex_to_caps(int speed, int duplex)
#define ADVERTISED_MASK (ADVERTISED_10baseT_Half | ADVERTISED_10baseT_Full | \
ADVERTISED_100baseT_Half | ADVERTISED_100baseT_Full | \
ADVERTISED_1000baseT_Half | ADVERTISED_1000baseT_Full | \
ADVERTISED_10000baseT_Full)
static int set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static int set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static void get_sge_param(struct net_device *dev, struct ethtool_ringparam *e)
static int set_sge_param(struct net_device *dev, struct ethtool_ringparam *e)
static int set_coalesce(struct net_device *dev, struct ethtool_coalesce *c)
static int get_coalesce(struct net_device *dev, struct ethtool_coalesce *c)
static int get_eeprom_len(struct net_device *dev)
#define EEPROM_MAGIC(ap) \
(PCI_VENDOR_ID_CHELSIO | ((ap)->params.chip_version << 16))
static int get_eeprom(struct net_device *dev, struct ethtool_eeprom *e,
u8 *data)
static const struct ethtool_ops t1_ethtool_ops = ;
static int t1_ioctl(struct net_device *dev, struct ifreq *req, int cmd)
static int t1_change_mtu(struct net_device *dev, int new_mtu)
static int t1_set_mac_addr(struct net_device *dev, void *p)
#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
static void t1_vlan_rx_register(struct net_device *dev,
struct vlan_group *grp)
static void t1_netpoll(struct net_device *dev)
static void mac_stats_task(struct work_struct *work)
static void ext_intr_task(struct work_struct *work)
void t1_elmer0_ext_intr(struct adapter *adapter)
void t1_fatal_err(struct adapter *adapter)
static const struct net_device_ops cxgb_netdev_ops = ;
static int __devinit init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void bit_bang(struct adapter *adapter, int bitdata, int nbits)
static int t1_clock(struct adapter *adapter, int mode)
static inline void t1_sw_reset(struct pci_dev *pdev)
static void __devexit remove_one(struct pci_dev *pdev)
static struct pci_driver driver = ;
static int __init t1_init_module(void)
static void __exit t1_cleanup_module(void)
module_init(t1_init_module);
module_exit(t1_cleanup_module);
