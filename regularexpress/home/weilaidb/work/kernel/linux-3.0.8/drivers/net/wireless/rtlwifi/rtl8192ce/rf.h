#define __RTL92C_RF_H__
#define RF6052_MAX_TX_PWR		0x3F
#define RF6052_MAX_REG			0x3F
#define RF6052_MAX_PATH			2
extern void rtl92ce_phy_rf6052_set_bandwidth(struct ieee80211_hw *hw,
u8 bandwidth);
extern void rtl92ce_phy_rf6052_set_cck_txpower(struct ieee80211_hw *hw,
u8 *ppowerlevel);
extern void rtl92ce_phy_rf6052_set_ofdm_txpower(struct ieee80211_hw *hw,
u8 *ppowerlevel, u8 channel);
extern bool rtl92ce_phy_rf6052_config(struct ieee80211_hw *hw);
