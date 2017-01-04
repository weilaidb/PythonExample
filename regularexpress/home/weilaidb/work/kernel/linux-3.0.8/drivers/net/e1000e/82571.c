#define ID_LED_RESERVED_F746 0xF746
#define ID_LED_DEFAULT_82573 ((ID_LED_DEF1_DEF2 << 12) | \
(ID_LED_OFF1_ON2  <<  8) | \
(ID_LED_DEF1_DEF2 <<  4) | \
(ID_LED_DEF1_DEF2))
#define E1000_GCR_L1_ACT_WITHOUT_L0S_RX 0x08000000
#define AN_RETRY_COUNT          5
#define E1000_BASE1000T_STATUS          10
#define E1000_IDLE_ERROR_COUNT_MASK     0xFF
#define E1000_RECEIVE_ERROR_COUNTER     21
#define E1000_RECEIVE_ERROR_MAX         0xFFFF
#define E1000_NVM_INIT_CTRL2_MNGM 0x6000
static s32 e1000_get_phy_id_82571(struct e1000_hw *hw);
static s32 e1000_setup_copper_link_82571(struct e1000_hw *hw);
static s32 e1000_setup_fiber_serdes_link_82571(struct e1000_hw *hw);
static s32 e1000_check_for_serdes_link_82571(struct e1000_hw *hw);
static s32 e1000_write_nvm_eewr_82571(struct e1000_hw *hw, u16 offset,
u16 words, u16 *data);
static s32 e1000_fix_nvm_checksum_82571(struct e1000_hw *hw);
static void e1000_initialize_hw_bits_82571(struct e1000_hw *hw);
static s32 e1000_setup_link_82571(struct e1000_hw *hw);
static void e1000_clear_hw_cntrs_82571(struct e1000_hw *hw);
static void e1000_clear_vfta_82571(struct e1000_hw *hw);
static bool e1000_check_mng_mode_82574(struct e1000_hw *hw);
static s32 e1000_led_on_82574(struct e1000_hw *hw);
static void e1000_put_hw_semaphore_82571(struct e1000_hw *hw);
static void e1000_power_down_phy_copper_82571(struct e1000_hw *hw);
static void e1000_put_hw_semaphore_82573(struct e1000_hw *hw);
static s32 e1000_get_hw_semaphore_82574(struct e1000_hw *hw);
static void e1000_put_hw_semaphore_82574(struct e1000_hw *hw);
static s32 e1000_set_d0_lplu_state_82574(struct e1000_hw *hw, bool active);
static s32 e1000_set_d3_lplu_state_82574(struct e1000_hw *hw, bool active);
static s32 e1000_init_phy_params_82571(struct e1000_hw *hw)
static s32 e1000_init_nvm_params_82571(struct e1000_hw *hw)
static s32 e1000_init_mac_params_82571(struct e1000_adapter *adapter)
static s32 e1000_get_variants_82571(struct e1000_adapter *adapter)
static s32 e1000_get_phy_id_82571(struct e1000_hw *hw)
static s32 e1000_get_hw_semaphore_82571(struct e1000_hw *hw)
static void e1000_put_hw_semaphore_82571(struct e1000_hw *hw)
static s32 e1000_get_hw_semaphore_82573(struct e1000_hw *hw)
static void e1000_put_hw_semaphore_82573(struct e1000_hw *hw)
static DEFINE_MUTEX(swflag_mutex);
static s32 e1000_get_hw_semaphore_82574(struct e1000_hw *hw)
static void e1000_put_hw_semaphore_82574(struct e1000_hw *hw)
static s32 e1000_set_d0_lplu_state_82574(struct e1000_hw *hw, bool active)
static s32 e1000_set_d3_lplu_state_82574(struct e1000_hw *hw, bool active)
static s32 e1000_acquire_nvm_82571(struct e1000_hw *hw)
static void e1000_release_nvm_82571(struct e1000_hw *hw)
static s32 e1000_write_nvm_82571(struct e1000_hw *hw, u16 offset, u16 words,
u16 *data)
static s32 e1000_update_nvm_checksum_82571(struct e1000_hw *hw)
static s32 e1000_validate_nvm_checksum_82571(struct e1000_hw *hw)
static s32 e1000_write_nvm_eewr_82571(struct e1000_hw *hw, u16 offset,
u16 words, u16 *data)
static s32 e1000_get_cfg_done_82571(struct e1000_hw *hw)
static s32 e1000_set_d0_lplu_state_82571(struct e1000_hw *hw, bool active)
static s32 e1000_reset_hw_82571(struct e1000_hw *hw)
static s32 e1000_init_hw_82571(struct e1000_hw *hw)
static void e1000_initialize_hw_bits_82571(struct e1000_hw *hw)
static void e1000_clear_vfta_82571(struct e1000_hw *hw)
static bool e1000_check_mng_mode_82574(struct e1000_hw *hw)
static s32 e1000_led_on_82574(struct e1000_hw *hw)
bool e1000_check_phy_82574(struct e1000_hw *hw)
static s32 e1000_setup_link_82571(struct e1000_hw *hw)
static s32 e1000_setup_copper_link_82571(struct e1000_hw *hw)
static s32 e1000_setup_fiber_serdes_link_82571(struct e1000_hw *hw)
static s32 e1000_check_for_serdes_link_82571(struct e1000_hw *hw)
static s32 e1000_valid_led_default_82571(struct e1000_hw *hw, u16 *data)
bool e1000e_get_laa_state_82571(struct e1000_hw *hw)
void e1000e_set_laa_state_82571(struct e1000_hw *hw, bool state)
static s32 e1000_fix_nvm_checksum_82571(struct e1000_hw *hw)
static s32 e1000_read_mac_addr_82571(struct e1000_hw *hw)
static void e1000_power_down_phy_copper_82571(struct e1000_hw *hw)
static void e1000_clear_hw_cntrs_82571(struct e1000_hw *hw)
static struct e1000_mac_operations e82571_mac_ops = ;
static struct e1000_phy_operations e82_phy_ops_igp = ;
static struct e1000_phy_operations e82_phy_ops_m88 = ;
static struct e1000_phy_operations e82_phy_ops_bm = ;
static struct e1000_nvm_operations e82571_nvm_ops = ;
struct e1000_info e1000_82571_info = ;
struct e1000_info e1000_82572_info = ;
struct e1000_info e1000_82573_info = ;
struct e1000_info e1000_82574_info = ;
struct e1000_info e1000_82583_info = ;
