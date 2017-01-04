const struct scom_controller *scom_controller;
EXPORT_SYMBOL_GPL(scom_controller);
struct device_node *scom_find_parent(struct device_node *node)
EXPORT_SYMBOL_GPL(scom_find_parent);
scom_map_t scom_map_device(struct device_node *dev, int index)
EXPORT_SYMBOL_GPL(scom_map_device);
struct scom_debug_entry ;
static int scom_addr_set(void *data, u64 val)
static int scom_addr_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(scom_addr_fops, scom_addr_get, scom_addr_set,
"0x%llx\n");
static int scom_val_set(void *data, u64 val)
static int scom_val_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(scom_val_fops, scom_val_get, scom_val_set,
"0x%llx\n");
static int scom_debug_init_one(struct dentry *root, struct device_node *dn,
int i)
static int scom_debug_init(void)
device_initcall(scom_debug_init);
