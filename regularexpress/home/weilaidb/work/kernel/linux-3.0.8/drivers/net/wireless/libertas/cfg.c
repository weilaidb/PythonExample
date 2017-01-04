#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define CHAN2G(_channel, _freq, _flags)
static struct ieee80211_channel lbs_2ghz_channels[] = ;
#define RATETAB_ENT(_rate, _hw_value, _flags)
static struct ieee80211_rate lbs_rates[] = ;
static struct ieee80211_supported_band lbs_band_2ghz = ;
static const u32 cipher_suites[] = ;
#define LBS_DWELL_PASSIVE 100
#define LBS_DWELL_ACTIVE  40
static u8 lbs_auth_to_authtype(enum nl80211_auth_type auth_type)
static int lbs_add_rates(u8 *rates)
#define LBS_MAX_SSID_TLV_SIZE			\
(sizeof(struct mrvl_ie_header)		\
+ IEEE80211_MAX_SSID_LEN)
static int lbs_add_ssid_tlv(u8 *tlv, const u8 *ssid, int ssid_len)
#define LBS_MAX_CHANNEL_LIST_TLV_SIZE					\
(sizeof(struct mrvl_ie_header)					\
+ (LBS_SCAN_BEFORE_NAP * sizeof(struct chanscanparamset)))
static int lbs_add_channel_list_tlv(struct lbs_private *priv, u8 *tlv,
int last_channel, int active_scan)
#define LBS_MAX_RATES_TLV_SIZE			\
(sizeof(struct mrvl_ie_header)		\
+ (ARRAY_SIZE(lbs_rates)))
static int lbs_add_supported_rates_tlv(u8 *tlv)
static u8 *
add_ie_rates(u8 *tlv, const u8 *ie, int *nrates)
static int lbs_add_common_rates_tlv(u8 *tlv, struct cfg80211_bss *bss)
#define LBS_MAX_AUTH_TYPE_TLV_SIZE \
sizeof(struct mrvl_ie_auth_type)
static int lbs_add_auth_type_tlv(u8 *tlv, enum nl80211_auth_type auth_type)
#define LBS_MAX_CHANNEL_TLV_SIZE \
sizeof(struct mrvl_ie_header)
static int lbs_add_channel_tlv(u8 *tlv, u8 channel)
#define LBS_MAX_CF_PARAM_TLV_SIZE		\
sizeof(struct mrvl_ie_header)
static int lbs_add_cf_param_tlv(u8 *tlv)
#define LBS_MAX_WPA_TLV_SIZE			\
(sizeof(struct mrvl_ie_header)		\
+ 128)
static int lbs_add_wpa_tlv(u8 *tlv, const u8 *ie, u8 ie_len)
static int lbs_cfg_set_channel(struct wiphy *wiphy,
struct net_device *netdev,
struct ieee80211_channel *channel,
enum nl80211_channel_type channel_type)
#define LBS_SCAN_BEFORE_NAP 4
#define LBS_SCAN_RSSI_TO_MBM(rssi) \
((-(int)rssi + 3)*100)
static int lbs_ret_scan(struct lbs_private *priv, unsigned long dummy,
struct cmd_header *resp)
#define LBS_SCAN_MAX_CMD_SIZE			\
(sizeof(struct cmd_ds_802_11_scan)	\
+ LBS_MAX_SSID_TLV_SIZE		\
+ LBS_MAX_CHANNEL_LIST_TLV_SIZE	\
+ LBS_MAX_RATES_TLV_SIZE)
static void lbs_scan_worker(struct work_struct *work)
static void _internal_start_scan(struct lbs_private *priv, bool internal,
struct cfg80211_scan_request *request)
static int lbs_cfg_scan(struct wiphy *wiphy,
struct net_device *dev,
struct cfg80211_scan_request *request)
void lbs_send_disconnect_notification(struct lbs_private *priv)
void lbs_send_mic_failureevent(struct lbs_private *priv, u32 event)
static int lbs_remove_wep_keys(struct lbs_private *priv)
static int lbs_set_wep_keys(struct lbs_private *priv)
static int lbs_enable_rsn(struct lbs_private *priv, int enable)
struct cmd_key_material  __packed;
static int lbs_set_key_material(struct lbs_private *priv,
int key_type,
int key_info,
u8 *key, u16 key_len)
static int lbs_set_authtype(struct lbs_private *priv,
struct cfg80211_connect_params *sme)
#define LBS_ASSOC_MAX_CMD_SIZE                     \
(sizeof(struct cmd_ds_802_11_associate)    \
- 512 \
+ LBS_MAX_SSID_TLV_SIZE                   \
+ LBS_MAX_CHANNEL_TLV_SIZE                \
+ LBS_MAX_CF_PARAM_TLV_SIZE               \
+ LBS_MAX_AUTH_TYPE_TLV_SIZE              \
+ LBS_MAX_WPA_TLV_SIZE)
static int lbs_associate(struct lbs_private *priv,
struct cfg80211_bss *bss,
struct cfg80211_connect_params *sme)
static struct cfg80211_scan_request *
_new_connect_scan_req(struct wiphy *wiphy, struct cfg80211_connect_params *sme)
static int lbs_cfg_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme)
static int lbs_cfg_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code)
static int lbs_cfg_set_default_key(struct wiphy *wiphy,
struct net_device *netdev,
u8 key_index, bool unicast,
bool multicast)
static int lbs_cfg_add_key(struct wiphy *wiphy, struct net_device *netdev,
u8 idx, bool pairwise, const u8 *mac_addr,
struct key_params *params)
static int lbs_cfg_del_key(struct wiphy *wiphy, struct net_device *netdev,
u8 key_index, bool pairwise, const u8 *mac_addr)
static int lbs_cfg_get_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_info *sinfo)
static int lbs_get_survey(struct wiphy *wiphy, struct net_device *dev,
int idx, struct survey_info *survey)
static int lbs_change_intf(struct wiphy *wiphy, struct net_device *dev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
#define CAPINFO_MASK (~(0xda00))
static void lbs_join_post(struct lbs_private *priv,
struct cfg80211_ibss_params *params,
u8 *bssid, u16 capability)
static int lbs_ibss_join_existing(struct lbs_private *priv,
struct cfg80211_ibss_params *params,
struct cfg80211_bss *bss)
static int lbs_ibss_start_new(struct lbs_private *priv,
struct cfg80211_ibss_params *params)
static int lbs_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params)
static int lbs_leave_ibss(struct wiphy *wiphy, struct net_device *dev)
static struct cfg80211_ops lbs_cfg80211_ops = ;
struct wireless_dev *lbs_cfg_alloc(struct device *dev)
static void lbs_cfg_set_regulatory_hint(struct lbs_private *priv)
int lbs_cfg_register(struct lbs_private *priv)
int lbs_reg_notifier(struct wiphy *wiphy,
struct regulatory_request *request)
void lbs_scan_deinit(struct lbs_private *priv)
void lbs_cfg_free(struct lbs_private *priv)
