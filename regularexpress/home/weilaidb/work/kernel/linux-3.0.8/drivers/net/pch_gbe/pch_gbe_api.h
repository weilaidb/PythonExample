#define _PCH_GBE_API_H_
s32 pch_gbe_hal_setup_init_funcs(struct pch_gbe_hw *hw);
void pch_gbe_hal_get_bus_info(struct pch_gbe_hw *hw);
s32 pch_gbe_hal_init_hw(struct pch_gbe_hw *hw);
s32 pch_gbe_hal_read_phy_reg(struct pch_gbe_hw *hw, u32 offset, u16 *data);
s32 pch_gbe_hal_write_phy_reg(struct pch_gbe_hw *hw, u32 offset, u16 data);
void pch_gbe_hal_phy_hw_reset(struct pch_gbe_hw *hw);
void pch_gbe_hal_phy_sw_reset(struct pch_gbe_hw *hw);
s32 pch_gbe_hal_read_mac_addr(struct pch_gbe_hw *hw);
void pch_gbe_hal_power_up_phy(struct pch_gbe_hw *hw);
void pch_gbe_hal_power_down_phy(struct pch_gbe_hw *hw);
