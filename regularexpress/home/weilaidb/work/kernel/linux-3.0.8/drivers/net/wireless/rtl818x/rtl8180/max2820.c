static const u32 max2820_chan[] = ;
static void write_max2820(struct ieee80211_hw *dev, u8 addr, u32 data)
static void max2820_write_phy_antenna(struct ieee80211_hw *dev, short chan)
static u8 max2820_rf_calc_rssi(u8 agc, u8 sq)
static void max2820_rf_set_channel(struct ieee80211_hw *dev,
struct ieee80211_conf *conf)
static void max2820_rf_stop(struct ieee80211_hw *dev)
static void max2820_rf_init(struct ieee80211_hw *dev)
const struct rtl818x_rf_ops max2820_rf_ops = ;
