static int
mwifiex_cfg80211_channel_type_to_mwifiex_channels(enum nl80211_channel_type
channel_type)
static enum nl80211_channel_type
mwifiex_channels_to_cfg80211_channel_type(int channel_type)
static int
mwifiex_is_alg_wep(u32 cipher)
static void *mwifiex_cfg80211_get_priv(struct wiphy *wiphy)
static int
mwifiex_cfg80211_del_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool pairwise, const u8 *mac_addr)
static int
mwifiex_cfg80211_set_tx_power(struct wiphy *wiphy,
enum nl80211_tx_power_setting type,
int dbm)
static int
mwifiex_cfg80211_set_power_mgmt(struct wiphy *wiphy,
struct net_device *dev,
bool enabled, int timeout)
static int
mwifiex_cfg80211_set_default_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool unicast,
bool multicast)
static int
mwifiex_cfg80211_add_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool pairwise, const u8 *mac_addr,
struct key_params *params)
static int mwifiex_send_domain_info_cmd_fw(struct wiphy *wiphy)
static int mwifiex_reg_notifier(struct wiphy *wiphy,
struct regulatory_request *request)
static int
mwifiex_set_rf_channel(struct mwifiex_private *priv,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type)
static int
mwifiex_cfg80211_set_channel(struct wiphy *wiphy, struct net_device *dev,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type)
static int
mwifiex_set_frag(struct mwifiex_private *priv, u32 frag_thr)
static int
mwifiex_set_rts(struct mwifiex_private *priv, u32 rts_thr)
static int
mwifiex_cfg80211_set_wiphy_params(struct wiphy *wiphy, u32 changed)
static int
mwifiex_cfg80211_change_virtual_intf(struct wiphy *wiphy,
struct net_device *dev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
static int
mwifiex_dump_station_info(struct mwifiex_private *priv,
struct station_info *sinfo)
static int
mwifiex_cfg80211_get_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_info *sinfo)
static struct ieee80211_rate mwifiex_rates[] = ;
static struct ieee80211_channel mwifiex_channels_2ghz[] = ;
static struct ieee80211_supported_band mwifiex_band_2ghz = ;
static struct ieee80211_channel mwifiex_channels_5ghz[] = ;
static struct ieee80211_supported_band mwifiex_band_5ghz = ;
static const u32 mwifiex_cipher_suites[] = ;
static int
mwifiex_cfg80211_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code)
static int mwifiex_cfg80211_inform_ibss_bss(struct mwifiex_private *priv)
static int mwifiex_inform_bss_from_scan_result(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *ssid)
static int
mwifiex_cfg80211_assoc(struct mwifiex_private *priv, size_t ssid_len, u8 *ssid,
u8 *bssid, int mode, struct ieee80211_channel *channel,
struct cfg80211_connect_params *sme, bool privacy)
static int
mwifiex_cfg80211_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme)
static int
mwifiex_cfg80211_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params)
static int
mwifiex_cfg80211_leave_ibss(struct wiphy *wiphy, struct net_device *dev)
static int
mwifiex_cfg80211_scan(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_scan_request *request)
static void
mwifiex_setup_ht_caps(struct ieee80211_sta_ht_cap *ht_info,
struct mwifiex_private *priv)
static struct cfg80211_ops mwifiex_cfg80211_ops = ;
int mwifiex_register_cfg80211(struct net_device *dev, u8 *mac,
struct mwifiex_private *priv)
void
mwifiex_cfg80211_results(struct work_struct *work)
