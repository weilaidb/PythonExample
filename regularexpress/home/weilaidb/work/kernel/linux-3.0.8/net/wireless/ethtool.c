static void cfg80211_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int cfg80211_get_regs_len(struct net_device *dev)
static void cfg80211_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *data)
static void cfg80211_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *rp)
static int cfg80211_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *rp)
const struct ethtool_ops cfg80211_ethtool_ops = ;
