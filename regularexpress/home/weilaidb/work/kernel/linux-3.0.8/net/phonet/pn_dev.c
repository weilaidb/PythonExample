struct phonet_routes ;
struct phonet_net ;
int phonet_net_id __read_mostly;
static struct phonet_net *phonet_pernet(struct net *net)
struct phonet_device_list *phonet_device_list(struct net *net)
static struct phonet_device *__phonet_device_alloc(struct net_device *dev)
static struct phonet_device *__phonet_get(struct net_device *dev)
static struct phonet_device *__phonet_get_rcu(struct net_device *dev)
static void phonet_device_destroy(struct net_device *dev)
struct net_device *phonet_device_get(struct net *net)
int phonet_address_add(struct net_device *dev, u8 addr)
int phonet_address_del(struct net_device *dev, u8 addr)
u8 phonet_address_get(struct net_device *dev, u8 daddr)
int phonet_address_lookup(struct net *net, u8 addr)
static int phonet_device_autoconf(struct net_device *dev)
static void phonet_route_autodel(struct net_device *dev)
static int phonet_device_notify(struct notifier_block *me, unsigned long what,
void *arg)
static struct notifier_block phonet_device_notifier = ;
static int __net_init phonet_init_net(struct net *net)
static void __net_exit phonet_exit_net(struct net *net)
static struct pernet_operations phonet_net_ops = ;
int __init phonet_device_init(void)
void phonet_device_exit(void)
int phonet_route_add(struct net_device *dev, u8 daddr)
int phonet_route_del(struct net_device *dev, u8 daddr)
struct net_device *phonet_route_get_rcu(struct net *net, u8 daddr)
struct net_device *phonet_route_output(struct net *net, u8 daddr)
