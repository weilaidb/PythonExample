struct dig_t dm_digtable;
static struct ps_t dm_pstable;
#define BT_RSSI_STATE_NORMAL_POWER	BIT_OFFSET_LEN_MASK_32(0, 1)
#define BT_RSSI_STATE_AMDPU_OFF		BIT_OFFSET_LEN_MASK_32(1, 1)
#define BT_RSSI_STATE_SPECIAL_LOW	BIT_OFFSET_LEN_MASK_32(2, 1)
#define BT_RSSI_STATE_BG_EDCA_LOW	BIT_OFFSET_LEN_MASK_32(3, 1)
#define BT_RSSI_STATE_TXPOWER_LOW	BIT_OFFSET_LEN_MASK_32(4, 1)
#define RTLPRIV			(struct rtl_priv *)
#define GET_UNDECORATED_AVERAGE_RSSI(_priv)	\
((RTLPRIV(_priv))->mac80211.opmode == \
NL80211_IFTYPE_ADHOC) ?	\
((RTLPRIV(_priv))->dm.entry_min_undecoratedsmoothed_pwdb) : \
((RTLPRIV(_priv))->dm.undecorated_smoothed_pwdb)
static const u32 ofdmswing_table[OFDM_TABLE_SIZE] = ;
static const u8 cckswing_table_ch1ch13[CCK_TABLE_SIZE][8] = ;
static const u8 cckswing_table_ch14[CCK_TABLE_SIZE][8] = ;
static void rtl92c_dm_diginit(struct ieee80211_hw *hw)
static u8 rtl92c_dm_initial_gain_min_pwdb(struct ieee80211_hw *hw)
static void rtl92c_dm_false_alarm_counter_statistics(struct ieee80211_hw *hw)
static void rtl92c_dm_ctrl_initgain_by_fa(struct ieee80211_hw *hw)
static void rtl92c_dm_ctrl_initgain_by_rssi(struct ieee80211_hw *hw)
static void rtl92c_dm_initial_gain_multi_sta(struct ieee80211_hw *hw)
static void rtl92c_dm_initial_gain_sta(struct ieee80211_hw *hw)
static void rtl92c_dm_cck_packet_detection_thresh(struct ieee80211_hw *hw)
static void rtl92c_dm_ctrl_initgain_by_twoport(struct ieee80211_hw *hw)
static void rtl92c_dm_dig(struct ieee80211_hw *hw)
static void rtl92c_dm_init_dynamic_txpower(struct ieee80211_hw *hw)
void rtl92c_dm_write_dig(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_dm_write_dig);
static void rtl92c_dm_pwdb_monitor(struct ieee80211_hw *hw)
void rtl92c_dm_init_edca_turbo(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_dm_init_edca_turbo);
static void rtl92c_dm_check_edca_turbo(struct ieee80211_hw *hw)
static void rtl92c_dm_txpower_tracking_callback_thermalmeter(struct ieee80211_hw
*hw)
static void rtl92c_dm_initialize_txpower_tracking_thermalmeter(
struct ieee80211_hw *hw)
static void rtl92c_dm_initialize_txpower_tracking(struct ieee80211_hw *hw)
static void rtl92c_dm_txpower_tracking_directcall(struct ieee80211_hw *hw)
static void rtl92c_dm_check_txpower_tracking_thermal_meter(
struct ieee80211_hw *hw)
void rtl92c_dm_check_txpower_tracking(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_dm_check_txpower_tracking);
void rtl92c_dm_init_rate_adaptive_mask(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_dm_init_rate_adaptive_mask);
static void rtl92c_dm_refresh_rate_adaptive_mask(struct ieee80211_hw *hw)
static void rtl92c_dm_init_dynamic_bb_powersaving(struct ieee80211_hw *hw)
void rtl92c_dm_rf_saving(struct ieee80211_hw *hw, u8 bforce_in_normal)
EXPORT_SYMBOL(rtl92c_dm_rf_saving);
static void rtl92c_dm_dynamic_bb_powersaving(struct ieee80211_hw *hw)
void rtl92c_dm_init(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_dm_init);
void rtl92c_dm_dynamic_txpower(struct ieee80211_hw *hw)
void rtl92c_dm_watchdog(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_dm_watchdog);
u8 rtl92c_bt_rssi_state_change(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_bt_rssi_state_change);
static bool rtl92c_bt_state_change(struct ieee80211_hw *hw)
static bool rtl92c_bt_wifi_connect_change(struct ieee80211_hw *hw)
static void rtl92c_bt_set_normal(struct ieee80211_hw *hw)
static void rtl92c_bt_ant_isolation(struct ieee80211_hw *hw)
static void rtl92c_check_bt_change(struct ieee80211_hw *hw)
void rtl92c_dm_bt_coexist(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl92c_dm_bt_coexist);
