void __cfg80211_ibss_joined(struct net_device *dev, const u8 *bssid)
void cfg80211_ibss_joined(struct net_device *dev, const u8 *bssid, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_ibss_joined);
int __cfg80211_join_ibss(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct cfg80211_ibss_params *params,
struct cfg80211_cached_keys *connkeys)
int cfg80211_join_ibss(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct cfg80211_ibss_params *params,
struct cfg80211_cached_keys *connkeys)
static void __cfg80211_clear_ibss(struct net_device *dev, bool nowext)
void cfg80211_clear_ibss(struct net_device *dev, bool nowext)
int __cfg80211_leave_ibss(struct cfg80211_registered_device *rdev,
struct net_device *dev, bool nowext)
int cfg80211_leave_ibss(struct cfg80211_registered_device *rdev,
struct net_device *dev, bool nowext)
int cfg80211_ibss_wext_join(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev)
int cfg80211_ibss_wext_siwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *wextfreq, char *extra)
int cfg80211_ibss_wext_giwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *freq, char *extra)
int cfg80211_ibss_wext_siwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid)
int cfg80211_ibss_wext_giwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid)
int cfg80211_ibss_wext_siwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra)
int cfg80211_ibss_wext_giwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra)
