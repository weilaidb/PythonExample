#define IXGBE_X540_MAX_TX_QUEUES 128
#define IXGBE_X540_MAX_RX_QUEUES 128
#define IXGBE_X540_RAR_ENTRIES   128
#define IXGBE_X540_MC_TBL_SIZE   128
#define IXGBE_X540_VFT_TBL_SIZE  128
#define IXGBE_X540_RX_PB_SIZE	 384
static s32 ixgbe_update_flash_X540(struct ixgbe_hw *hw);
static s32 ixgbe_poll_flash_update_done_X540(struct ixgbe_hw *hw);
static s32 ixgbe_acquire_swfw_sync_X540(struct ixgbe_hw *hw, u16 mask);
static void ixgbe_release_swfw_sync_X540(struct ixgbe_hw *hw, u16 mask);
static s32 ixgbe_get_swfw_sync_semaphore(struct ixgbe_hw *hw);
static void ixgbe_release_swfw_sync_semaphore(struct ixgbe_hw *hw);
static enum ixgbe_media_type ixgbe_get_media_type_X540(struct ixgbe_hw *hw)
static s32 ixgbe_get_invariants_X540(struct ixgbe_hw *hw)
static s32 ixgbe_setup_mac_link_X540(struct ixgbe_hw *hw,
ixgbe_link_speed speed, bool autoneg,
bool autoneg_wait_to_complete)
static s32 ixgbe_reset_hw_X540(struct ixgbe_hw *hw)
static s32 ixgbe_start_hw_X540(struct ixgbe_hw *hw)
static u32 ixgbe_get_supported_physical_layer_X540(struct ixgbe_hw *hw)
static s32 ixgbe_init_eeprom_params_X540(struct ixgbe_hw *hw)
static s32 ixgbe_read_eerd_X540(struct ixgbe_hw *hw, u16 offset, u16 *data)
static s32 ixgbe_read_eerd_buffer_X540(struct ixgbe_hw *hw,
u16 offset, u16 words, u16 *data)
static s32 ixgbe_write_eewr_X540(struct ixgbe_hw *hw, u16 offset, u16 data)
static s32 ixgbe_write_eewr_buffer_X540(struct ixgbe_hw *hw,
u16 offset, u16 words, u16 *data)
static u16 ixgbe_calc_eeprom_checksum_X540(struct ixgbe_hw *hw)
static s32 ixgbe_validate_eeprom_checksum_X540(struct ixgbe_hw *hw,
u16 *checksum_val)
static s32 ixgbe_update_eeprom_checksum_X540(struct ixgbe_hw *hw)
static s32 ixgbe_update_flash_X540(struct ixgbe_hw *hw)
static s32 ixgbe_poll_flash_update_done_X540(struct ixgbe_hw *hw)
static s32 ixgbe_acquire_swfw_sync_X540(struct ixgbe_hw *hw, u16 mask)
static void ixgbe_release_swfw_sync_X540(struct ixgbe_hw *hw, u16 mask)
static s32 ixgbe_get_swfw_sync_semaphore(struct ixgbe_hw *hw)
static void ixgbe_release_swfw_sync_semaphore(struct ixgbe_hw *hw)
static s32 ixgbe_blink_led_start_X540(struct ixgbe_hw *hw, u32 index)
static s32 ixgbe_blink_led_stop_X540(struct ixgbe_hw *hw, u32 index)
static struct ixgbe_mac_operations mac_ops_X540 = ;
static struct ixgbe_eeprom_operations eeprom_ops_X540 = ;
static struct ixgbe_phy_operations phy_ops_X540 = ;
struct ixgbe_info ixgbe_X540_info = ;
