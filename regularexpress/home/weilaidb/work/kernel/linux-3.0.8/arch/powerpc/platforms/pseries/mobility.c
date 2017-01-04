static struct kobject *mobility_kobj;
struct update_props_workarea ;
#define NODE_ACTION_MASK	0xff000000
#define NODE_COUNT_MASK		0x00ffffff
#define DELETE_DT_NODE	0x01000000
#define UPDATE_DT_NODE	0x02000000
#define ADD_DT_NODE	0x03000000
static int mobility_rtas_call(int token, char *buf)
static int delete_dt_node(u32 phandle)
static int update_dt_property(struct device_node *dn, struct property **prop,
const char *name, u32 vd, char *value)
static int update_dt_node(u32 phandle)
static int add_dt_node(u32 parent_phandle, u32 drc_index)
static int pseries_devicetree_update(void)
void post_mobility_fixup(void)
static ssize_t migrate_store(struct class *class, struct class_attribute *attr,
const char *buf, size_t count)
static CLASS_ATTR(migration, S_IWUSR, NULL, migrate_store);
static int __init mobility_sysfs_init(void)
device_initcall(mobility_sysfs_init);
