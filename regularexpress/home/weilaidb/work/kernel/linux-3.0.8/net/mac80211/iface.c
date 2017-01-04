static int ieee80211_change_mtu(struct net_device *dev, int new_mtu)
static int ieee80211_change_mac(struct net_device *dev, void *addr)
static inline int identical_mac_addr_allowed(int type1, int type2)
static int ieee80211_check_concurrent_iface(struct ieee80211_sub_if_data *sdata,
enum nl80211_iftype iftype)
void ieee80211_adjust_monitor_flags(struct ieee80211_sub_if_data *sdata,
const int offset)
static int ieee80211_do_open(struct net_device *dev, bool coming_up)
static int ieee80211_open(struct net_device *dev)
static void ieee80211_do_stop(struct ieee80211_sub_if_data *sdata,
bool going_down)
static int ieee80211_stop(struct net_device *dev)
static void ieee80211_set_multicast_list(struct net_device *dev)
static void ieee80211_teardown_sdata(struct net_device *dev)
static u16 ieee80211_netdev_select_queue(struct net_device *dev,
struct sk_buff *skb)
static const struct net_device_ops ieee80211_dataif_ops = ;
static u16 ieee80211_monitor_select_queue(struct net_device *dev,
struct sk_buff *skb)
static const struct net_device_ops ieee80211_monitorif_ops = ;
static void ieee80211_if_setup(struct net_device *dev)
static void ieee80211_iface_work(struct work_struct *work)
static void ieee80211_setup_sdata(struct ieee80211_sub_if_data *sdata,
enum nl80211_iftype type)
static int ieee80211_runtime_change_iftype(struct ieee80211_sub_if_data *sdata,
enum nl80211_iftype type)
int ieee80211_if_change_type(struct ieee80211_sub_if_data *sdata,
enum nl80211_iftype type)
static void ieee80211_assign_perm_addr(struct ieee80211_local *local,
struct net_device *dev,
enum nl80211_iftype type)
int ieee80211_if_add(struct ieee80211_local *local, const char *name,
struct net_device **new_dev, enum nl80211_iftype type,
struct vif_params *params)
void ieee80211_if_remove(struct ieee80211_sub_if_data *sdata)
void ieee80211_remove_interfaces(struct ieee80211_local *local)
static u32 ieee80211_idle_off(struct ieee80211_local *local,
const char *reason)
static u32 ieee80211_idle_on(struct ieee80211_local *local)
u32 __ieee80211_recalc_idle(struct ieee80211_local *local)
void ieee80211_recalc_idle(struct ieee80211_local *local)
static int netdev_notify(struct notifier_block *nb,
unsigned long state,
void *ndev)
static struct notifier_block mac80211_netdev_notifier = ;
int ieee80211_iface_init(void)
void ieee80211_iface_exit(void)
