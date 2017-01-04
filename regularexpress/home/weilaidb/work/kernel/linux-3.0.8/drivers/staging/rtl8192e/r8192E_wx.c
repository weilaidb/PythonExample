#define RATE_COUNT 12
static const u32 rtl8180_rates[] = ;
#define ENETDOWN 1
static int r8192_wx_get_freq(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8192_wx_get_mode(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8192_wx_get_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_get_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_get_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_rawtx(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_force_reset(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_crcmon(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_mode(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
struct  iw_range_with_scan_capa
;
static int rtl8180_wx_get_range(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
{
struct iw_range *range = (struct iw_range *)extra;
struct iw_range_with_scan_capa* tmp = (struct iw_range_with_scan_capa*)range;
struct r8192_priv *priv = ieee80211_priv(dev);
u16 val;
int i;
wrqu->data.length = sizeof(*range);
memset(range, 0, sizeof(*range));
range->throughput = 130 * 1000 * 1000;
range->max_qual.qual = 100;
range->max_qual.level = 0;
range->max_qual.noise = -98;
range->max_qual.updated = 7;
range->avg_qual.qual = 92;
range->avg_qual.level = 20 + -98;
range->avg_qual.noise = 0;
range->avg_qual.updated = 7;
range->num_bitrates = RATE_COUNT;
for (i = 0; i < RATE_COUNT && i < IW_MAX_BITRATES; i++)
range->min_frag = MIN_FRAG_THRESHOLD;
range->max_frag = MAX_FRAG_THRESHOLD;
range->min_pmp=0;
range->max_pmp = 5000000;
range->min_pmt = 0;
range->max_pmt = 65535*1000;
range->pmp_flags = IW_POWER_PERIOD;
range->pmt_flags = IW_POWER_TIMEOUT;
range->pm_capa = IW_POWER_PERIOD | IW_POWER_TIMEOUT | IW_POWER_ALL_R;
range->we_version_compiled = WIRELESS_EXT;
range->we_version_source = 18;
for (i = 0, val = 0; i < 14; i++)
static int r8192_wx_set_scan(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8192_wx_get_scan(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8192_wx_set_essid(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8192_wx_get_essid(struct net_device *dev,
struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8192_wx_set_freq(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu, char *b)
static int r8192_wx_get_name(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_get_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *awrq,
char *extra)
static int r8192_wx_get_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_get_enc(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int r8192_wx_set_enc(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int r8192_wx_set_scan_type(struct net_device *dev, struct iw_request_info *aa, union
iwreq_data *wrqu, char *p)
static int r8192_wx_set_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_get_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_get_sens(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_sens(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_enc_ext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int r8192_wx_set_mlme(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_gen_ie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int dummy(struct net_device *dev, struct iw_request_info *a,
union iwreq_data *wrqu,char *b)
static int r8192_wx_adapter_power_status(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static iw_handler r8192_wx_handlers[] =
;
static const struct iw_priv_args r8192_private_args[] = ;
static iw_handler r8192_private_handler[] = ;
static struct iw_statistics *r8192_get_wireless_stats(struct net_device *dev)
struct iw_handler_def  r8192_wx_handlers_def=;
