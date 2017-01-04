#define IXGBE_82598_MAX_TX_QUEUES 32
#define IXGBE_82598_MAX_RX_QUEUES 64
#define IXGBE_82598_RAR_ENTRIES   16
#define IXGBE_82598_MC_TBL_SIZE  128
#define IXGBE_82598_VFT_TBL_SIZE 128
#define IXGBE_82598_RX_PB_SIZE	 512
static s32 ixgbe_setup_copper_link_82598(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete);
static s32 ixgbe_read_i2c_eeprom_82598(struct ixgbe_hw *hw, u8 byte_offset,
u8 *eeprom_data);
static void ixgbe_set_pcie_completion_timeout(struct ixgbe_hw *hw)
static u16 ixgbe_get_pcie_msix_count_82598(struct ixgbe_hw *hw)
static s32 ixgbe_get_invariants_82598(struct ixgbe_hw *hw)
static s32 ixgbe_init_phy_ops_82598(struct ixgbe_hw *hw)
static s32 ixgbe_start_hw_82598(struct ixgbe_hw *hw)
static s32 ixgbe_get_link_capabilities_82598(struct ixgbe_hw *hw,
ixgbe_link_speed *speed,
bool *autoneg)
static enum ixgbe_media_type ixgbe_get_media_type_82598(struct ixgbe_hw *hw)
static s32 ixgbe_fc_enable_82598(struct ixgbe_hw *hw, s32 packetbuf_num)
static s32 ixgbe_start_mac_link_82598(struct ixgbe_hw *hw,
bool autoneg_wait_to_complete)
static s32 ixgbe_validate_link_ready(struct ixgbe_hw *hw)
static s32 ixgbe_check_mac_link_82598(struct ixgbe_hw *hw,
ixgbe_link_speed *speed, bool *link_up,
bool link_up_wait_to_complete)
static s32 ixgbe_setup_mac_link_82598(struct ixgbe_hw *hw,
ixgbe_link_speed speed, bool autoneg,
bool autoneg_wait_to_complete)
static s32 ixgbe_setup_copper_link_82598(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete)
static s32 ixgbe_reset_hw_82598(struct ixgbe_hw *hw)
static s32 ixgbe_set_vmdq_82598(struct ixgbe_hw *hw, u32 rar, u32 vmdq)
static s32 ixgbe_clear_vmdq_82598(struct ixgbe_hw *hw, u32 rar, u32 vmdq)
static s32 ixgbe_set_vfta_82598(struct ixgbe_hw *hw, u32 vlan, u32 vind,
bool vlan_on)
static s32 ixgbe_clear_vfta_82598(struct ixgbe_hw *hw)
static s32 ixgbe_read_analog_reg8_82598(struct ixgbe_hw *hw, u32 reg, u8 *val)
static s32 ixgbe_write_analog_reg8_82598(struct ixgbe_hw *hw, u32 reg, u8 val)
static s32 ixgbe_read_i2c_eeprom_82598(struct ixgbe_hw *hw, u8 byte_offset,
u8 *eeprom_data)
static u32 ixgbe_get_supported_physical_layer_82598(struct ixgbe_hw *hw)
static void ixgbe_set_lan_id_multi_port_pcie_82598(struct ixgbe_hw *hw)
static struct ixgbe_mac_operations mac_ops_82598 = ;
static struct ixgbe_eeprom_operations eeprom_ops_82598 = ;
static struct ixgbe_phy_operations phy_ops_82598 = ;
struct ixgbe_info ixgbe_82598_info = ;
