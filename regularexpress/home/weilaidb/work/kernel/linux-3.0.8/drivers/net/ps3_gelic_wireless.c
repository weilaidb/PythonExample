#undef DEBUG
static int gelic_wl_start_scan(struct gelic_wl_info *wl, int always_scan,
u8 *essid, size_t essid_len);
static int gelic_wl_try_associate(struct net_device *netdev);
static const int channel_freq[] = ;
#define NUM_CHANNELS ARRAY_SIZE(channel_freq)
static const int bitrate_list[] = ;
#define NUM_BITRATES ARRAY_SIZE(bitrate_list)
static inline int wpa2_capable(void)
static inline int precise_ie(void)
struct eurus_cmd_arg_info ;
static const struct eurus_cmd_arg_info cmd_info[GELIC_EURUS_CMD_MAX_INDEX] = ;
static const char *cmdstr(enum gelic_eurus_command ix)
;
static inline const char *cmdstr(enum gelic_eurus_command ix)
static void gelic_eurus_sync_cmd_worker(struct work_struct *work)
static struct gelic_eurus_cmd *gelic_eurus_sync_cmd(struct gelic_wl_info *wl,
unsigned int eurus_cmd,
void *buffer,
unsigned int buf_size)
static u32 gelic_wl_get_link(struct net_device *netdev)
static void gelic_wl_send_iwap_event(struct gelic_wl_info *wl, u8 *bssid)
static int gelic_wl_get_name(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *iwreq, char *extra)
static void gelic_wl_get_ch_info(struct gelic_wl_info *wl)
static int gelic_wl_get_range(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *iwreq, char *extra)
static int gelic_wl_set_scan(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
#define OUI_LEN 3
static const u8 rsn_oui[OUI_LEN] = ;
static const u8 wpa_oui[OUI_LEN] = ;
static size_t gelic_wl_synthesize_ie(u8 *buf,
struct gelic_eurus_scan_info *scan)
struct ie_item ;
struct ie_info ;
static void gelic_wl_parse_ie(u8 *data, size_t len,
struct ie_info *ie_info)
static char *gelic_wl_translate_scan(struct net_device *netdev,
struct iw_request_info *info,
char *ev,
char *stop,
struct gelic_wl_scan_info *network)
static int gelic_wl_get_scan(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static void scan_list_dump(struct gelic_wl_info *wl)
static int gelic_wl_set_auth(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_get_auth(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *iwreq, char *extra)
static int gelic_wl_set_essid(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_get_essid(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_set_encode(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_get_encode(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_set_ap(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_get_ap(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_set_encodeext(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_get_encodeext(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_set_mode(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_get_mode(struct net_device *netdev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static int gelic_wl_get_nick(struct net_device *net_dev,
struct iw_request_info *info,
union iwreq_data *data, char *extra)
static struct iw_statistics *gelic_wl_get_wireless_stats(
struct net_device *netdev)
static int gelic_wl_start_scan(struct gelic_wl_info *wl, int always_scan,
u8 *essid, size_t essid_len)
static void gelic_wl_scan_complete_event(struct gelic_wl_info *wl)
static void update_best(struct gelic_wl_scan_info **best,
struct gelic_wl_scan_info *candid,
int *best_weight,
int *weight)
static
struct gelic_wl_scan_info *gelic_wl_find_best_bss(struct gelic_wl_info *wl)
static int gelic_wl_do_wep_setup(struct gelic_wl_info *wl)
static const char *wpasecstr(enum gelic_eurus_wpa_security sec)
;
static int gelic_wl_do_wpa_setup(struct gelic_wl_info *wl)
static int gelic_wl_associate_bss(struct gelic_wl_info *wl,
struct gelic_wl_scan_info *bss)
static void gelic_wl_connected_event(struct gelic_wl_info *wl,
u64 event)
static void gelic_wl_disconnect_event(struct gelic_wl_info *wl,
u64 event)
static const char *eventstr(enum gelic_lv1_wl_event event)
static const char *eventstr(enum gelic_lv1_wl_event event)
static void gelic_wl_event_worker(struct work_struct *work)
static void gelic_wl_assoc_worker(struct work_struct *work)
void gelic_wl_interrupt(struct net_device *netdev, u64 status)
static const iw_handler gelic_wl_wext_handler[] =
;
static const struct iw_handler_def gelic_wl_wext_handler_def = ;
static struct net_device * __devinit gelic_wl_alloc(struct gelic_card *card)
static void gelic_wl_free(struct gelic_wl_info *wl)
static int gelic_wl_try_associate(struct net_device *netdev)
static int gelic_wl_open(struct net_device *netdev)
static int gelic_wl_reset_state(struct gelic_wl_info *wl)
static void gelic_wl_disconnect(struct net_device *netdev)
;
static int gelic_wl_stop(struct net_device *netdev)
static const struct net_device_ops gelic_wl_netdevice_ops = ;
static const struct ethtool_ops gelic_wl_ethtool_ops = ;
static void __devinit gelic_wl_setup_netdev_ops(struct net_device *netdev)
int __devinit gelic_wl_driver_probe(struct gelic_card *card)
int gelic_wl_driver_remove(struct gelic_card *card)
