#define ICH_FLASH_GFPREG		0x0000
#define ICH_FLASH_HSFSTS		0x0004
#define ICH_FLASH_HSFCTL		0x0006
#define ICH_FLASH_FADDR			0x0008
#define ICH_FLASH_FDATA0		0x0010
#define ICH_FLASH_PR0			0x0074
#define ICH_FLASH_READ_COMMAND_TIMEOUT	500
#define ICH_FLASH_WRITE_COMMAND_TIMEOUT	500
#define ICH_FLASH_ERASE_COMMAND_TIMEOUT	3000000
#define ICH_FLASH_LINEAR_ADDR_MASK	0x00FFFFFF
#define ICH_FLASH_CYCLE_REPEAT_COUNT	10
#define ICH_CYCLE_READ			0
#define ICH_CYCLE_WRITE			2
#define ICH_CYCLE_ERASE			3
#define FLASH_GFPREG_BASE_MASK		0x1FFF
#define FLASH_SECTOR_ADDR_SHIFT		12
#define ICH_FLASH_SEG_SIZE_256		256
#define ICH_FLASH_SEG_SIZE_4K		4096
#define ICH_FLASH_SEG_SIZE_8K		8192
#define ICH_FLASH_SEG_SIZE_64K		65536
#define E1000_ICH_FWSM_RSPCIPHY	0x00000040
#define E1000_ICH_FWSM_FW_VALID		0x00008000
#define E1000_ICH_MNG_IAMT_MODE		0x2
#define ID_LED_DEFAULT_ICH8LAN  ((ID_LED_DEF1_DEF2 << 12) | \
(ID_LED_DEF1_OFF2 <<  8) | \
(ID_LED_DEF1_ON2  <<  4) | \
(ID_LED_DEF1_DEF2))
#define E1000_ICH_NVM_SIG_WORD		0x13
#define E1000_ICH_NVM_SIG_MASK		0xC000
#define E1000_ICH_NVM_VALID_SIG_MASK    0xC0
#define E1000_ICH_NVM_SIG_VALUE         0x80
#define E1000_ICH8_LAN_INIT_TIMEOUT	1500
#define E1000_FEXTNVM_SW_CONFIG		1
#define E1000_FEXTNVM_SW_CONFIG_ICH8M (1 << 27)
#define E1000_FEXTNVM4_BEACON_DURATION_MASK    0x7
#define E1000_FEXTNVM4_BEACON_DURATION_8USEC   0x7
#define E1000_FEXTNVM4_BEACON_DURATION_16USEC  0x3
#define PCIE_ICH8_SNOOP_ALL		PCIE_NO_SNOOP_ALL
#define E1000_ICH_RAR_ENTRIES		7
#define PHY_PAGE_SHIFT 5
#define PHY_REG(page, reg) (((page) << PHY_PAGE_SHIFT) | \
((reg) & MAX_PHY_REG_ADDRESS))
#define IGP3_KMRN_DIAG  PHY_REG(770, 19)
#define IGP3_VR_CTRL    PHY_REG(776, 18)
#define IGP3_KMRN_DIAG_PCS_LOCK_LOSS	0x0002
#define IGP3_VR_CTRL_DEV_POWERDOWN_MODE_MASK 0x0300
#define IGP3_VR_CTRL_MODE_SHUTDOWN	0x0200
#define HV_LED_CONFIG		PHY_REG(768, 30)
#define SW_FLAG_TIMEOUT    1000
#define HV_SMB_ADDR            PHY_REG(768, 26)
#define HV_SMB_ADDR_MASK       0x007F
#define HV_SMB_ADDR_PEC_EN     0x0200
#define HV_SMB_ADDR_VALID      0x0080
#define HV_PM_CTRL		PHY_REG(770, 17)
#define I82579_LPI_CTRL				PHY_REG(772, 20)
#define I82579_LPI_CTRL_ENABLE_MASK		0x6000
#define I82579_LPI_CTRL_FORCE_PLL_LOCK_COUNT	0x80
#define I82579_EMI_ADDR         0x10
#define I82579_EMI_DATA         0x11
#define I82579_LPI_UPDATE_TIMER 0x4805
#define E1000_STRAP                     0x0000C
#define E1000_STRAP_SMBUS_ADDRESS_MASK  0x00FE0000
#define E1000_STRAP_SMBUS_ADDRESS_SHIFT 17
#define HV_OEM_BITS            PHY_REG(768, 25)
#define HV_OEM_BITS_LPLU       0x0004
#define HV_OEM_BITS_GBE_DIS    0x0040
#define HV_OEM_BITS_RESTART_AN 0x0400
#define E1000_NVM_K1_CONFIG 0x1B
#define E1000_NVM_K1_ENABLE 0x1
#define HV_KMRN_MODE_CTRL      PHY_REG(769, 16)
#define HV_KMRN_MDIO_SLOW      0x0400
union ich8_hws_flash_status ;
union ich8_hws_flash_ctrl ;
union ich8_hws_flash_regacc ;
union ich8_flash_protected_range ;
static s32 e1000_setup_link_ich8lan(struct e1000_hw *hw);
static void e1000_clear_hw_cntrs_ich8lan(struct e1000_hw *hw);
static void e1000_initialize_hw_bits_ich8lan(struct e1000_hw *hw);
static s32 e1000_erase_flash_bank_ich8lan(struct e1000_hw *hw, u32 bank);
static s32 e1000_retry_write_flash_byte_ich8lan(struct e1000_hw *hw,
u32 offset, u8 byte);
static s32 e1000_read_flash_byte_ich8lan(struct e1000_hw *hw, u32 offset,
u8 *data);
static s32 e1000_read_flash_word_ich8lan(struct e1000_hw *hw, u32 offset,
u16 *data);
static s32 e1000_read_flash_data_ich8lan(struct e1000_hw *hw, u32 offset,
u8 size, u16 *data);
static s32 e1000_setup_copper_link_ich8lan(struct e1000_hw *hw);
static s32 e1000_kmrn_lock_loss_workaround_ich8lan(struct e1000_hw *hw);
static s32 e1000_get_cfg_done_ich8lan(struct e1000_hw *hw);
static s32 e1000_cleanup_led_ich8lan(struct e1000_hw *hw);
static s32 e1000_led_on_ich8lan(struct e1000_hw *hw);
static s32 e1000_led_off_ich8lan(struct e1000_hw *hw);
static s32 e1000_id_led_init_pchlan(struct e1000_hw *hw);
static s32 e1000_setup_led_pchlan(struct e1000_hw *hw);
static s32 e1000_cleanup_led_pchlan(struct e1000_hw *hw);
static s32 e1000_led_on_pchlan(struct e1000_hw *hw);
static s32 e1000_led_off_pchlan(struct e1000_hw *hw);
static s32 e1000_set_lplu_state_pchlan(struct e1000_hw *hw, bool active);
static void e1000_power_down_phy_copper_ich8lan(struct e1000_hw *hw);
static void e1000_lan_init_done_ich8lan(struct e1000_hw *hw);
static s32  e1000_k1_gig_workaround_hv(struct e1000_hw *hw, bool link);
static s32 e1000_set_mdio_slow_mode_hv(struct e1000_hw *hw);
static bool e1000_check_mng_mode_ich8lan(struct e1000_hw *hw);
static bool e1000_check_mng_mode_pchlan(struct e1000_hw *hw);
static s32 e1000_k1_workaround_lv(struct e1000_hw *hw);
static void e1000_gate_hw_phy_config_ich8lan(struct e1000_hw *hw, bool gate);
static inline u16 __er16flash(struct e1000_hw *hw, unsigned long reg)
static inline u32 __er32flash(struct e1000_hw *hw, unsigned long reg)
static inline void __ew16flash(struct e1000_hw *hw, unsigned long reg, u16 val)
static inline void __ew32flash(struct e1000_hw *hw, unsigned long reg, u32 val)
#define er16flash(reg)		__er16flash(hw, (reg))
#define er32flash(reg)		__er32flash(hw, (reg))
#define ew16flash(reg,val)	__ew16flash(hw, (reg), (val))
#define ew32flash(reg,val)	__ew32flash(hw, (reg), (val))
static s32 e1000_init_phy_params_pchlan(struct e1000_hw *hw)
static s32 e1000_init_phy_params_ich8lan(struct e1000_hw *hw)
static s32 e1000_init_nvm_params_ich8lan(struct e1000_hw *hw)
static s32 e1000_init_mac_params_ich8lan(struct e1000_adapter *adapter)
static s32 e1000_set_eee_pchlan(struct e1000_hw *hw)
static s32 e1000_check_for_copper_link_ich8lan(struct e1000_hw *hw)
static s32 e1000_get_variants_ich8lan(struct e1000_adapter *adapter)
static DEFINE_MUTEX(nvm_mutex);
static s32 e1000_acquire_nvm_ich8lan(struct e1000_hw *hw)
static void e1000_release_nvm_ich8lan(struct e1000_hw *hw)
static DEFINE_MUTEX(swflag_mutex);
static s32 e1000_acquire_swflag_ich8lan(struct e1000_hw *hw)
static void e1000_release_swflag_ich8lan(struct e1000_hw *hw)
static bool e1000_check_mng_mode_ich8lan(struct e1000_hw *hw)
static bool e1000_check_mng_mode_pchlan(struct e1000_hw *hw)
static s32 e1000_check_reset_block_ich8lan(struct e1000_hw *hw)
static s32 e1000_write_smbus_addr(struct e1000_hw *hw)
static s32 e1000_sw_lcd_config_ich8lan(struct e1000_hw *hw)
static s32 e1000_k1_gig_workaround_hv(struct e1000_hw *hw, bool link)
s32 e1000_configure_k1_ich8lan(struct e1000_hw *hw, bool k1_enable)
static s32 e1000_oem_bits_config_ich8lan(struct e1000_hw *hw, bool d0_state)
static s32 e1000_set_mdio_slow_mode_hv(struct e1000_hw *hw)
static s32 e1000_hv_phy_workarounds_ich8lan(struct e1000_hw *hw)
void e1000_copy_rx_addrs_to_phy_ich8lan(struct e1000_hw *hw)
s32 e1000_lv_jumbo_workaround_ich8lan(struct e1000_hw *hw, bool enable)
static s32 e1000_lv_phy_workarounds_ich8lan(struct e1000_hw *hw)
static s32 e1000_k1_workaround_lv(struct e1000_hw *hw)
static void e1000_gate_hw_phy_config_ich8lan(struct e1000_hw *hw, bool gate)
static void e1000_lan_init_done_ich8lan(struct e1000_hw *hw)
static s32 e1000_post_phy_reset_ich8lan(struct e1000_hw *hw)
static s32 e1000_phy_hw_reset_ich8lan(struct e1000_hw *hw)
static s32 e1000_set_lplu_state_pchlan(struct e1000_hw *hw, bool active)
static s32 e1000_set_d0_lplu_state_ich8lan(struct e1000_hw *hw, bool active)
static s32 e1000_set_d3_lplu_state_ich8lan(struct e1000_hw *hw, bool active)
static s32 e1000_valid_nvm_bank_detect_ich8lan(struct e1000_hw *hw, u32 *bank)
static s32 e1000_read_nvm_ich8lan(struct e1000_hw *hw, u16 offset, u16 words,
u16 *data)
static s32 e1000_flash_cycle_init_ich8lan(struct e1000_hw *hw)
static s32 e1000_flash_cycle_ich8lan(struct e1000_hw *hw, u32 timeout)
static s32 e1000_read_flash_word_ich8lan(struct e1000_hw *hw, u32 offset,
u16 *data)
static s32 e1000_read_flash_byte_ich8lan(struct e1000_hw *hw, u32 offset,
u8 *data)
static s32 e1000_read_flash_data_ich8lan(struct e1000_hw *hw, u32 offset,
u8 size, u16 *data)
static s32 e1000_write_nvm_ich8lan(struct e1000_hw *hw, u16 offset, u16 words,
u16 *data)
static s32 e1000_update_nvm_checksum_ich8lan(struct e1000_hw *hw)
static s32 e1000_validate_nvm_checksum_ich8lan(struct e1000_hw *hw)
void e1000e_write_protect_nvm_ich8lan(struct e1000_hw *hw)
static s32 e1000_write_flash_data_ich8lan(struct e1000_hw *hw, u32 offset,
u8 size, u16 data)
static s32 e1000_write_flash_byte_ich8lan(struct e1000_hw *hw, u32 offset,
u8 data)
static s32 e1000_retry_write_flash_byte_ich8lan(struct e1000_hw *hw,
u32 offset, u8 byte)
static s32 e1000_erase_flash_bank_ich8lan(struct e1000_hw *hw, u32 bank)
static s32 e1000_valid_led_default_ich8lan(struct e1000_hw *hw, u16 *data)
static s32 e1000_id_led_init_pchlan(struct e1000_hw *hw)
static s32 e1000_get_bus_info_ich8lan(struct e1000_hw *hw)
static s32 e1000_reset_hw_ich8lan(struct e1000_hw *hw)
static s32 e1000_init_hw_ich8lan(struct e1000_hw *hw)
static void e1000_initialize_hw_bits_ich8lan(struct e1000_hw *hw)
static s32 e1000_setup_link_ich8lan(struct e1000_hw *hw)
static s32 e1000_setup_copper_link_ich8lan(struct e1000_hw *hw)
static s32 e1000_get_link_up_info_ich8lan(struct e1000_hw *hw, u16 *speed,
u16 *duplex)
static s32 e1000_kmrn_lock_loss_workaround_ich8lan(struct e1000_hw *hw)
void e1000e_set_kmrn_lock_loss_workaround_ich8lan(struct e1000_hw *hw,
bool state)
void e1000e_igp3_phy_powerdown_workaround_ich8lan(struct e1000_hw *hw)
void e1000e_gig_downshift_workaround_ich8lan(struct e1000_hw *hw)
void e1000e_disable_gig_wol_ich8lan(struct e1000_hw *hw)
static s32 e1000_cleanup_led_ich8lan(struct e1000_hw *hw)
static s32 e1000_led_on_ich8lan(struct e1000_hw *hw)
static s32 e1000_led_off_ich8lan(struct e1000_hw *hw)
static s32 e1000_setup_led_pchlan(struct e1000_hw *hw)
static s32 e1000_cleanup_led_pchlan(struct e1000_hw *hw)
static s32 e1000_led_on_pchlan(struct e1000_hw *hw)
static s32 e1000_led_off_pchlan(struct e1000_hw *hw)
static s32 e1000_get_cfg_done_ich8lan(struct e1000_hw *hw)
static void e1000_power_down_phy_copper_ich8lan(struct e1000_hw *hw)
static void e1000_clear_hw_cntrs_ich8lan(struct e1000_hw *hw)
static struct e1000_mac_operations ich8_mac_ops = ;
static struct e1000_phy_operations ich8_phy_ops = ;
static struct e1000_nvm_operations ich8_nvm_ops = ;
struct e1000_info e1000_ich8_info = ;
struct e1000_info e1000_ich9_info = ;
struct e1000_info e1000_ich10_info = ;
struct e1000_info e1000_pch_info = ;
struct e1000_info e1000_pch2_info = ;
