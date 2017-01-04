#define ORINOCO_CFG_H
extern const struct cfg80211_ops orinoco_cfg_ops;
void orinoco_wiphy_init(struct wiphy *wiphy);
int orinoco_wiphy_register(struct wiphy *wiphy);
