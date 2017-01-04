struct modes_unit ;
struct modes_unit ieee80211_modes[] = ;
#define iwe_stream_add_event_rsl iwe_stream_add_event
#define MAX_CUSTOM_LEN 64
static inline char *rtl819x_translate_scan(struct ieee80211_device *ieee,
char *start, char *stop,
struct ieee80211_network *network,
struct iw_request_info *info)
int ieee80211_wx_get_scan(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_set_encode(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *keybuf)
int ieee80211_wx_get_encode(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *keybuf)
#if (WIRELESS_EXT >= 18)
int ieee80211_wx_set_encode_ext(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_get_encode_ext(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_set_mlme(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int ieee80211_wx_set_auth(struct ieee80211_device *ieee,
struct iw_request_info *info,
struct iw_param *data, char *extra)
#if 1
int ieee80211_wx_set_gen_ie(struct ieee80211_device *ieee, u8 *ie, size_t len)
