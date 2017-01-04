static struct country_code_to_enum_rd allCountries[] = ;
#define RTL819x_2GHZ_CH01_11	\
REG_RULE(2412-10, 2462+10, 40, 0, 20, 0)
#define RTL819x_2GHZ_CH12_13	\
REG_RULE(2467-10, 2472+10, 40, 0, 20,\
NL80211_RRF_PASSIVE_SCAN)
#define RTL819x_2GHZ_CH14	\
REG_RULE(2484-10, 2484+10, 40, 0, 20, \
NL80211_RRF_PASSIVE_SCAN | \
NL80211_RRF_NO_OFDM)
#define RTL819x_5GHZ_5150_5350	\
REG_RULE(5150-10, 5350+10, 40, 0, 30, \
NL80211_RRF_PASSIVE_SCAN | \
NL80211_RRF_NO_IBSS)
#define RTL819x_5GHZ_5470_5850	\
REG_RULE(5470-10, 5850+10, 40, 0, 30, \
NL80211_RRF_PASSIVE_SCAN | \
NL80211_RRF_NO_IBSS)
#define RTL819x_5GHZ_5725_5850	\
REG_RULE(5725-10, 5850+10, 40, 0, 30, \
NL80211_RRF_PASSIVE_SCAN | \
NL80211_RRF_NO_IBSS)
#define RTL819x_5GHZ_ALL	\
(RTL819x_5GHZ_5150_5350, RTL819x_5GHZ_5470_5850)
static const struct ieee80211_regdomain rtl_regdom_11 = ;
static const struct ieee80211_regdomain rtl_regdom_12_13 = ;
static const struct ieee80211_regdomain rtl_regdom_no_midband = ;
static const struct ieee80211_regdomain rtl_regdom_60_64 = ;
static const struct ieee80211_regdomain rtl_regdom_14_60_64 = ;
static const struct ieee80211_regdomain rtl_regdom_14 = ;
static bool _rtl_is_radar_freq(u16 center_freq)
static void _rtl_reg_apply_beaconing_flags(struct wiphy *wiphy,
enum nl80211_reg_initiator initiator)
static void _rtl_reg_apply_active_scan_flags(struct wiphy *wiphy,
enum nl80211_reg_initiator
initiator)
static void _rtl_reg_apply_radar_flags(struct wiphy *wiphy)
static void _rtl_reg_apply_world_flags(struct wiphy *wiphy,
enum nl80211_reg_initiator initiator,
struct rtl_regulatory *reg)
static void _rtl_dump_channel_map(struct wiphy *wiphy)
static int _rtl_reg_notifier_apply(struct wiphy *wiphy,
struct regulatory_request *request,
struct rtl_regulatory *reg)
static const struct ieee80211_regdomain *_rtl_regdomain_select(
struct rtl_regulatory *reg)
static int _rtl_regd_init_wiphy(struct rtl_regulatory *reg,
struct wiphy *wiphy,
int (*reg_notifier) (struct wiphy *wiphy,
struct regulatory_request *
request))
static struct country_code_to_enum_rd *_rtl_regd_find_country(u16 countrycode)
int rtl_regd_init(struct ieee80211_hw *hw,
int (*reg_notifier) (struct wiphy *wiphy,
struct regulatory_request *request))
int rtl_reg_notifier(struct wiphy *wiphy, struct regulatory_request *request)
