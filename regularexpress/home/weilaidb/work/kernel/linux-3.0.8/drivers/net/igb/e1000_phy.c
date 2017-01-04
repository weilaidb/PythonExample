static s32  igb_phy_setup_autoneg(struct e1000_hw *hw);
static void igb_phy_force_speed_duplex_setup(struct e1000_hw *hw,
u16 *phy_ctrl);
static s32  igb_wait_autoneg(struct e1000_hw *hw);
static const u16 e1000_m88_cable_length_table[] =
;
#define M88E1000_CABLE_LENGTH_TABLE_SIZE \
(sizeof(e1000_m88_cable_length_table) / \
sizeof(e1000_m88_cable_length_table[0]))
static const u16 e1000_igp_2_cable_length_table[] =
;
#define IGP02E1000_CABLE_LENGTH_TABLE_SIZE \
(sizeof(e1000_igp_2_cable_length_table) / \
sizeof(e1000_igp_2_cable_length_table[0]))
s32 igb_check_reset_block(struct e1000_hw *hw)
s32 igb_get_phy_id(struct e1000_hw *hw)
static s32 igb_phy_reset_dsp(struct e1000_hw *hw)
s32 igb_read_phy_reg_mdic(struct e1000_hw *hw, u32 offset, u16 *data)
s32 igb_write_phy_reg_mdic(struct e1000_hw *hw, u32 offset, u16 data)
s32 igb_read_phy_reg_i2c(struct e1000_hw *hw, u32 offset, u16 *data)
s32 igb_write_phy_reg_i2c(struct e1000_hw *hw, u32 offset, u16 data)
s32 igb_read_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 *data)
s32 igb_write_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 data)
s32 igb_copper_link_setup_82580(struct e1000_hw *hw)
s32 igb_copper_link_setup_m88(struct e1000_hw *hw)
s32 igb_copper_link_setup_m88_gen2(struct e1000_hw *hw)
s32 igb_copper_link_setup_igp(struct e1000_hw *hw)
static s32 igb_copper_link_autoneg(struct e1000_hw *hw)
static s32 igb_phy_setup_autoneg(struct e1000_hw *hw)
s32 igb_setup_copper_link(struct e1000_hw *hw)
s32 igb_phy_force_speed_duplex_igp(struct e1000_hw *hw)
s32 igb_phy_force_speed_duplex_m88(struct e1000_hw *hw)
static void igb_phy_force_speed_duplex_setup(struct e1000_hw *hw,
u16 *phy_ctrl)
s32 igb_set_d3_lplu_state(struct e1000_hw *hw, bool active)
s32 igb_check_downshift(struct e1000_hw *hw)
static s32 igb_check_polarity_m88(struct e1000_hw *hw)
static s32 igb_check_polarity_igp(struct e1000_hw *hw)
static s32 igb_wait_autoneg(struct e1000_hw *hw)
s32 igb_phy_has_link(struct e1000_hw *hw, u32 iterations,
u32 usec_interval, bool *success)
s32 igb_get_cable_length_m88(struct e1000_hw *hw)
s32 igb_get_cable_length_m88_gen2(struct e1000_hw *hw)
s32 igb_get_cable_length_igp_2(struct e1000_hw *hw)
s32 igb_get_phy_info_m88(struct e1000_hw *hw)
s32 igb_get_phy_info_igp(struct e1000_hw *hw)
s32 igb_phy_sw_reset(struct e1000_hw *hw)
s32 igb_phy_hw_reset(struct e1000_hw *hw)
s32 igb_phy_init_script_igp3(struct e1000_hw *hw)
void igb_power_up_phy_copper(struct e1000_hw *hw)
void igb_power_down_phy_copper(struct e1000_hw *hw)
static s32 igb_check_polarity_82580(struct e1000_hw *hw)
s32 igb_phy_force_speed_duplex_82580(struct e1000_hw *hw)
s32 igb_get_phy_info_82580(struct e1000_hw *hw)
s32 igb_get_cable_length_82580(struct e1000_hw *hw)
