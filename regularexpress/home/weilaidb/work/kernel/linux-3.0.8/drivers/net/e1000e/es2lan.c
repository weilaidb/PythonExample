#define E1000_KMRNCTRLSTA_OFFSET_FIFO_CTRL	 0x00
#define E1000_KMRNCTRLSTA_OFFSET_INB_CTRL	 0x02
#define E1000_KMRNCTRLSTA_OFFSET_HD_CTRL	 0x10
#define E1000_KMRNCTRLSTA_OFFSET_MAC2PHY_OPMODE	 0x1F
#define E1000_KMRNCTRLSTA_FIFO_CTRL_RX_BYPASS	 0x0008
#define E1000_KMRNCTRLSTA_FIFO_CTRL_TX_BYPASS	 0x0800
#define E1000_KMRNCTRLSTA_INB_CTRL_DIS_PADDING	 0x0010
#define E1000_KMRNCTRLSTA_HD_CTRL_10_100_DEFAULT 0x0004
#define E1000_KMRNCTRLSTA_HD_CTRL_1000_DEFAULT	 0x0000
#define E1000_KMRNCTRLSTA_OPMODE_E_IDLE		 0x2000
#define E1000_KMRNCTRLSTA_OPMODE_MASK		 0x000C
#define E1000_KMRNCTRLSTA_OPMODE_INBAND_MDIO	 0x0004
#define E1000_TCTL_EXT_GCEX_MASK 0x000FFC00
#define DEFAULT_TCTL_EXT_GCEX_80003ES2LAN	 0x00010000
#define DEFAULT_TIPG_IPGT_1000_80003ES2LAN	 0x8
#define DEFAULT_TIPG_IPGT_10_100_80003ES2LAN	 0x9
#define GG82563_PSCR_POLARITY_REVERSAL_DISABLE	 0x0002
#define GG82563_PSCR_CROSSOVER_MODE_MASK	 0x0060
#define GG82563_PSCR_CROSSOVER_MODE_MDI		 0x0000
#define GG82563_PSCR_CROSSOVER_MODE_MDIX	 0x0020
#define GG82563_PSCR_CROSSOVER_MODE_AUTO	 0x0060
#define GG82563_PSCR2_REVERSE_AUTO_NEG		 0x2000
#define GG82563_MSCR_TX_CLK_MASK		 0x0007
#define GG82563_MSCR_TX_CLK_10MBPS_2_5		 0x0004
#define GG82563_MSCR_TX_CLK_100MBPS_25		 0x0005
#define GG82563_MSCR_TX_CLK_1000MBPS_25		 0x0007
#define GG82563_MSCR_ASSERT_CRS_ON_TX		 0x0010
#define GG82563_DSPD_CABLE_LENGTH		 0x0007
#define GG82563_KMCR_PASS_FALSE_CARRIER		 0x0800
#define GG82563_MAX_KMRN_RETRY  0x5
#define GG82563_PMCR_ENABLE_ELECTRICAL_IDLE	 0x0001
#define GG82563_ICR_DIS_PADDING			 0x0010
static const u16 e1000_gg82563_cable_length_table[] = ;
#define GG82563_CABLE_LENGTH_TABLE_SIZE \
ARRAY_SIZE(e1000_gg82563_cable_length_table)
static s32 e1000_setup_copper_link_80003es2lan(struct e1000_hw *hw);
static s32 e1000_acquire_swfw_sync_80003es2lan(struct e1000_hw *hw, u16 mask);
static void e1000_release_swfw_sync_80003es2lan(struct e1000_hw *hw, u16 mask);
static void e1000_initialize_hw_bits_80003es2lan(struct e1000_hw *hw);
static void e1000_clear_hw_cntrs_80003es2lan(struct e1000_hw *hw);
static s32 e1000_cfg_kmrn_1000_80003es2lan(struct e1000_hw *hw);
static s32 e1000_cfg_kmrn_10_100_80003es2lan(struct e1000_hw *hw, u16 duplex);
static s32 e1000_cfg_on_link_up_80003es2lan(struct e1000_hw *hw);
static s32  e1000_read_kmrn_reg_80003es2lan(struct e1000_hw *hw, u32 offset,
u16 *data);
static s32  e1000_write_kmrn_reg_80003es2lan(struct e1000_hw *hw, u32 offset,
u16 data);
static void e1000_power_down_phy_copper_80003es2lan(struct e1000_hw *hw);
static s32 e1000_init_phy_params_80003es2lan(struct e1000_hw *hw)
static s32 e1000_init_nvm_params_80003es2lan(struct e1000_hw *hw)
static s32 e1000_init_mac_params_80003es2lan(struct e1000_adapter *adapter)
static s32 e1000_get_variants_80003es2lan(struct e1000_adapter *adapter)
static s32 e1000_acquire_phy_80003es2lan(struct e1000_hw *hw)
static void e1000_release_phy_80003es2lan(struct e1000_hw *hw)
static s32 e1000_acquire_mac_csr_80003es2lan(struct e1000_hw *hw)
static void e1000_release_mac_csr_80003es2lan(struct e1000_hw *hw)
static s32 e1000_acquire_nvm_80003es2lan(struct e1000_hw *hw)
static void e1000_release_nvm_80003es2lan(struct e1000_hw *hw)
static s32 e1000_acquire_swfw_sync_80003es2lan(struct e1000_hw *hw, u16 mask)
static void e1000_release_swfw_sync_80003es2lan(struct e1000_hw *hw, u16 mask)
static s32 e1000_read_phy_reg_gg82563_80003es2lan(struct e1000_hw *hw,
u32 offset, u16 *data)
static s32 e1000_write_phy_reg_gg82563_80003es2lan(struct e1000_hw *hw,
u32 offset, u16 data)
static s32 e1000_write_nvm_80003es2lan(struct e1000_hw *hw, u16 offset,
u16 words, u16 *data)
static s32 e1000_get_cfg_done_80003es2lan(struct e1000_hw *hw)
static s32 e1000_phy_force_speed_duplex_80003es2lan(struct e1000_hw *hw)
static s32 e1000_get_cable_length_80003es2lan(struct e1000_hw *hw)
static s32 e1000_get_link_up_info_80003es2lan(struct e1000_hw *hw, u16 *speed,
u16 *duplex)
static s32 e1000_reset_hw_80003es2lan(struct e1000_hw *hw)
static s32 e1000_init_hw_80003es2lan(struct e1000_hw *hw)
static void e1000_initialize_hw_bits_80003es2lan(struct e1000_hw *hw)
static s32 e1000_copper_link_setup_gg82563_80003es2lan(struct e1000_hw *hw)
static s32 e1000_setup_copper_link_80003es2lan(struct e1000_hw *hw)
static s32 e1000_cfg_on_link_up_80003es2lan(struct e1000_hw *hw)
static s32 e1000_cfg_kmrn_10_100_80003es2lan(struct e1000_hw *hw, u16 duplex)
static s32 e1000_cfg_kmrn_1000_80003es2lan(struct e1000_hw *hw)
static s32 e1000_read_kmrn_reg_80003es2lan(struct e1000_hw *hw, u32 offset,
u16 *data)
static s32 e1000_write_kmrn_reg_80003es2lan(struct e1000_hw *hw, u32 offset,
u16 data)
static s32 e1000_read_mac_addr_80003es2lan(struct e1000_hw *hw)
static void e1000_power_down_phy_copper_80003es2lan(struct e1000_hw *hw)
static void e1000_clear_hw_cntrs_80003es2lan(struct e1000_hw *hw)
static struct e1000_mac_operations es2_mac_ops = ;
static struct e1000_phy_operations es2_phy_ops = ;
static struct e1000_nvm_operations es2_nvm_ops = ;
struct e1000_info e1000_es2_info = ;
