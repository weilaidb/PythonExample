#define REGD_H
enum ctl_group ;
#define NO_CTL 0xff
#define SD_NO_CTL               0xE0
#define NO_CTL                  0xff
#define CTL_11A                 0
#define CTL_11B                 1
#define CTL_11G                 2
#define CTL_2GHT20              5
#define CTL_5GHT20              6
#define CTL_2GHT40              7
#define CTL_5GHT40              8
#define CTRY_DEBUG 0x1ff
#define CTRY_DEFAULT 0
#define COUNTRY_ERD_FLAG        0x8000
#define WORLDWIDE_ROAMING_FLAG  0x4000
#define MULTI_DOMAIN_MASK 0xFF00
#define WORLD_SKU_MASK          0x00F0
#define WORLD_SKU_PREFIX        0x0060
#define CHANNEL_HALF_BW         10
#define CHANNEL_QUARTER_BW      5
struct country_code_to_enum_rd ;
enum CountryCode ;
bool ath_is_world_regd(struct ath_regulatory *reg);
bool ath_is_49ghz_allowed(u16 redomain);
int ath_regd_init(struct ath_regulatory *reg, struct wiphy *wiphy,
int (*reg_notifier)(struct wiphy *wiphy,
struct regulatory_request *request));
u32 ath_regd_get_band_ctl(struct ath_regulatory *reg,
enum ieee80211_band band);
int ath_reg_notifier_apply(struct wiphy *wiphy,
struct regulatory_request *request,
struct ath_regulatory *reg);
