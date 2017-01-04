static void rtl8225_write_bitbang(struct ieee80211_hw *dev, u8 addr, u16 data)
static void rtl8225_write_8051(struct ieee80211_hw *dev, u8 addr, __le16 data)
static void rtl8225_write(struct ieee80211_hw *dev, u8 addr, u16 data)
static u16 rtl8225_read(struct ieee80211_hw *dev, u8 addr)
static const u16 rtl8225bcd_rxgain[] = ;
static const u8 rtl8225_agc[] = ;
static const u8 rtl8225_gain[] = ;
static const u8 rtl8225_threshold[] = ;
static const u8 rtl8225_tx_gain_cck_ofdm[] = ;
static const u8 rtl8225_tx_power_cck[] = ;
static const u8 rtl8225_tx_power_cck_ch14[] = ;
static const u8 rtl8225_tx_power_ofdm[] = ;
static const u32 rtl8225_chan[] = ;
static void rtl8225_rf_set_tx_power(struct ieee80211_hw *dev, int channel)
static void rtl8225_rf_init(struct ieee80211_hw *dev)
static const u8 rtl8225z2_agc[] = ;
static const u8 rtl8225z2_ofdm[] = ;
static const u8 rtl8225z2_tx_power_cck_ch14[] = ;
static const u8 rtl8225z2_tx_power_cck[] = ;
static const u8 rtl8225z2_tx_power_ofdm[] = ;
static const u8 rtl8225z2_tx_gain_cck_ofdm[] = ;
static void rtl8225z2_rf_set_tx_power(struct ieee80211_hw *dev, int channel)
static void rtl8225z2_b_rf_set_tx_power(struct ieee80211_hw *dev, int channel)
static const u16 rtl8225z2_rxgain[] = ;
static const u8 rtl8225z2_gain_bg[] = ;
static void rtl8225z2_rf_init(struct ieee80211_hw *dev)
static void rtl8225z2_b_rf_init(struct ieee80211_hw *dev)
static void rtl8225_rf_stop(struct ieee80211_hw *dev)
static void rtl8225_rf_set_channel(struct ieee80211_hw *dev,
struct ieee80211_conf *conf)
static const struct rtl818x_rf_ops rtl8225_ops = ;
static const struct rtl818x_rf_ops rtl8225z2_ops = ;
static const struct rtl818x_rf_ops rtl8225z2_b_ops = ;
const struct rtl818x_rf_ops * rtl8187_detect_rf(struct ieee80211_hw *dev)
