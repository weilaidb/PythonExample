#define pch_gbe_bus_type_unknown	0
#define pch_gbe_bus_type_pci		1
#define pch_gbe_bus_type_pcix		2
#define pch_gbe_bus_type_pci_express	3
#define pch_gbe_bus_type_reserved	4
#define pch_gbe_bus_speed_unknown	0
#define pch_gbe_bus_speed_33		1
#define pch_gbe_bus_speed_66		2
#define pch_gbe_bus_speed_100		3
#define pch_gbe_bus_speed_120		4
#define pch_gbe_bus_speed_133		5
#define pch_gbe_bus_speed_2500		6
#define pch_gbe_bus_speed_reserved	7
#define pch_gbe_bus_width_unknown	0
#define pch_gbe_bus_width_pcie_x1	1
#define pch_gbe_bus_width_pcie_x2	2
#define pch_gbe_bus_width_pcie_x4	4
#define pch_gbe_bus_width_32		5
#define pch_gbe_bus_width_64		6
#define pch_gbe_bus_width_reserved	7
static void pch_gbe_plat_get_bus_info(struct pch_gbe_hw *hw)
static s32 pch_gbe_plat_init_hw(struct pch_gbe_hw *hw)
static const struct pch_gbe_functions pch_gbe_ops = ;
static void pch_gbe_plat_init_function_pointers(struct pch_gbe_hw *hw)
inline s32 pch_gbe_hal_setup_init_funcs(struct pch_gbe_hw *hw)
inline void pch_gbe_hal_get_bus_info(struct pch_gbe_hw *hw)
inline s32 pch_gbe_hal_init_hw(struct pch_gbe_hw *hw)
inline s32 pch_gbe_hal_read_phy_reg(struct pch_gbe_hw *hw, u32 offset,
u16 *data)
inline s32 pch_gbe_hal_write_phy_reg(struct pch_gbe_hw *hw, u32 offset,
u16 data)
inline void pch_gbe_hal_phy_hw_reset(struct pch_gbe_hw *hw)
inline void pch_gbe_hal_phy_sw_reset(struct pch_gbe_hw *hw)
inline s32 pch_gbe_hal_read_mac_addr(struct pch_gbe_hw *hw)
inline void pch_gbe_hal_power_up_phy(struct pch_gbe_hw *hw)
inline void pch_gbe_hal_power_down_phy(struct pch_gbe_hw *hw)
