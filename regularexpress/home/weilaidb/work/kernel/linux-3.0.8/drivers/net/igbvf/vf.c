static s32 e1000_check_for_link_vf(struct e1000_hw *hw);
static s32 e1000_get_link_up_info_vf(struct e1000_hw *hw, u16 *speed,
u16 *duplex);
static s32 e1000_init_hw_vf(struct e1000_hw *hw);
static s32 e1000_reset_hw_vf(struct e1000_hw *hw);
static void e1000_update_mc_addr_list_vf(struct e1000_hw *hw, u8 *,
u32, u32, u32);
static void e1000_rar_set_vf(struct e1000_hw *, u8 *, u32);
static s32 e1000_read_mac_addr_vf(struct e1000_hw *);
static s32 e1000_set_vfta_vf(struct e1000_hw *, u16, bool);
static s32 e1000_init_mac_params_vf(struct e1000_hw *hw)
void e1000_init_function_pointers_vf(struct e1000_hw *hw)
static s32 e1000_get_link_up_info_vf(struct e1000_hw *hw, u16 *speed,
u16 *duplex)
static s32 e1000_reset_hw_vf(struct e1000_hw *hw)
static s32 e1000_init_hw_vf(struct e1000_hw *hw)
static u32 e1000_hash_mc_addr_vf(struct e1000_hw *hw, u8 *mc_addr)
static void e1000_update_mc_addr_list_vf(struct e1000_hw *hw,
u8 *mc_addr_list, u32 mc_addr_count,
u32 rar_used_count, u32 rar_count)
static s32 e1000_set_vfta_vf(struct e1000_hw *hw, u16 vid, bool set)
void e1000_rlpml_set_vf(struct e1000_hw *hw, u16 max_size)
static void e1000_rar_set_vf(struct e1000_hw *hw, u8 * addr, u32 index)
static s32 e1000_read_mac_addr_vf(struct e1000_hw *hw)
static s32 e1000_check_for_link_vf(struct e1000_hw *hw)
