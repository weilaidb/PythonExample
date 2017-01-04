#define LLT_CONFIG	5
static void _rtl92ce_set_bcn_ctrl_reg(struct ieee80211_hw *hw,
u8 set_bits, u8 clear_bits)
static void _rtl92ce_stop_tx_beacon(struct ieee80211_hw *hw)
static void _rtl92ce_resume_tx_beacon(struct ieee80211_hw *hw)
static void _rtl92ce_enable_bcn_sub_func(struct ieee80211_hw *hw)
static void _rtl92ce_disable_bcn_sub_func(struct ieee80211_hw *hw)
void rtl92ce_get_hw_reg(struct ieee80211_hw *hw, u8 variable, u8 *val)
void rtl92ce_set_hw_reg(struct ieee80211_hw *hw, u8 variable, u8 *val)
static bool _rtl92ce_llt_write(struct ieee80211_hw *hw, u32 address, u32 data)
static bool _rtl92ce_llt_table_init(struct ieee80211_hw *hw)
static void _rtl92ce_gen_refresh_led_state(struct ieee80211_hw *hw)
static bool _rtl92ce_init_mac(struct ieee80211_hw *hw)
static void _rtl92ce_hw_configure(struct ieee80211_hw *hw)
static void _rtl92ce_enable_aspm_back_door(struct ieee80211_hw *hw)
void rtl92ce_enable_hw_security_config(struct ieee80211_hw *hw)
int rtl92ce_hw_init(struct ieee80211_hw *hw)
static enum version_8192c _rtl92ce_read_chip_version(struct ieee80211_hw *hw)
static int _rtl92ce_set_media_status(struct ieee80211_hw *hw,
enum nl80211_iftype type)
void rtl92ce_set_check_bssid(struct ieee80211_hw *hw, bool check_bssid)
int rtl92ce_set_network_type(struct ieee80211_hw *hw, enum nl80211_iftype type)
void rtl92ce_set_qos(struct ieee80211_hw *hw, int aci)
void rtl92ce_enable_interrupt(struct ieee80211_hw *hw)
void rtl92ce_disable_interrupt(struct ieee80211_hw *hw)
static void _rtl92ce_poweroff_adapter(struct ieee80211_hw *hw)
void rtl92ce_card_disable(struct ieee80211_hw *hw)
void rtl92ce_interrupt_recognized(struct ieee80211_hw *hw,
u32 *p_inta, u32 *p_intb)
void rtl92ce_set_beacon_related_registers(struct ieee80211_hw *hw)
void rtl92ce_set_beacon_interval(struct ieee80211_hw *hw)
void rtl92ce_update_interrupt_mask(struct ieee80211_hw *hw,
u32 add_msr, u32 rm_msr)
static void _rtl92ce_read_txpower_info_from_hwpg(struct ieee80211_hw *hw,
bool autoload_fail,
u8 *hwinfo)
static void _rtl92ce_read_adapter_info(struct ieee80211_hw *hw)
static void _rtl92ce_hal_customized_behavior(struct ieee80211_hw *hw)
void rtl92ce_read_eeprom_info(struct ieee80211_hw *hw)
static void rtl92ce_update_hal_rate_table(struct ieee80211_hw *hw,
struct ieee80211_sta *sta)
static void rtl92ce_update_hal_rate_mask(struct ieee80211_hw *hw,
struct ieee80211_sta *sta, u8 rssi_level)
void rtl92ce_update_hal_rate_tbl(struct ieee80211_hw *hw,
struct ieee80211_sta *sta, u8 rssi_level)
void rtl92ce_update_channel_access_setting(struct ieee80211_hw *hw)
bool rtl92ce_gpio_radio_on_off_checking(struct ieee80211_hw *hw, u8 *valid)
void rtl92ce_set_key(struct ieee80211_hw *hw, u32 key_index,
u8 *p_macaddr, bool is_group, u8 enc_algo,
bool is_wepkey, bool clear_all)
static void rtl8192ce_bt_var_init(struct ieee80211_hw *hw)
void rtl8192ce_read_bt_coexist_info_from_hwpg(struct ieee80211_hw *hw,
bool auto_load_fail, u8 *hwinfo)
void rtl8192ce_bt_reg_init(struct ieee80211_hw *hw)
void rtl8192ce_bt_hw_init(struct ieee80211_hw *hw)
void rtl92ce_suspend(struct ieee80211_hw *hw)
void rtl92ce_resume(struct ieee80211_hw *hw)
