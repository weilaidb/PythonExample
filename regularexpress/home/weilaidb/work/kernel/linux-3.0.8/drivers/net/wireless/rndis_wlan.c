static char modparam_country[4] = "EU";
module_param_string(country, modparam_country, 4, 0444);
MODULE_PARM_DESC(country, "Country code (ISO 3166-1 alpha-2), default: EU");
static int modparam_frameburst = 1;
module_param_named(frameburst, modparam_frameburst, int, 0444);
MODULE_PARM_DESC(frameburst, "enable frame bursting (default: on)");
static int modparam_afterburner = 0;
module_param_named(afterburner, modparam_afterburner, int, 0444);
MODULE_PARM_DESC(afterburner,
"enable afterburner aka '125 High Speed Mode' (default: off)");
static int modparam_power_save = 0;
module_param_named(power_save, modparam_power_save, int, 0444);
MODULE_PARM_DESC(power_save,
"set power save mode: 0=off, 1=on, 2=fast (default: off)");
static int modparam_power_output = 3;
module_param_named(power_output, modparam_power_output, int, 0444);
MODULE_PARM_DESC(power_output,
"set power output: 0=25%, 1=50%, 2=75%, 3=100% (default: 100%)");
static int modparam_roamtrigger = -70;
module_param_named(roamtrigger, modparam_roamtrigger, int, 0444);
MODULE_PARM_DESC(roamtrigger,
"set roaming dBm trigger: -80=optimize for distance, "
"-60=bandwidth (default: -70)");
static int modparam_roamdelta = 1;
module_param_named(roamdelta, modparam_roamdelta, int, 0444);
MODULE_PARM_DESC(roamdelta,
"set roaming tendency: 0=aggressive, 1=moderate, "
"2=conservative (default: moderate)");
static int modparam_workaround_interval;
module_param_named(workaround_interval, modparam_workaround_interval,
int, 0444);
MODULE_PARM_DESC(workaround_interval,
"set stall workaround interval in msecs (0=disabled) (default: 0)");
#define OID_GEN_LINK_SPEED			cpu_to_le32(0x00010107)
#define OID_GEN_RNDIS_CONFIG_PARAMETER		cpu_to_le32(0x0001021b)
#define OID_GEN_XMIT_OK				cpu_to_le32(0x00020101)
#define OID_GEN_RCV_OK				cpu_to_le32(0x00020102)
#define OID_GEN_XMIT_ERROR			cpu_to_le32(0x00020103)
#define OID_GEN_RCV_ERROR			cpu_to_le32(0x00020104)
#define OID_GEN_RCV_NO_BUFFER			cpu_to_le32(0x00020105)
#define OID_802_3_CURRENT_ADDRESS		cpu_to_le32(0x01010102)
#define OID_802_3_MULTICAST_LIST		cpu_to_le32(0x01010103)
#define OID_802_3_MAXIMUM_LIST_SIZE		cpu_to_le32(0x01010104)
#define OID_802_11_BSSID			cpu_to_le32(0x0d010101)
#define OID_802_11_SSID				cpu_to_le32(0x0d010102)
#define OID_802_11_INFRASTRUCTURE_MODE		cpu_to_le32(0x0d010108)
#define OID_802_11_ADD_WEP			cpu_to_le32(0x0d010113)
#define OID_802_11_REMOVE_WEP			cpu_to_le32(0x0d010114)
#define OID_802_11_DISASSOCIATE			cpu_to_le32(0x0d010115)
#define OID_802_11_AUTHENTICATION_MODE		cpu_to_le32(0x0d010118)
#define OID_802_11_PRIVACY_FILTER		cpu_to_le32(0x0d010119)
#define OID_802_11_BSSID_LIST_SCAN		cpu_to_le32(0x0d01011a)
#define OID_802_11_ENCRYPTION_STATUS		cpu_to_le32(0x0d01011b)
#define OID_802_11_ADD_KEY			cpu_to_le32(0x0d01011d)
#define OID_802_11_REMOVE_KEY			cpu_to_le32(0x0d01011e)
#define OID_802_11_ASSOCIATION_INFORMATION	cpu_to_le32(0x0d01011f)
#define OID_802_11_CAPABILITY			cpu_to_le32(0x0d010122)
#define OID_802_11_PMKID			cpu_to_le32(0x0d010123)
#define OID_802_11_NETWORK_TYPES_SUPPORTED	cpu_to_le32(0x0d010203)
#define OID_802_11_NETWORK_TYPE_IN_USE		cpu_to_le32(0x0d010204)
#define OID_802_11_TX_POWER_LEVEL		cpu_to_le32(0x0d010205)
#define OID_802_11_RSSI				cpu_to_le32(0x0d010206)
#define OID_802_11_RSSI_TRIGGER			cpu_to_le32(0x0d010207)
#define OID_802_11_FRAGMENTATION_THRESHOLD	cpu_to_le32(0x0d010209)
#define OID_802_11_RTS_THRESHOLD		cpu_to_le32(0x0d01020a)
#define OID_802_11_SUPPORTED_RATES		cpu_to_le32(0x0d01020e)
#define OID_802_11_CONFIGURATION		cpu_to_le32(0x0d010211)
#define OID_802_11_POWER_MODE			cpu_to_le32(0x0d010216)
#define OID_802_11_BSSID_LIST			cpu_to_le32(0x0d010217)
#define	WL_NOISE	-96
#define	WL_SIGMAX	-32
#define BCM4320_DEFAULT_TXPOWER_DBM_100 13
#define BCM4320_DEFAULT_TXPOWER_DBM_75  12
#define BCM4320_DEFAULT_TXPOWER_DBM_50  10
#define BCM4320_DEFAULT_TXPOWER_DBM_25  7
#define RNDIS_STATUS_ADAPTER_NOT_READY		cpu_to_le32(0xc0010011)
#define RNDIS_STATUS_ADAPTER_NOT_OPEN		cpu_to_le32(0xc0010012)
#define RNDIS_UNKNOWN	0
#define RNDIS_BCM4320A	1
#define RNDIS_BCM4320B	2
#define NDIS_802_11_LENGTH_SSID 32
#define NDIS_802_11_LENGTH_RATES 8
#define NDIS_802_11_LENGTH_RATES_EX 16
enum ndis_80211_net_type ;
enum ndis_80211_net_infra ;
enum ndis_80211_auth_mode ;
enum ndis_80211_encr_status ;
enum ndis_80211_priv_filter ;
enum ndis_80211_status_type ;
enum ndis_80211_media_stream_mode ;
enum ndis_80211_radio_status ;
enum ndis_80211_addkey_bits ;
enum ndis_80211_addwep_bits ;
enum ndis_80211_power_mode ;
struct ndis_80211_auth_request  __packed;
struct ndis_80211_pmkid_candidate  __packed;
struct ndis_80211_pmkid_cand_list  __packed;
struct ndis_80211_status_indication  __packed;
struct ndis_80211_ssid  __packed;
struct ndis_80211_conf_freq_hop  __packed;
struct ndis_80211_conf  __packed;
struct ndis_80211_bssid_ex  __packed;
struct ndis_80211_bssid_list_ex  __packed;
struct ndis_80211_fixed_ies  __packed;
struct ndis_80211_wep_key  __packed;
struct ndis_80211_key  __packed;
struct ndis_80211_remove_key  __packed;
struct ndis_config_param  __packed;
struct ndis_80211_assoc_info  __packed;
struct ndis_80211_auth_encr_pair  __packed;
struct ndis_80211_capability  __packed;
struct ndis_80211_bssid_info ;
struct ndis_80211_pmkid ;
#define NET_TYPE_11FB	0
#define CAP_MODE_80211A		1
#define CAP_MODE_80211B		2
#define CAP_MODE_80211G		4
#define CAP_MODE_MASK		7
#define WORK_LINK_UP		(1<<0)
#define WORK_LINK_DOWN		(1<<1)
#define WORK_SET_MULTICAST_LIST	(1<<2)
#define RNDIS_WLAN_ALG_NONE	0
#define RNDIS_WLAN_ALG_WEP	(1<<0)
#define RNDIS_WLAN_ALG_TKIP	(1<<1)
#define RNDIS_WLAN_ALG_CCMP	(1<<2)
#define RNDIS_WLAN_KEY_MGMT_NONE	0
#define RNDIS_WLAN_KEY_MGMT_802_1X	(1<<0)
#define RNDIS_WLAN_KEY_MGMT_PSK		(1<<1)
#define COMMAND_BUFFER_SIZE	(CONTROL_BUFFER_SIZE + sizeof(struct rndis_set))
static const struct ieee80211_channel rndis_channels[] = ;
static const struct ieee80211_rate rndis_rates[] = ;
static const u32 rndis_cipher_suites[] = ;
struct rndis_wlan_encr_key ;
struct rndis_wlan_private ;
static int rndis_change_virtual_intf(struct wiphy *wiphy,
struct net_device *dev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params);
static int rndis_scan(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_scan_request *request);
static int rndis_set_wiphy_params(struct wiphy *wiphy, u32 changed);
static int rndis_set_tx_power(struct wiphy *wiphy,
enum nl80211_tx_power_setting type,
int mbm);
static int rndis_get_tx_power(struct wiphy *wiphy, int *dbm);
static int rndis_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme);
static int rndis_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code);
static int rndis_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params);
static int rndis_leave_ibss(struct wiphy *wiphy, struct net_device *dev);
static int rndis_set_channel(struct wiphy *wiphy, struct net_device *dev,
struct ieee80211_channel *chan, enum nl80211_channel_type channel_type);
static int rndis_add_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool pairwise, const u8 *mac_addr,
struct key_params *params);
static int rndis_del_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool pairwise, const u8 *mac_addr);
static int rndis_set_default_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool unicast, bool multicast);
static int rndis_get_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_info *sinfo);
static int rndis_dump_station(struct wiphy *wiphy, struct net_device *dev,
int idx, u8 *mac, struct station_info *sinfo);
static int rndis_set_pmksa(struct wiphy *wiphy, struct net_device *netdev,
struct cfg80211_pmksa *pmksa);
static int rndis_del_pmksa(struct wiphy *wiphy, struct net_device *netdev,
struct cfg80211_pmksa *pmksa);
static int rndis_flush_pmksa(struct wiphy *wiphy, struct net_device *netdev);
static int rndis_set_power_mgmt(struct wiphy *wiphy, struct net_device *dev,
bool enabled, int timeout);
static int rndis_set_cqm_rssi_config(struct wiphy *wiphy,
struct net_device *dev,
s32 rssi_thold, u32 rssi_hyst);
static const struct cfg80211_ops rndis_config_ops = ;
static void *rndis_wiphy_privid = &rndis_wiphy_privid;
static struct rndis_wlan_private *get_rndis_wlan_priv(struct usbnet *dev)
static u32 get_bcm4320_power_dbm(struct rndis_wlan_private *priv)
static bool is_wpa_key(struct rndis_wlan_private *priv, int idx)
static int rndis_cipher_to_alg(u32 cipher)
static int rndis_akm_suite_to_key_mgmt(u32 akm_suite)
static const char *oid_to_string(__le32 oid)
static const char *oid_to_string(__le32 oid)
static int rndis_error_status(__le32 rndis_status)
static int rndis_query_oid(struct usbnet *dev, __le32 oid, void *data, int *len)
static int rndis_set_oid(struct usbnet *dev, __le32 oid, const void *data,
int len)
static int rndis_reset(struct usbnet *usbdev)
static int rndis_set_config_parameter(struct usbnet *dev, char *param,
int value_type, void *value)
static int rndis_set_config_parameter_str(struct usbnet *dev,
char *param, char *value)
static int level_to_qual(int level)
static int set_infra_mode(struct usbnet *usbdev, int mode);
static void restore_keys(struct usbnet *usbdev);
static int rndis_check_bssid_list(struct usbnet *usbdev, u8 *match_bssid,
bool *matched);
static int rndis_start_bssid_list_scan(struct usbnet *usbdev)
static int set_essid(struct usbnet *usbdev, struct ndis_80211_ssid *ssid)
static int set_bssid(struct usbnet *usbdev, const u8 *bssid)
static int clear_bssid(struct usbnet *usbdev)
static int get_bssid(struct usbnet *usbdev, u8 bssid[ETH_ALEN])
static int get_association_info(struct usbnet *usbdev,
struct ndis_80211_assoc_info *info, int len)
static bool is_associated(struct usbnet *usbdev)
static int disassociate(struct usbnet *usbdev, bool reset_ssid)
static int set_auth_mode(struct usbnet *usbdev, u32 wpa_version,
enum nl80211_auth_type auth_type, int keymgmt)
static int set_priv_filter(struct usbnet *usbdev)
static int set_encr_mode(struct usbnet *usbdev, int pairwise, int groupwise)
static int set_infra_mode(struct usbnet *usbdev, int mode)
static int set_rts_threshold(struct usbnet *usbdev, u32 rts_threshold)
static int set_frag_threshold(struct usbnet *usbdev, u32 frag_threshold)
static void set_default_iw_params(struct usbnet *usbdev)
static int deauthenticate(struct usbnet *usbdev)
static int set_channel(struct usbnet *usbdev, int channel)
static int add_wep_key(struct usbnet *usbdev, const u8 *key, int key_len,
int index)
static int add_wpa_key(struct usbnet *usbdev, const u8 *key, int key_len,
int index, const u8 *addr, const u8 *rx_seq,
int seq_len, u32 cipher, __le32 flags)
static int restore_key(struct usbnet *usbdev, int key_idx)
static void restore_keys(struct usbnet *usbdev)
static void clear_key(struct rndis_wlan_private *priv, int idx)
static int remove_key(struct usbnet *usbdev, int index, const u8 *bssid)
static void set_multicast_list(struct usbnet *usbdev)
static void debug_print_pmkids(struct usbnet *usbdev,
struct ndis_80211_pmkid *pmkids,
const char *func_str)
static void debug_print_pmkids(struct usbnet *usbdev,
struct ndis_80211_pmkid *pmkids,
const char *func_str)
static struct ndis_80211_pmkid *get_device_pmkids(struct usbnet *usbdev)
static int set_device_pmkids(struct usbnet *usbdev,
struct ndis_80211_pmkid *pmkids)
static struct ndis_80211_pmkid *remove_pmkid(struct usbnet *usbdev,
struct ndis_80211_pmkid *pmkids,
struct cfg80211_pmksa *pmksa,
int max_pmkids)
static struct ndis_80211_pmkid *update_pmkid(struct usbnet *usbdev,
struct ndis_80211_pmkid *pmkids,
struct cfg80211_pmksa *pmksa,
int max_pmkids)
static int rndis_change_virtual_intf(struct wiphy *wiphy,
struct net_device *dev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
static int rndis_set_wiphy_params(struct wiphy *wiphy, u32 changed)
static int rndis_set_tx_power(struct wiphy *wiphy,
enum nl80211_tx_power_setting type,
int mbm)
static int rndis_get_tx_power(struct wiphy *wiphy, int *dbm)
#define SCAN_DELAY_JIFFIES (6 * HZ)
static int rndis_scan(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_scan_request *request)
static struct cfg80211_bss *rndis_bss_info_update(struct usbnet *usbdev,
struct ndis_80211_bssid_ex *bssid)
static struct ndis_80211_bssid_ex *next_bssid_list_item(
struct ndis_80211_bssid_ex *bssid,
int *bssid_len, void *buf, int len)
static bool check_bssid_list_item(struct ndis_80211_bssid_ex *bssid,
int bssid_len, void *buf, int len)
static int rndis_check_bssid_list(struct usbnet *usbdev, u8 *match_bssid,
bool *matched)
static void rndis_get_scan_results(struct work_struct *work)
static int rndis_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme)
static int rndis_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code)
static int rndis_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params)
static int rndis_leave_ibss(struct wiphy *wiphy, struct net_device *dev)
static int rndis_set_channel(struct wiphy *wiphy, struct net_device *netdev,
struct ieee80211_channel *chan, enum nl80211_channel_type channel_type)
static int rndis_add_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool pairwise, const u8 *mac_addr,
struct key_params *params)
static int rndis_del_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool pairwise, const u8 *mac_addr)
static int rndis_set_default_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool unicast, bool multicast)
static void rndis_fill_station_info(struct usbnet *usbdev,
struct station_info *sinfo)
static int rndis_get_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_info *sinfo)
static int rndis_dump_station(struct wiphy *wiphy, struct net_device *dev,
int idx, u8 *mac, struct station_info *sinfo)
static int rndis_set_pmksa(struct wiphy *wiphy, struct net_device *netdev,
struct cfg80211_pmksa *pmksa)
static int rndis_del_pmksa(struct wiphy *wiphy, struct net_device *netdev,
struct cfg80211_pmksa *pmksa)
static int rndis_flush_pmksa(struct wiphy *wiphy, struct net_device *netdev)
static int rndis_set_power_mgmt(struct wiphy *wiphy, struct net_device *dev,
bool enabled, int timeout)
static int rndis_set_cqm_rssi_config(struct wiphy *wiphy,
struct net_device *dev,
s32 rssi_thold, u32 rssi_hyst)
static void rndis_wlan_craft_connected_bss(struct usbnet *usbdev, u8 *bssid,
struct ndis_80211_assoc_info *info)
static void rndis_wlan_do_link_up_work(struct usbnet *usbdev)
static void rndis_wlan_do_link_down_work(struct usbnet *usbdev)
static void rndis_wlan_worker(struct work_struct *work)
static void rndis_wlan_set_multicast_list(struct net_device *dev)
static void rndis_wlan_auth_indication(struct usbnet *usbdev,
struct ndis_80211_status_indication *indication,
int len)
static void rndis_wlan_pmkid_cand_list_indication(struct usbnet *usbdev,
struct ndis_80211_status_indication *indication,
int len)
static void rndis_wlan_media_specific_indication(struct usbnet *usbdev,
struct rndis_indicate *msg, int buflen)
static void rndis_wlan_indication(struct usbnet *usbdev, void *ind, int buflen)
static int rndis_wlan_get_caps(struct usbnet *usbdev, struct wiphy *wiphy)
static void rndis_do_cqm(struct usbnet *usbdev, s32 rssi)
#define DEVICE_POLLER_JIFFIES (HZ)
static void rndis_device_poller(struct work_struct *work)
static void rndis_copy_module_params(struct usbnet *usbdev, int device_type)
static int unknown_early_init(struct usbnet *usbdev)
static int bcm4320a_early_init(struct usbnet *usbdev)
static int bcm4320b_early_init(struct usbnet *usbdev)
static const struct net_device_ops rndis_wlan_netdev_ops = ;
static int rndis_wlan_bind(struct usbnet *usbdev, struct usb_interface *intf)
static void rndis_wlan_unbind(struct usbnet *usbdev, struct usb_interface *intf)
static int rndis_wlan_reset(struct usbnet *usbdev)
static int rndis_wlan_stop(struct usbnet *usbdev)
static const struct driver_info	bcm4320b_info = ;
static const struct driver_info	bcm4320a_info = ;
static const struct driver_info rndis_wlan_info = ;
static const struct usb_device_id products [] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver rndis_wlan_driver = ;
static int __init rndis_wlan_init(void)
module_init(rndis_wlan_init);
static void __exit rndis_wlan_exit(void)
module_exit(rndis_wlan_exit);
MODULE_AUTHOR("Bjorge Dijkstra");
MODULE_AUTHOR("Jussi Kivilinna");
MODULE_DESCRIPTION("Driver for RNDIS based USB Wireless adapters");
MODULE_LICENSE("GPL");
