static bool _rtl92ce_phy_rf6052_config_parafile(struct ieee80211_hw *hw);
void rtl92ce_phy_rf6052_set_bandwidth(struct ieee80211_hw *hw, u8 bandwidth)
void rtl92ce_phy_rf6052_set_cck_txpower(struct ieee80211_hw *hw,
u8 *ppowerlevel)
static void rtl92c_phy_get_power_base(struct ieee80211_hw *hw,
u8 *ppowerlevel, u8 channel,
u32 *ofdmbase, u32 *mcsbase)
static void _rtl92c_get_txpower_writeval_by_regulatory(struct ieee80211_hw *hw,
u8 channel, u8 index,
u32 *powerBase0,
u32 *powerBase1,
u32 *p_outwriteval)
static void _rtl92c_write_ofdm_power_reg(struct ieee80211_hw *hw,
u8 index, u32 *pValue)
void rtl92ce_phy_rf6052_set_ofdm_txpower(struct ieee80211_hw *hw,
u8 *ppowerlevel, u8 channel)
bool rtl92ce_phy_rf6052_config(struct ieee80211_hw *hw)
static bool _rtl92ce_phy_rf6052_config_parafile(struct ieee80211_hw *hw)
