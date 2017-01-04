#define __MWIFIEX_CFG80211__
int mwifiex_register_cfg80211(struct net_device *, u8 *,
struct mwifiex_private *);
void mwifiex_cfg80211_results(struct work_struct *work);
