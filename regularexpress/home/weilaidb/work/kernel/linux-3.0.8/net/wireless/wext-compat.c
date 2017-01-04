int cfg80211_wext_giwname(struct net_device *dev,
struct iw_request_info *info,
char *name, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwname);
int cfg80211_wext_siwmode(struct net_device *dev, struct iw_request_info *info,
u32 *mode, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwmode);
int cfg80211_wext_giwmode(struct net_device *dev, struct iw_request_info *info,
u32 *mode, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwmode);
int cfg80211_wext_giwrange(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwrange);
int cfg80211_wext_freq(struct wiphy *wiphy, struct iw_freq *freq)
int cfg80211_wext_siwrts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rts, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwrts);
int cfg80211_wext_giwrts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rts, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwrts);
int cfg80211_wext_siwfrag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *frag, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwfrag);
int cfg80211_wext_giwfrag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *frag, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwfrag);
int cfg80211_wext_siwretry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *retry, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwretry);
int cfg80211_wext_giwretry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *retry, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwretry);
static int __cfg80211_set_encryption(struct cfg80211_registered_device *rdev,
struct net_device *dev, bool pairwise,
const u8 *addr, bool remove, bool tx_key,
int idx, struct key_params *params)
static int cfg80211_set_encryption(struct cfg80211_registered_device *rdev,
struct net_device *dev, bool pairwise,
const u8 *addr, bool remove, bool tx_key,
int idx, struct key_params *params)
int cfg80211_wext_siwencode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *keybuf)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwencode);
int cfg80211_wext_siwencodeext(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwencodeext);
int cfg80211_wext_giwencode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *keybuf)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwencode);
int cfg80211_wext_siwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *wextfreq, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwfreq);
int cfg80211_wext_giwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *freq, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwfreq);
int cfg80211_wext_siwtxpower(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwtxpower);
int cfg80211_wext_giwtxpower(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwtxpower);
static int cfg80211_set_auth_alg(struct wireless_dev *wdev,
s32 auth_alg)
static int cfg80211_set_wpa_version(struct wireless_dev *wdev, u32 wpa_versions)
static int cfg80211_set_cipher_group(struct wireless_dev *wdev, u32 cipher)
static int cfg80211_set_cipher_pairwise(struct wireless_dev *wdev, u32 cipher)
static int cfg80211_set_key_mgt(struct wireless_dev *wdev, u32 key_mgt)
int cfg80211_wext_siwauth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwauth);
int cfg80211_wext_giwauth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwauth);
int cfg80211_wext_siwpower(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *wrq, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwpower);
int cfg80211_wext_giwpower(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *wrq, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwpower);
static int cfg80211_wds_wext_siwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *addr, char *extra)
static int cfg80211_wds_wext_giwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *addr, char *extra)
int cfg80211_wext_siwrate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rate, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwrate);
int cfg80211_wext_giwrate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rate, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwrate);
struct iw_statistics *cfg80211_wireless_stats(struct net_device *dev)
EXPORT_SYMBOL_GPL(cfg80211_wireless_stats);
int cfg80211_wext_siwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwap);
int cfg80211_wext_giwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwap);
int cfg80211_wext_siwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwessid);
int cfg80211_wext_giwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid)
EXPORT_SYMBOL_GPL(cfg80211_wext_giwessid);
int cfg80211_wext_siwpmksa(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
EXPORT_SYMBOL_GPL(cfg80211_wext_siwpmksa);
static const iw_handler cfg80211_handlers[] = ;
const struct iw_handler_def cfg80211_wext_handler = ;
