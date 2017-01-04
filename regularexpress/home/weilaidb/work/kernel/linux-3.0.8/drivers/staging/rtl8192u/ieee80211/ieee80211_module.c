MODULE_DESCRIPTION("802.11 data/management/control stack");
MODULE_AUTHOR("Copyright (C) 2004 Intel Corporation <jketreno@linux.intel.com>");
MODULE_LICENSE("GPL");
#define DRV_NAME "ieee80211"
static inline int ieee80211_networks_allocate(struct ieee80211_device *ieee)
static inline void ieee80211_networks_free(struct ieee80211_device *ieee)
static inline void ieee80211_networks_initialize(struct ieee80211_device *ieee)
struct net_device *alloc_ieee80211(int sizeof_priv)
void free_ieee80211(struct net_device *dev)
u32 ieee80211_debug_level = 0;
static int debug = \
IEEE80211_DL_ERR
;
struct proc_dir_entry *ieee80211_proc = NULL;
static int show_debug_level(char *page, char **start, off_t offset,
int count, int *eof, void *data)
static int store_debug_level(struct file *file, const char *buffer,
unsigned long count, void *data)
int __init ieee80211_debug_init(void)
void __exit ieee80211_debug_exit(void)
module_param(debug, int, 0444);
MODULE_PARM_DESC(debug, "debug output mask");
