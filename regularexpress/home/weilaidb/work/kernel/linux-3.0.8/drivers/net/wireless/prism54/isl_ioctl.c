#define KEY_SIZE_WEP104 13
#define KEY_SIZE_WEP40  5
#define KEY_SIZE_TKIP   32
static void prism54_wpa_bss_ie_add(islpci_private *priv, u8 *bssid,
u8 *wpa_ie, size_t wpa_ie_len);
static size_t prism54_wpa_bss_ie_get(islpci_private *priv, u8 *bssid, u8 *wpa_ie);
static int prism54_set_wpa(struct net_device *, struct iw_request_info *,
__u32 *, char *);
static const unsigned char scan_rate_list[] = ;
static int
prism54_mib_mode_helper(islpci_private *priv, u32 iw_mode)
void
prism54_mib_init(islpci_private *priv)
void
prism54_update_stats(struct work_struct *work)
struct iw_statistics *
prism54_get_wireless_stats(struct net_device *ndev)
static int
prism54_commit(struct net_device *ndev, struct iw_request_info *info,
char *cwrq, char *extra)
static int
prism54_get_name(struct net_device *ndev, struct iw_request_info *info,
char *cwrq, char *extra)
static int
prism54_set_freq(struct net_device *ndev, struct iw_request_info *info,
struct iw_freq *fwrq, char *extra)
static int
prism54_get_freq(struct net_device *ndev, struct iw_request_info *info,
struct iw_freq *fwrq, char *extra)
static int
prism54_set_mode(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_get_mode(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_set_sens(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_get_sens(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_get_range(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_set_wap(struct net_device *ndev, struct iw_request_info *info,
struct sockaddr *awrq, char *extra)
static int
prism54_get_wap(struct net_device *ndev, struct iw_request_info *info,
struct sockaddr *awrq, char *extra)
static int
prism54_set_scan(struct net_device *dev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static char *
prism54_translate_bss(struct net_device *ndev, struct iw_request_info *info,
char *current_ev, char *end_buf, struct obj_bss *bss,
char noise)
static int
prism54_get_scan(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_set_essid(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_get_essid(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_set_nick(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_get_nick(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_set_rate(struct net_device *ndev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_get_rate(struct net_device *ndev,
struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_set_rts(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_get_rts(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_set_frag(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_get_frag(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_set_retry(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_get_retry(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_set_encode(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_get_encode(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_get_txpower(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int
prism54_set_txpower(struct net_device *ndev, struct iw_request_info *info,
struct iw_param *vwrq, char *extra)
static int prism54_set_genie(struct net_device *ndev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static int prism54_get_genie(struct net_device *ndev,
struct iw_request_info *info,
struct iw_point *data, char *extra)
static int prism54_set_auth(struct net_device *ndev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int prism54_get_auth(struct net_device *ndev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int prism54_set_encodeext(struct net_device *ndev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
static int prism54_get_encodeext(struct net_device *ndev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
static int
prism54_reset(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_get_oid(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_set_u32(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_set_raw(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
void
prism54_acl_init(struct islpci_acl *acl)
static void
prism54_clear_mac(struct islpci_acl *acl)
void
prism54_acl_clean(struct islpci_acl *acl)
static int
prism54_add_mac(struct net_device *ndev, struct iw_request_info *info,
struct sockaddr *awrq, char *extra)
static int
prism54_del_mac(struct net_device *ndev, struct iw_request_info *info,
struct sockaddr *awrq, char *extra)
static int
prism54_get_mac(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_set_policy(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_get_policy(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_mac_accept(struct islpci_acl *acl, char *mac)
static int
prism54_kick_all(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *dwrq, char *extra)
static int
prism54_kick_mac(struct net_device *ndev, struct iw_request_info *info,
struct sockaddr *awrq, char *extra)
static void
format_event(islpci_private *priv, char *dest, const char *str,
const struct obj_mlme *mlme, u16 *length, int error)
static void
send_formatted_event(islpci_private *priv, const char *str,
const struct obj_mlme *mlme, int error)
static void
send_simple_event(islpci_private *priv, const char *str)
static void
link_changed(struct net_device *ndev, u32 bitrate)
struct ieee80211_beacon_phdr  __packed;
#define WLAN_EID_GENERIC 0xdd
static u8 wpa_oid[4] = ;
static void
prism54_wpa_bss_ie_add(islpci_private *priv, u8 *bssid,
u8 *wpa_ie, size_t wpa_ie_len)
static size_t
prism54_wpa_bss_ie_get(islpci_private *priv, u8 *bssid, u8 *wpa_ie)
void
prism54_wpa_bss_ie_init(islpci_private *priv)
void
prism54_wpa_bss_ie_clean(islpci_private *priv)
static void
prism54_process_bss_data(islpci_private *priv, u32 oid, u8 *addr,
u8 *payload, size_t len)
static void
handle_request(islpci_private *priv, struct obj_mlme *mlme, enum oid_num_t oid)
static int
prism54_process_trap_helper(islpci_private *priv, enum oid_num_t oid,
char *data)
void
prism54_process_trap(struct work_struct *work)
int
prism54_set_mac_address(struct net_device *ndev, void *addr)
enum ;
#define PRISM54_SET_WPA			SIOCIWFIRSTPRIV+12
#define PRISM54_HOSTAPD			SIOCIWFIRSTPRIV+25
#define PRISM54_DROP_UNENCRYPTED	SIOCIWFIRSTPRIV+26
#define PRISM2_HOSTAPD_MAX_BUF_SIZE 1024
#define PRISM2_HOSTAPD_GENERIC_ELEMENT_HDR_LEN \
offsetof(struct prism2_hostapd_param, u.generic_elem.data)
#define HOSTAP_CRYPT_ALG_NAME_LEN 16
struct prism2_hostapd_param ;
static int
prism2_ioctl_set_encryption(struct net_device *dev,
struct prism2_hostapd_param *param,
int param_len)
static int
prism2_ioctl_set_generic_element(struct net_device *ndev,
struct prism2_hostapd_param *param,
int param_len)
static int
prism2_ioctl_mlme(struct net_device *dev, struct prism2_hostapd_param *param)
static int
prism2_ioctl_scan_req(struct net_device *ndev,
struct prism2_hostapd_param *param)
static int
prism54_hostapd(struct net_device *ndev, struct iw_point *p)
static int
prism54_set_wpa(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_get_wpa(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_set_prismhdr(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_get_prismhdr(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_debug_oid(struct net_device *ndev, struct iw_request_info *info,
__u32 * uwrq, char *extra)
static int
prism54_debug_get_oid(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *data, char *extra)
static int
prism54_debug_set_oid(struct net_device *ndev, struct iw_request_info *info,
struct iw_point *data, char *extra)
static int
prism54_set_spy(struct net_device *ndev,
struct iw_request_info *info,
union iwreq_data *uwrq, char *extra)
static const iw_handler prism54_handler[] = ;
#define PRISM54_RESET		SIOCIWFIRSTPRIV
#define PRISM54_GET_POLICY	SIOCIWFIRSTPRIV+1
#define PRISM54_SET_POLICY	SIOCIWFIRSTPRIV+2
#define PRISM54_GET_MAC		SIOCIWFIRSTPRIV+3
#define PRISM54_ADD_MAC		SIOCIWFIRSTPRIV+4
#define PRISM54_DEL_MAC		SIOCIWFIRSTPRIV+6
#define PRISM54_KICK_MAC	SIOCIWFIRSTPRIV+8
#define PRISM54_KICK_ALL	SIOCIWFIRSTPRIV+10
#define PRISM54_GET_WPA		SIOCIWFIRSTPRIV+11
#define PRISM54_SET_WPA		SIOCIWFIRSTPRIV+12
#define PRISM54_DBG_OID		SIOCIWFIRSTPRIV+14
#define PRISM54_DBG_GET_OID	SIOCIWFIRSTPRIV+15
#define PRISM54_DBG_SET_OID	SIOCIWFIRSTPRIV+16
#define PRISM54_GET_OID		SIOCIWFIRSTPRIV+17
#define PRISM54_SET_OID_U32	SIOCIWFIRSTPRIV+18
#define	PRISM54_SET_OID_STR	SIOCIWFIRSTPRIV+20
#define	PRISM54_SET_OID_ADDR	SIOCIWFIRSTPRIV+22
#define PRISM54_GET_PRISMHDR	SIOCIWFIRSTPRIV+23
#define PRISM54_SET_PRISMHDR	SIOCIWFIRSTPRIV+24
#define IWPRIV_SET_U32(n,x)
#define IWPRIV_SET_SSID(n,x)
#define IWPRIV_SET_ADDR(n,x)
#define IWPRIV_GET(n,x)
#define IWPRIV_U32(n,x)		IWPRIV_SET_U32(n,x), IWPRIV_GET(n,x)
#define IWPRIV_SSID(n,x)	IWPRIV_SET_SSID(n,x), IWPRIV_GET(n,x)
#define IWPRIV_ADDR(n,x)	IWPRIV_SET_ADDR(n,x), IWPRIV_GET(n,x)
static const struct iw_priv_args prism54_private_args[] = ;
static const iw_handler prism54_private_handler[] = ;
const struct iw_handler_def prism54_handler_def = ;
int
prism54_ioctl(struct net_device *ndev, struct ifreq *rq, int cmd)
