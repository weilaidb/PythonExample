#define __REALTEK_PCI92SE_SW_H__
#define EFUSE_MAX_SECTION	16
int rtl92se_init_sw(struct ieee80211_hw *hw);
void rtl92se_deinit_sw(struct ieee80211_hw *hw);
void rtl92se_init_var_map(struct ieee80211_hw *hw);
