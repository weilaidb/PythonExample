#define to_dev(obj)	container_of(obj, struct device, kobj)
#define to_bridge(cd)	((struct net_bridge *)netdev_priv(to_net_dev(cd)))
static ssize_t store_bridge_parm(struct device *d,
const char *buf, size_t len,
int (*set)(struct net_bridge *, unsigned long))
static ssize_t show_forward_delay(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_forward_delay(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(forward_delay, S_IRUGO | S_IWUSR,
show_forward_delay, store_forward_delay);
static ssize_t show_hello_time(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_hello_time(struct device *d,
struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(hello_time, S_IRUGO | S_IWUSR, show_hello_time,
store_hello_time);
static ssize_t show_max_age(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_max_age(struct device *d, struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(max_age, S_IRUGO | S_IWUSR, show_max_age, store_max_age);
static ssize_t show_ageing_time(struct device *d,
struct device_attribute *attr, char *buf)
static int set_ageing_time(struct net_bridge *br, unsigned long val)
static ssize_t store_ageing_time(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(ageing_time, S_IRUGO | S_IWUSR, show_ageing_time,
store_ageing_time);
static ssize_t show_stp_state(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_stp_state(struct device *d,
struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(stp_state, S_IRUGO | S_IWUSR, show_stp_state,
store_stp_state);
static ssize_t show_priority(struct device *d, struct device_attribute *attr,
char *buf)
static int set_priority(struct net_bridge *br, unsigned long val)
static ssize_t store_priority(struct device *d, struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(priority, S_IRUGO | S_IWUSR, show_priority, store_priority);
static ssize_t show_root_id(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(root_id, S_IRUGO, show_root_id, NULL);
static ssize_t show_bridge_id(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(bridge_id, S_IRUGO, show_bridge_id, NULL);
static ssize_t show_root_port(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(root_port, S_IRUGO, show_root_port, NULL);
static ssize_t show_root_path_cost(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(root_path_cost, S_IRUGO, show_root_path_cost, NULL);
static ssize_t show_topology_change(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(topology_change, S_IRUGO, show_topology_change, NULL);
static ssize_t show_topology_change_detected(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(topology_change_detected, S_IRUGO,
show_topology_change_detected, NULL);
static ssize_t show_hello_timer(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(hello_timer, S_IRUGO, show_hello_timer, NULL);
static ssize_t show_tcn_timer(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(tcn_timer, S_IRUGO, show_tcn_timer, NULL);
static ssize_t show_topology_change_timer(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(topology_change_timer, S_IRUGO, show_topology_change_timer,
NULL);
static ssize_t show_gc_timer(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(gc_timer, S_IRUGO, show_gc_timer, NULL);
static ssize_t show_group_addr(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_group_addr(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(group_addr, S_IRUGO | S_IWUSR,
show_group_addr, store_group_addr);
static ssize_t store_flush(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(flush, S_IWUSR, NULL, store_flush);
static ssize_t show_multicast_router(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_multicast_router(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(multicast_router, S_IRUGO | S_IWUSR, show_multicast_router,
store_multicast_router);
static ssize_t show_multicast_snooping(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t store_multicast_snooping(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(multicast_snooping, S_IRUGO | S_IWUSR,
show_multicast_snooping, store_multicast_snooping);
static ssize_t show_hash_elasticity(struct device *d,
struct device_attribute *attr, char *buf)
static int set_elasticity(struct net_bridge *br, unsigned long val)
static ssize_t store_hash_elasticity(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(hash_elasticity, S_IRUGO | S_IWUSR, show_hash_elasticity,
store_hash_elasticity);
static ssize_t show_hash_max(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_hash_max(struct device *d, struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(hash_max, S_IRUGO | S_IWUSR, show_hash_max,
store_hash_max);
static ssize_t show_multicast_last_member_count(struct device *d,
struct device_attribute *attr,
char *buf)
static int set_last_member_count(struct net_bridge *br, unsigned long val)
static ssize_t store_multicast_last_member_count(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(multicast_last_member_count, S_IRUGO | S_IWUSR,
show_multicast_last_member_count,
store_multicast_last_member_count);
static ssize_t show_multicast_startup_query_count(
struct device *d, struct device_attribute *attr, char *buf)
static int set_startup_query_count(struct net_bridge *br, unsigned long val)
static ssize_t store_multicast_startup_query_count(
struct device *d, struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(multicast_startup_query_count, S_IRUGO | S_IWUSR,
show_multicast_startup_query_count,
store_multicast_startup_query_count);
static ssize_t show_multicast_last_member_interval(
struct device *d, struct device_attribute *attr, char *buf)
static int set_last_member_interval(struct net_bridge *br, unsigned long val)
static ssize_t store_multicast_last_member_interval(
struct device *d, struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(multicast_last_member_interval, S_IRUGO | S_IWUSR,
show_multicast_last_member_interval,
store_multicast_last_member_interval);
static ssize_t show_multicast_membership_interval(
struct device *d, struct device_attribute *attr, char *buf)
static int set_membership_interval(struct net_bridge *br, unsigned long val)
static ssize_t store_multicast_membership_interval(
struct device *d, struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(multicast_membership_interval, S_IRUGO | S_IWUSR,
show_multicast_membership_interval,
store_multicast_membership_interval);
static ssize_t show_multicast_querier_interval(struct device *d,
struct device_attribute *attr,
char *buf)
static int set_querier_interval(struct net_bridge *br, unsigned long val)
static ssize_t store_multicast_querier_interval(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(multicast_querier_interval, S_IRUGO | S_IWUSR,
show_multicast_querier_interval,
store_multicast_querier_interval);
static ssize_t show_multicast_query_interval(struct device *d,
struct device_attribute *attr,
char *buf)
static int set_query_interval(struct net_bridge *br, unsigned long val)
static ssize_t store_multicast_query_interval(struct device *d,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(multicast_query_interval, S_IRUGO | S_IWUSR,
show_multicast_query_interval,
store_multicast_query_interval);
static ssize_t show_multicast_query_response_interval(
struct device *d, struct device_attribute *attr, char *buf)
static int set_query_response_interval(struct net_bridge *br, unsigned long val)
static ssize_t store_multicast_query_response_interval(
struct device *d, struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(multicast_query_response_interval, S_IRUGO | S_IWUSR,
show_multicast_query_response_interval,
store_multicast_query_response_interval);
static ssize_t show_multicast_startup_query_interval(
struct device *d, struct device_attribute *attr, char *buf)
static int set_startup_query_interval(struct net_bridge *br, unsigned long val)
static ssize_t store_multicast_startup_query_interval(
struct device *d, struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(multicast_startup_query_interval, S_IRUGO | S_IWUSR,
show_multicast_startup_query_interval,
store_multicast_startup_query_interval);
static ssize_t show_nf_call_iptables(
struct device *d, struct device_attribute *attr, char *buf)
static int set_nf_call_iptables(struct net_bridge *br, unsigned long val)
static ssize_t store_nf_call_iptables(
struct device *d, struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(nf_call_iptables, S_IRUGO | S_IWUSR,
show_nf_call_iptables, store_nf_call_iptables);
static ssize_t show_nf_call_ip6tables(
struct device *d, struct device_attribute *attr, char *buf)
static int set_nf_call_ip6tables(struct net_bridge *br, unsigned long val)
static ssize_t store_nf_call_ip6tables(
struct device *d, struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(nf_call_ip6tables, S_IRUGO | S_IWUSR,
show_nf_call_ip6tables, store_nf_call_ip6tables);
static ssize_t show_nf_call_arptables(
struct device *d, struct device_attribute *attr, char *buf)
static int set_nf_call_arptables(struct net_bridge *br, unsigned long val)
static ssize_t store_nf_call_arptables(
struct device *d, struct device_attribute *attr, const char *buf,
size_t len)
static DEVICE_ATTR(nf_call_arptables, S_IRUGO | S_IWUSR,
show_nf_call_arptables, store_nf_call_arptables);
static struct attribute *bridge_attrs[] = ;
static struct attribute_group bridge_group = ;
static ssize_t brforward_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute bridge_forward = ;
int br_sysfs_addbr(struct net_device *dev)
void br_sysfs_delbr(struct net_device *dev)
