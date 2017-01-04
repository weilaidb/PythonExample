#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static u16 ixgb_shift_in_bits(struct ixgb_hw *hw);
static void ixgb_shift_out_bits(struct ixgb_hw *hw,
u16 data,
u16 count);
static void ixgb_standby_eeprom(struct ixgb_hw *hw);
static bool ixgb_wait_eeprom_command(struct ixgb_hw *hw);
static void ixgb_cleanup_eeprom(struct ixgb_hw *hw);
static void
ixgb_raise_clock(struct ixgb_hw *hw,
u32 *eecd_reg)
static void
ixgb_lower_clock(struct ixgb_hw *hw,
u32 *eecd_reg)
static void
ixgb_shift_out_bits(struct ixgb_hw *hw,
u16 data,
u16 count)
static u16
ixgb_shift_in_bits(struct ixgb_hw *hw)
static void
ixgb_setup_eeprom(struct ixgb_hw *hw)
static void
ixgb_standby_eeprom(struct ixgb_hw *hw)
static void
ixgb_clock_eeprom(struct ixgb_hw *hw)
static void
ixgb_cleanup_eeprom(struct ixgb_hw *hw)
static bool
ixgb_wait_eeprom_command(struct ixgb_hw *hw)
bool
ixgb_validate_eeprom_checksum(struct ixgb_hw *hw)
void
ixgb_update_eeprom_checksum(struct ixgb_hw *hw)
void
ixgb_write_eeprom(struct ixgb_hw *hw, u16 offset, u16 data)
u16
ixgb_read_eeprom(struct ixgb_hw *hw,
u16 offset)
bool
ixgb_get_eeprom_data(struct ixgb_hw *hw)
static bool
ixgb_check_and_get_eeprom_data (struct ixgb_hw* hw)
__le16
ixgb_get_eeprom_word(struct ixgb_hw *hw, u16 index)
void
ixgb_get_ee_mac_addr(struct ixgb_hw *hw,
u8 *mac_addr)
u32
ixgb_get_ee_pba_number(struct ixgb_hw *hw)
u16
ixgb_get_ee_device_id(struct ixgb_hw *hw)
