static struct ieee80211_rate orinoco_rates[] = ;
static const void * const orinoco_wiphy_privid = &orinoco_wiphy_privid;
void orinoco_wiphy_init(struct wiphy *wiphy)
int orinoco_wiphy_register(struct wiphy *wiphy)
static int orinoco_change_vif(struct wiphy *wiphy, struct net_device *dev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
static int orinoco_scan(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_scan_request *request)
static int orinoco_set_channel(struct wiphy *wiphy,
struct net_device *netdev,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type)
static int orinoco_set_wiphy_params(struct wiphy *wiphy, u32 changed)
const struct cfg80211_ops orinoco_cfg_ops = ;
