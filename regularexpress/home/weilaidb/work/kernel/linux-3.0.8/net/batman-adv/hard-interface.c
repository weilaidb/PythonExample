static int batman_skb_recv(struct sk_buff *skb,
struct net_device *dev,
struct packet_type *ptype,
struct net_device *orig_dev);
void hardif_free_rcu(struct rcu_head *rcu)
struct hard_iface *hardif_get_by_netdev(struct net_device *net_dev)
static int is_valid_iface(struct net_device *net_dev)
static struct hard_iface *hardif_get_active(struct net_device *soft_iface)
static void primary_if_update_addr(struct bat_priv *bat_priv)
static void primary_if_select(struct bat_priv *bat_priv,
struct hard_iface *new_hard_iface)
static bool hardif_is_iface_up(struct hard_iface *hard_iface)
static void update_mac_addresses(struct hard_iface *hard_iface)
static void check_known_mac_addr(struct net_device *net_dev)
int hardif_min_mtu(struct net_device *soft_iface)
void update_min_mtu(struct net_device *soft_iface)
static void hardif_activate_interface(struct hard_iface *hard_iface)
static void hardif_deactivate_interface(struct hard_iface *hard_iface)
int hardif_enable_interface(struct hard_iface *hard_iface, char *iface_name)
void hardif_disable_interface(struct hard_iface *hard_iface)
static struct hard_iface *hardif_add_interface(struct net_device *net_dev)
static void hardif_remove_interface(struct hard_iface *hard_iface)
void hardif_remove_interfaces(void)
static int hard_if_event(struct notifier_block *this,
unsigned long event, void *ptr)
static int batman_skb_recv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *ptype,
struct net_device *orig_dev)
struct notifier_block hard_if_notifier = ;
