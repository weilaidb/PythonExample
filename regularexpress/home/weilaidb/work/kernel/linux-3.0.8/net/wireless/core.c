#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define PHY_NAME "phy"
MODULE_AUTHOR("Johannes Berg");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("wireless configuration support");
LIST_HEAD(cfg80211_rdev_list);
int cfg80211_rdev_list_generation;
DEFINE_MUTEX(cfg80211_mutex);
static struct dentry *ieee80211_debugfs_dir;
struct workqueue_struct *cfg80211_wq;
static bool cfg80211_disable_40mhz_24ghz;
module_param(cfg80211_disable_40mhz_24ghz, bool, 0644);
MODULE_PARM_DESC(cfg80211_disable_40mhz_24ghz,
"Disable 40MHz support in the 2.4GHz band");
struct cfg80211_registered_device *cfg80211_rdev_by_wiphy_idx(int wiphy_idx)
int get_wiphy_idx(struct wiphy *wiphy)
struct wiphy *wiphy_idx_to_wiphy(int wiphy_idx)
struct cfg80211_registered_device *
__cfg80211_rdev_from_info(struct genl_info *info)
struct cfg80211_registered_device *
cfg80211_get_dev_from_info(struct genl_info *info)
struct cfg80211_registered_device *
cfg80211_get_dev_from_ifindex(struct net *net, int ifindex)
int cfg80211_dev_rename(struct cfg80211_registered_device *rdev,
char *newname)
int cfg80211_switch_netns(struct cfg80211_registered_device *rdev,
struct net *net)
static void cfg80211_rfkill_poll(struct rfkill *rfkill, void *data)
static int cfg80211_rfkill_set_block(void *data, bool blocked)
static void cfg80211_rfkill_sync_work(struct work_struct *work)
static void cfg80211_event_work(struct work_struct *work)
struct wiphy *wiphy_new(const struct cfg80211_ops *ops, int sizeof_priv)
EXPORT_SYMBOL(wiphy_new);
static int wiphy_verify_combinations(struct wiphy *wiphy)
int wiphy_register(struct wiphy *wiphy)
EXPORT_SYMBOL(wiphy_register);
void wiphy_rfkill_start_polling(struct wiphy *wiphy)
EXPORT_SYMBOL(wiphy_rfkill_start_polling);
void wiphy_rfkill_stop_polling(struct wiphy *wiphy)
EXPORT_SYMBOL(wiphy_rfkill_stop_polling);
void wiphy_unregister(struct wiphy *wiphy)
EXPORT_SYMBOL(wiphy_unregister);
void cfg80211_dev_free(struct cfg80211_registered_device *rdev)
void wiphy_free(struct wiphy *wiphy)
EXPORT_SYMBOL(wiphy_free);
void wiphy_rfkill_set_hw_state(struct wiphy *wiphy, bool blocked)
EXPORT_SYMBOL(wiphy_rfkill_set_hw_state);
static void wdev_cleanup_work(struct work_struct *work)
static struct device_type wiphy_type = ;
static int cfg80211_netdev_notifier_call(struct notifier_block * nb,
unsigned long state,
void *ndev)
static struct notifier_block cfg80211_netdev_notifier = ;
static void __net_exit cfg80211_pernet_exit(struct net *net)
static struct pernet_operations cfg80211_pernet_ops = ;
static int __init cfg80211_init(void)
subsys_initcall(cfg80211_init);
static void __exit cfg80211_exit(void)
module_exit(cfg80211_exit);
