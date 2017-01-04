static s32  igb_get_invariants_82575(struct e1000_hw *);
static s32  igb_acquire_phy_82575(struct e1000_hw *);
static void igb_release_phy_82575(struct e1000_hw *);
static s32  igb_acquire_nvm_82575(struct e1000_hw *);
static void igb_release_nvm_82575(struct e1000_hw *);
static s32  igb_check_for_link_82575(struct e1000_hw *);
static s32  igb_get_cfg_done_82575(struct e1000_hw *);
static s32  igb_init_hw_82575(struct e1000_hw *);
static s32  igb_phy_hw_reset_sgmii_82575(struct e1000_hw *);
static s32  igb_read_phy_reg_sgmii_82575(struct e1000_hw *, u32, u16 *);
static s32  igb_read_phy_reg_82580(struct e1000_hw *, u32, u16 *);
static s32  igb_write_phy_reg_82580(struct e1000_hw *, u32, u16);
static s32  igb_reset_hw_82575(struct e1000_hw *);
static s32  igb_reset_hw_82580(struct e1000_hw *);
static s32  igb_set_d0_lplu_state_82575(struct e1000_hw *, bool);
static s32  igb_setup_copper_link_82575(struct e1000_hw *);
static s32  igb_setup_serdes_link_82575(struct e1000_hw *);
static s32  igb_write_phy_reg_sgmii_82575(struct e1000_hw *, u32, u16);
static void igb_clear_hw_cntrs_82575(struct e1000_hw *);
static s32  igb_acquire_swfw_sync_82575(struct e1000_hw *, u16);
static s32  igb_get_pcs_speed_and_duplex_82575(struct e1000_hw *, u16 *,
u16 *);
static s32  igb_get_phy_id_82575(struct e1000_hw *);
static void igb_release_swfw_sync_82575(struct e1000_hw *, u16);
static bool igb_sgmii_active_82575(struct e1000_hw *);
static s32  igb_reset_init_script_82575(struct e1000_hw *);
static s32  igb_read_mac_addr_82575(struct e1000_hw *);
static s32  igb_set_pcie_completion_timeout(struct e1000_hw *hw);
static s32  igb_reset_mdicnfg_82580(struct e1000_hw *hw);
static s32  igb_validate_nvm_checksum_82580(struct e1000_hw *hw);
static s32  igb_update_nvm_checksum_82580(struct e1000_hw *hw);
static s32  igb_update_nvm_checksum_with_offset(struct e1000_hw *hw,
u16 offset);
static s32 igb_validate_nvm_checksum_with_offset(struct e1000_hw *hw,
u16 offset);
static s32 igb_validate_nvm_checksum_i350(struct e1000_hw *hw);
static s32 igb_update_nvm_checksum_i350(struct e1000_hw *hw);
static const u16 e1000_82580_rxpbs_table[] =
;
#define E1000_82580_RXPBS_TABLE_SIZE \
(sizeof(e1000_82580_rxpbs_table)/sizeof(u16))
static bool igb_sgmii_uses_mdio_82575(struct e1000_hw *hw)
static s32 igb_get_invariants_82575(struct e1000_hw *hw)
static s32 igb_acquire_phy_82575(struct e1000_hw *hw)
static void igb_release_phy_82575(struct e1000_hw *hw)
static s32 igb_read_phy_reg_sgmii_82575(struct e1000_hw *hw, u32 offset,
u16 *data)
static s32 igb_write_phy_reg_sgmii_82575(struct e1000_hw *hw, u32 offset,
u16 data)
static s32 igb_get_phy_id_82575(struct e1000_hw *hw)
static s32 igb_phy_hw_reset_sgmii_82575(struct e1000_hw *hw)
static s32 igb_set_d0_lplu_state_82575(struct e1000_hw *hw, bool active)
static s32 igb_acquire_nvm_82575(struct e1000_hw *hw)
static void igb_release_nvm_82575(struct e1000_hw *hw)
static s32 igb_acquire_swfw_sync_82575(struct e1000_hw *hw, u16 mask)
static void igb_release_swfw_sync_82575(struct e1000_hw *hw, u16 mask)
static s32 igb_get_cfg_done_82575(struct e1000_hw *hw)
static s32 igb_check_for_link_82575(struct e1000_hw *hw)
void igb_power_up_serdes_link_82575(struct e1000_hw *hw)
static s32 igb_get_pcs_speed_and_duplex_82575(struct e1000_hw *hw, u16 *speed,
u16 *duplex)
void igb_shutdown_serdes_link_82575(struct e1000_hw *hw)
static s32 igb_reset_hw_82575(struct e1000_hw *hw)
static s32 igb_init_hw_82575(struct e1000_hw *hw)
static s32 igb_setup_copper_link_82575(struct e1000_hw *hw)
static s32 igb_setup_serdes_link_82575(struct e1000_hw *hw)
static bool igb_sgmii_active_82575(struct e1000_hw *hw)
static s32 igb_reset_init_script_82575(struct e1000_hw *hw)
static s32 igb_read_mac_addr_82575(struct e1000_hw *hw)
void igb_power_down_phy_copper_82575(struct e1000_hw *hw)
static void igb_clear_hw_cntrs_82575(struct e1000_hw *hw)
void igb_rx_fifo_flush_82575(struct e1000_hw *hw)
static s32 igb_set_pcie_completion_timeout(struct e1000_hw *hw)
void igb_vmdq_set_anti_spoofing_pf(struct e1000_hw *hw, bool enable, int pf)
void igb_vmdq_set_loopback_pf(struct e1000_hw *hw, bool enable)
void igb_vmdq_set_replication_pf(struct e1000_hw *hw, bool enable)
static s32 igb_read_phy_reg_82580(struct e1000_hw *hw, u32 offset, u16 *data)
static s32 igb_write_phy_reg_82580(struct e1000_hw *hw, u32 offset, u16 data)
static s32 igb_reset_mdicnfg_82580(struct e1000_hw *hw)
static s32 igb_reset_hw_82580(struct e1000_hw *hw)
u16 igb_rxpbs_adjust_82580(u32 data)
s32 igb_validate_nvm_checksum_with_offset(struct e1000_hw *hw, u16 offset)
s32 igb_update_nvm_checksum_with_offset(struct e1000_hw *hw, u16 offset)
static s32 igb_validate_nvm_checksum_82580(struct e1000_hw *hw)
static s32 igb_update_nvm_checksum_82580(struct e1000_hw *hw)
static s32 igb_validate_nvm_checksum_i350(struct e1000_hw *hw)
static s32 igb_update_nvm_checksum_i350(struct e1000_hw *hw)
s32 igb_set_eee_i350(struct e1000_hw *hw)
static struct e1000_mac_operations e1000_mac_ops_82575 = ;
static struct e1000_phy_operations e1000_phy_ops_82575 = ;
static struct e1000_nvm_operations e1000_nvm_ops_82575 = ;
const struct e1000_info e1000_82575_info = ;
