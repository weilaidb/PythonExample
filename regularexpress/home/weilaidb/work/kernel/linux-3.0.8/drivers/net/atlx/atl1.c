#define ATLX_DRIVER_VERSION "2.1.3"
MODULE_AUTHOR("Xiong Huang <xiong.huang@atheros.com>, "
"Chris Snook <csnook@redhat.com>, "
"Jay Cliburn <jcliburn@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION(ATLX_DRIVER_VERSION);
static const struct ethtool_ops atl1_ethtool_ops;
#define ATL1_MAX_NIC 4
#define OPTION_UNSET    -1
#define OPTION_DISABLED 0
#define OPTION_ENABLED  1
#define ATL1_PARAM_INIT
static int __devinitdata int_mod_timer[ATL1_MAX_NIC+1] = ATL1_PARAM_INIT;
static unsigned int num_int_mod_timer;
module_param_array_named(int_mod_timer, int_mod_timer, int,
&num_int_mod_timer, 0);
MODULE_PARM_DESC(int_mod_timer, "Interrupt moderator timer");
#define DEFAULT_INT_MOD_CNT	100
#define MAX_INT_MOD_CNT		65000
#define MIN_INT_MOD_CNT		50
struct atl1_option ;
static int __devinit atl1_validate_option(int *value, struct atl1_option *opt,
struct pci_dev *pdev)
static void __devinit atl1_check_options(struct atl1_adapter *adapter)
static DEFINE_PCI_DEVICE_TABLE(atl1_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, atl1_pci_tbl);
static const u32 atl1_default_msg = NETIF_MSG_DRV | NETIF_MSG_PROBE |
NETIF_MSG_LINK | NETIF_MSG_TIMER | NETIF_MSG_IFDOWN | NETIF_MSG_IFUP;
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Message level (0=none,...,16=all)");
static s32 atl1_reset_hw(struct atl1_hw *hw)
static int atl1_check_eeprom_exist(struct atl1_hw *hw)
static bool atl1_read_eeprom(struct atl1_hw *hw, u32 offset, u32 *p_value)
static s32 atl1_read_phy_reg(struct atl1_hw *hw, u16 reg_addr, u16 *phy_data)
#define CUSTOM_SPI_CS_SETUP	2
#define CUSTOM_SPI_CLK_HI	2
#define CUSTOM_SPI_CLK_LO	2
#define CUSTOM_SPI_CS_HOLD	2
#define CUSTOM_SPI_CS_HI	3
static bool atl1_spi_read(struct atl1_hw *hw, u32 addr, u32 *buf)
static int atl1_get_permanent_address(struct atl1_hw *hw)
static s32 atl1_read_mac_addr(struct atl1_hw *hw)
static u32 atl1_hash_mc_addr(struct atl1_hw *hw, u8 *mc_addr)
static void atl1_hash_set(struct atl1_hw *hw, u32 hash_value)
static s32 atl1_write_phy_reg(struct atl1_hw *hw, u32 reg_addr, u16 phy_data)
static s32 atl1_phy_leave_power_saving(struct atl1_hw *hw)
static s32 atl1_phy_reset(struct atl1_hw *hw)
static s32 atl1_phy_setup_autoneg_adv(struct atl1_hw *hw)
static s32 atl1_setup_link(struct atl1_hw *hw)
static void atl1_init_flash_opcode(struct atl1_hw *hw)
static s32 atl1_init_hw(struct atl1_hw *hw)
static s32 atl1_get_speed_and_duplex(struct atl1_hw *hw, u16 *speed, u16 *duplex)
static void atl1_set_mac_addr(struct atl1_hw *hw)
static int __devinit atl1_sw_init(struct atl1_adapter *adapter)
static int mdio_read(struct net_device *netdev, int phy_id, int reg_num)
static void mdio_write(struct net_device *netdev, int phy_id, int reg_num,
int val)
static int atl1_mii_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static s32 atl1_setup_ring_resources(struct atl1_adapter *adapter)
static void atl1_init_ring_ptrs(struct atl1_adapter *adapter)
static void atl1_clean_rx_ring(struct atl1_adapter *adapter)
static void atl1_clean_tx_ring(struct atl1_adapter *adapter)
static void atl1_free_ring_resources(struct atl1_adapter *adapter)
static void atl1_setup_mac_ctrl(struct atl1_adapter *adapter)
static u32 atl1_check_link(struct atl1_adapter *adapter)
static void set_flow_ctrl_old(struct atl1_adapter *adapter)
static void set_flow_ctrl_new(struct atl1_hw *hw)
static u32 atl1_configure(struct atl1_adapter *adapter)
static void atl1_pcie_patch(struct atl1_adapter *adapter)
static void atl1_via_workaround(struct atl1_adapter *adapter)
static void atl1_inc_smb(struct atl1_adapter *adapter)
static void atl1_update_mailbox(struct atl1_adapter *adapter)
static void atl1_clean_alloc_flag(struct atl1_adapter *adapter,
struct rx_return_desc *rrd, u16 offset)
static void atl1_update_rfd_index(struct atl1_adapter *adapter,
struct rx_return_desc *rrd)
static void atl1_rx_checksum(struct atl1_adapter *adapter,
struct rx_return_desc *rrd, struct sk_buff *skb)
static u16 atl1_alloc_rx_buffers(struct atl1_adapter *adapter)
static void atl1_intr_rx(struct atl1_adapter *adapter)
static void atl1_intr_tx(struct atl1_adapter *adapter)
static u16 atl1_tpd_avail(struct atl1_tpd_ring *tpd_ring)
static int atl1_tso(struct atl1_adapter *adapter, struct sk_buff *skb,
struct tx_packet_desc *ptpd)
static int atl1_tx_csum(struct atl1_adapter *adapter, struct sk_buff *skb,
struct tx_packet_desc *ptpd)
static void atl1_tx_map(struct atl1_adapter *adapter, struct sk_buff *skb,
struct tx_packet_desc *ptpd)
static void atl1_tx_queue(struct atl1_adapter *adapter, u16 count,
struct tx_packet_desc *ptpd)
static netdev_tx_t atl1_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static irqreturn_t atl1_intr(int irq, void *data)
static void atl1_phy_config(unsigned long data)
static int atl1_reset(struct atl1_adapter *adapter)
static s32 atl1_up(struct atl1_adapter *adapter)
static void atl1_down(struct atl1_adapter *adapter)
static void atl1_tx_timeout_task(struct work_struct *work)
static int atl1_change_mtu(struct net_device *netdev, int new_mtu)
static int atl1_open(struct net_device *netdev)
static int atl1_close(struct net_device *netdev)
static int atl1_suspend(struct device *dev)
static int atl1_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(atl1_pm_ops, atl1_suspend, atl1_resume);
#define ATL1_PM_OPS	(&atl1_pm_ops)
static int atl1_suspend(struct device *dev)
#define ATL1_PM_OPS	NULL
static void atl1_shutdown(struct pci_dev *pdev)
static void atl1_poll_controller(struct net_device *netdev)
static const struct net_device_ops atl1_netdev_ops = ;
static int __devinit atl1_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit atl1_remove(struct pci_dev *pdev)
static struct pci_driver atl1_driver = ;
static void __exit atl1_exit_module(void)
static int __init atl1_init_module(void)
module_init(atl1_init_module);
module_exit(atl1_exit_module);
struct atl1_stats ;
#define ATL1_STAT(m) \
sizeof(((struct atl1_adapter *)0)->m), offsetof(struct atl1_adapter, m)
static struct atl1_stats atl1_gstrings_stats[] = ;
static void atl1_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static int atl1_get_sset_count(struct net_device *netdev, int sset)
static int atl1_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int atl1_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static void atl1_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void atl1_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int atl1_set_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static u32 atl1_get_msglevel(struct net_device *netdev)
static void atl1_set_msglevel(struct net_device *netdev, u32 value)
static int atl1_get_regs_len(struct net_device *netdev)
static void atl1_get_regs(struct net_device *netdev, struct ethtool_regs *regs,
void *p)
static void atl1_get_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static int atl1_set_ringparam(struct net_device *netdev,
struct ethtool_ringparam *ring)
static void atl1_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *epause)
static int atl1_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *epause)
static void atl1_get_strings(struct net_device *netdev, u32 stringset,
u8 *data)
static int atl1_nway_reset(struct net_device *netdev)
static const struct ethtool_ops atl1_ethtool_ops = ;
