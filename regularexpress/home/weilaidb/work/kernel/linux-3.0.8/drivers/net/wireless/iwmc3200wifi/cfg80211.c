#define RATETAB_ENT(_rate, _rateid, _flags) \
#define CHAN2G(_channel, _freq, _flags)
#define CHAN5G(_channel, _flags)
static struct ieee80211_rate iwm_rates[] = ;
#define iwm_a_rates		(iwm_rates + 4)
#define iwm_a_rates_size	8
#define iwm_g_rates		(iwm_rates + 0)
#define iwm_g_rates_size	12
static struct ieee80211_channel iwm_2ghz_channels[] = ;
static struct ieee80211_channel iwm_5ghz_a_channels[] = ;
static struct ieee80211_supported_band iwm_band_2ghz = ;
static struct ieee80211_supported_band iwm_band_5ghz = ;
static int iwm_key_init(struct iwm_key *key, u8 key_index,
const u8 *mac_addr, struct key_params *params)
static int iwm_cfg80211_add_key(struct wiphy *wiphy, struct net_device *ndev,
u8 key_index, bool pairwise, const u8 *mac_addr,
struct key_params *params)
static int iwm_cfg80211_get_key(struct wiphy *wiphy, struct net_device *ndev,
u8 key_index, bool pairwise, const u8 *mac_addr,
void *cookie,
void (*callback)(void *cookie,
struct key_params*))
static int iwm_cfg80211_del_key(struct wiphy *wiphy, struct net_device *ndev,
u8 key_index, bool pairwise, const u8 *mac_addr)
static int iwm_cfg80211_set_default_key(struct wiphy *wiphy,
struct net_device *ndev,
u8 key_index, bool unicast,
bool multicast)
static int iwm_cfg80211_get_station(struct wiphy *wiphy,
struct net_device *ndev,
u8 *mac, struct station_info *sinfo)
int iwm_cfg80211_inform_bss(struct iwm_priv *iwm)
static int iwm_cfg80211_change_iface(struct wiphy *wiphy,
struct net_device *ndev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
static int iwm_cfg80211_scan(struct wiphy *wiphy, struct net_device *ndev,
struct cfg80211_scan_request *request)
static int iwm_cfg80211_set_wiphy_params(struct wiphy *wiphy, u32 changed)
static int iwm_cfg80211_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params)
static int iwm_cfg80211_leave_ibss(struct wiphy *wiphy, struct net_device *dev)
static int iwm_set_auth_type(struct iwm_priv *iwm,
enum nl80211_auth_type sme_auth_type)
static int iwm_set_wpa_version(struct iwm_priv *iwm, u32 wpa_version)
static int iwm_set_cipher(struct iwm_priv *iwm, u32 cipher, bool ucast)
static int iwm_set_key_mgt(struct iwm_priv *iwm, u32 key_mgt)
static int iwm_cfg80211_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme)
static int iwm_cfg80211_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code)
static int iwm_cfg80211_set_txpower(struct wiphy *wiphy,
enum nl80211_tx_power_setting type, int mbm)
static int iwm_cfg80211_get_txpower(struct wiphy *wiphy, int *dbm)
static int iwm_cfg80211_set_power_mgmt(struct wiphy *wiphy,
struct net_device *dev,
bool enabled, int timeout)
static int iwm_cfg80211_set_pmksa(struct wiphy *wiphy,
struct net_device *netdev,
struct cfg80211_pmksa *pmksa)
static int iwm_cfg80211_del_pmksa(struct wiphy *wiphy,
struct net_device *netdev,
struct cfg80211_pmksa *pmksa)
static int iwm_cfg80211_flush_pmksa(struct wiphy *wiphy,
struct net_device *netdev)
static struct cfg80211_ops iwm_cfg80211_ops = ;
static const u32 cipher_suites[] = ;
struct wireless_dev *iwm_wdev_alloc(int sizeof_bus, struct device *dev)
void iwm_wdev_free(struct iwm_priv *iwm)
