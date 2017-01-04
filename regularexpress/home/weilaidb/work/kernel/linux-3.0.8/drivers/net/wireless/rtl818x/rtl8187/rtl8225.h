#define RTL8187_RTL8225_H
#define RTL8187_RTL8225_ANAPARAM_ON	0xa0000a59
#define RTL8187_RTL8225_ANAPARAM2_ON	0x860c7312
#define RTL8187_RTL8225_ANAPARAM_OFF	0xa00beb59
#define RTL8187_RTL8225_ANAPARAM2_OFF	0x840dec11
#define RTL8187B_RTL8225_ANAPARAM_ON	0x45090658
#define RTL8187B_RTL8225_ANAPARAM2_ON	0x727f3f52
#define RTL8187B_RTL8225_ANAPARAM3_ON	0x00
#define RTL8187B_RTL8225_ANAPARAM_OFF	0x55480658
#define RTL8187B_RTL8225_ANAPARAM2_OFF	0x72003f50
#define RTL8187B_RTL8225_ANAPARAM3_OFF	0x00
const struct rtl818x_rf_ops * rtl8187_detect_rf(struct ieee80211_hw *);
static inline void rtl8225_write_phy_ofdm(struct ieee80211_hw *dev,
u8 addr, u32 data)
static inline void rtl8225_write_phy_cck(struct ieee80211_hw *dev,
u8 addr, u32 data)
