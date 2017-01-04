static int other_ap_policy[MAX_PARM_DEVICES] = ;
module_param_array(other_ap_policy, int, NULL, 0444);
MODULE_PARM_DESC(other_ap_policy, "Other AP beacon monitoring policy (0-3)");
static int ap_max_inactivity[MAX_PARM_DEVICES] = ;
module_param_array(ap_max_inactivity, int, NULL, 0444);
MODULE_PARM_DESC(ap_max_inactivity, "AP timeout (in seconds) for station "
"inactivity");
static int ap_bridge_packets[MAX_PARM_DEVICES] = ;
module_param_array(ap_bridge_packets, int, NULL, 0444);
MODULE_PARM_DESC(ap_bridge_packets, "Bridge packets directly between "
"stations");
static int autom_ap_wds[MAX_PARM_DEVICES] = ;
module_param_array(autom_ap_wds, int, NULL, 0444);
MODULE_PARM_DESC(autom_ap_wds, "Add WDS connections to other APs "
"automatically");
static struct sta_info* ap_get_sta(struct ap_data *ap, u8 *sta);
static void hostap_event_expired_sta(struct net_device *dev,
struct sta_info *sta);
static void handle_add_proc_queue(struct work_struct *work);
static void handle_wds_oper_queue(struct work_struct *work);
static void prism2_send_mgmt(struct net_device *dev,
u16 type_subtype, char *body,
int body_len, u8 *addr, u16 tx_cb_idx);
static int ap_debug_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static void ap_sta_hash_add(struct ap_data *ap, struct sta_info *sta)
static void ap_sta_hash_del(struct ap_data *ap, struct sta_info *sta)
static void ap_free_sta(struct ap_data *ap, struct sta_info *sta)
static void hostap_set_tim(local_info_t *local, int aid, int set)
static void hostap_event_new_sta(struct net_device *dev, struct sta_info *sta)
static void hostap_event_expired_sta(struct net_device *dev,
struct sta_info *sta)
static void ap_handle_timer(unsigned long data)
void hostap_deauth_all_stas(struct net_device *dev, struct ap_data *ap,
int resend)
static int ap_control_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
int ap_control_add_mac(struct mac_restrictions *mac_restrictions, u8 *mac)
int ap_control_del_mac(struct mac_restrictions *mac_restrictions, u8 *mac)
static int ap_control_mac_deny(struct mac_restrictions *mac_restrictions,
u8 *mac)
void ap_control_flush_macs(struct mac_restrictions *mac_restrictions)
int ap_control_kick_mac(struct ap_data *ap, struct net_device *dev, u8 *mac)
void ap_control_kickall(struct ap_data *ap)
#define PROC_LIMIT (PAGE_SIZE - 80)
static int prism2_ap_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
void hostap_check_sta_fw_version(struct ap_data *ap, int sta_fw_ver)
static void hostap_ap_tx_cb(struct sk_buff *skb, int ok, void *data)
static void hostap_ap_tx_cb_auth(struct sk_buff *skb, int ok, void *data)
static void hostap_ap_tx_cb_assoc(struct sk_buff *skb, int ok, void *data)
static void hostap_ap_tx_cb_poll(struct sk_buff *skb, int ok, void *data)
void hostap_init_data(local_info_t *local)
void hostap_init_ap_proc(local_info_t *local)
void hostap_free_data(struct ap_data *ap)
static struct sta_info* ap_get_sta(struct ap_data *ap, u8 *sta)
static void prism2_send_mgmt(struct net_device *dev,
u16 type_subtype, char *body,
int body_len, u8 *addr, u16 tx_cb_idx)
static int prism2_sta_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
static void handle_add_proc_queue(struct work_struct *work)
static struct sta_info * ap_add_sta(struct ap_data *ap, u8 *addr)
static int ap_tx_rate_ok(int rateidx, struct sta_info *sta,
local_info_t *local)
static void prism2_check_tx_rates(struct sta_info *sta)
static void ap_crypt_init(struct ap_data *ap)
static char * ap_auth_make_challenge(struct ap_data *ap)
static void handle_authen(local_info_t *local, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
static void handle_assoc(local_info_t *local, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats, int reassoc)
static void handle_deauth(local_info_t *local, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
static void handle_disassoc(local_info_t *local, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
static void ap_handle_data_nullfunc(local_info_t *local,
struct ieee80211_hdr *hdr)
static void ap_handle_dropped_data(local_info_t *local,
struct ieee80211_hdr *hdr)
static void pspoll_send_buffered(local_info_t *local, struct sta_info *sta,
struct sk_buff *skb)
static void handle_pspoll(local_info_t *local,
struct ieee80211_hdr *hdr,
struct hostap_80211_rx_status *rx_stats)
static void handle_wds_oper_queue(struct work_struct *work)
static void handle_beacon(local_info_t *local, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
static void handle_ap_item(local_info_t *local, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
void hostap_rx(struct net_device *dev, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
static void schedule_packet_send(local_info_t *local, struct sta_info *sta)
int prism2_ap_get_sta_qual(local_info_t *local, struct sockaddr addr[],
struct iw_quality qual[], int buf_size,
int aplist)
int prism2_ap_translate_scan(struct net_device *dev,
struct iw_request_info *info, char *buffer)
static int prism2_hostapd_add_sta(struct ap_data *ap,
struct prism2_hostapd_param *param)
static int prism2_hostapd_remove_sta(struct ap_data *ap,
struct prism2_hostapd_param *param)
static int prism2_hostapd_get_info_sta(struct ap_data *ap,
struct prism2_hostapd_param *param)
static int prism2_hostapd_set_flags_sta(struct ap_data *ap,
struct prism2_hostapd_param *param)
static int prism2_hostapd_sta_clear_stats(struct ap_data *ap,
struct prism2_hostapd_param *param)
int prism2_hostapd(struct ap_data *ap, struct prism2_hostapd_param *param)
static int ap_update_sta_tx_rate(struct sta_info *sta, struct net_device *dev)
ap_tx_ret hostap_handle_sta_tx(local_info_t *local, struct hostap_tx_data *tx)
void hostap_handle_sta_release(void *ptr)
void hostap_handle_sta_tx_exc(local_info_t *local, struct sk_buff *skb)
static void hostap_update_sta_ps2(local_info_t *local, struct sta_info *sta,
int pwrmgt, int type, int stype)
int hostap_update_sta_ps(local_info_t *local, struct ieee80211_hdr *hdr)
ap_rx_ret hostap_handle_sta_rx(local_info_t *local, struct net_device *dev,
struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats,
int wds)
int hostap_handle_sta_crypto(local_info_t *local,
struct ieee80211_hdr *hdr,
struct lib80211_crypt_data **crypt,
void **sta_ptr)
int hostap_is_sta_assoc(struct ap_data *ap, u8 *sta_addr)
int hostap_is_sta_authorized(struct ap_data *ap, u8 *sta_addr)
int hostap_add_sta(struct ap_data *ap, u8 *sta_addr)
int hostap_update_rx_stats(struct ap_data *ap,
struct ieee80211_hdr *hdr,
struct hostap_80211_rx_status *rx_stats)
void hostap_update_rates(local_info_t *local)
void * ap_crypt_get_ptrs(struct ap_data *ap, u8 *addr, int permanent,
struct lib80211_crypt_data ***crypt)
void hostap_add_wds_links(local_info_t *local)
void hostap_wds_link_oper(local_info_t *local, u8 *addr, wds_oper_type type)
EXPORT_SYMBOL(hostap_init_data);
EXPORT_SYMBOL(hostap_init_ap_proc);
EXPORT_SYMBOL(hostap_free_data);
EXPORT_SYMBOL(hostap_check_sta_fw_version);
EXPORT_SYMBOL(hostap_handle_sta_tx_exc);
