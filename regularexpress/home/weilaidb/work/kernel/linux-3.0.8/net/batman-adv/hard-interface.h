#define _NET_BATMAN_ADV_HARD_INTERFACE_H_
#define IF_NOT_IN_USE 0
#define IF_TO_BE_REMOVED 1
#define IF_INACTIVE 2
#define IF_ACTIVE 3
#define IF_TO_BE_ACTIVATED 4
#define IF_I_WANT_YOU 5
extern struct notifier_block hard_if_notifier;
struct hard_iface *hardif_get_by_netdev(struct net_device *net_dev);
int hardif_enable_interface(struct hard_iface *hard_iface, char *iface_name);
void hardif_disable_interface(struct hard_iface *hard_iface);
void hardif_remove_interfaces(void);
int hardif_min_mtu(struct net_device *soft_iface);
void update_min_mtu(struct net_device *soft_iface);
void hardif_free_rcu(struct rcu_head *rcu);
static inline void hardif_free_ref(struct hard_iface *hard_iface)
static inline struct hard_iface *primary_if_get_selected(
struct bat_priv *bat_priv)
