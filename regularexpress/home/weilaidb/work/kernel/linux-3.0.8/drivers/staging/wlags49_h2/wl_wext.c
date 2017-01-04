#define IWE_STREAM_ADD_EVENT(info, buf, end, iwe, len) \
iwe_stream_add_event(info, buf, end, iwe, len)
#define IWE_STREAM_ADD_POINT(info, buf, end, iwe, msg) \
iwe_stream_add_point(info, buf, end, iwe, msg)
#if DBG
extern dbg_info_t *DbgInfo;
static int wireless_commit(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *rqu, char *extra)
static int wireless_get_protocol(struct net_device *dev, struct iw_request_info *info, char *name, char *extra)
static int wireless_set_frequency(struct net_device *dev, struct iw_request_info *info, struct iw_freq *freq, char *extra)
static int wireless_get_frequency(struct net_device *dev, struct iw_request_info *info, struct iw_freq *freq, char *extra)
static int wireless_get_range(struct net_device *dev, struct iw_request_info *info, struct iw_point *data, char *extra)
static int wireless_get_bssid(struct net_device *dev, struct iw_request_info *info, struct sockaddr *ap_addr, char *extra)
static int wireless_get_ap_list (struct net_device *dev, struct iw_request_info *info, struct iw_point *data, char *extra)
static int wireless_set_sensitivity(struct net_device *dev, struct iw_request_info *info, struct iw_param *sens, char *extra)
static int wireless_get_sensitivity(struct net_device *dev, struct iw_request_info *info, struct iw_param *sens, char *extra)
static int wireless_set_essid(struct net_device *dev, struct iw_request_info *info, struct iw_point *data, char *ssid)
static int wireless_get_essid(struct net_device *dev, struct iw_request_info *info, struct iw_point *data, char *essid)
static int wireless_set_encode(struct net_device *dev, struct iw_request_info *info, struct iw_point *erq, char *keybuf)
static int wireless_get_encode(struct net_device *dev, struct iw_request_info *info, struct iw_point *erq, char *key)
static int wireless_set_nickname(struct net_device *dev, struct iw_request_info *info, struct iw_point *data, char *nickname)
static int wireless_get_nickname(struct net_device *dev, struct iw_request_info *info, struct iw_point *data, char *nickname)
static int wireless_set_porttype(struct net_device *dev, struct iw_request_info *info, __u32 *mode, char *extra)
static int wireless_get_porttype(struct net_device *dev, struct iw_request_info *info, __u32 *mode, char *extra)
static int wireless_set_power(struct net_device *dev, struct iw_request_info *info, struct iw_param *wrq, char *extra)
static int wireless_get_power(struct net_device *dev, struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int wireless_get_tx_power(struct net_device *dev, struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int wireless_set_rts_threshold (struct net_device *dev, struct iw_request_info *info, struct iw_param *rts, char *extra)
static int wireless_get_rts_threshold (struct net_device *dev, struct iw_request_info *info, struct iw_param *rts, char *extra)
static int wireless_set_rate(struct net_device *dev, struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int wireless_get_rate(struct net_device *dev, struct iw_request_info *info, struct iw_param *rrq, char *extra)
#if WIRELESS_EXT > 13
static int wireless_set_scan(struct net_device *dev, struct iw_request_info *info, struct iw_point *data, char *extra)
static int wireless_get_scan(struct net_device *dev, struct iw_request_info *info, struct iw_point *data, char *extra)
#if WIRELESS_EXT > 17
static int wireless_set_auth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *data, char *extra)
static int hermes_set_key(ltv_t *ltv, int alg, int key_idx, u8 *addr,
int set_tx, u8 *seq, u8 *key, size_t key_len)
static int wireless_set_encodeext (struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *keybuf)
static int wireless_get_genie(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
struct iw_statistics * wl_wireless_stats( struct net_device *dev )
struct iw_statistics * wl_get_wireless_stats( struct net_device *dev )
inline void wl_spy_gather( struct net_device *dev, u_char *mac )
void wl_wext_event_freq( struct net_device *dev )
void wl_wext_event_mode( struct net_device *dev )
void wl_wext_event_essid( struct net_device *dev )
void wl_wext_event_encode( struct net_device *dev )
void wl_wext_event_ap( struct net_device *dev )
void wl_wext_event_scan_complete( struct net_device *dev )
void wl_wext_event_new_sta( struct net_device *dev )
void wl_wext_event_expired_sta( struct net_device *dev )
void wl_wext_event_mic_failed( struct net_device *dev )
void wl_wext_event_assoc_ie( struct net_device *dev )
static const iw_handler wl_handler[] =
;
static const iw_handler wl_private_handler[] =
;
struct iw_priv_args wl_priv_args[] = ;
const struct iw_handler_def wl_iw_handler_def =
;
