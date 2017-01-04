int cfg80211_mgd_wext_connect(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev)
int cfg80211_mgd_wext_siwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *wextfreq, char *extra)
int cfg80211_mgd_wext_giwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *freq, char *extra)
int cfg80211_mgd_wext_siwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid)
int cfg80211_mgd_wext_giwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid)
int cfg80211_mgd_wext_siwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra)
int cfg80211_mgd_wext_giwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra)
int cfg80211_wext_siwgenie(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwgenie);
int cfg80211_wext_siwmlme(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwmlme);
