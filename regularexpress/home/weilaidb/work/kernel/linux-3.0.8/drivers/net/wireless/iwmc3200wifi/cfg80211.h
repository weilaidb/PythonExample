#define __IWM_CFG80211_H__
int iwm_cfg80211_inform_bss(struct iwm_priv *iwm);
struct wireless_dev *iwm_wdev_alloc(int sizeof_bus, struct device *dev);
void iwm_wdev_free(struct iwm_priv *iwm);
