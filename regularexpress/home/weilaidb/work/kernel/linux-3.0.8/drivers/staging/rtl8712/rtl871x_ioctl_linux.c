#define _RTL871X_IOCTL_LINUX_C_
#define _RTL871X_MP_IOCTL_C_
#define RTL_IOCTL_WPA_SUPPLICANT	(SIOCIWFIRSTPRIV + 30)
#define SCAN_ITEM_SIZE 768
#define MAX_CUSTOM_LEN 64
#define RATE_COUNT 4
static const u32 rtl8180_rates[] = ;
static const long ieee80211_wlan_frequencies[] = ;
static const char * const iw_operation_mode[] = ;
static int hwaddr_aton_i(const char *txt, u8 *addr)
void r8712_indicate_wx_assoc_event(struct _adapter *padapter)
void r8712_indicate_wx_disassoc_event(struct _adapter *padapter)
static inline void handle_pairwise_key(struct sta_info *psta,
struct ieee_param *param,
struct _adapter *padapter)
static inline void handle_group_key(struct ieee_param *param,
struct _adapter *padapter)
static inline char *translate_scan(struct _adapter *padapter,
struct iw_request_info *info,
struct wlan_network *pnetwork,
char *start, char *stop)
static int wpa_set_auth_algs(struct net_device *dev, u32 value)
static int wpa_set_encryption(struct net_device *dev, struct ieee_param *param,
u32 param_len)
static int r871x_set_wpa_ie(struct _adapter *padapter, char *pie,
unsigned short ielen)
static int r8711_wx_get_name(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static const long frequency_list[] = ;
static int r8711_wx_set_freq(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_freq(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_set_mode(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8711_wx_get_mode(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r871x_wx_set_pmkid(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_sens(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_range(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_wx_set_priv(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *awrq,
char *extra)
static int r8711_wx_set_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *awrq,
char *extra)
static int r8711_wx_get_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_wx_set_mlme(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_set_scan(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_scan(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_set_essid(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_essid(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_set_rate(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_set_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_get_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_set_enc(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *keybuf)
static int r8711_wx_get_enc(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *keybuf)
static int r8711_wx_get_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_wx_set_gen_ie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_wx_set_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_wx_set_enc_ext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_wx_get_nick(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8711_wx_read32(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *keybuf)
static int r8711_wx_write32(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *keybuf)
static int dummy(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8711_drvext_hdl(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_mp_ioctl_hdl(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_get_ap_info(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_set_pid(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r871x_wps_start(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wpa_set_param(struct net_device *dev, u8 name, u32 value)
static int wpa_mlme(struct net_device *dev, u32 command, u32 reason)
static int wpa_supplicant_ioctl(struct net_device *dev, struct iw_point *p)
int r871x_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static iw_handler r8711_handlers[] = ;
static const struct iw_priv_args r8711_private_args[] = ;
static iw_handler r8711_private_handler[] = ;
static struct iw_statistics *r871x_get_wireless_stats(struct net_device *dev)
struct iw_handler_def r871x_handlers_def = ;
