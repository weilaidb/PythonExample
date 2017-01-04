#define IXGBE_82599_MAX_TX_QUEUES 128
#define IXGBE_82599_MAX_RX_QUEUES 128
#define IXGBE_82599_RAR_ENTRIES   128
#define IXGBE_82599_MC_TBL_SIZE   128
#define IXGBE_82599_VFT_TBL_SIZE  128
#define IXGBE_82599_RX_PB_SIZE	  512
static void ixgbe_disable_tx_laser_multispeed_fiber(struct ixgbe_hw *hw);
static void ixgbe_enable_tx_laser_multispeed_fiber(struct ixgbe_hw *hw);
static void ixgbe_flap_tx_laser_multispeed_fiber(struct ixgbe_hw *hw);
static s32 ixgbe_setup_mac_link_multispeed_fiber(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete);
static s32 ixgbe_setup_mac_link_smartspeed(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete);
static s32 ixgbe_start_mac_link_82599(struct ixgbe_hw *hw,
bool autoneg_wait_to_complete);
static s32 ixgbe_setup_mac_link_82599(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete);
static s32 ixgbe_setup_copper_link_82599(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete);
static s32 ixgbe_verify_fw_version_82599(struct ixgbe_hw *hw);
static bool ixgbe_verify_lesm_fw_enabled_82599(struct ixgbe_hw *hw);
static void ixgbe_init_mac_link_ops_82599(struct ixgbe_hw *hw)
static s32 ixgbe_setup_sfp_modules_82599(struct ixgbe_hw *hw)
static s32 ixgbe_get_invariants_82599(struct ixgbe_hw *hw)
static s32 ixgbe_init_phy_ops_82599(struct ixgbe_hw *hw)
static s32 ixgbe_get_link_capabilities_82599(struct ixgbe_hw *hw,
ixgbe_link_speed *speed,
bool *negotiation)
static enum ixgbe_media_type ixgbe_get_media_type_82599(struct ixgbe_hw *hw)
static s32 ixgbe_start_mac_link_82599(struct ixgbe_hw *hw,
bool autoneg_wait_to_complete)
static void ixgbe_disable_tx_laser_multispeed_fiber(struct ixgbe_hw *hw)
static void ixgbe_enable_tx_laser_multispeed_fiber(struct ixgbe_hw *hw)
static void ixgbe_flap_tx_laser_multispeed_fiber(struct ixgbe_hw *hw)
static s32 ixgbe_setup_mac_link_multispeed_fiber(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete)
static s32 ixgbe_setup_mac_link_smartspeed(struct ixgbe_hw *hw,
ixgbe_link_speed speed, bool autoneg,
bool autoneg_wait_to_complete)
static s32 ixgbe_setup_mac_link_82599(struct ixgbe_hw *hw,
ixgbe_link_speed speed, bool autoneg,
bool autoneg_wait_to_complete)
static s32 ixgbe_setup_copper_link_82599(struct ixgbe_hw *hw,
ixgbe_link_speed speed,
bool autoneg,
bool autoneg_wait_to_complete)
static s32 ixgbe_reset_hw_82599(struct ixgbe_hw *hw)
s32 ixgbe_reinit_fdir_tables_82599(struct ixgbe_hw *hw)
s32 ixgbe_init_fdir_signature_82599(struct ixgbe_hw *hw, u32 pballoc)
s32 ixgbe_init_fdir_perfect_82599(struct ixgbe_hw *hw, u32 pballoc)
static u32 ixgbe_atr_compute_hash_82599(union ixgbe_atr_input *atr_input,
u32 key)
#define IXGBE_ATR_COMMON_HASH_KEY \
(IXGBE_ATR_BUCKET_HASH_KEY & IXGBE_ATR_SIGNATURE_HASH_KEY)
#define IXGBE_COMPUTE_SIG_HASH_ITERATION(_n) \
do  while (0);
static u32 ixgbe_atr_compute_sig_hash_82599(union ixgbe_atr_hash_dword input,
union ixgbe_atr_hash_dword common)
s32 ixgbe_fdir_add_signature_filter_82599(struct ixgbe_hw *hw,
union ixgbe_atr_hash_dword input,
union ixgbe_atr_hash_dword common,
u8 queue)
static u32 ixgbe_get_fdirtcpm_82599(struct ixgbe_atr_input_masks *input_masks)
#define IXGBE_STORE_AS_BE32(_value) \
(((u32)(_value) >> 24) | (((u32)(_value) & 0x00FF0000) >> 8) | \
(((u32)(_value) & 0x0000FF00) << 8) | ((u32)(_value) << 24))
#define IXGBE_WRITE_REG_BE32(a, reg, value) \
IXGBE_WRITE_REG((a), (reg), IXGBE_STORE_AS_BE32(ntohl(value)))
#define IXGBE_STORE_AS_BE16(_value) \
(((u16)(_value) >> 8) | ((u16)(_value) << 8))
s32 ixgbe_fdir_add_perfect_filter_82599(struct ixgbe_hw *hw,
union ixgbe_atr_input *input,
struct ixgbe_atr_input_masks *input_masks,
u16 soft_id, u8 queue)
static s32 ixgbe_read_analog_reg8_82599(struct ixgbe_hw *hw, u32 reg, u8 *val)
static s32 ixgbe_write_analog_reg8_82599(struct ixgbe_hw *hw, u32 reg, u8 val)
static s32 ixgbe_start_hw_82599(struct ixgbe_hw *hw)
static s32 ixgbe_identify_phy_82599(struct ixgbe_hw *hw)
static u32 ixgbe_get_supported_physical_layer_82599(struct ixgbe_hw *hw)
static s32 ixgbe_enable_rx_dma_82599(struct ixgbe_hw *hw, u32 regval)
static s32 ixgbe_verify_fw_version_82599(struct ixgbe_hw *hw)
static bool ixgbe_verify_lesm_fw_enabled_82599(struct ixgbe_hw *hw)
static s32 ixgbe_read_eeprom_buffer_82599(struct ixgbe_hw *hw, u16 offset,
u16 words, u16 *data)
static s32 ixgbe_read_eeprom_82599(struct ixgbe_hw *hw,
u16 offset, u16 *data)
static struct ixgbe_mac_operations mac_ops_82599 = ;
static struct ixgbe_eeprom_operations eeprom_ops_82599 = ;
static struct ixgbe_phy_operations phy_ops_82599 = ;
struct ixgbe_info ixgbe_82599_info = ;
