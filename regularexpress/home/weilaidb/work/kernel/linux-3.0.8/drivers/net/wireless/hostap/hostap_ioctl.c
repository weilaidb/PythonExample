static struct iw_statistics *hostap_get_wireless_stats(struct net_device *dev)
static int prism2_get_datarates(struct net_device *dev, u8 *rates)
static int prism2_get_name(struct net_device *dev,
struct iw_request_info *info,
char *name, char *extra)
static int prism2_ioctl_siwencode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *keybuf)
static int prism2_ioctl_giwencode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *key)
static int hostap_set_rate(struct net_device *dev)
static int prism2_ioctl_siwrate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq, char *extra)
static int prism2_ioctl_giwrate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq, char *extra)
static int prism2_ioctl_siwsens(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *sens, char *extra)
static int prism2_ioctl_giwsens(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *sens, char *extra)
static int prism2_ioctl_giwaplist(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static int prism2_ioctl_siwrts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rts, char *extra)
static int prism2_ioctl_giwrts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rts, char *extra)
static int prism2_ioctl_siwfrag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rts, char *extra)
static int prism2_ioctl_giwfrag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rts, char *extra)
static int hostap_join_ap(struct net_device *dev)
static int prism2_ioctl_siwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra)
static int prism2_ioctl_giwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra)
static int prism2_ioctl_siwnickn(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *nickname)
static int prism2_ioctl_giwnickn(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *nickname)
static int prism2_ioctl_siwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *freq, char *extra)
static int prism2_ioctl_giwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *freq, char *extra)
static void hostap_monitor_set_type(local_info_t *local)
static int prism2_ioctl_siwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid)
static int prism2_ioctl_giwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *essid)
static int prism2_ioctl_giwrange(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static int hostap_monitor_mode_enable(local_info_t *local)
static int hostap_monitor_mode_disable(local_info_t *local)
static int prism2_ioctl_siwmode(struct net_device *dev,
struct iw_request_info *info,
__u32 *mode, char *extra)
static int prism2_ioctl_giwmode(struct net_device *dev,
struct iw_request_info *info,
__u32 *mode, char *extra)
static int prism2_ioctl_siwpower(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *wrq, char *extra)
static int prism2_ioctl_giwpower(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq, char *extra)
static int prism2_ioctl_siwretry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq, char *extra)
static int prism2_ioctl_giwretry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq, char *extra)
static int prism2_txpower_hfa386x_to_dBm(u16 val)
static u16 prism2_txpower_dBm_to_hfa386x(int val)
static int prism2_ioctl_siwtxpow(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq, char *extra)
static int prism2_ioctl_giwtxpow(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rrq, char *extra)
static int prism2_request_hostscan(struct net_device *dev,
u8 *ssid, u8 ssid_len)
static int prism2_request_scan(struct net_device *dev)
static inline int prism2_request_hostscan(struct net_device *dev,
u8 *ssid, u8 ssid_len)
static inline int prism2_request_scan(struct net_device *dev)
static int prism2_ioctl_siwscan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static char * __prism2_translate_scan(local_info_t *local,
struct iw_request_info *info,
struct hfa384x_hostscan_result *scan,
struct hostap_bss_info *bss,
char *current_ev, char *end_buf)
static inline int prism2_translate_scan(local_info_t *local,
struct iw_request_info *info,
char *buffer, int buflen)
static inline int prism2_ioctl_giwscan_sta(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static int prism2_ioctl_giwscan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static const struct iw_priv_args prism2_priv[] = ;
static int prism2_ioctl_priv_inquire(struct net_device *dev, int *i)
static int prism2_ioctl_priv_prism2_param(struct net_device *dev,
struct iw_request_info *info,
void *wrqu, char *extra)
static int prism2_ioctl_priv_get_prism2_param(struct net_device *dev,
struct iw_request_info *info,
void *wrqu, char *extra)
static int prism2_ioctl_priv_readmif(struct net_device *dev,
struct iw_request_info *info,
void *wrqu, char *extra)
static int prism2_ioctl_priv_writemif(struct net_device *dev,
struct iw_request_info *info,
void *wrqu, char *extra)
static int prism2_ioctl_priv_monitor(struct net_device *dev, int *i)
static int prism2_ioctl_priv_reset(struct net_device *dev, int *i)
static int prism2_ioctl_priv_set_rid_word(struct net_device *dev, int *i)
static int ap_mac_cmd_ioctl(local_info_t *local, int *cmd)
static int prism2_ioctl_priv_download(local_info_t *local, struct iw_point *p)
static int prism2_set_genericelement(struct net_device *dev, u8 *elem,
size_t len)
static int prism2_ioctl_siwauth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *data, char *extra)
static int prism2_ioctl_giwauth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *data, char *extra)
static int prism2_ioctl_siwencodeext(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *extra)
static int prism2_ioctl_giwencodeext(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *extra)
static int prism2_ioctl_set_encryption(local_info_t *local,
struct prism2_hostapd_param *param,
int param_len)
static int prism2_ioctl_get_encryption(local_info_t *local,
struct prism2_hostapd_param *param,
int param_len)
static int prism2_ioctl_get_rid(local_info_t *local,
struct prism2_hostapd_param *param,
int param_len)
static int prism2_ioctl_set_rid(local_info_t *local,
struct prism2_hostapd_param *param,
int param_len)
static int prism2_ioctl_set_assoc_ap_addr(local_info_t *local,
struct prism2_hostapd_param *param,
int param_len)
static int prism2_ioctl_siwgenie(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static int prism2_ioctl_giwgenie(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static int prism2_ioctl_set_generic_element(local_info_t *local,
struct prism2_hostapd_param *param,
int param_len)
static int prism2_ioctl_siwmlme(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static int prism2_ioctl_mlme(local_info_t *local,
struct prism2_hostapd_param *param)
static int prism2_ioctl_scan_req(local_info_t *local,
struct prism2_hostapd_param *param)
static int prism2_ioctl_priv_hostapd(local_info_t *local, struct iw_point *p)
static void prism2_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
const struct ethtool_ops prism2_ethtool_ops = ;
static const iw_handler prism2_handler[] =
;
static const iw_handler prism2_private_handler[] =
;
const struct iw_handler_def hostap_iw_handler_def =
;
int hostap_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
