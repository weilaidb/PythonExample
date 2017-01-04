MODULE_AUTHOR("Maintainer: Matt Mackall <mpm@selenic.com>");
MODULE_DESCRIPTION("Console driver for network interfaces");
MODULE_LICENSE("GPL");
#define MAX_PARAM_LENGTH	256
#define MAX_PRINT_CHUNK		1000
static char config[MAX_PARAM_LENGTH];
module_param_string(netconsole, config, MAX_PARAM_LENGTH, 0);
MODULE_PARM_DESC(netconsole, " netconsole=[src-port]@[src-ip]/[dev],[tgt-port]@<tgt-ip>/[tgt-macaddr]");
static int __init option_setup(char *opt)
__setup("netconsole=", option_setup);
static LIST_HEAD(target_list);
static DEFINE_SPINLOCK(target_list_lock);
struct netconsole_target ;
static struct configfs_subsystem netconsole_subsys;
static int __init dynamic_netconsole_init(void)
static void __exit dynamic_netconsole_exit(void)
static void netconsole_target_get(struct netconsole_target *nt)
static void netconsole_target_put(struct netconsole_target *nt)
static int __init dynamic_netconsole_init(void)
static void __exit dynamic_netconsole_exit(void)
static void netconsole_target_get(struct netconsole_target *nt)
static void netconsole_target_put(struct netconsole_target *nt)
static struct netconsole_target *alloc_param_target(char *target_config)
static void free_param_target(struct netconsole_target *nt)
struct netconsole_target_attr ;
static struct netconsole_target *to_target(struct config_item *item)
static ssize_t show_enabled(struct netconsole_target *nt, char *buf)
static ssize_t show_dev_name(struct netconsole_target *nt, char *buf)
static ssize_t show_local_port(struct netconsole_target *nt, char *buf)
static ssize_t show_remote_port(struct netconsole_target *nt, char *buf)
static ssize_t show_local_ip(struct netconsole_target *nt, char *buf)
static ssize_t show_remote_ip(struct netconsole_target *nt, char *buf)
static ssize_t show_local_mac(struct netconsole_target *nt, char *buf)
static ssize_t show_remote_mac(struct netconsole_target *nt, char *buf)
static ssize_t store_enabled(struct netconsole_target *nt,
const char *buf,
size_t count)
static ssize_t store_dev_name(struct netconsole_target *nt,
const char *buf,
size_t count)
static ssize_t store_local_port(struct netconsole_target *nt,
const char *buf,
size_t count)
static ssize_t store_remote_port(struct netconsole_target *nt,
const char *buf,
size_t count)
static ssize_t store_local_ip(struct netconsole_target *nt,
const char *buf,
size_t count)
static ssize_t store_remote_ip(struct netconsole_target *nt,
const char *buf,
size_t count)
static ssize_t store_remote_mac(struct netconsole_target *nt,
const char *buf,
size_t count)
#define NETCONSOLE_TARGET_ATTR_RO(_name)				\
static struct netconsole_target_attr netconsole_target_##_name =	\
__CONFIGFS_ATTR(_name, S_IRUGO, show_##_name, NULL)
#define NETCONSOLE_TARGET_ATTR_RW(_name)				\
static struct netconsole_target_attr netconsole_target_##_name =	\
__CONFIGFS_ATTR(_name, S_IRUGO | S_IWUSR, show_##_name, store_##_name)
NETCONSOLE_TARGET_ATTR_RW(enabled);
NETCONSOLE_TARGET_ATTR_RW(dev_name);
NETCONSOLE_TARGET_ATTR_RW(local_port);
NETCONSOLE_TARGET_ATTR_RW(remote_port);
NETCONSOLE_TARGET_ATTR_RW(local_ip);
NETCONSOLE_TARGET_ATTR_RW(remote_ip);
NETCONSOLE_TARGET_ATTR_RO(local_mac);
NETCONSOLE_TARGET_ATTR_RW(remote_mac);
static struct configfs_attribute *netconsole_target_attrs[] = ;
static void netconsole_target_release(struct config_item *item)
static ssize_t netconsole_target_attr_show(struct config_item *item,
struct configfs_attribute *attr,
char *buf)
static ssize_t netconsole_target_attr_store(struct config_item *item,
struct configfs_attribute *attr,
const char *buf,
size_t count)
static struct configfs_item_operations netconsole_target_item_ops = ;
static struct config_item_type netconsole_target_type = ;
static struct config_item *make_netconsole_target(struct config_group *group,
const char *name)
static void drop_netconsole_target(struct config_group *group,
struct config_item *item)
static struct configfs_group_operations netconsole_subsys_group_ops = ;
static struct config_item_type netconsole_subsys_type = ;
static struct configfs_subsystem netconsole_subsys = ;
static int netconsole_netdev_event(struct notifier_block *this,
unsigned long event,
void *ptr)
static struct notifier_block netconsole_netdev_notifier = ;
static void write_msg(struct console *con, const char *msg, unsigned int len)
static struct console netconsole = ;
static int __init init_netconsole(void)
static void __exit cleanup_netconsole(void)
module_init(init_netconsole);
module_exit(cleanup_netconsole);
