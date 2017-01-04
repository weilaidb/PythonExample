static s32 e1000_get_phy_cfg_done(struct e1000_hw *hw);
static s32 e1000_phy_force_speed_duplex(struct e1000_hw *hw);
static s32 e1000_set_d0_lplu_state(struct e1000_hw *hw, bool active);
static s32 e1000_wait_autoneg(struct e1000_hw *hw);
static u32 e1000_get_phy_addr_for_bm_page(u32 page, u32 reg);
static s32 e1000_access_phy_wakeup_reg_bm(struct e1000_hw *hw, u32 offset,
u16 *data, bool read);
static u32 e1000_get_phy_addr_for_hv_page(u32 page);
static s32 e1000_access_phy_debug_regs_hv(struct e1000_hw *hw, u32 offset,
u16 *data, bool read);
static const u16 e1000_m88_cable_length_table[] = ;
#define M88E1000_CABLE_LENGTH_TABLE_SIZE \
ARRAY_SIZE(e1000_m88_cable_length_table)
static const u16 e1000_igp_2_cable_length_table[] = ;
#define IGP02E1000_CABLE_LENGTH_TABLE_SIZE \
ARRAY_SIZE(e1000_igp_2_cable_length_table)
#define BM_PHY_REG_PAGE(offset) \
((u16)(((offset) >> PHY_PAGE_SHIFT) & 0xFFFF))
#define BM_PHY_REG_NUM(offset) \
((u16)(((offset) & MAX_PHY_REG_ADDRESS) |\
(((offset) >> (PHY_UPPER_SHIFT - PHY_PAGE_SHIFT)) &\
~MAX_PHY_REG_ADDRESS)))
#define HV_INTC_FC_PAGE_START             768
#define I82578_ADDR_REG                   29
#define I82577_ADDR_REG                   16
#define I82577_CFG_REG                    22
#define I82577_CFG_ASSERT_CRS_ON_TX       (1 << 15)
#define I82577_CFG_ENABLE_DOWNSHIFT       (3 << 10)
#define I82577_CTRL_REG                   23
#define I82577_PHY_CTRL_2            18
#define I82577_PHY_STATUS_2          26
#define I82577_PHY_DIAG_STATUS       31
#define I82577_PHY_STATUS2_REV_POLARITY   0x0400
#define I82577_PHY_STATUS2_MDIX           0x0800
#define I82577_PHY_STATUS2_SPEED_MASK     0x0300
#define I82577_PHY_STATUS2_SPEED_1000MBPS 0x0200
#define I82577_PHY_CTRL2_AUTO_MDIX        0x0400
#define I82577_PHY_CTRL2_FORCE_MDI_MDIX   0x0200
#define I82577_DSTATUS_CABLE_LENGTH       0x03FC
#define I82577_DSTATUS_CABLE_LENGTH_SHIFT 2
#define BM_CS_CTRL1                       16
#define HV_MUX_DATA_CTRL               PHY_REG(776, 16)
#define HV_MUX_DATA_CTRL_GEN_TO_MAC    0x0400
#define HV_MUX_DATA_CTRL_FORCE_SPEED   0x0004
s32 e1000e_check_reset_block_generic(struct e1000_hw *hw)
s32 e1000e_get_phy_id(struct e1000_hw *hw)
s32 e1000e_phy_reset_dsp(struct e1000_hw *hw)
s32 e1000e_read_phy_reg_mdic(struct e1000_hw *hw, u32 offset, u16 *data)
s32 e1000e_write_phy_reg_mdic(struct e1000_hw *hw, u32 offset, u16 data)
s32 e1000e_read_phy_reg_m88(struct e1000_hw *hw, u32 offset, u16 *data)
s32 e1000e_write_phy_reg_m88(struct e1000_hw *hw, u32 offset, u16 data)
static s32 __e1000e_read_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 *data,
bool locked)
s32 e1000e_read_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 *data)
s32 e1000e_read_phy_reg_igp_locked(struct e1000_hw *hw, u32 offset, u16 *data)
static s32 __e1000e_write_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 data,
bool locked)
s32 e1000e_write_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 data)
s32 e1000e_write_phy_reg_igp_locked(struct e1000_hw *hw, u32 offset, u16 data)
static s32 __e1000_read_kmrn_reg(struct e1000_hw *hw, u32 offset, u16 *data,
bool locked)
s32 e1000e_read_kmrn_reg(struct e1000_hw *hw, u32 offset, u16 *data)
s32 e1000e_read_kmrn_reg_locked(struct e1000_hw *hw, u32 offset, u16 *data)
static s32 __e1000_write_kmrn_reg(struct e1000_hw *hw, u32 offset, u16 data,
bool locked)
s32 e1000e_write_kmrn_reg(struct e1000_hw *hw, u32 offset, u16 data)
s32 e1000e_write_kmrn_reg_locked(struct e1000_hw *hw, u32 offset, u16 data)
s32 e1000_copper_link_setup_82577(struct e1000_hw *hw)
s32 e1000e_copper_link_setup_m88(struct e1000_hw *hw)
s32 e1000e_copper_link_setup_igp(struct e1000_hw *hw)
static s32 e1000_phy_setup_autoneg(struct e1000_hw *hw)
static s32 e1000_copper_link_autoneg(struct e1000_hw *hw)
s32 e1000e_setup_copper_link(struct e1000_hw *hw)
s32 e1000e_phy_force_speed_duplex_igp(struct e1000_hw *hw)
s32 e1000e_phy_force_speed_duplex_m88(struct e1000_hw *hw)
s32 e1000_phy_force_speed_duplex_ife(struct e1000_hw *hw)
void e1000e_phy_force_speed_duplex_setup(struct e1000_hw *hw, u16 *phy_ctrl)
s32 e1000e_set_d3_lplu_state(struct e1000_hw *hw, bool active)
s32 e1000e_check_downshift(struct e1000_hw *hw)
s32 e1000_check_polarity_m88(struct e1000_hw *hw)
s32 e1000_check_polarity_igp(struct e1000_hw *hw)
s32 e1000_check_polarity_ife(struct e1000_hw *hw)
static s32 e1000_wait_autoneg(struct e1000_hw *hw)
s32 e1000e_phy_has_link_generic(struct e1000_hw *hw, u32 iterations,
u32 usec_interval, bool *success)
s32 e1000e_get_cable_length_m88(struct e1000_hw *hw)
s32 e1000e_get_cable_length_igp_2(struct e1000_hw *hw)
s32 e1000e_get_phy_info_m88(struct e1000_hw *hw)
s32 e1000e_get_phy_info_igp(struct e1000_hw *hw)
s32 e1000_get_phy_info_ife(struct e1000_hw *hw)
s32 e1000e_phy_sw_reset(struct e1000_hw *hw)
s32 e1000e_phy_hw_reset_generic(struct e1000_hw *hw)
s32 e1000e_get_cfg_done(struct e1000_hw *hw)
s32 e1000e_phy_init_script_igp3(struct e1000_hw *hw)
static s32 e1000_get_phy_cfg_done(struct e1000_hw *hw)
static s32 e1000_phy_force_speed_duplex(struct e1000_hw *hw)
enum e1000_phy_type e1000e_get_phy_type_from_id(u32 phy_id)
s32 e1000e_determine_phy_address(struct e1000_hw *hw)
static u32 e1000_get_phy_addr_for_bm_page(u32 page, u32 reg)
s32 e1000e_write_phy_reg_bm(struct e1000_hw *hw, u32 offset, u16 data)
s32 e1000e_read_phy_reg_bm(struct e1000_hw *hw, u32 offset, u16 *data)
s32 e1000e_read_phy_reg_bm2(struct e1000_hw *hw, u32 offset, u16 *data)
s32 e1000e_write_phy_reg_bm2(struct e1000_hw *hw, u32 offset, u16 data)
static s32 e1000_access_phy_wakeup_reg_bm(struct e1000_hw *hw, u32 offset,
u16 *data, bool read)
void e1000_power_up_phy_copper(struct e1000_hw *hw)
void e1000_power_down_phy_copper(struct e1000_hw *hw)
s32 e1000e_commit_phy(struct e1000_hw *hw)
static s32 e1000_set_d0_lplu_state(struct e1000_hw *hw, bool active)
static s32 __e1000_read_phy_reg_hv(struct e1000_hw *hw, u32 offset, u16 *data,
bool locked)
s32 e1000_read_phy_reg_hv(struct e1000_hw *hw, u32 offset, u16 *data)
s32 e1000_read_phy_reg_hv_locked(struct e1000_hw *hw, u32 offset, u16 *data)
static s32 __e1000_write_phy_reg_hv(struct e1000_hw *hw, u32 offset, u16 data,
bool locked)
s32 e1000_write_phy_reg_hv(struct e1000_hw *hw, u32 offset, u16 data)
s32 e1000_write_phy_reg_hv_locked(struct e1000_hw *hw, u32 offset, u16 data)
static u32 e1000_get_phy_addr_for_hv_page(u32 page)
static s32 e1000_access_phy_debug_regs_hv(struct e1000_hw *hw, u32 offset,
u16 *data, bool read)
s32 e1000_link_stall_workaround_hv(struct e1000_hw *hw)
s32 e1000_check_polarity_82577(struct e1000_hw *hw)
s32 e1000_phy_force_speed_duplex_82577(struct e1000_hw *hw)
s32 e1000_get_phy_info_82577(struct e1000_hw *hw)
s32 e1000_get_cable_length_82577(struct e1000_hw *hw)
