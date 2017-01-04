#define ATLX_C
static s32 atlx_read_phy_reg(struct atl1_hw *hw, u16 reg_addr, u16 *phy_data);
static u32 atlx_hash_mc_addr(struct atl1_hw *hw, u8 *mc_addr);
static void atlx_set_mac_addr(struct atl1_hw *hw);
static struct atlx_spi_flash_dev flash_table[] = ;
static int atlx_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int atlx_set_mac(struct net_device *netdev, void *p)
static void atlx_check_for_link(struct atlx_adapter *adapter)
static void atlx_set_multi(struct net_device *netdev)
static void atlx_irq_enable(struct atlx_adapter *adapter)
static void atlx_irq_disable(struct atlx_adapter *adapter)
static void atlx_clear_phy_int(struct atlx_adapter *adapter)
static void atlx_tx_timeout(struct net_device *netdev)
static void atlx_link_chg_task(struct work_struct *work)
static void atlx_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp)
static void atlx_restore_vlan(struct atlx_adapter *adapter)
