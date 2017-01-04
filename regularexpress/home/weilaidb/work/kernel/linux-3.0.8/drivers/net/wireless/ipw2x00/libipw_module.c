#define DRV_DESCRIPTION "802.11 data/management/control stack"
#define DRV_NAME        "libipw"
#define DRV_PROCNAME	"ieee80211"
#define DRV_VERSION	LIBIPW_VERSION
#define DRV_COPYRIGHT   "Copyright (C) 2004-2005 Intel Corporation <jketreno@linux.intel.com>"
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR(DRV_COPYRIGHT);
MODULE_LICENSE("GPL");
static struct cfg80211_ops libipw_config_ops = ;
static void *libipw_wiphy_privid = &libipw_wiphy_privid;
static int libipw_networks_allocate(struct libipw_device *ieee)
void libipw_network_reset(struct libipw_network *network)
static inline void libipw_networks_free(struct libipw_device *ieee)
void libipw_networks_age(struct libipw_device *ieee,
unsigned long age_secs)
EXPORT_SYMBOL(libipw_networks_age);
static void libipw_networks_initialize(struct libipw_device *ieee)
int libipw_change_mtu(struct net_device *dev, int new_mtu)
EXPORT_SYMBOL(libipw_change_mtu);
struct net_device *alloc_libipw(int sizeof_priv, int monitor)
EXPORT_SYMBOL(alloc_libipw);
void free_libipw(struct net_device *dev, int monitor)
EXPORT_SYMBOL(free_libipw);
static int debug = 0;
u32 libipw_debug_level = 0;
EXPORT_SYMBOL_GPL(libipw_debug_level);
static struct proc_dir_entry *libipw_proc = NULL;
static int debug_level_proc_show(struct seq_file *m, void *v)
static int debug_level_proc_open(struct inode *inode, struct file *file)
static ssize_t debug_level_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations debug_level_proc_fops = ;
static int __init libipw_init(void)
static void __exit libipw_exit(void)
module_param(debug, int, 0444);
MODULE_PARM_DESC(debug, "debug output mask");
module_exit(libipw_exit);
module_init(libipw_init);
