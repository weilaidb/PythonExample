u32 rtl8180_rates[] = ;
#define RATE_COUNT ARRAY_SIZE(rtl8180_rates)
static CHANNEL_LIST DefaultChannelPlan[] = ;
static int r8180_wx_get_freq(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
int r8180_wx_set_key(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int r8180_wx_set_beaconinterval(struct net_device *dev, struct iw_request_info *aa,
union iwreq_data *wrqu, char *b)
static int r8180_wx_get_mode(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8180_wx_get_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_crcmon(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_mode(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
struct  iw_range_with_scan_capa	;
static int rtl8180_wx_get_range(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_scan(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8180_wx_get_scan(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8180_wx_set_essid(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8180_wx_get_essid(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8180_wx_set_freq(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8180_wx_get_name(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *awrq,
char *extra)
static int r8180_wx_get_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_enc(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int r8180_wx_get_enc(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int r8180_wx_set_scan_type(struct net_device *dev, struct iw_request_info *aa, union
iwreq_data *wrqu, char *p)
static int r8180_wx_set_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_sens(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_sens(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_rawtx(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int dummy(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8180_wx_get_iwmode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_iwmode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_preamble(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_preamble(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_siglevel(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_sigqual(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_reset_stats(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_radio_on(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_radio_off(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_channelplan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_channelplan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_get_version(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_forcerate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_enc_ext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_mlme(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8180_wx_set_gen_ie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static iw_handler r8180_wx_handlers[] =	;
static const struct iw_priv_args r8180_private_args[] = ;
static iw_handler r8180_private_handler[] = ;
static inline int is_same_network(struct ieee80211_network *src,
struct ieee80211_network *dst,
struct ieee80211_device *ieee)
static struct iw_statistics *r8180_get_wireless_stats(struct net_device *dev)
struct iw_handler_def  r8180_wx_handlers_def = ;
