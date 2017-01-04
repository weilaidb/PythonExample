static s32 ixgbe_acquire_eeprom(struct ixgbe_hw *hw);
static s32 ixgbe_get_eeprom_semaphore(struct ixgbe_hw *hw);
static void ixgbe_release_eeprom_semaphore(struct ixgbe_hw *hw);
static s32 ixgbe_ready_eeprom(struct ixgbe_hw *hw);
static void ixgbe_standby_eeprom(struct ixgbe_hw *hw);
static void ixgbe_shift_out_eeprom_bits(struct ixgbe_hw *hw, u16 data,
u16 count);
static u16 ixgbe_shift_in_eeprom_bits(struct ixgbe_hw *hw, u16 count);
static void ixgbe_raise_eeprom_clk(struct ixgbe_hw *hw, u32 *eec);
static void ixgbe_lower_eeprom_clk(struct ixgbe_hw *hw, u32 *eec);
static void ixgbe_release_eeprom(struct ixgbe_hw *hw);
static s32 ixgbe_mta_vector(struct ixgbe_hw *hw, u8 *mc_addr);
static s32 ixgbe_fc_autoneg_fiber(struct ixgbe_hw *hw);
static s32 ixgbe_fc_autoneg_backplane(struct ixgbe_hw *hw);
static s32 ixgbe_fc_autoneg_copper(struct ixgbe_hw *hw);
static s32 ixgbe_device_supports_autoneg_fc(struct ixgbe_hw *hw);
static s32 ixgbe_negotiate_fc(struct ixgbe_hw *hw, u32 adv_reg, u32 lp_reg,
u32 adv_sym, u32 adv_asm, u32 lp_sym, u32 lp_asm);
static s32 ixgbe_setup_fc(struct ixgbe_hw *hw, s32 packetbuf_num);
static s32 ixgbe_poll_eerd_eewr_done(struct ixgbe_hw *hw, u32 ee_reg);
static s32 ixgbe_read_eeprom_buffer_bit_bang(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data);
static s32 ixgbe_write_eeprom_buffer_bit_bang(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data);
static s32 ixgbe_detect_eeprom_page_size_generic(struct ixgbe_hw *hw,
u16 offset);
s32 ixgbe_start_hw_generic(struct ixgbe_hw *hw)
s32 ixgbe_start_hw_gen2(struct ixgbe_hw *hw)
s32 ixgbe_init_hw_generic(struct ixgbe_hw *hw)
s32 ixgbe_clear_hw_cntrs_generic(struct ixgbe_hw *hw)
s32 ixgbe_read_pba_string_generic(struct ixgbe_hw *hw, u8 *pba_num,
u32 pba_num_size)
s32 ixgbe_get_mac_addr_generic(struct ixgbe_hw *hw, u8 *mac_addr)
s32 ixgbe_get_bus_info_generic(struct ixgbe_hw *hw)
void ixgbe_set_lan_id_multi_port_pcie(struct ixgbe_hw *hw)
s32 ixgbe_stop_adapter_generic(struct ixgbe_hw *hw)
s32 ixgbe_led_on_generic(struct ixgbe_hw *hw, u32 index)
s32 ixgbe_led_off_generic(struct ixgbe_hw *hw, u32 index)
s32 ixgbe_init_eeprom_params_generic(struct ixgbe_hw *hw)
s32 ixgbe_write_eeprom_buffer_bit_bang_generic(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data)
static s32 ixgbe_write_eeprom_buffer_bit_bang(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data)
s32 ixgbe_write_eeprom_generic(struct ixgbe_hw *hw, u16 offset, u16 data)
s32 ixgbe_read_eeprom_buffer_bit_bang_generic(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data)
static s32 ixgbe_read_eeprom_buffer_bit_bang(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data)
s32 ixgbe_read_eeprom_bit_bang_generic(struct ixgbe_hw *hw, u16 offset,
u16 *data)
s32 ixgbe_read_eerd_buffer_generic(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data)
static s32 ixgbe_detect_eeprom_page_size_generic(struct ixgbe_hw *hw,
u16 offset)
s32 ixgbe_read_eerd_generic(struct ixgbe_hw *hw, u16 offset, u16 *data)
s32 ixgbe_write_eewr_buffer_generic(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data)
s32 ixgbe_write_eewr_generic(struct ixgbe_hw *hw, u16 offset, u16 data)
static s32 ixgbe_poll_eerd_eewr_done(struct ixgbe_hw *hw, u32 ee_reg)
static s32 ixgbe_acquire_eeprom(struct ixgbe_hw *hw)
static s32 ixgbe_get_eeprom_semaphore(struct ixgbe_hw *hw)
static void ixgbe_release_eeprom_semaphore(struct ixgbe_hw *hw)
static s32 ixgbe_ready_eeprom(struct ixgbe_hw *hw)
static void ixgbe_standby_eeprom(struct ixgbe_hw *hw)
static void ixgbe_shift_out_eeprom_bits(struct ixgbe_hw *hw, u16 data,
u16 count)
static u16 ixgbe_shift_in_eeprom_bits(struct ixgbe_hw *hw, u16 count)
static void ixgbe_raise_eeprom_clk(struct ixgbe_hw *hw, u32 *eec)
static void ixgbe_lower_eeprom_clk(struct ixgbe_hw *hw, u32 *eec)
static void ixgbe_release_eeprom(struct ixgbe_hw *hw)
u16 ixgbe_calc_eeprom_checksum_generic(struct ixgbe_hw *hw)
s32 ixgbe_validate_eeprom_checksum_generic(struct ixgbe_hw *hw,
u16 *checksum_val)
s32 ixgbe_update_eeprom_checksum_generic(struct ixgbe_hw *hw)
s32 ixgbe_validate_mac_addr(u8 *mac_addr)
s32 ixgbe_set_rar_generic(struct ixgbe_hw *hw, u32 index, u8 *addr, u32 vmdq,
u32 enable_addr)
s32 ixgbe_clear_rar_generic(struct ixgbe_hw *hw, u32 index)
s32 ixgbe_init_rx_addrs_generic(struct ixgbe_hw *hw)
static s32 ixgbe_mta_vector(struct ixgbe_hw *hw, u8 *mc_addr)
static void ixgbe_set_mta(struct ixgbe_hw *hw, u8 *mc_addr)
s32 ixgbe_update_mc_addr_list_generic(struct ixgbe_hw *hw,
struct net_device *netdev)
s32 ixgbe_enable_mc_generic(struct ixgbe_hw *hw)
s32 ixgbe_disable_mc_generic(struct ixgbe_hw *hw)
s32 ixgbe_fc_enable_generic(struct ixgbe_hw *hw, s32 packetbuf_num)
s32 ixgbe_fc_autoneg(struct ixgbe_hw *hw)
static s32 ixgbe_fc_autoneg_fiber(struct ixgbe_hw *hw)
static s32 ixgbe_fc_autoneg_backplane(struct ixgbe_hw *hw)
static s32 ixgbe_fc_autoneg_copper(struct ixgbe_hw *hw)
static s32 ixgbe_negotiate_fc(struct ixgbe_hw *hw, u32 adv_reg, u32 lp_reg,
u32 adv_sym, u32 adv_asm, u32 lp_sym, u32 lp_asm)
static s32 ixgbe_setup_fc(struct ixgbe_hw *hw, s32 packetbuf_num)
s32 ixgbe_disable_pcie_master(struct ixgbe_hw *hw)
s32 ixgbe_acquire_swfw_sync(struct ixgbe_hw *hw, u16 mask)
void ixgbe_release_swfw_sync(struct ixgbe_hw *hw, u16 mask)
s32 ixgbe_enable_rx_dma_generic(struct ixgbe_hw *hw, u32 regval)
s32 ixgbe_blink_led_start_generic(struct ixgbe_hw *hw, u32 index)
s32 ixgbe_blink_led_stop_generic(struct ixgbe_hw *hw, u32 index)
static s32 ixgbe_get_san_mac_addr_offset(struct ixgbe_hw *hw,
u16 *san_mac_offset)
s32 ixgbe_get_san_mac_addr_generic(struct ixgbe_hw *hw, u8 *san_mac_addr)
u32 ixgbe_get_pcie_msix_count_generic(struct ixgbe_hw *hw)
s32 ixgbe_clear_vmdq_generic(struct ixgbe_hw *hw, u32 rar, u32 vmdq)
s32 ixgbe_set_vmdq_generic(struct ixgbe_hw *hw, u32 rar, u32 vmdq)
s32 ixgbe_init_uta_tables_generic(struct ixgbe_hw *hw)
static s32 ixgbe_find_vlvf_slot(struct ixgbe_hw *hw, u32 vlan)
s32 ixgbe_set_vfta_generic(struct ixgbe_hw *hw, u32 vlan, u32 vind,
bool vlan_on)
s32 ixgbe_clear_vfta_generic(struct ixgbe_hw *hw)
s32 ixgbe_check_mac_link_generic(struct ixgbe_hw *hw, ixgbe_link_speed *speed,
bool *link_up, bool link_up_wait_to_complete)
s32 ixgbe_get_wwn_prefix_generic(struct ixgbe_hw *hw, u16 *wwnn_prefix,
u16 *wwpn_prefix)
static s32 ixgbe_device_supports_autoneg_fc(struct ixgbe_hw *hw)
void ixgbe_set_mac_anti_spoofing(struct ixgbe_hw *hw, bool enable, int pf)
void ixgbe_set_vlan_anti_spoofing(struct ixgbe_hw *hw, bool enable, int vf)
s32 ixgbe_get_device_caps_generic(struct ixgbe_hw *hw, u16 *device_caps)
