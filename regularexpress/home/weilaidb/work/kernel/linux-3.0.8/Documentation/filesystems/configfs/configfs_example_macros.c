struct childless ;
static inline struct childless *to_childless(struct config_item *item)
CONFIGFS_ATTR_STRUCT(childless);
#define CHILDLESS_ATTR(_name, _mode, _show, _store)	\
struct childless_attribute childless_attr_##_name = __CONFIGFS_ATTR(_name, _mode, _show, _store)
#define CHILDLESS_ATTR_RO(_name, _show)	\
struct childless_attribute childless_attr_##_name = __CONFIGFS_ATTR_RO(_name, _show);
static ssize_t childless_showme_read(struct childless *childless,
char *page)
static ssize_t childless_storeme_read(struct childless *childless,
char *page)
static ssize_t childless_storeme_write(struct childless *childless,
const char *page,
size_t count)
static ssize_t childless_description_read(struct childless *childless,
char *page)
CHILDLESS_ATTR_RO(showme, childless_showme_read);
CHILDLESS_ATTR(storeme, S_IRUGO | S_IWUSR, childless_storeme_read,
childless_storeme_write);
CHILDLESS_ATTR_RO(description, childless_description_read);
static struct configfs_attribute *childless_attrs[] = ;
CONFIGFS_ATTR_OPS(childless);
static struct configfs_item_operations childless_item_ops = ;
static struct config_item_type childless_type = ;
static struct childless childless_subsys = ;
struct simple_child ;
static inline struct simple_child *to_simple_child(struct config_item *item)
static struct configfs_attribute simple_child_attr_storeme = ;
static struct configfs_attribute *simple_child_attrs[] = ;
static ssize_t simple_child_attr_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static ssize_t simple_child_attr_store(struct config_item *item,
struct configfs_attribute *attr,
const char *page, size_t count)
static void simple_child_release(struct config_item *item)
static struct configfs_item_operations simple_child_item_ops = ;
static struct config_item_type simple_child_type = ;
struct simple_children ;
static inline struct simple_children *to_simple_children(struct config_item *item)
static struct config_item *simple_children_make_item(struct config_group *group, const char *name)
static struct configfs_attribute simple_children_attr_description = ;
static struct configfs_attribute *simple_children_attrs[] = ;
static ssize_t simple_children_attr_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static void simple_children_release(struct config_item *item)
static struct configfs_item_operations simple_children_item_ops = ;
static struct configfs_group_operations simple_children_group_ops = ;
static struct config_item_type simple_children_type = ;
static struct configfs_subsystem simple_children_subsys = ;
static struct config_group *group_children_make_group(struct config_group *group, const char *name)
static struct configfs_attribute group_children_attr_description = ;
static struct configfs_attribute *group_children_attrs[] = ;
static ssize_t group_children_attr_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static struct configfs_item_operations group_children_item_ops = ;
static struct configfs_group_operations group_children_group_ops = ;
static struct config_item_type group_children_type = ;
static struct configfs_subsystem group_children_subsys = ;
static struct configfs_subsystem *example_subsys[] = ;
static int __init configfs_example_init(void)
static void __exit configfs_example_exit(void)
module_init(configfs_example_init);
module_exit(configfs_example_exit);
MODULE_LICENSE("GPL");
