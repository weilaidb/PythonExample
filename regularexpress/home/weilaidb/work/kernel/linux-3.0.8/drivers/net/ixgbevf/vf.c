static s32 ixgbevf_start_hw_vf(struct ixgbe_hw *hw)
static s32 ixgbevf_init_hw_vf(struct ixgbe_hw *hw)
static s32 ixgbevf_reset_hw_vf(struct ixgbe_hw *hw)
static s32 ixgbevf_stop_hw_vf(struct ixgbe_hw *hw)
static s32 ixgbevf_mta_vector(struct ixgbe_hw *hw, u8 *mc_addr)
static s32 ixgbevf_get_mac_addr_vf(struct ixgbe_hw *hw, u8 *mac_addr)
static s32 ixgbevf_set_uc_addr_vf(struct ixgbe_hw *hw, u32 index, u8 *addr)
static s32 ixgbevf_set_rar_vf(struct ixgbe_hw *hw, u32 index, u8 *addr,
u32 vmdq)
static s32 ixgbevf_update_mc_addr_list_vf(struct ixgbe_hw *hw,
struct net_device *netdev)
static s32 ixgbevf_set_vfta_vf(struct ixgbe_hw *hw, u32 vlan, u32 vind,
bool vlan_on)
static s32 ixgbevf_setup_mac_link_vf(struct ixgbe_hw *hw,
ixgbe_link_speed speed, bool autoneg,
bool autoneg_wait_to_complete)
static s32 ixgbevf_check_mac_link_vf(struct ixgbe_hw *hw,
ixgbe_link_speed *speed,
bool *link_up,
bool autoneg_wait_to_complete)
static struct ixgbe_mac_operations ixgbevf_mac_ops = ;
struct ixgbevf_info ixgbevf_82599_vf_info = ;
struct ixgbevf_info ixgbevf_X540_vf_info = ;
