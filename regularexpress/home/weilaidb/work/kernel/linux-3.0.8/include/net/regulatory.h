#define __NET_REGULATORY_H
enum environment_cap ;
struct regulatory_request ;
struct ieee80211_freq_range ;
struct ieee80211_power_rule ;
struct ieee80211_reg_rule ;
struct ieee80211_regdomain ;
#define MHZ_TO_KHZ(freq) ((freq) * 1000)
#define KHZ_TO_MHZ(freq) ((freq) / 1000)
#define DBI_TO_MBI(gain) ((gain) * 100)
#define MBI_TO_DBI(gain) ((gain) / 100)
#define DBM_TO_MBM(gain) ((gain) * 100)
#define MBM_TO_DBM(gain) ((gain) / 100)
#define REG_RULE(start, end, bw, gain, eirp, reg_flags) \
