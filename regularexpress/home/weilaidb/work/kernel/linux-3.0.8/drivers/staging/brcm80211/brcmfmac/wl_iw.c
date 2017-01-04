typedef const struct si_pub si_t;
#define WL_ERROR(fmt, args...)	printk(fmt, ##args)
#define WL_TRACE(fmt, args...)	no_printk(fmt, ##args)
#define WL_INFORM(fmt, args...)	no_printk(fmt, ##args)
#define WL_WSEC(fmt, args...)	no_printk(fmt, ##args)
#define WL_SCAN(fmt, args...)	no_printk(fmt, ##args)
#define IW_WSEC_ENABLED(wsec)	((wsec) & (WEP_ENABLED |	\
TKIP_ENABLED | AES_ENABLED))
#define WL_IW_USE_ISCAN  1
#define ENABLE_ACTIVE_PASSIVE_SCAN_SUPPRESS  1
bool g_set_essid_before_scan = true;
#define WL_IW_IOCTL_CALL(func_call) \
do  while (0)
static int g_onoff = G_WLAN_SET_ON;
wl_iw_extra_params_t g_wl_iw_params;
extern bool wl_iw_conn_status_str(u32 event_type, u32 status,
u32 reason, char *stringBuf, uint buflen);
#define MAX_WLIW_IOCTL_LEN 1024
extern int dhd_wait_pend8021x(struct net_device *dev);
#if WIRELESS_EXT < 19
#define IW_IOCTL_IDX(cmd)	((cmd) - SIOCIWFIRST)
#define IW_EVENT_IDX(cmd)	((cmd) - IWEVFIRST)
static void *g_scan;
static volatile uint g_scan_specified_ssid;
static wlc_ssid_t g_specific_ssid;
static wlc_ssid_t g_ssid;
#if defined(WL_IW_USE_ISCAN)
#define ISCAN_STATE_IDLE   0
#define ISCAN_STATE_SCANING 1
#define WLC_IW_ISCAN_MAXLEN   2048
typedef struct iscan_buf  iscan_buf_t;
typedef struct iscan_info  iscan_info_t;
iscan_info_t *g_iscan;
static const u8 ether_bcast[ETH_ALEN] = ;
u32 g_assert_type;
static void wl_iw_timerfunc(unsigned long data);
static void wl_iw_set_event_mask(struct net_device *dev);
static int wl_iw_iscan(iscan_info_t *iscan, wlc_ssid_t *ssid, u16 action);
static int
wl_iw_set_scan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
static int
wl_iw_get_scan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra);
static uint
wl_iw_get_scan_prep(wl_scan_results_t *list,
struct iw_request_info *info, char *extra, short max_size);
static void swap_key_from_BE(wl_wsec_key_t *key)
static void swap_key_to_BE(wl_wsec_key_t *key)
static int dev_wlc_ioctl(struct net_device *dev, int cmd, void *arg, int len)
static int dev_wlc_intvar_set(struct net_device *dev, char *name, int val)
#if defined(WL_IW_USE_ISCAN)
static int
dev_iw_iovar_setbuf(struct net_device *dev,
char *iovar,
void *param, int paramlen, void *bufptr, int buflen)
static int
dev_iw_iovar_getbuf(struct net_device *dev,
char *iovar,
void *param, int paramlen, void *bufptr, int buflen)
#if WIRELESS_EXT > 17
static int
dev_wlc_bufvar_set(struct net_device *dev, char *name, char *buf, int len)
static int
dev_wlc_bufvar_get(struct net_device *dev, char *name, char *buf, int buflen)
static int dev_wlc_intvar_get(struct net_device *dev, char *name, int *retval)
#if WIRELESS_EXT < 13
struct iw_request_info ;
typedef int (*iw_handler) (struct net_device *dev,
struct iw_request_info *info,
void *wrqu, char *extra);
static int
wl_iw_config_commit(struct net_device *dev,
struct iw_request_info *info, void *zwrq, char *extra)
static int
wl_iw_get_name(struct net_device *dev,
struct iw_request_info *info, char *cwrq, char *extra)
static int
wl_iw_set_freq(struct net_device *dev,
struct iw_request_info *info, struct iw_freq *fwrq, char *extra)
static int
wl_iw_get_freq(struct net_device *dev,
struct iw_request_info *info, struct iw_freq *fwrq, char *extra)
static int
wl_iw_set_mode(struct net_device *dev,
struct iw_request_info *info, __u32 *uwrq, char *extra)
static int
wl_iw_get_mode(struct net_device *dev,
struct iw_request_info *info, __u32 *uwrq, char *extra)
static int
wl_iw_get_range(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int rssi_to_qual(int rssi)
static int
wl_iw_set_spy(struct net_device *dev,
struct iw_request_info *info, struct iw_point *dwrq, char *extra)
static int
wl_iw_get_spy(struct net_device *dev,
struct iw_request_info *info, struct iw_point *dwrq, char *extra)
static int
wl_iw_ch_to_chanspec(int ch, wl_join_params_t *join_params,
int *join_params_size)
static int
wl_iw_set_wap(struct net_device *dev,
struct iw_request_info *info, struct sockaddr *awrq, char *extra)
static int
wl_iw_get_wap(struct net_device *dev,
struct iw_request_info *info, struct sockaddr *awrq, char *extra)
#if WIRELESS_EXT > 17
static int
wl_iw_mlme(struct net_device *dev,
struct iw_request_info *info, struct sockaddr *awrq, char *extra)
static int
wl_iw_get_aplist(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
wl_iw_iscan_get_aplist(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int wl_iw_iscan_prep(wl_scan_params_t *params, wlc_ssid_t *ssid)
static int wl_iw_iscan(iscan_info_t *iscan, wlc_ssid_t *ssid, u16 action)
static void wl_iw_timerfunc(unsigned long data)
static void wl_iw_set_event_mask(struct net_device *dev)
static u32 wl_iw_iscan_get(iscan_info_t *iscan)
static void wl_iw_force_specific_scan(iscan_info_t *iscan)
static void wl_iw_send_scan_complete(iscan_info_t *iscan)
static int _iscan_sysioc_thread(void *data)
static int
wl_iw_set_scan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
int wl_iw_iscan_set_scan_broadcast_prep(struct net_device *dev, uint flag)
static int
wl_iw_iscan_set_scan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
#if WIRELESS_EXT > 17
static bool ie_is_wpa_ie(u8 **wpaie, u8 **tlvs, int *tlvs_len)
static bool ie_is_wps_ie(u8 **wpsie, u8 **tlvs, int *tlvs_len)
static int
wl_iw_handle_scanresults_ies(char **event_p, char *end,
struct iw_request_info *info, wl_bss_info_t *bi)
static uint
wl_iw_get_scan_prep(wl_scan_results_t *list,
struct iw_request_info *info, char *extra, short max_size)
static int
wl_iw_get_scan(struct net_device *dev,
struct iw_request_info *info, struct iw_point *dwrq, char *extra)
#if defined(WL_IW_USE_ISCAN)
static int
wl_iw_iscan_get_scan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
wl_iw_set_essid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
wl_iw_get_essid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
wl_iw_set_nick(struct net_device *dev,
struct iw_request_info *info, struct iw_point *dwrq, char *extra)
static int
wl_iw_get_nick(struct net_device *dev,
struct iw_request_info *info, struct iw_point *dwrq, char *extra)
static int
wl_iw_set_rate(struct net_device *dev,
struct iw_request_info *info, struct iw_param *vwrq, char *extra)
static int
wl_iw_get_rate(struct net_device *dev,
struct iw_request_info *info, struct iw_param *vwrq, char *extra)
static int
wl_iw_set_rts(struct net_device *dev,
struct iw_request_info *info, struct iw_param *vwrq, char *extra)
static int
wl_iw_get_rts(struct net_device *dev,
struct iw_request_info *info, struct iw_param *vwrq, char *extra)
static int
wl_iw_set_frag(struct net_device *dev,
struct iw_request_info *info, struct iw_param *vwrq, char *extra)
static int
wl_iw_get_frag(struct net_device *dev,
struct iw_request_info *info, struct iw_param *vwrq, char *extra)
static int
wl_iw_set_txpow(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
wl_iw_get_txpow(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
#if WIRELESS_EXT > 10
static int
wl_iw_set_retry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
{
int error, lrl, srl;
WL_TRACE("%s: SIOCSIWRETRY\n", dev->name);
if (vwrq->disabled || (vwrq->flags & IW_RETRY_LIFETIME))
return -EINVAL;
if (vwrq->flags & IW_RETRY_LIMIT) {
#if WIRELESS_EXT > 20
if ((vwrq->flags & IW_RETRY_LONG)
|| (vwrq->flags & IW_RETRY_MAX)
|| !((vwrq->flags & IW_RETRY_SHORT)
|| (vwrq->flags & IW_RETRY_MIN)))
static int
wl_iw_get_retry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
wl_iw_set_encode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
wl_iw_get_encode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
wl_iw_set_power(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
wl_iw_get_power(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
#if WIRELESS_EXT > 17
static int
wl_iw_set_wpaie(struct net_device *dev,
struct iw_request_info *info, struct iw_point *iwp, char *extra)
static int
wl_iw_get_wpaie(struct net_device *dev,
struct iw_request_info *info, struct iw_point *iwp, char *extra)
static int
wl_iw_set_encodeext(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
#if WIRELESS_EXT > 17
struct  pmkid_list;
static int
wl_iw_set_pmksa(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
wl_iw_get_encodeext(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
wl_iw_set_wpaauth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
#define VAL_PSK(_val) (((_val) & WPA_AUTH_PSK) || ((_val) & WPA2_AUTH_PSK))
static int
wl_iw_get_wpaauth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static const iw_handler wl_iw_handler[] = ;
#if WIRELESS_EXT > 12
const struct iw_handler_def wl_iw_handler_def = ;
int wl_iw_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
bool
wl_iw_conn_status_str(u32 event_type, u32 status, u32 reason,
char *stringBuf, uint buflen)
#if WIRELESS_EXT > 14
static bool
wl_iw_check_conn_fail(wl_event_msg_t *e, char *stringBuf, uint buflen)
#define IW_CUSTOM_MAX 256
void wl_iw_event(struct net_device *dev, wl_event_msg_t *e, void *data)
int wl_iw_attach(struct net_device *dev, void *dhdp)
void wl_iw_detach(void)
#if defined(BCMDBG)
void osl_assert(char *exp, char *file, int line)
