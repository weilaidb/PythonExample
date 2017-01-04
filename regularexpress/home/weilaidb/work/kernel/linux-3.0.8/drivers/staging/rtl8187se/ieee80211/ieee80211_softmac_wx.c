const long ieee80211_wlan_frequencies[] = ;
int ieee80211_wx_set_freq(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
int ieee80211_wx_get_freq(struct ieee80211_device *ieee,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
int ieee80211_wx_get_wap(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_set_wap(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *awrq,
char *extra)
int ieee80211_wx_get_essid(struct ieee80211_device *ieee, struct iw_request_info *a,union iwreq_data *wrqu,char *b)
int ieee80211_wx_set_rate(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_get_rate(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_set_mode(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
void ieee80211_wx_sync_scan_wq(struct work_struct *work)
int ieee80211_wx_set_scan(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
int ieee80211_wx_set_essid(struct ieee80211_device *ieee,
struct iw_request_info *a,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_get_mode(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
int ieee80211_wx_set_rawtx(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_get_name(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_set_power(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_get_power(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
