static const u32 sa2400_chan[] = ;
static void write_sa2400(struct ieee80211_hw *dev, u8 addr, u32 data)
static void sa2400_write_phy_antenna(struct ieee80211_hw *dev, short chan)
static u8 sa2400_rf_rssi_map[] = ;
static u8 sa2400_rf_calc_rssi(u8 agc, u8 sq)
static void sa2400_rf_set_channel(struct ieee80211_hw *dev,
struct ieee80211_conf *conf)
static void sa2400_rf_stop(struct ieee80211_hw *dev)
static void sa2400_rf_init(struct ieee80211_hw *dev)
const struct rtl818x_rf_ops sa2400_rf_ops = ;
