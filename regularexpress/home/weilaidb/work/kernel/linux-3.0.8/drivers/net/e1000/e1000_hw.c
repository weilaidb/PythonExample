static s32 e1000_check_downshift(struct e1000_hw *hw);
static s32 e1000_check_polarity(struct e1000_hw *hw,
e1000_rev_polarity *polarity);
static void e1000_clear_hw_cntrs(struct e1000_hw *hw);
static void e1000_clear_vfta(struct e1000_hw *hw);
static s32 e1000_config_dsp_after_link_change(struct e1000_hw *hw,
bool link_up);
static s32 e1000_config_fc_after_link_up(struct e1000_hw *hw);
static s32 e1000_detect_gig_phy(struct e1000_hw *hw);
static s32 e1000_get_auto_rd_done(struct e1000_hw *hw);
static s32 e1000_get_cable_length(struct e1000_hw *hw, u16 *min_length,
u16 *max_length);
static s32 e1000_get_phy_cfg_done(struct e1000_hw *hw);
static s32 e1000_id_led_init(struct e1000_hw *hw);
static void e1000_init_rx_addrs(struct e1000_hw *hw);
static s32 e1000_phy_igp_get_info(struct e1000_hw *hw,
struct e1000_phy_info *phy_info);
static s32 e1000_phy_m88_get_info(struct e1000_hw *hw,
struct e1000_phy_info *phy_info);
static s32 e1000_set_d3_lplu_state(struct e1000_hw *hw, bool active);
static s32 e1000_wait_autoneg(struct e1000_hw *hw);
static void e1000_write_reg_io(struct e1000_hw *hw, u32 offset, u32 value);
static s32 e1000_set_phy_type(struct e1000_hw *hw);
static void e1000_phy_init_script(struct e1000_hw *hw);
static s32 e1000_setup_copper_link(struct e1000_hw *hw);
static s32 e1000_setup_fiber_serdes_link(struct e1000_hw *hw);
static s32 e1000_adjust_serdes_amplitude(struct e1000_hw *hw);
static s32 e1000_phy_force_speed_duplex(struct e1000_hw *hw);
static s32 e1000_config_mac_to_phy(struct e1000_hw *hw);
static void e1000_raise_mdi_clk(struct e1000_hw *hw, u32 *ctrl);
static void e1000_lower_mdi_clk(struct e1000_hw *hw, u32 *ctrl);
static void e1000_shift_out_mdi_bits(struct e1000_hw *hw, u32 data, u16 count);
static u16 e1000_shift_in_mdi_bits(struct e1000_hw *hw);
static s32 e1000_phy_reset_dsp(struct e1000_hw *hw);
static s32 e1000_write_eeprom_spi(struct e1000_hw *hw, u16 offset,
u16 words, u16 *data);
static s32 e1000_write_eeprom_microwire(struct e1000_hw *hw, u16 offset,
u16 words, u16 *data);
static s32 e1000_spi_eeprom_ready(struct e1000_hw *hw);
static void e1000_raise_ee_clk(struct e1000_hw *hw, u32 *eecd);
static void e1000_lower_ee_clk(struct e1000_hw *hw, u32 *eecd);
static void e1000_shift_out_ee_bits(struct e1000_hw *hw, u16 data, u16 count);
static s32 e1000_write_phy_reg_ex(struct e1000_hw *hw, u32 reg_addr,
u16 phy_data);
static s32 e1000_read_phy_reg_ex(struct e1000_hw *hw, u32 reg_addr,
u16 *phy_data);
static u16 e1000_shift_in_ee_bits(struct e1000_hw *hw, u16 count);
static s32 e1000_acquire_eeprom(struct e1000_hw *hw);
static void e1000_release_eeprom(struct e1000_hw *hw);
static void e1000_standby_eeprom(struct e1000_hw *hw);
static s32 e1000_set_vco_speed(struct e1000_hw *hw);
static s32 e1000_polarity_reversal_workaround(struct e1000_hw *hw);
static s32 e1000_set_phy_mode(struct e1000_hw *hw);
static s32 e1000_do_read_eeprom(struct e1000_hw *hw, u16 offset, u16 words,
u16 *data);
static s32 e1000_do_write_eeprom(struct e1000_hw *hw, u16 offset, u16 words,
u16 *data);
static const
u16 e1000_igp_cable_length_table[IGP01E1000_AGC_LENGTH_TABLE_SIZE] = ;
static DEFINE_SPINLOCK(e1000_eeprom_lock);
static s32 e1000_set_phy_type(struct e1000_hw *hw)
static void e1000_phy_init_script(struct e1000_hw *hw)
s32 e1000_set_mac_type(struct e1000_hw *hw)
void e1000_set_media_type(struct e1000_hw *hw)
s32 e1000_reset_hw(struct e1000_hw *hw)
s32 e1000_init_hw(struct e1000_hw *hw)
static s32 e1000_adjust_serdes_amplitude(struct e1000_hw *hw)
s32 e1000_setup_link(struct e1000_hw *hw)
static s32 e1000_setup_fiber_serdes_link(struct e1000_hw *hw)
static s32 e1000_copper_link_rtl_setup(struct e1000_hw *hw)
static s32 gbe_dhg_phy_setup(struct e1000_hw *hw)
static s32 e1000_copper_link_preconfig(struct e1000_hw *hw)
static s32 e1000_copper_link_igp_setup(struct e1000_hw *hw)
static s32 e1000_copper_link_mgp_setup(struct e1000_hw *hw)
static s32 e1000_copper_link_autoneg(struct e1000_hw *hw)
static s32 e1000_copper_link_postconfig(struct e1000_hw *hw)
static s32 e1000_setup_copper_link(struct e1000_hw *hw)
s32 e1000_phy_setup_autoneg(struct e1000_hw *hw)
static s32 e1000_phy_force_speed_duplex(struct e1000_hw *hw)
void e1000_config_collision_dist(struct e1000_hw *hw)
static s32 e1000_config_mac_to_phy(struct e1000_hw *hw)
s32 e1000_force_mac_fc(struct e1000_hw *hw)
static s32 e1000_config_fc_after_link_up(struct e1000_hw *hw)
static s32 e1000_check_for_serdes_link_generic(struct e1000_hw *hw)
s32 e1000_check_for_link(struct e1000_hw *hw)
s32 e1000_get_speed_and_duplex(struct e1000_hw *hw, u16 *speed, u16 *duplex)
static s32 e1000_wait_autoneg(struct e1000_hw *hw)
static void e1000_raise_mdi_clk(struct e1000_hw *hw, u32 *ctrl)
static void e1000_lower_mdi_clk(struct e1000_hw *hw, u32 *ctrl)
static void e1000_shift_out_mdi_bits(struct e1000_hw *hw, u32 data, u16 count)
static u16 e1000_shift_in_mdi_bits(struct e1000_hw *hw)
s32 e1000_read_phy_reg(struct e1000_hw *hw, u32 reg_addr, u16 *phy_data)
static s32 e1000_read_phy_reg_ex(struct e1000_hw *hw, u32 reg_addr,
u16 *phy_data)
s32 e1000_write_phy_reg(struct e1000_hw *hw, u32 reg_addr, u16 phy_data)
static s32 e1000_write_phy_reg_ex(struct e1000_hw *hw, u32 reg_addr,
u16 phy_data)
s32 e1000_phy_hw_reset(struct e1000_hw *hw)
s32 e1000_phy_reset(struct e1000_hw *hw)
static s32 e1000_detect_gig_phy(struct e1000_hw *hw)
static s32 e1000_phy_reset_dsp(struct e1000_hw *hw)
static s32 e1000_phy_igp_get_info(struct e1000_hw *hw,
struct e1000_phy_info *phy_info)
static s32 e1000_phy_m88_get_info(struct e1000_hw *hw,
struct e1000_phy_info *phy_info)
s32 e1000_phy_get_info(struct e1000_hw *hw, struct e1000_phy_info *phy_info)
s32 e1000_validate_mdi_setting(struct e1000_hw *hw)
s32 e1000_init_eeprom_params(struct e1000_hw *hw)
static void e1000_raise_ee_clk(struct e1000_hw *hw, u32 *eecd)
static void e1000_lower_ee_clk(struct e1000_hw *hw, u32 *eecd)
static void e1000_shift_out_ee_bits(struct e1000_hw *hw, u16 data, u16 count)
static u16 e1000_shift_in_ee_bits(struct e1000_hw *hw, u16 count)
static s32 e1000_acquire_eeprom(struct e1000_hw *hw)
static void e1000_standby_eeprom(struct e1000_hw *hw)
static void e1000_release_eeprom(struct e1000_hw *hw)
static s32 e1000_spi_eeprom_ready(struct e1000_hw *hw)
s32 e1000_read_eeprom(struct e1000_hw *hw, u16 offset, u16 words, u16 *data)
static s32 e1000_do_read_eeprom(struct e1000_hw *hw, u16 offset, u16 words,
u16 *data)
s32 e1000_validate_eeprom_checksum(struct e1000_hw *hw)
s32 e1000_update_eeprom_checksum(struct e1000_hw *hw)
s32 e1000_write_eeprom(struct e1000_hw *hw, u16 offset, u16 words, u16 *data)
static s32 e1000_do_write_eeprom(struct e1000_hw *hw, u16 offset, u16 words,
u16 *data)
static s32 e1000_write_eeprom_spi(struct e1000_hw *hw, u16 offset, u16 words,
u16 *data)
static s32 e1000_write_eeprom_microwire(struct e1000_hw *hw, u16 offset,
u16 words, u16 *data)
s32 e1000_read_mac_addr(struct e1000_hw *hw)
static void e1000_init_rx_addrs(struct e1000_hw *hw)
u32 e1000_hash_mc_addr(struct e1000_hw *hw, u8 *mc_addr)
void e1000_rar_set(struct e1000_hw *hw, u8 *addr, u32 index)
void e1000_write_vfta(struct e1000_hw *hw, u32 offset, u32 value)
static void e1000_clear_vfta(struct e1000_hw *hw)
static s32 e1000_id_led_init(struct e1000_hw *hw)
s32 e1000_setup_led(struct e1000_hw *hw)
s32 e1000_cleanup_led(struct e1000_hw *hw)
s32 e1000_led_on(struct e1000_hw *hw)
s32 e1000_led_off(struct e1000_hw *hw)
static void e1000_clear_hw_cntrs(struct e1000_hw *hw)
void e1000_reset_adaptive(struct e1000_hw *hw)
void e1000_update_adaptive(struct e1000_hw *hw)
void e1000_tbi_adjust_stats(struct e1000_hw *hw, struct e1000_hw_stats *stats,
u32 frame_len, u8 *mac_addr)
void e1000_get_bus_info(struct e1000_hw *hw)
static void e1000_write_reg_io(struct e1000_hw *hw, u32 offset, u32 value)
static s32 e1000_get_cable_length(struct e1000_hw *hw, u16 *min_length,
u16 *max_length)
static s32 e1000_check_polarity(struct e1000_hw *hw,
e1000_rev_polarity *polarity)
static s32 e1000_check_downshift(struct e1000_hw *hw)
static s32 e1000_config_dsp_after_link_change(struct e1000_hw *hw, bool link_up)
static s32 e1000_set_phy_mode(struct e1000_hw *hw)
static s32 e1000_set_d3_lplu_state(struct e1000_hw *hw, bool active)
static s32 e1000_set_vco_speed(struct e1000_hw *hw)
u32 e1000_enable_mng_pass_thru(struct e1000_hw *hw)
static s32 e1000_polarity_reversal_workaround(struct e1000_hw *hw)
static s32 e1000_get_auto_rd_done(struct e1000_hw *hw)
static s32 e1000_get_phy_cfg_done(struct e1000_hw *hw)
