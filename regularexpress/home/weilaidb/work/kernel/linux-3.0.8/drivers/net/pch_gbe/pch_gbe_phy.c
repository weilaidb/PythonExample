#define PHY_MAX_REG_ADDRESS   0x1F
#define PHY_CONTROL           0x00
#define PHY_STATUS            0x01
#define PHY_ID1               0x02
#define PHY_ID2               0x03
#define PHY_AUTONEG_ADV       0x04
#define PHY_LP_ABILITY        0x05
#define PHY_AUTONEG_EXP       0x06
#define PHY_NEXT_PAGE_TX      0x07
#define PHY_LP_NEXT_PAGE      0x08
#define PHY_1000T_CTRL        0x09
#define PHY_1000T_STATUS      0x0A
#define PHY_EXT_STATUS        0x0F
#define PHY_PHYSP_CONTROL     0x10
#define PHY_EXT_PHYSP_CONTROL 0x14
#define PHY_LED_CONTROL       0x18
#define PHY_EXT_PHYSP_STATUS  0x1B
#define MII_CR_SPEED_SELECT_MSB 0x0040
#define MII_CR_COLL_TEST_ENABLE 0x0080
#define MII_CR_FULL_DUPLEX      0x0100
#define MII_CR_RESTART_AUTO_NEG 0x0200
#define MII_CR_ISOLATE          0x0400
#define MII_CR_POWER_DOWN       0x0800
#define MII_CR_AUTO_NEG_EN      0x1000
#define MII_CR_SPEED_SELECT_LSB 0x2000
#define MII_CR_LOOPBACK         0x4000
#define MII_CR_RESET            0x8000
#define MII_CR_SPEED_1000       0x0040
#define MII_CR_SPEED_100        0x2000
#define MII_CR_SPEED_10         0x0000
#define MII_SR_EXTENDED_CAPS     0x0001
#define MII_SR_JABBER_DETECT     0x0002
#define MII_SR_LINK_STATUS       0x0004
#define MII_SR_AUTONEG_CAPS      0x0008
#define MII_SR_REMOTE_FAULT      0x0010
#define MII_SR_AUTONEG_COMPLETE  0x0020
#define MII_SR_PREAMBLE_SUPPRESS 0x0040
#define MII_SR_EXTENDED_STATUS   0x0100
#define MII_SR_100T2_HD_CAPS     0x0200
#define MII_SR_100T2_FD_CAPS     0x0400
#define MII_SR_10T_HD_CAPS       0x0800
#define MII_SR_10T_FD_CAPS       0x1000
#define MII_SR_100X_HD_CAPS      0x2000
#define MII_SR_100X_FD_CAPS      0x4000
#define MII_SR_100T4_CAPS        0x8000
#define PHY_REVISION_MASK        0x000F
#define PHYSP_CTRL_ASSERT_CRS_TX  0x0800
#define PHY_CONTROL_DEFAULT         0x1140
#define PHY_AUTONEG_ADV_DEFAULT     0x01e0
#define PHY_NEXT_PAGE_TX_DEFAULT    0x2001
#define PHY_1000T_CTRL_DEFAULT      0x0300
#define PHY_PHYSP_CONTROL_DEFAULT   0x01EE
s32 pch_gbe_phy_get_id(struct pch_gbe_hw *hw)
s32 pch_gbe_phy_read_reg_miic(struct pch_gbe_hw *hw, u32 offset, u16 *data)
s32 pch_gbe_phy_write_reg_miic(struct pch_gbe_hw *hw, u32 offset, u16 data)
void pch_gbe_phy_sw_reset(struct pch_gbe_hw *hw)
void pch_gbe_phy_hw_reset(struct pch_gbe_hw *hw)
void pch_gbe_phy_power_up(struct pch_gbe_hw *hw)
void pch_gbe_phy_power_down(struct pch_gbe_hw *hw)
inline void pch_gbe_phy_set_rgmii(struct pch_gbe_hw *hw)
void pch_gbe_phy_init_setting(struct pch_gbe_hw *hw)
