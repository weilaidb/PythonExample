#define __RTL92CE_SW_H__
int rtl92c_init_sw_vars(struct ieee80211_hw *hw);
void rtl92c_deinit_sw_vars(struct ieee80211_hw *hw);
void rtl92c_init_var_map(struct ieee80211_hw *hw);
bool _rtl92ce_phy_config_bb_with_headerfile(struct ieee80211_hw *hw,
u8 configtype);
bool _rtl92ce_phy_config_bb_with_pgheaderfile(struct ieee80211_hw *hw,
u8 configtype);
