struct ieee80211_rate *
ieee80211_get_response_rate(struct ieee80211_supported_band *sband,
u32 basic_rates, int bitrate)
EXPORT_SYMBOL(ieee80211_get_response_rate);
int ieee80211_channel_to_frequency(int chan, enum ieee80211_band band)
EXPORT_SYMBOL(ieee80211_channel_to_frequency);
int ieee80211_frequency_to_channel(int freq)
EXPORT_SYMBOL(ieee80211_frequency_to_channel);
struct ieee80211_channel *__ieee80211_get_channel(struct wiphy *wiphy,
int freq)
EXPORT_SYMBOL(__ieee80211_get_channel);
static void set_mandatory_flags_band(struct ieee80211_supported_band *sband,
enum ieee80211_band band)
void ieee80211_set_bitrate_flags(struct wiphy *wiphy)
int cfg80211_validate_key_settings(struct cfg80211_registered_device *rdev,
struct key_params *params, int key_idx,
bool pairwise, const u8 *mac_addr)
const unsigned char rfc1042_header[] __aligned(2) =
;
EXPORT_SYMBOL(rfc1042_header);
const unsigned char bridge_tunnel_header[] __aligned(2) =
;
EXPORT_SYMBOL(bridge_tunnel_header);
unsigned int __attribute_const__ ieee80211_hdrlen(__le16 fc)
EXPORT_SYMBOL(ieee80211_hdrlen);
unsigned int ieee80211_get_hdrlen_from_skb(const struct sk_buff *skb)
EXPORT_SYMBOL(ieee80211_get_hdrlen_from_skb);
static int ieee80211_get_mesh_hdrlen(struct ieee80211s_hdr *meshhdr)
int ieee80211_data_to_8023(struct sk_buff *skb, const u8 *addr,
enum nl80211_iftype iftype)
EXPORT_SYMBOL(ieee80211_data_to_8023);
int ieee80211_data_from_8023(struct sk_buff *skb, const u8 *addr,
enum nl80211_iftype iftype, u8 *bssid, bool qos)
EXPORT_SYMBOL(ieee80211_data_from_8023);
void ieee80211_amsdu_to_8023s(struct sk_buff *skb, struct sk_buff_head *list,
const u8 *addr, enum nl80211_iftype iftype,
const unsigned int extra_headroom,
bool has_80211_header)
EXPORT_SYMBOL(ieee80211_amsdu_to_8023s);
unsigned int cfg80211_classify8021d(struct sk_buff *skb)
EXPORT_SYMBOL(cfg80211_classify8021d);
const u8 *ieee80211_bss_get_ie(struct cfg80211_bss *bss, u8 ie)
EXPORT_SYMBOL(ieee80211_bss_get_ie);
void cfg80211_upload_connect_keys(struct wireless_dev *wdev)
static void cfg80211_process_wdev_events(struct wireless_dev *wdev)
void cfg80211_process_rdev_events(struct cfg80211_registered_device *rdev)
int cfg80211_change_iface(struct cfg80211_registered_device *rdev,
struct net_device *dev, enum nl80211_iftype ntype,
u32 *flags, struct vif_params *params)
u16 cfg80211_calculate_bitrate(struct rate_info *rate)
int cfg80211_validate_beacon_int(struct cfg80211_registered_device *rdev,
u32 beacon_int)
int cfg80211_can_change_interface(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev,
enum nl80211_iftype iftype)
