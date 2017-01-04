u32 rtl92cu_phy_query_rf_reg(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 regaddr, u32 bitmask)
void rtl92cu_phy_set_rf_reg(struct ieee80211_hw *hw,
enum radio_path rfpath,
u32 regaddr, u32 bitmask, u32 data)
bool rtl92cu_phy_mac_config(struct ieee80211_hw *hw)
bool rtl92cu_phy_bb_config(struct ieee80211_hw *hw)
bool _rtl92cu_phy_config_mac_with_headerfile(struct ieee80211_hw *hw)
bool _rtl92cu_phy_config_bb_with_headerfile(struct ieee80211_hw *hw,
u8 configtype)
bool _rtl92cu_phy_config_bb_with_pgheaderfile(struct ieee80211_hw *hw,
u8 configtype)
bool rtl92cu_phy_config_rf_with_headerfile(struct ieee80211_hw *hw,
enum radio_path rfpath)
void rtl92cu_phy_set_bw_mode_callback(struct ieee80211_hw *hw)
void rtl92cu_bb_block_on(struct ieee80211_hw *hw)
void _rtl92cu_phy_lc_calibrate(struct ieee80211_hw *hw, bool is2t)
static bool _rtl92cu_phy_set_rf_power_state(struct ieee80211_hw *hw,
enum rf_pwrstate rfpwr_state)
bool rtl92cu_phy_set_rf_power_state(struct ieee80211_hw *hw,
enum rf_pwrstate rfpwr_state)
