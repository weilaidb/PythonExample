static void _rtl92s_get_powerbase(struct ieee80211_hw *hw, u8 *p_pwrlevel,
u8 chnl, u32 *ofdmbase, u32 *mcsbase,
u8 *p_final_pwridx)
static void _rtl92s_set_antennadiff(struct ieee80211_hw *hw,
u8 *p_final_pwridx)
static void _rtl92s_get_txpower_writeval_byregulatory(struct ieee80211_hw *hw,
u8 chnl, u8 index,
u32 pwrbase0,
u32 pwrbase1,
u32 *p_outwrite_val)
static void _rtl92s_write_ofdm_powerreg(struct ieee80211_hw *hw,
u8 index, u32 val)
void rtl92s_phy_rf6052_set_ofdmtxpower(struct ieee80211_hw *hw,
u8 *p_pwrlevel, u8 chnl)
void rtl92s_phy_rf6052_set_ccktxpower(struct ieee80211_hw *hw, u8 pwrlevel)
bool rtl92s_phy_rf6052_config(struct ieee80211_hw *hw)
void rtl92s_phy_rf6052_set_bandwidth(struct ieee80211_hw *hw, u8 bandwidth)
