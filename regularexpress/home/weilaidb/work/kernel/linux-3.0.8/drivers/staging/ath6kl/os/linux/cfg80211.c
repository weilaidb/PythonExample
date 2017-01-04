extern A_WAITQUEUE_HEAD arEvent;
extern unsigned int wmitimeout;
extern int reconnect_flag;
#define RATETAB_ENT(_rate, _rateid, _flags)
#define CHAN2G(_channel, _freq, _flags)
#define CHAN5G(_channel, _flags)
static struct
ieee80211_rate ar6k_rates[] = ;
#define ar6k_a_rates     (ar6k_rates + 4)
#define ar6k_a_rates_size    8
#define ar6k_g_rates     (ar6k_rates + 0)
#define ar6k_g_rates_size    12
static struct
ieee80211_channel ar6k_2ghz_channels[] = ;
static struct
ieee80211_channel ar6k_5ghz_a_channels[] = ;
static struct
ieee80211_supported_band ar6k_band_2ghz = ;
static struct
ieee80211_supported_band ar6k_band_5ghz = ;
static int
ar6k_set_wpa_version(struct ar6_softc *ar, enum nl80211_wpa_versions wpa_version)
static int
ar6k_set_auth_type(struct ar6_softc *ar, enum nl80211_auth_type auth_type)
static int
ar6k_set_cipher(struct ar6_softc *ar, u32 cipher, bool ucast)
static void
ar6k_set_key_mgmt(struct ar6_softc *ar, u32 key_mgmt)
static int
ar6k_cfg80211_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme)
void
ar6k_cfg80211_connect_event(struct ar6_softc *ar, u16 channel,
u8 *bssid, u16 listenInterval,
u16 beaconInterval,NETWORK_TYPE networkType,
u8 beaconIeLen, u8 assocReqLen,
u8 assocRespLen, u8 *assocInfo)
static int
ar6k_cfg80211_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code)
void
ar6k_cfg80211_disconnect_event(struct ar6_softc *ar, u8 reason,
u8 *bssid, u8 assocRespLen,
u8 *assocInfo, u16 protocolReasonStatus)
void
ar6k_cfg80211_scan_node(void *arg, bss_t *ni)
static int
ar6k_cfg80211_scan(struct wiphy *wiphy, struct net_device *ndev,
struct cfg80211_scan_request *request)
void
ar6k_cfg80211_scanComplete_event(struct ar6_softc *ar, int status)
static int
ar6k_cfg80211_add_key(struct wiphy *wiphy, struct net_device *ndev,
u8 key_index, bool pairwise, const u8 *mac_addr,
struct key_params *params)
static int
ar6k_cfg80211_del_key(struct wiphy *wiphy, struct net_device *ndev,
u8 key_index, bool pairwise, const u8 *mac_addr)
static int
ar6k_cfg80211_get_key(struct wiphy *wiphy, struct net_device *ndev,
u8 key_index, bool pairwise, const u8 *mac_addr,
void *cookie,
void (*callback)(void *cookie, struct key_params*))
static int
ar6k_cfg80211_set_default_key(struct wiphy *wiphy, struct net_device *ndev,
u8 key_index, bool unicast, bool multicast)
static int
ar6k_cfg80211_set_default_mgmt_key(struct wiphy *wiphy, struct net_device *ndev,
u8 key_index)
void
ar6k_cfg80211_tkip_micerr_event(struct ar6_softc *ar, u8 keyid, bool ismcast)
static int
ar6k_cfg80211_set_wiphy_params(struct wiphy *wiphy, u32 changed)
static int
ar6k_cfg80211_set_bitrate_mask(struct wiphy *wiphy, struct net_device *dev,
const u8 *peer,
const struct cfg80211_bitrate_mask *mask)
static int
ar6k_cfg80211_set_txpower(struct wiphy *wiphy, enum nl80211_tx_power_setting type, int dbm)
static int
ar6k_cfg80211_get_txpower(struct wiphy *wiphy, int *dbm)
static int
ar6k_cfg80211_set_power_mgmt(struct wiphy *wiphy,
struct net_device *dev,
bool pmgmt, int timeout)
static struct net_device *
ar6k_cfg80211_add_virtual_intf(struct wiphy *wiphy, char *name,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
static int
ar6k_cfg80211_del_virtual_intf(struct wiphy *wiphy, struct net_device *dev)
static int
ar6k_cfg80211_change_iface(struct wiphy *wiphy, struct net_device *ndev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
static int
ar6k_cfg80211_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *ibss_param)
static int
ar6k_cfg80211_leave_ibss(struct wiphy *wiphy, struct net_device *dev)
static const
u32 cipher_suites[] = ;
bool is_rate_legacy(s32 rate)
bool is_rate_ht20(s32 rate, u8 *mcs, bool *sgi)
bool is_rate_ht40(s32 rate, u8 *mcs, bool *sgi)
static int ar6k_get_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_info *sinfo)
static struct
cfg80211_ops ar6k_cfg80211_ops = ;
struct wireless_dev *
ar6k_cfg80211_init(struct device *dev)
void
ar6k_cfg80211_deinit(struct ar6_softc *ar)
