static void ixgbe_i2c_start(struct ixgbe_hw *hw);
static void ixgbe_i2c_stop(struct ixgbe_hw *hw);
static s32 ixgbe_clock_in_i2c_byte(struct ixgbe_hw *hw, u8 *data);
static s32 ixgbe_clock_out_i2c_byte(struct ixgbe_hw *hw, u8 data);
static s32 ixgbe_get_i2c_ack(struct ixgbe_hw *hw);
static s32 ixgbe_clock_in_i2c_bit(struct ixgbe_hw *hw, bool *data);
static s32 ixgbe_clock_out_i2c_bit(struct ixgbe_hw *hw, bool data);
static s32 ixgbe_raise_i2c_clk(struct ixgbe_hw *hw, u32 *i2cctl);
static void ixgbe_lower_i2c_clk(struct ixgbe_hw *hw, u32 *i2cctl);
static s32 ixgbe_set_i2c_data(struct ixgbe_hw *hw, u32 *i2cctl, bool data);
static bool ixgbe_get_i2c_data(u32 *i2cctl);
static void ixgbe_i2c_bus_clear(struct ixgbe_hw *hw);
static enum ixgbe_phy_type ixgbe_get_phy_type_from_id(u32 phy_id);
static s32 ixgbe_get_phy_id(struct ixgbe_hw *hw);
s32 ixgbe_identify_phy_generic(struct ixgbe_hw *hw)
static s32 ixgbe_get_phy_id(struct ixgbe_hw *hw)
static enum ixgbe_phy_type ixgbe_get_phy_type_from_id(u32 phy_id)
s32 ixgbe_reset_phy_generic(struct ixgbe_hw *hw)
s32 ixgbe_read_phy_reg_generic(struct ixgbe_hw *hw, u32 reg_addr,
u32 device_type, u16 *phy_data)
s32 ixgbe_write_phy_reg_generic(struct ixgbe_hw *hw, u32 reg_addr,
u32 device_type, u16 phy_data)
s32 ixgbe_setup_phy_link_generic(struct ixgbe_hw *hw)
s32 ixgbe_setup_phy_link_speed_generic(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete)
s32 ixgbe_get_copper_link_capabilities_generic(struct ixgbe_hw *hw,
ixgbe_link_speed *speed,
bool *autoneg)
s32 ixgbe_check_phy_link_tnx(struct ixgbe_hw *hw, ixgbe_link_speed *speed,
bool *link_up)
s32 ixgbe_setup_phy_link_tnx(struct ixgbe_hw *hw)
s32 ixgbe_get_phy_firmware_version_tnx(struct ixgbe_hw *hw,
u16 *firmware_version)
s32 ixgbe_get_phy_firmware_version_generic(struct ixgbe_hw *hw,
u16 *firmware_version)
s32 ixgbe_reset_phy_nl(struct ixgbe_hw *hw)
s32 ixgbe_identify_sfp_module_generic(struct ixgbe_hw *hw)
s32 ixgbe_get_sfp_init_sequence_offsets(struct ixgbe_hw *hw,
u16 *list_offset,
u16 *data_offset)
s32 ixgbe_read_i2c_eeprom_generic(struct ixgbe_hw *hw, u8 byte_offset,
u8 *eeprom_data)
s32 ixgbe_write_i2c_eeprom_generic(struct ixgbe_hw *hw, u8 byte_offset,
u8 eeprom_data)
s32 ixgbe_read_i2c_byte_generic(struct ixgbe_hw *hw, u8 byte_offset,
u8 dev_addr, u8 *data)
s32 ixgbe_write_i2c_byte_generic(struct ixgbe_hw *hw, u8 byte_offset,
u8 dev_addr, u8 data)
static void ixgbe_i2c_start(struct ixgbe_hw *hw)
static void ixgbe_i2c_stop(struct ixgbe_hw *hw)
static s32 ixgbe_clock_in_i2c_byte(struct ixgbe_hw *hw, u8 *data)
static s32 ixgbe_clock_out_i2c_byte(struct ixgbe_hw *hw, u8 data)
static s32 ixgbe_get_i2c_ack(struct ixgbe_hw *hw)
static s32 ixgbe_clock_in_i2c_bit(struct ixgbe_hw *hw, bool *data)
static s32 ixgbe_clock_out_i2c_bit(struct ixgbe_hw *hw, bool data)
static s32 ixgbe_raise_i2c_clk(struct ixgbe_hw *hw, u32 *i2cctl)
static void ixgbe_lower_i2c_clk(struct ixgbe_hw *hw, u32 *i2cctl)
static s32 ixgbe_set_i2c_data(struct ixgbe_hw *hw, u32 *i2cctl, bool data)
static bool ixgbe_get_i2c_data(u32 *i2cctl)
static void ixgbe_i2c_bus_clear(struct ixgbe_hw *hw)
s32 ixgbe_tn_check_overtemp(struct ixgbe_hw *hw)
