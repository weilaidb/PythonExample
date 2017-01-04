static int w1_search_count = -1;
module_param_named(search_count, w1_search_count, int, 0);
static int w1_enable_pullup = 1;
module_param_named(enable_pullup, w1_enable_pullup, int, 0);
static struct w1_master * w1_alloc_dev(u32 id, int slave_count, int slave_ttl,
struct device_driver *driver,
struct device *device)
static void w1_free_dev(struct w1_master *dev)
int w1_add_master_device(struct w1_bus_master *master)
void __w1_remove_master_device(struct w1_master *dev)
void w1_remove_master_device(struct w1_bus_master *bm)
EXPORT_SYMBOL(w1_add_master_device);
EXPORT_SYMBOL(w1_remove_master_device);
