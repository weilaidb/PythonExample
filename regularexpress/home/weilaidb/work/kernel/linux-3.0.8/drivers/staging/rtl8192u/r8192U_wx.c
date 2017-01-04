#define RATE_COUNT 12
u32 rtl8180_rates[] = ;
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
u16 read_rtl8225(struct net_device *dev, u8 addr);
void write_rtl8225(struct net_device *dev, u8 adr, u16 data);
u32 john_read_rtl8225(struct net_device *dev, u8 adr);
void _write_rtl8225(struct net_device *dev, u8 adr, u16 data);
static int r8192_wx_read_regs(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_write_regs(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
void rtl8187_write_phy(struct net_device *dev, u8 adr, u32 data);
u8 rtl8187_read_phy(struct net_device *dev,u8 adr, u32 data);
static int r8192_wx_read_bb(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
void rtl8187_write_phy(struct net_device *dev, u8 adr, u32 data);
static int r8192_wx_write_bb(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_write_nicb(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_read_nicb(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_get_ap_status(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_force_reset(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int r8192_wx_set_rawtx(struct net_device *dev,
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
#if (WIRELESS_EXT >= 18)
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
static iw_handler r8192_wx_handlers[] =
;
static const struct iw_priv_args r8192_private_args[] = ;
static iw_handler r8192_private_handler[] = ;
struct iw_statistics *r8192_get_wireless_stats(struct net_device *dev)
struct iw_handler_def  r8192_wx_handlers_def=;
