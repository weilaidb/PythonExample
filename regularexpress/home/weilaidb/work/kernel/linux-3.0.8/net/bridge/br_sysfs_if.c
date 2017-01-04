struct brport_attribute ;
#define BRPORT_ATTR(_name,_mode,_show,_store)		        \
struct brport_attribute brport_attr_##_name = ;
static ssize_t show_path_cost(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(path_cost, S_IRUGO | S_IWUSR,
show_path_cost, br_stp_set_path_cost);
static ssize_t show_priority(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(priority, S_IRUGO | S_IWUSR,
show_priority, br_stp_set_port_priority);
static ssize_t show_designated_root(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(designated_root, S_IRUGO, show_designated_root, NULL);
static ssize_t show_designated_bridge(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(designated_bridge, S_IRUGO, show_designated_bridge, NULL);
static ssize_t show_designated_port(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(designated_port, S_IRUGO, show_designated_port, NULL);
static ssize_t show_designated_cost(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(designated_cost, S_IRUGO, show_designated_cost, NULL);
static ssize_t show_port_id(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(port_id, S_IRUGO, show_port_id, NULL);
static ssize_t show_port_no(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(port_no, S_IRUGO, show_port_no, NULL);
static ssize_t show_change_ack(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(change_ack, S_IRUGO, show_change_ack, NULL);
static ssize_t show_config_pending(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(config_pending, S_IRUGO, show_config_pending, NULL);
static ssize_t show_port_state(struct net_bridge_port *p, char *buf)
static BRPORT_ATTR(state, S_IRUGO, show_port_state, NULL);
static ssize_t show_message_age_timer(struct net_bridge_port *p,
char *buf)
static BRPORT_ATTR(message_age_timer, S_IRUGO, show_message_age_timer, NULL);
static ssize_t show_forward_delay_timer(struct net_bridge_port *p,
char *buf)
static BRPORT_ATTR(forward_delay_timer, S_IRUGO, show_forward_delay_timer, NULL);
static ssize_t show_hold_timer(struct net_bridge_port *p,
char *buf)
static BRPORT_ATTR(hold_timer, S_IRUGO, show_hold_timer, NULL);
static int store_flush(struct net_bridge_port *p, unsigned long v)
static BRPORT_ATTR(flush, S_IWUSR, NULL, store_flush);
static ssize_t show_hairpin_mode(struct net_bridge_port *p, char *buf)
static int store_hairpin_mode(struct net_bridge_port *p, unsigned long v)
static BRPORT_ATTR(hairpin_mode, S_IRUGO | S_IWUSR,
show_hairpin_mode, store_hairpin_mode);
static ssize_t show_multicast_router(struct net_bridge_port *p, char *buf)
static int store_multicast_router(struct net_bridge_port *p,
unsigned long v)
static BRPORT_ATTR(multicast_router, S_IRUGO | S_IWUSR, show_multicast_router,
store_multicast_router);
static struct brport_attribute *brport_attrs[] = ;
#define to_brport_attr(_at) container_of(_at, struct brport_attribute, attr)
#define to_brport(obj)	container_of(obj, struct net_bridge_port, kobj)
static ssize_t brport_show(struct kobject * kobj,
struct attribute * attr, char * buf)
static ssize_t brport_store(struct kobject * kobj,
struct attribute * attr,
const char * buf, size_t count)
const struct sysfs_ops brport_sysfs_ops = ;
int br_sysfs_addif(struct net_bridge_port *p)
int br_sysfs_renameif(struct net_bridge_port *p)
