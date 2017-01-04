static void _rtl92cu_phy_param_tab_init(struct ieee80211_hw *hw)
static void _rtl92cu_read_txpower_info_from_hwpg(struct ieee80211_hw *hw,
bool autoload_fail,
u8 *hwinfo)
static void _rtl92cu_read_board_type(struct ieee80211_hw *hw, u8 *contents)
static void _update_bt_param(_adapter *padapter)
#define GET_BT_COEXIST(priv) (&priv->bt_coexist)
static void _rtl92cu_read_bluetooth_coexistInfo(struct ieee80211_hw *hw,
u8 *contents,
bool bautoloadfailed);
static void _rtl92cu_read_adapter_info(struct ieee80211_hw *hw)
static void _rtl92cu_hal_customized_behavior(struct ieee80211_hw *hw)
void rtl92cu_read_eeprom_info(struct ieee80211_hw *hw)
static int _rtl92cu_init_power_on(struct ieee80211_hw *hw)
static void _rtl92cu_init_queue_reserved_page(struct ieee80211_hw *hw,
bool wmm_enable,
u8 out_ep_num,
u8 queue_sel)
static void _rtl92c_init_trx_buffer(struct ieee80211_hw *hw, bool wmm_enable)
static void _rtl92c_init_chipN_reg_priority(struct ieee80211_hw *hw, u16 beQ,
u16 bkQ, u16 viQ, u16 voQ,
u16 mgtQ, u16 hiQ)
static void _rtl92cu_init_chipN_one_out_ep_priority(struct ieee80211_hw *hw,
bool wmm_enable,
u8 queue_sel)
static void _rtl92cu_init_chipN_two_out_ep_priority(struct ieee80211_hw *hw,
bool wmm_enable,
u8 queue_sel)
static void _rtl92cu_init_chipN_three_out_ep_priority(struct ieee80211_hw *hw,
bool wmm_enable,
u8 queue_sel)
static void _rtl92cu_init_chipN_queue_priority(struct ieee80211_hw *hw,
bool wmm_enable,
u8 out_ep_num,
u8 queue_sel)
static void _rtl92cu_init_chipT_queue_priority(struct ieee80211_hw *hw,
bool wmm_enable,
u8 out_ep_num,
u8 queue_sel)
static void _rtl92cu_init_queue_priority(struct ieee80211_hw *hw,
bool wmm_enable,
u8 out_ep_num,
u8 queue_sel)
static void _rtl92cu_init_usb_aggregation(struct ieee80211_hw *hw)
static void _rtl92cu_init_wmac_setting(struct ieee80211_hw *hw)
static int _rtl92cu_init_mac(struct ieee80211_hw *hw)
void rtl92cu_enable_hw_security_config(struct ieee80211_hw *hw)
static void _rtl92cu_hw_configure(struct ieee80211_hw *hw)
static void _InitPABias(struct ieee80211_hw *hw)
static void _InitAntenna_Selection(struct ieee80211_hw *hw)
static void _dump_registers(struct ieee80211_hw *hw)
static void _update_mac_setting(struct ieee80211_hw *hw)
int rtl92cu_hw_init(struct ieee80211_hw *hw)
static void _DisableRFAFEAndResetBB(struct ieee80211_hw *hw)
static void  _ResetDigitalProcedure1(struct ieee80211_hw *hw, bool bWithoutHWSM)
static void _ResetDigitalProcedure2(struct ieee80211_hw *hw)
static void _DisableGPIO(struct ieee80211_hw *hw)
static void _DisableAnalog(struct ieee80211_hw *hw, bool bWithoutHWSM)
static void _CardDisableHWSM(struct ieee80211_hw *hw)
static void _CardDisableWithoutHWSM(struct ieee80211_hw *hw)
static void _rtl92cu_set_bcn_ctrl_reg(struct ieee80211_hw *hw,
u8 set_bits, u8 clear_bits)
static void _rtl92cu_stop_tx_beacon(struct ieee80211_hw *hw)
static void _rtl92cu_resume_tx_beacon(struct ieee80211_hw *hw)
static void _rtl92cu_enable_bcn_sub_func(struct ieee80211_hw *hw)
static void _rtl92cu_disable_bcn_sub_func(struct ieee80211_hw *hw)
static int _rtl92cu_set_media_status(struct ieee80211_hw *hw,
enum nl80211_iftype type)
void rtl92cu_card_disable(struct ieee80211_hw *hw)
void rtl92cu_set_check_bssid(struct ieee80211_hw *hw, bool check_bssid)
static void _rtl92cu_set_check_bssid(struct ieee80211_hw *hw,
enum nl80211_iftype type)
int rtl92cu_set_network_type(struct ieee80211_hw *hw, enum nl80211_iftype type)
static void _InitBeaconParameters(struct ieee80211_hw *hw)
static void _beacon_function_enable(struct ieee80211_hw *hw, bool Enable,
bool Linked)
void rtl92cu_set_beacon_related_registers(struct ieee80211_hw *hw)
void rtl92cu_set_beacon_interval(struct ieee80211_hw *hw)
void rtl92cu_update_interrupt_mask(struct ieee80211_hw *hw,
u32 add_msr, u32 rm_msr)
void rtl92cu_get_hw_reg(struct ieee80211_hw *hw, u8 variable, u8 *val)
void rtl92cu_set_hw_reg(struct ieee80211_hw *hw, u8 variable, u8 *val)
void rtl92cu_update_hal_rate_table(struct ieee80211_hw *hw,
struct ieee80211_sta *sta,
u8 rssi_level)
void rtl92cu_update_hal_rate_mask(struct ieee80211_hw *hw, u8 rssi_level)
void rtl92cu_update_channel_access_setting(struct ieee80211_hw *hw)
bool rtl92cu_gpio_radio_on_off_checking(struct ieee80211_hw *hw, u8 * valid)
