struct cfg80211_conn ;
static bool cfg80211_is_all_idle(void)
static void disconnect_work(struct work_struct *work)
static DECLARE_WORK(cfg80211_disconnect_work, disconnect_work);
static int cfg80211_conn_scan(struct wireless_dev *wdev)
static int cfg80211_conn_do_work(struct wireless_dev *wdev)
void cfg80211_conn_work(struct work_struct *work)
static struct cfg80211_bss *cfg80211_get_conn_bss(struct wireless_dev *wdev)
static void __cfg80211_sme_scan_done(struct net_device *dev)
void cfg80211_sme_scan_done(struct net_device *dev)
void cfg80211_sme_rx_auth(struct net_device *dev,
const u8 *buf, size_t len)
bool cfg80211_sme_failed_reassoc(struct wireless_dev *wdev)
void cfg80211_sme_failed_assoc(struct wireless_dev *wdev)
void __cfg80211_connect_result(struct net_device *dev, const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len,
u16 status, bool wextev,
struct cfg80211_bss *bss)
void cfg80211_connect_result(struct net_device *dev, const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len,
u16 status, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_connect_result);
void __cfg80211_roamed(struct wireless_dev *wdev,
struct ieee80211_channel *channel,
const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len)
void cfg80211_roamed(struct net_device *dev,
struct ieee80211_channel *channel,
const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_roamed);
void __cfg80211_disconnected(struct net_device *dev, const u8 *ie,
size_t ie_len, u16 reason, bool from_ap)
void cfg80211_disconnected(struct net_device *dev, u16 reason,
u8 *ie, size_t ie_len, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_disconnected);
int __cfg80211_connect(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct cfg80211_connect_params *connect,
struct cfg80211_cached_keys *connkeys,
const u8 *prev_bssid)
int cfg80211_connect(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct cfg80211_connect_params *connect,
struct cfg80211_cached_keys *connkeys)
int __cfg80211_disconnect(struct cfg80211_registered_device *rdev,
struct net_device *dev, u16 reason, bool wextev)
int cfg80211_disconnect(struct cfg80211_registered_device *rdev,
struct net_device *dev,
u16 reason, bool wextev)
void cfg80211_sme_disassoc(struct net_device *dev, int idx)
