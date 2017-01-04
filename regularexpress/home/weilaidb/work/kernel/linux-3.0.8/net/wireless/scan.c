#define IEEE80211_SCAN_RESULT_EXPIRE	(15 * HZ)
void ___cfg80211_scan_done(struct cfg80211_registered_device *rdev, bool leak)
void __cfg80211_scan_done(struct work_struct *wk)
void cfg80211_scan_done(struct cfg80211_scan_request *request, bool aborted)
EXPORT_SYMBOL(cfg80211_scan_done);
void __cfg80211_sched_scan_results(struct work_struct *wk)
void cfg80211_sched_scan_results(struct wiphy *wiphy)
EXPORT_SYMBOL(cfg80211_sched_scan_results);
void cfg80211_sched_scan_stopped(struct wiphy *wiphy)
EXPORT_SYMBOL(cfg80211_sched_scan_stopped);
int __cfg80211_stop_sched_scan(struct cfg80211_registered_device *rdev,
bool driver_initiated)
static void bss_release(struct kref *ref)
void cfg80211_bss_age(struct cfg80211_registered_device *dev,
unsigned long age_secs)
static void __cfg80211_unlink_bss(struct cfg80211_registered_device *dev,
struct cfg80211_internal_bss *bss)
void cfg80211_bss_expire(struct cfg80211_registered_device *dev)
const u8 *cfg80211_find_ie(u8 eid, const u8 *ies, int len)
EXPORT_SYMBOL(cfg80211_find_ie);
static int cmp_ies(u8 num, u8 *ies1, size_t len1, u8 *ies2, size_t len2)
static bool is_bss(struct cfg80211_bss *a,
const u8 *bssid,
const u8 *ssid, size_t ssid_len)
static bool is_mesh_bss(struct cfg80211_bss *a)
static bool is_mesh(struct cfg80211_bss *a,
const u8 *meshid, size_t meshidlen,
const u8 *meshcfg)
static int cmp_bss(struct cfg80211_bss *a,
struct cfg80211_bss *b)
struct cfg80211_bss *cfg80211_get_bss(struct wiphy *wiphy,
struct ieee80211_channel *channel,
const u8 *bssid,
const u8 *ssid, size_t ssid_len,
u16 capa_mask, u16 capa_val)
EXPORT_SYMBOL(cfg80211_get_bss);
struct cfg80211_bss *cfg80211_get_mesh(struct wiphy *wiphy,
struct ieee80211_channel *channel,
const u8 *meshid, size_t meshidlen,
const u8 *meshcfg)
EXPORT_SYMBOL(cfg80211_get_mesh);
static void rb_insert_bss(struct cfg80211_registered_device *dev,
struct cfg80211_internal_bss *bss)
static struct cfg80211_internal_bss *
rb_find_bss(struct cfg80211_registered_device *dev,
struct cfg80211_internal_bss *res)
static struct cfg80211_internal_bss *
cfg80211_bss_update(struct cfg80211_registered_device *dev,
struct cfg80211_internal_bss *res)
struct cfg80211_bss*
cfg80211_inform_bss(struct wiphy *wiphy,
struct ieee80211_channel *channel,
const u8 *bssid,
u64 timestamp, u16 capability, u16 beacon_interval,
const u8 *ie, size_t ielen,
s32 signal, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_inform_bss);
struct cfg80211_bss *
cfg80211_inform_bss_frame(struct wiphy *wiphy,
struct ieee80211_channel *channel,
struct ieee80211_mgmt *mgmt, size_t len,
s32 signal, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_inform_bss_frame);
void cfg80211_put_bss(struct cfg80211_bss *pub)
EXPORT_SYMBOL(cfg80211_put_bss);
void cfg80211_unlink_bss(struct wiphy *wiphy, struct cfg80211_bss *pub)
EXPORT_SYMBOL(cfg80211_unlink_bss);
int cfg80211_wext_siwscan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwscan);
static void ieee80211_scan_add_ies(struct iw_request_info *info,
struct cfg80211_bss *bss,
char **current_ev, char *end_buf)
static inline unsigned int elapsed_jiffies_msecs(unsigned long start)
static char *
ieee80211_bss(struct wiphy *wiphy, struct iw_request_info *info,
struct cfg80211_internal_bss *bss, char *current_ev,
char *end_buf)
static int ieee80211_scan_results(struct cfg80211_registered_device *dev,
struct iw_request_info *info,
char *buf, size_t len)
int cfg80211_wext_giwscan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwscan);
