#define _PCH_GBE_PHY_H_
#define PCH_GBE_PHY_REGS_LEN		32
#define	PCH_GBE_PHY_RESET_DELAY_US	10
#define PCH_GBE_MAC_IFOP_RGMII
s32 pch_gbe_phy_get_id(struct pch_gbe_hw *hw);
s32 pch_gbe_phy_read_reg_miic(struct pch_gbe_hw *hw, u32 offset, u16 *data);
s32 pch_gbe_phy_write_reg_miic(struct pch_gbe_hw *hw, u32 offset, u16 data);
void pch_gbe_phy_sw_reset(struct pch_gbe_hw *hw);
void pch_gbe_phy_hw_reset(struct pch_gbe_hw *hw);
void pch_gbe_phy_power_up(struct pch_gbe_hw *hw);
void pch_gbe_phy_power_down(struct pch_gbe_hw *hw);
void pch_gbe_phy_set_rgmii(struct pch_gbe_hw *hw);
void pch_gbe_phy_init_setting(struct pch_gbe_hw *hw);
