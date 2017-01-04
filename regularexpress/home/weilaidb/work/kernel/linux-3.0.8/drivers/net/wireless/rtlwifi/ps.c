bool rtl_ps_enable_nic(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl_ps_enable_nic);
bool rtl_ps_disable_nic(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl_ps_disable_nic);
bool rtl_ps_set_rf_state(struct ieee80211_hw *hw,
enum rf_pwrstate state_toset,
u32 changesource, bool protect_or_not)
EXPORT_SYMBOL(rtl_ps_set_rf_state);
static void _rtl_ps_inactive_ps(struct ieee80211_hw *hw)
void rtl_ips_nic_off_wq_callback(void *data)
void rtl_ips_nic_off(struct ieee80211_hw *hw)
void rtl_ips_nic_on(struct ieee80211_hw *hw)
static bool rtl_get_fwlps_doze(struct ieee80211_hw *hw)
static void rtl_lps_set_psmode(struct ieee80211_hw *hw, u8 rt_psmode)
void rtl_lps_enter(struct ieee80211_hw *hw)
void rtl_lps_leave(struct ieee80211_hw *hw)
void rtl_swlps_beacon(struct ieee80211_hw *hw, void *data, unsigned int len)
void rtl_swlps_rf_awake(struct ieee80211_hw *hw)
void rtl_swlps_rfon_wq_callback(void *data)
void rtl_swlps_rf_sleep(struct ieee80211_hw *hw)
void rtl_swlps_wq_callback(void *data)
