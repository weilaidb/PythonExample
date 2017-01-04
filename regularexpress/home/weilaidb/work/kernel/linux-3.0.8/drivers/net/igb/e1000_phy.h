#define _E1000_PHY_H_
enum e1000_ms_type ;
enum e1000_smart_speed ;
s32  igb_check_downshift(struct e1000_hw *hw);
s32  igb_check_reset_block(struct e1000_hw *hw);
s32  igb_copper_link_setup_igp(struct e1000_hw *hw);
s32  igb_copper_link_setup_m88(struct e1000_hw *hw);
s32  igb_copper_link_setup_m88_gen2(struct e1000_hw *hw);
s32  igb_phy_force_speed_duplex_igp(struct e1000_hw *hw);
s32  igb_phy_force_speed_duplex_m88(struct e1000_hw *hw);
s32  igb_get_cable_length_m88(struct e1000_hw *hw);
s32  igb_get_cable_length_m88_gen2(struct e1000_hw *hw);
s32  igb_get_cable_length_igp_2(struct e1000_hw *hw);
s32  igb_get_phy_id(struct e1000_hw *hw);
s32  igb_get_phy_info_igp(struct e1000_hw *hw);
s32  igb_get_phy_info_m88(struct e1000_hw *hw);
s32  igb_phy_sw_reset(struct e1000_hw *hw);
s32  igb_phy_hw_reset(struct e1000_hw *hw);
s32  igb_read_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 *data);
s32  igb_set_d3_lplu_state(struct e1000_hw *hw, bool active);
s32  igb_setup_copper_link(struct e1000_hw *hw);
s32  igb_write_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 data);
s32  igb_phy_has_link(struct e1000_hw *hw, u32 iterations,
u32 usec_interval, bool *success);
void igb_power_up_phy_copper(struct e1000_hw *hw);
void igb_power_down_phy_copper(struct e1000_hw *hw);
s32  igb_phy_init_script_igp3(struct e1000_hw *hw);
s32  igb_read_phy_reg_mdic(struct e1000_hw *hw, u32 offset, u16 *data);
s32  igb_write_phy_reg_mdic(struct e1000_hw *hw, u32 offset, u16 data);
s32  igb_read_phy_reg_i2c(struct e1000_hw *hw, u32 offset, u16 *data);
s32  igb_write_phy_reg_i2c(struct e1000_hw *hw, u32 offset, u16 data);
s32  igb_copper_link_setup_82580(struct e1000_hw *hw);
s32  igb_get_phy_info_82580(struct e1000_hw *hw);
s32  igb_phy_force_speed_duplex_82580(struct e1000_hw *hw);
s32  igb_get_cable_length_82580(struct e1000_hw *hw);
#define IGP01E1000_PHY_PORT_CONFIG        0x10
#define IGP01E1000_PHY_PORT_STATUS        0x11
#define IGP01E1000_PHY_PORT_CTRL          0x12
#define IGP01E1000_PHY_LINK_HEALTH        0x13
#define IGP02E1000_PHY_POWER_MGMT         0x19
#define IGP01E1000_PHY_PAGE_SELECT        0x1F
#define IGP01E1000_PHY_PCS_INIT_REG       0x00B4
#define IGP01E1000_PHY_POLARITY_MASK      0x0078
#define IGP01E1000_PSCR_AUTO_MDIX         0x1000
#define IGP01E1000_PSCR_FORCE_MDI_MDIX    0x2000
#define IGP01E1000_PSCFR_SMART_SPEED      0x0080
#define I82580_ADDR_REG                   16
#define I82580_CFG_REG                    22
#define I82580_CFG_ASSERT_CRS_ON_TX       (1 << 15)
#define I82580_CFG_ENABLE_DOWNSHIFT       (3 << 10)
#define I82580_CTRL_REG                   23
#define I82580_CTRL_DOWNSHIFT_MASK        (7 << 10)
#define I82580_PHY_CTRL_2            18
#define I82580_PHY_LBK_CTRL          19
#define I82580_PHY_STATUS_2          26
#define I82580_PHY_DIAG_STATUS       31
#define I82580_PHY_STATUS2_REV_POLARITY   0x0400
#define I82580_PHY_STATUS2_MDIX           0x0800
#define I82580_PHY_STATUS2_SPEED_MASK     0x0300
#define I82580_PHY_STATUS2_SPEED_1000MBPS 0x0200
#define I82580_PHY_STATUS2_SPEED_100MBPS  0x0100
#define I82580_PHY_CTRL2_AUTO_MDIX        0x0400
#define I82580_PHY_CTRL2_FORCE_MDI_MDIX   0x0200
#define I82580_DSTATUS_CABLE_LENGTH       0x03FC
#define I82580_DSTATUS_CABLE_LENGTH_SHIFT 2
#define IGP02E1000_PM_D0_LPLU             0x0002
#define IGP02E1000_PM_D3_LPLU             0x0004
#define IGP01E1000_PLHR_SS_DOWNGRADE      0x8000
#define IGP01E1000_PSSR_POLARITY_REVERSED 0x0002
#define IGP01E1000_PSSR_MDIX              0x0800
#define IGP01E1000_PSSR_SPEED_MASK        0xC000
#define IGP01E1000_PSSR_SPEED_1000MBPS    0xC000
#define IGP02E1000_PHY_CHANNEL_NUM        4
#define IGP02E1000_PHY_AGC_A              0x11B1
#define IGP02E1000_PHY_AGC_B              0x12B1
#define IGP02E1000_PHY_AGC_C              0x14B1
#define IGP02E1000_PHY_AGC_D              0x18B1
#define IGP02E1000_AGC_LENGTH_SHIFT       9
#define IGP02E1000_AGC_LENGTH_MASK        0x7F
#define IGP02E1000_AGC_RANGE              15
#define E1000_CABLE_LENGTH_UNDEFINED      0xFF
