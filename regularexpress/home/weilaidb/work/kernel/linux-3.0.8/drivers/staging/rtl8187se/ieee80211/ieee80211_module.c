MODULE_DESCRIPTION("802.11 data/management/control stack");
MODULE_AUTHOR("Copyright (C) 2004 Intel Corporation <jketreno@linux.intel.com>");
MODULE_LICENSE("GPL");
#define DRV_NAME "ieee80211"
static inline int ieee80211_networks_allocate(struct ieee80211_device *ieee)
static inline void ieee80211_networks_free(struct ieee80211_device *ieee)
static inline void ieee80211_networks_initialize(struct ieee80211_device *ieee)
struct net_device *alloc_ieee80211(int sizeof_priv)
void free_ieee80211(struct net_device *dev)
