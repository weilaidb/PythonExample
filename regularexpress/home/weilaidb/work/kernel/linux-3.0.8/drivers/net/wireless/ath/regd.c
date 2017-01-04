#define ATH9K_2GHZ_CH01_11	REG_RULE(2412-10, 2462+10, 40, 0, 20, 0)
#define ATH9K_2GHZ_CH12_13	REG_RULE(2467-10, 2472+10, 40, 0, 20,\
NL80211_RRF_PASSIVE_SCAN)
#define ATH9K_2GHZ_CH14		REG_RULE(2484-10, 2484+10, 40, 0, 20,\
NL80211_RRF_PASSIVE_SCAN | NL80211_RRF_NO_OFDM)
#define ATH9K_5GHZ_5150_5350	REG_RULE(5150-10, 5350+10, 40, 0, 30,\
NL80211_RRF_PASSIVE_SCAN | NL80211_RRF_NO_IBSS)
#define ATH9K_5GHZ_5470_5850	REG_RULE(5470-10, 5850+10, 40, 0, 30,\
NL80211_RRF_PASSIVE_SCAN | NL80211_RRF_NO_IBSS)
#define ATH9K_5GHZ_5725_5850	REG_RULE(5725-10, 5850+10, 40, 0, 30,\
NL80211_RRF_PASSIVE_SCAN | NL80211_RRF_NO_IBSS)
#define ATH9K_2GHZ_ALL		ATH9K_2GHZ_CH01_11, \
ATH9K_2GHZ_CH12_13, \
ATH9K_2GHZ_CH14
#define ATH9K_5GHZ_ALL		ATH9K_5GHZ_5150_5350, \
ATH9K_5GHZ_5470_5850
#define ATH9K_5GHZ_NO_MIDBAND	ATH9K_5GHZ_5150_5350, \
ATH9K_5GHZ_5725_5850
static const struct ieee80211_regdomain ath_world_regdom_60_61_62 = ;
static const struct ieee80211_regdomain ath_world_regdom_63_65 = ;
static const struct ieee80211_regdomain ath_world_regdom_64 = ;
static const struct ieee80211_regdomain ath_world_regdom_66_69 = ;
static const struct ieee80211_regdomain ath_world_regdom_67_68_6A_6C = ;
static inline bool is_wwr_sku(u16 regd)
static u16 ath_regd_get_eepromRD(struct ath_regulatory *reg)
bool ath_is_world_regd(struct ath_regulatory *reg)
EXPORT_SYMBOL(ath_is_world_regd);
static const struct ieee80211_regdomain *ath_default_world_regdomain(void)
static const struct
ieee80211_regdomain *ath_world_regdomain(struct ath_regulatory *reg)
bool ath_is_49ghz_allowed(u16 regdomain)
EXPORT_SYMBOL(ath_is_49ghz_allowed);
static bool ath_is_radar_freq(u16 center_freq)
static void
ath_reg_apply_beaconing_flags(struct wiphy *wiphy,
enum nl80211_reg_initiator initiator)
static void
ath_reg_apply_active_scan_flags(struct wiphy *wiphy,
enum nl80211_reg_initiator initiator)
static void ath_reg_apply_radar_flags(struct wiphy *wiphy)
static void ath_reg_apply_world_flags(struct wiphy *wiphy,
enum nl80211_reg_initiator initiator,
struct ath_regulatory *reg)
int ath_reg_notifier_apply(struct wiphy *wiphy,
struct regulatory_request *request,
struct ath_regulatory *reg)
EXPORT_SYMBOL(ath_reg_notifier_apply);
static bool ath_regd_is_eeprom_valid(struct ath_regulatory *reg)
static struct country_code_to_enum_rd*
ath_regd_find_country(u16 countryCode)
static struct country_code_to_enum_rd*
ath_regd_find_country_by_rd(int regdmn)
static u16 ath_regd_get_default_country(u16 rd)
static struct reg_dmn_pair_mapping*
ath_get_regpair(int regdmn)
static int
ath_regd_init_wiphy(struct ath_regulatory *reg,
struct wiphy *wiphy,
int (*reg_notifier)(struct wiphy *wiphy,
struct regulatory_request *request))
static void ath_regd_sanitize(struct ath_regulatory *reg)
int
ath_regd_init(struct ath_regulatory *reg,
struct wiphy *wiphy,
int (*reg_notifier)(struct wiphy *wiphy,
struct regulatory_request *request))
EXPORT_SYMBOL(ath_regd_init);
u32 ath_regd_get_band_ctl(struct ath_regulatory *reg,
enum ieee80211_band band)
EXPORT_SYMBOL(ath_regd_get_band_ctl);
