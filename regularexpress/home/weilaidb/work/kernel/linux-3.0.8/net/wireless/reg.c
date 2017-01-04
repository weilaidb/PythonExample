#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define REG_DBG_PRINT(format, args...) \
do  while (0)
#define REG_DBG_PRINT(args...)
static struct regulatory_request *last_request;
static struct platform_device *reg_pdev;
static struct device_type reg_device_type = ;
const struct ieee80211_regdomain *cfg80211_regdomain;
static DEFINE_MUTEX(reg_mutex);
static inline void assert_reg_lock(void)
static LIST_HEAD(reg_requests_list);
static spinlock_t reg_requests_lock;
static LIST_HEAD(reg_pending_beacons);
static spinlock_t reg_pending_beacons_lock;
static LIST_HEAD(reg_beacon_list);
struct reg_beacon ;
static void reg_todo(struct work_struct *work);
static DECLARE_WORK(reg_work, reg_todo);
static void reg_timeout_work(struct work_struct *work);
static DECLARE_DELAYED_WORK(reg_timeout, reg_timeout_work);
static const struct ieee80211_regdomain world_regdom = ;
static const struct ieee80211_regdomain *cfg80211_world_regdom =
&world_regdom;
static char *ieee80211_regdom = "00";
static char user_alpha2[2];
module_param(ieee80211_regdom, charp, 0444);
MODULE_PARM_DESC(ieee80211_regdom, "IEEE 802.11 regulatory domain code");
static void reset_regdomains(void)
static void update_world_regdomain(const struct ieee80211_regdomain *rd)
bool is_world_regdom(const char *alpha2)
static bool is_alpha2_set(const char *alpha2)
static bool is_unknown_alpha2(const char *alpha2)
static bool is_intersected_alpha2(const char *alpha2)
static bool is_an_alpha2(const char *alpha2)
static bool alpha2_equal(const char *alpha2_x, const char *alpha2_y)
static bool regdom_changes(const char *alpha2)
static bool is_user_regdom_saved(void)
static int reg_copy_regd(const struct ieee80211_regdomain **dst_regd,
const struct ieee80211_regdomain *src_regd)
struct reg_regdb_search_request ;
static LIST_HEAD(reg_regdb_search_list);
static DEFINE_MUTEX(reg_regdb_search_mutex);
static void reg_regdb_search(struct work_struct *work)
static DECLARE_WORK(reg_regdb_work, reg_regdb_search);
static void reg_regdb_query(const char *alpha2)
static inline void reg_regdb_query(const char *alpha2)
static int call_crda(const char *alpha2)
bool reg_is_valid_request(const char *alpha2)
static bool is_valid_reg_rule(const struct ieee80211_reg_rule *rule)
static bool is_valid_rd(const struct ieee80211_regdomain *rd)
static bool reg_does_bw_fit(const struct ieee80211_freq_range *freq_range,
u32 center_freq_khz,
u32 bw_khz)
static bool freq_in_rule_band(const struct ieee80211_freq_range *freq_range,
u32 freq_khz)
static int reg_rules_intersect(
const struct ieee80211_reg_rule *rule1,
const struct ieee80211_reg_rule *rule2,
struct ieee80211_reg_rule *intersected_rule)
static struct ieee80211_regdomain *regdom_intersect(
const struct ieee80211_regdomain *rd1,
const struct ieee80211_regdomain *rd2)
static u32 map_regdom_flags(u32 rd_flags)
static int freq_reg_info_regd(struct wiphy *wiphy,
u32 center_freq,
u32 desired_bw_khz,
const struct ieee80211_reg_rule **reg_rule,
const struct ieee80211_regdomain *custom_regd)
int freq_reg_info(struct wiphy *wiphy,
u32 center_freq,
u32 desired_bw_khz,
const struct ieee80211_reg_rule **reg_rule)
EXPORT_SYMBOL(freq_reg_info);
static const char *reg_initiator_name(enum nl80211_reg_initiator initiator)
static void chan_reg_rule_print_dbg(struct ieee80211_channel *chan,
u32 desired_bw_khz,
const struct ieee80211_reg_rule *reg_rule)
static void chan_reg_rule_print_dbg(struct ieee80211_channel *chan,
u32 desired_bw_khz,
const struct ieee80211_reg_rule *reg_rule)
static void handle_channel(struct wiphy *wiphy,
enum nl80211_reg_initiator initiator,
enum ieee80211_band band,
unsigned int chan_idx)
static void handle_band(struct wiphy *wiphy,
enum ieee80211_band band,
enum nl80211_reg_initiator initiator)
static bool ignore_reg_update(struct wiphy *wiphy,
enum nl80211_reg_initiator initiator)
static void update_all_wiphy_regulatory(enum nl80211_reg_initiator initiator)
static void handle_reg_beacon(struct wiphy *wiphy,
unsigned int chan_idx,
struct reg_beacon *reg_beacon)
static void wiphy_update_new_beacon(struct wiphy *wiphy,
struct reg_beacon *reg_beacon)
static void wiphy_update_beacon_reg(struct wiphy *wiphy)
static bool reg_is_world_roaming(struct wiphy *wiphy)
static void reg_process_beacons(struct wiphy *wiphy)
static bool is_ht40_not_allowed(struct ieee80211_channel *chan)
static void reg_process_ht_flags_channel(struct wiphy *wiphy,
enum ieee80211_band band,
unsigned int chan_idx)
static void reg_process_ht_flags_band(struct wiphy *wiphy,
enum ieee80211_band band)
static void reg_process_ht_flags(struct wiphy *wiphy)
void wiphy_update_regulatory(struct wiphy *wiphy,
enum nl80211_reg_initiator initiator)
static void handle_channel_custom(struct wiphy *wiphy,
enum ieee80211_band band,
unsigned int chan_idx,
const struct ieee80211_regdomain *regd)
static void handle_band_custom(struct wiphy *wiphy, enum ieee80211_band band,
const struct ieee80211_regdomain *regd)
void wiphy_apply_custom_regulatory(struct wiphy *wiphy,
const struct ieee80211_regdomain *regd)
EXPORT_SYMBOL(wiphy_apply_custom_regulatory);
#define REG_INTERSECT	1
static int ignore_request(struct wiphy *wiphy,
struct regulatory_request *pending_request)
static void reg_set_request_processed(void)
static int __regulatory_hint(struct wiphy *wiphy,
struct regulatory_request *pending_request)
static void reg_process_hint(struct regulatory_request *reg_request)
static void reg_process_pending_hints(void)
static void reg_process_pending_beacon_hints(void)
static void reg_todo(struct work_struct *work)
static void queue_regulatory_request(struct regulatory_request *request)
static int regulatory_hint_core(const char *alpha2)
int regulatory_hint_user(const char *alpha2)
int regulatory_hint(struct wiphy *wiphy, const char *alpha2)
EXPORT_SYMBOL(regulatory_hint);
void regulatory_hint_11d(struct wiphy *wiphy,
enum ieee80211_band band,
u8 *country_ie,
u8 country_ie_len)
static void restore_alpha2(char *alpha2, bool reset_user)
static void restore_regulatory_settings(bool reset_user)
void regulatory_hint_disconnect(void)
static bool freq_is_chan_12_13_14(u16 freq)
int regulatory_hint_found_beacon(struct wiphy *wiphy,
struct ieee80211_channel *beacon_chan,
gfp_t gfp)
static void print_rd_rules(const struct ieee80211_regdomain *rd)
static void print_regdomain(const struct ieee80211_regdomain *rd)
static void print_regdomain_info(const struct ieee80211_regdomain *rd)
static int __set_regdom(const struct ieee80211_regdomain *rd)
int set_regdom(const struct ieee80211_regdomain *rd)
int reg_device_uevent(struct device *dev, struct kobj_uevent_env *env)
int reg_device_uevent(struct device *dev, struct kobj_uevent_env *env)
void reg_device_remove(struct wiphy *wiphy)
static void reg_timeout_work(struct work_struct *work)
int __init regulatory_init(void)
void regulatory_exit(void)
