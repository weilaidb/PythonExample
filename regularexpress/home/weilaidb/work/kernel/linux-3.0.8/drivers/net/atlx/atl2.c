#define ATL2_DRV_VERSION "2.2.3"
static const char atl2_driver_name[] = "atl2";
static const char atl2_driver_string[] = "Atheros(R) L2 Ethernet Driver";
static const char atl2_copyright[] = "Copyright (c) 2007 Atheros Corporation.";
static const char atl2_driver_version[] = ATL2_DRV_VERSION;
MODULE_AUTHOR("Atheros Corporation <xiong.huang@atheros.com>, Chris Snook <csnook@redhat.com>");
MODULE_DESCRIPTION("Atheros Fast Ethernet Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(ATL2_DRV_VERSION);
static DEFINE_PCI_DEVICE_TABLE(atl2_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, atl2_pci_tbl);
static void atl2_set_ethtool_ops(struct net_device *netdev);
static void atl2_check_options(struct atl2_adapter *adapter);
static int __devinit atl2_sw_init(struct atl2_adapter *adapter)
static void atl2_set_multi(struct net_device *netdev)
static void init_ring_ptrs(struct atl2_adapter *adapter)
static int atl2_configure(struct atl2_adapter *adapter)
static s32 atl2_setup_ring_resources(struct atl2_adapter *adapter)
static inline void atl2_irq_enable(struct atl2_adapter *adapter)
static inline void atl2_irq_disable(struct atl2_adapter *adapter)
static void atl2_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp)
static void atl2_restore_vlan(struct atl2_adapter *adapter)
static void atl2_intr_rx(struct atl2_adapter *adapter)
static void atl2_intr_tx(struct atl2_adapter *adapter)
static void atl2_check_for_link(struct atl2_adapter *adapter)
static inline void atl2_clear_phy_int(struct atl2_adapter *adapter)
static irqreturn_t atl2_intr(int irq, void *data)
static int atl2_request_irq(struct atl2_adapter *adapter)
static void atl2_free_ring_resources(struct atl2_adapter *adapter)
static int atl2_open(struct net_device *netdev)
static void atl2_down(struct atl2_adapter *adapter)
static void atl2_free_irq(struct atl2_adapter *adapter)
static int atl2_close(struct net_device *netdev)
static inline int TxsFreeUnit(struct atl2_adapter *adapter)
static inline int TxdFreeBytes(struct atl2_adapter *adapter)
static netdev_tx_t atl2_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static int atl2_change_mtu(struct net_device *netdev, int new_mtu)
static int atl2_set_mac(struct net_device *netdev, void *p)
static int atl2_mii_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int atl2_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static void atl2_tx_timeout(struct net_device *netdev)
static void atl2_watchdog(unsigned long data)
static void atl2_phy_config(unsigned long data)
static int atl2_up(struct atl2_adapter *adapter)
static void atl2_reinit_locked(struct atl2_adapter *adapter)
static void atl2_reset_task(struct work_struct *work)
static void atl2_setup_mac_ctrl(struct atl2_adapter *adapter)
static int atl2_check_link(struct atl2_adapter *adapter)
static void atl2_link_chg_task(struct work_struct *work)
static void atl2_setup_pcicmd(struct pci_dev *pdev)
static void atl2_poll_controller(struct net_device *netdev)
static const struct net_device_ops atl2_netdev_ops = ;
static int __devinit atl2_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
{
struct net_device *netdev;
struct atl2_adapter *adapter;
static int cards_found;
unsigned long mmio_start;
int mmio_len;
int err;
cards_found = 0;
err = pci_enable_device(pdev);
if (err)
return err;
if (pci_set_dma_mask(pdev, DMA_BIT_MASK(32)) &&
pci_set_consistent_dma_mask(pdev, DMA_BIT_MASK(32)))
err = pci_request_regions(pdev, atl2_driver_name);
if (err)
goto err_pci_reg;
pci_set_master(pdev);
err = -ENOMEM;
netdev = alloc_etherdev(sizeof(struct atl2_adapter));
if (!netdev)
goto err_alloc_etherdev;
SET_NETDEV_DEV(netdev, &pdev->dev);
pci_set_drvdata(pdev, netdev);
adapter = netdev_priv(netdev);
adapter->netdev = netdev;
adapter->pdev = pdev;
adapter->hw.back = adapter;
mmio_start = pci_resource_start(pdev, 0x0);
mmio_len = pci_resource_len(pdev, 0x0);
adapter->hw.mem_rang = (u32)mmio_len;
adapter->hw.hw_addr = ioremap(mmio_start, mmio_len);
if (!adapter->hw.hw_addr)
atl2_setup_pcicmd(pdev);
netdev->netdev_ops = &atl2_netdev_ops;
atl2_set_ethtool_ops(netdev);
netdev->watchdog_timeo = 5 * HZ;
strncpy(netdev->name, pci_name(pdev), sizeof(netdev->name) - 1);
netdev->mem_start = mmio_start;
netdev->mem_end = mmio_start + mmio_len;
adapter->bd_number = cards_found;
adapter->pci_using_64 = false;
err = atl2_sw_init(adapter);
if (err)
goto err_sw_init;
err = -EIO;
netdev->hw_features = NETIF_F_SG;
netdev->features |= (NETIF_F_HW_VLAN_TX | NETIF_F_HW_VLAN_RX);
atl2_phy_init(&adapter->hw);
if (atl2_reset_hw(&adapter->hw))
atl2_read_mac_addr(&adapter->hw);
memcpy(netdev->dev_addr, adapter->hw.mac_addr, netdev->addr_len);
memcpy(netdev->perm_addr, adapter->hw.mac_addr, netdev->addr_len);
if (!is_valid_ether_addr(netdev->perm_addr))
static void __devexit atl2_remove(struct pci_dev *pdev)
static int atl2_suspend(struct pci_dev *pdev, pm_message_t state)
static int atl2_resume(struct pci_dev *pdev)
static void atl2_shutdown(struct pci_dev *pdev)
static struct pci_driver atl2_driver = ;
static int __init atl2_init_module(void)
module_init(atl2_init_module);
static void __exit atl2_exit_module(void)
module_exit(atl2_exit_module);
static void atl2_read_pci_cfg(struct atl2_hw *hw, u32 reg, u16 *value)
static void atl2_write_pci_cfg(struct atl2_hw *hw, u32 reg, u16 *value)
static int atl2_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int atl2_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static u32 atl2_get_msglevel(struct net_device *netdev)
static void atl2_set_msglevel(struct net_device *netdev, u32 data)
static int atl2_get_regs_len(struct net_device *netdev)
static void atl2_get_regs(struct net_device *netdev,
struct ethtool_regs *regs, void *p)
static int atl2_get_eeprom_len(struct net_device *netdev)
static int atl2_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static int atl2_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *bytes)
static void atl2_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void atl2_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int atl2_set_wol(struct net_device *netdev, struct ethtool_wolinfo *wol)
static int atl2_nway_reset(struct net_device *netdev)
static const struct ethtool_ops atl2_ethtool_ops = ;
static void atl2_set_ethtool_ops(struct net_device *netdev)
#define LBYTESWAP(a)  ((((a) & 0x00ff00ff) << 8) | \
(((a) & 0xff00ff00) >> 8))
#define LONGSWAP(a)   ((LBYTESWAP(a) << 16) | (LBYTESWAP(a) >> 16))
#define SHORTSWAP(a)  (((a) << 8) | ((a) >> 8))
static s32 atl2_reset_hw(struct atl2_hw *hw)
#define CUSTOM_SPI_CS_SETUP        2
#define CUSTOM_SPI_CLK_HI          2
#define CUSTOM_SPI_CLK_LO          2
#define CUSTOM_SPI_CS_HOLD         2
#define CUSTOM_SPI_CS_HI           3
static struct atl2_spi_flash_dev flash_table[] =
;
static bool atl2_spi_read(struct atl2_hw *hw, u32 addr, u32 *buf)
static int get_permanent_address(struct atl2_hw *hw)
static s32 atl2_read_mac_addr(struct atl2_hw *hw)
static u32 atl2_hash_mc_addr(struct atl2_hw *hw, u8 *mc_addr)
static void atl2_hash_set(struct atl2_hw *hw, u32 hash_value)
static void atl2_init_pcie(struct atl2_hw *hw)
static void atl2_init_flash_opcode(struct atl2_hw *hw)
static s32 atl2_init_hw(struct atl2_hw *hw)
static s32 atl2_get_speed_and_duplex(struct atl2_hw *hw, u16 *speed,
u16 *duplex)
static s32 atl2_read_phy_reg(struct atl2_hw *hw, u16 reg_addr, u16 *phy_data)
static s32 atl2_write_phy_reg(struct atl2_hw *hw, u32 reg_addr, u16 phy_data)
static s32 atl2_phy_setup_autoneg_adv(struct atl2_hw *hw)
static s32 atl2_phy_commit(struct atl2_hw *hw)
static s32 atl2_phy_init(struct atl2_hw *hw)
static void atl2_set_mac_addr(struct atl2_hw *hw)
static int atl2_check_eeprom_exist(struct atl2_hw *hw)
static bool atl2_write_eeprom(struct atl2_hw *hw, u32 offset, u32 value)
static bool atl2_read_eeprom(struct atl2_hw *hw, u32 Offset, u32 *pValue)
static void atl2_force_ps(struct atl2_hw *hw)
#define ATL2_MAX_NIC 4
#define OPTION_UNSET    -1
#define OPTION_DISABLED 0
#define OPTION_ENABLED  1
#define ATL2_PARAM_INIT
#define ATL2_PARAM(X, desc) \
static const int __devinitdata X[ATL2_MAX_NIC + 1] = ATL2_PARAM_INIT; \
MODULE_PARM(X, "1-" __MODULE_STRING(ATL2_MAX_NIC) "i"); \
MODULE_PARM_DESC(X, desc);
#define ATL2_PARAM(X, desc) \
static int __devinitdata X[ATL2_MAX_NIC+1] = ATL2_PARAM_INIT; \
static unsigned int num_##X; \
module_param_array_named(X, X, int, &num_##X, 0); \
MODULE_PARM_DESC(X, desc);
#define ATL2_MIN_TX_MEMSIZE		4
#define ATL2_MAX_TX_MEMSIZE		64
#define ATL2_DEFAULT_TX_MEMSIZE		8
ATL2_PARAM(TxMemSize, "Bytes of Transmit Memory");
#define ATL2_MIN_RXD_COUNT		16
#define ATL2_MAX_RXD_COUNT		512
#define ATL2_DEFAULT_RXD_COUNT		64
ATL2_PARAM(RxMemBlock, "Number of receive memory block");
ATL2_PARAM(MediaType, "MediaType Select");
#define INT_MOD_DEFAULT_CNT	100
#define INT_MOD_MAX_CNT		65000
#define INT_MOD_MIN_CNT		50
ATL2_PARAM(IntModTimer, "Interrupt Moderator Timer");
ATL2_PARAM(FlashVendor, "SPI Flash Vendor");
#define AUTONEG_ADV_DEFAULT	0x2F
#define AUTONEG_ADV_MASK	0x2F
#define FLOW_CONTROL_DEFAULT	FLOW_CONTROL_FULL
#define FLASH_VENDOR_DEFAULT	0
#define FLASH_VENDOR_MIN	0
#define FLASH_VENDOR_MAX	2
struct atl2_option ;
static int __devinit atl2_validate_option(int *value, struct atl2_option *opt)
static void __devinit atl2_check_options(struct atl2_adapter *adapter)
