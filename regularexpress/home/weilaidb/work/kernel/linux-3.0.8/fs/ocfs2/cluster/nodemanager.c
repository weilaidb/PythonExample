struct o2nm_cluster *o2nm_single_cluster = NULL;
char *o2nm_fence_method_desc[O2NM_FENCE_METHODS] = ;
struct o2nm_node *o2nm_get_node_by_num(u8 node_num)
EXPORT_SYMBOL_GPL(o2nm_get_node_by_num);
int o2nm_configured_node_map(unsigned long *map, unsigned bytes)
EXPORT_SYMBOL_GPL(o2nm_configured_node_map);
static struct o2nm_node *o2nm_node_ip_tree_lookup(struct o2nm_cluster *cluster,
__be32 ip_needle,
struct rb_node ***ret_p,
struct rb_node **ret_parent)
struct o2nm_node *o2nm_get_node_by_ip(__be32 addr)
EXPORT_SYMBOL_GPL(o2nm_get_node_by_ip);
void o2nm_node_put(struct o2nm_node *node)
EXPORT_SYMBOL_GPL(o2nm_node_put);
void o2nm_node_get(struct o2nm_node *node)
EXPORT_SYMBOL_GPL(o2nm_node_get);
u8 o2nm_this_node(void)
EXPORT_SYMBOL_GPL(o2nm_this_node);
static struct o2nm_cluster *to_o2nm_cluster(struct config_item *item)
static struct o2nm_node *to_o2nm_node(struct config_item *item)
static void o2nm_node_release(struct config_item *item)
static ssize_t o2nm_node_num_read(struct o2nm_node *node, char *page)
static struct o2nm_cluster *to_o2nm_cluster_from_node(struct o2nm_node *node)
enum ;
static ssize_t o2nm_node_num_write(struct o2nm_node *node, const char *page,
size_t count)
static ssize_t o2nm_node_ipv4_port_read(struct o2nm_node *node, char *page)
static ssize_t o2nm_node_ipv4_port_write(struct o2nm_node *node,
const char *page, size_t count)
static ssize_t o2nm_node_ipv4_address_read(struct o2nm_node *node, char *page)
static ssize_t o2nm_node_ipv4_address_write(struct o2nm_node *node,
const char *page,
size_t count)
static ssize_t o2nm_node_local_read(struct o2nm_node *node, char *page)
static ssize_t o2nm_node_local_write(struct o2nm_node *node, const char *page,
size_t count)
struct o2nm_node_attribute ;
static struct o2nm_node_attribute o2nm_node_attr_num = ;
static struct o2nm_node_attribute o2nm_node_attr_ipv4_port = ;
static struct o2nm_node_attribute o2nm_node_attr_ipv4_address = ;
static struct o2nm_node_attribute o2nm_node_attr_local = ;
static struct configfs_attribute *o2nm_node_attrs[] = ;
static int o2nm_attr_index(struct configfs_attribute *attr)
static ssize_t o2nm_node_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static ssize_t o2nm_node_store(struct config_item *item,
struct configfs_attribute *attr,
const char *page, size_t count)
static struct configfs_item_operations o2nm_node_item_ops = ;
static struct config_item_type o2nm_node_type = ;
struct o2nm_node_group ;
struct o2nm_cluster_attribute ;
static ssize_t o2nm_cluster_attr_write(const char *page, ssize_t count,
unsigned int *val)
static ssize_t o2nm_cluster_attr_idle_timeout_ms_read(
struct o2nm_cluster *cluster, char *page)
static ssize_t o2nm_cluster_attr_idle_timeout_ms_write(
struct o2nm_cluster *cluster, const char *page, size_t count)
static ssize_t o2nm_cluster_attr_keepalive_delay_ms_read(
struct o2nm_cluster *cluster, char *page)
static ssize_t o2nm_cluster_attr_keepalive_delay_ms_write(
struct o2nm_cluster *cluster, const char *page, size_t count)
static ssize_t o2nm_cluster_attr_reconnect_delay_ms_read(
struct o2nm_cluster *cluster, char *page)
static ssize_t o2nm_cluster_attr_reconnect_delay_ms_write(
struct o2nm_cluster *cluster, const char *page, size_t count)
static ssize_t o2nm_cluster_attr_fence_method_read(
struct o2nm_cluster *cluster, char *page)
static ssize_t o2nm_cluster_attr_fence_method_write(
struct o2nm_cluster *cluster, const char *page, size_t count)
static struct o2nm_cluster_attribute o2nm_cluster_attr_idle_timeout_ms = ;
static struct o2nm_cluster_attribute o2nm_cluster_attr_keepalive_delay_ms = ;
static struct o2nm_cluster_attribute o2nm_cluster_attr_reconnect_delay_ms = ;
static struct o2nm_cluster_attribute o2nm_cluster_attr_fence_method = ;
static struct configfs_attribute *o2nm_cluster_attrs[] = ;
static ssize_t o2nm_cluster_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static ssize_t o2nm_cluster_store(struct config_item *item,
struct configfs_attribute *attr,
const char *page, size_t count)
static struct config_item *o2nm_node_group_make_item(struct config_group *group,
const char *name)
static void o2nm_node_group_drop_item(struct config_group *group,
struct config_item *item)
static struct configfs_group_operations o2nm_node_group_group_ops = ;
static struct config_item_type o2nm_node_group_type = ;
static void o2nm_cluster_release(struct config_item *item)
static struct configfs_item_operations o2nm_cluster_item_ops = ;
static struct config_item_type o2nm_cluster_type = ;
struct o2nm_cluster_group ;
static struct config_group *o2nm_cluster_group_make_group(struct config_group *group,
const char *name)
static void o2nm_cluster_group_drop_item(struct config_group *group, struct config_item *item)
static struct configfs_group_operations o2nm_cluster_group_group_ops = ;
static struct config_item_type o2nm_cluster_group_type = ;
static struct o2nm_cluster_group o2nm_cluster_group = ;
int o2nm_depend_item(struct config_item *item)
void o2nm_undepend_item(struct config_item *item)
int o2nm_depend_this_node(void)
void o2nm_undepend_this_node(void)
static void __exit exit_o2nm(void)
static int __init init_o2nm(void)
MODULE_AUTHOR("Oracle");
MODULE_LICENSE("GPL");
module_init(init_o2nm)
module_exit(exit_o2nm)
