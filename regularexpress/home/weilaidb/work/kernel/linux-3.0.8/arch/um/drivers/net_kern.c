#define DRIVER_NAME "uml-netdev"
static DEFINE_SPINLOCK(opened_lock);
static LIST_HEAD(opened);
static DEFINE_SPINLOCK(drop_lock);
static struct sk_buff *drop_skb;
static int drop_max;
static int update_drop_skb(int max)
static int uml_net_rx(struct net_device *dev)
static void uml_dev_close(struct work_struct *work)
static irqreturn_t uml_net_interrupt(int irq, void *dev_id)
static int uml_net_open(struct net_device *dev)
static int uml_net_close(struct net_device *dev)
static int uml_net_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void uml_net_set_multicast_list(struct net_device *dev)
static void uml_net_tx_timeout(struct net_device *dev)
static int uml_net_change_mtu(struct net_device *dev, int new_mtu)
static void uml_net_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops uml_net_ethtool_ops = ;
static void uml_net_user_timer_expire(unsigned long _conn)
static void setup_etheraddr(char *str, unsigned char *addr, char *name)
static DEFINE_SPINLOCK(devices_lock);
static LIST_HEAD(devices);
static struct platform_driver uml_net_driver = ;
static void net_device_release(struct device *dev)
static const struct net_device_ops uml_netdev_ops = ;
static int driver_registered;
static void eth_configure(int n, void *init, char *mac,
struct transport *transport)
static struct uml_net *find_device(int n)
static int eth_parse(char *str, int *index_out, char **str_out,
char **error_out)
struct eth_init ;
static DEFINE_SPINLOCK(transports_lock);
static LIST_HEAD(transports);
static LIST_HEAD(eth_cmd_line);
static int check_transport(struct transport *transport, char *eth, int n,
void **init_out, char **mac_out)
void register_transport(struct transport *new)
static int eth_setup_common(char *str, int index)
static int __init eth_setup(char *str)
__setup("eth", eth_setup);
__uml_help(eth_setup,
"eth[0-9]+=<transport>,<options>\n"
"    Configure a network device.\n\n"
);
static int net_config(char *str, char **error_out)
static int net_id(char **str, int *start_out, int *end_out)
static int net_remove(int n, char **error_out)
static struct mc_device net_mc = ;
static int uml_inetaddr_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block uml_inetaddr_notifier = ;
static void inet_register(void)
static inline void inet_register(void)
static int uml_net_init(void)
__initcall(uml_net_init);
static void close_devices(void)
__uml_exitcall(close_devices);
void iter_addresses(void *d, void (*cb)(unsigned char *, unsigned char *,
void *),
void *arg)
int dev_netmask(void *d, void *m)
void *get_output_buffer(int *len_out)
void free_output_buffer(void *buffer)
int tap_setup_common(char *str, char *type, char **dev_name, char **mac_out,
char **gate_addr)
unsigned short eth_protocol(struct sk_buff *skb)
