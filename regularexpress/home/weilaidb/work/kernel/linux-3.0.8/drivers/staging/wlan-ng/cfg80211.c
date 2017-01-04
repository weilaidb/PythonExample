static const struct ieee80211_channel prism2_channels[] = ;
static const struct ieee80211_rate prism2_rates[] = ;
#define PRISM2_NUM_CIPHER_SUITES 2
static const u32 prism2_cipher_suites[PRISM2_NUM_CIPHER_SUITES] = ;
struct prism2_wiphy_private ;
static const void * const prism2_wiphy_privid = &prism2_wiphy_privid;
static int prism2_result2err(int prism2_result)
static int prism2_domibset_uint32(wlandevice_t *wlandev, u32 did, u32 data)
static int prism2_domibset_pstr32(wlandevice_t *wlandev,
u32 did, u8 len, u8 *data)
int prism2_change_virtual_intf(struct wiphy *wiphy,
struct net_device *dev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
int prism2_add_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_index, bool pairwise, const u8 *mac_addr,
struct key_params *params)
int prism2_get_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_index, bool pairwise, const u8 *mac_addr, void *cookie,
void (*callback)(void *cookie, struct key_params*))
int prism2_del_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_index, bool pairwise, const u8 *mac_addr)
int prism2_set_default_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_index, bool unicast, bool multicast)
int prism2_get_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_info *sinfo)
int prism2_scan(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_scan_request *request)
int prism2_set_wiphy_params(struct wiphy *wiphy, u32 changed)
int prism2_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme)
int prism2_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code)
int prism2_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params)
int prism2_leave_ibss(struct wiphy *wiphy, struct net_device *dev)
int prism2_set_tx_power(struct wiphy *wiphy, enum nl80211_tx_power_setting type,
int mbm)
int prism2_get_tx_power(struct wiphy *wiphy, int *dbm)
void prism2_connect_result(wlandevice_t *wlandev, u8 failed)
void prism2_disconnected(wlandevice_t *wlandev)
void prism2_roamed(wlandevice_t *wlandev)
static const struct cfg80211_ops prism2_usb_cfg_ops = ;
struct wiphy *wlan_create_wiphy(struct device *dev, wlandevice_t *wlandev)
void wlan_free_wiphy(struct wiphy *wiphy)
