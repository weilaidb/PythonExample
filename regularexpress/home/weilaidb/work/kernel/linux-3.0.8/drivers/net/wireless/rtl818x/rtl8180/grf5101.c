static const int grf5101_encode[] = ;
static void write_grf5101(struct ieee80211_hw *dev, u8 addr, u32 data)
static void grf5101_write_phy_antenna(struct ieee80211_hw *dev, short chan)
static u8 grf5101_rf_calc_rssi(u8 agc, u8 sq)
static void grf5101_rf_set_channel(struct ieee80211_hw *dev,
struct ieee80211_conf *conf)
static void grf5101_rf_stop(struct ieee80211_hw *dev)
static void grf5101_rf_init(struct ieee80211_hw *dev)
const struct rtl818x_rf_ops grf5101_rf_ops = ;
