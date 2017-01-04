char dsa_driver_version[] = "0.1";
static DEFINE_MUTEX(dsa_switch_drivers_mutex);
static LIST_HEAD(dsa_switch_drivers);
void register_switch_driver(struct dsa_switch_driver *drv)
void unregister_switch_driver(struct dsa_switch_driver *drv)
static struct dsa_switch_driver *
dsa_switch_probe(struct mii_bus *bus, int sw_addr, char **_name)
static struct dsa_switch *
dsa_switch_setup(struct dsa_switch_tree *dst, int index,
struct device *parent, struct mii_bus *bus)
static void dsa_switch_destroy(struct dsa_switch *ds)
bool dsa_uses_dsa_tags(void *dsa_ptr)
bool dsa_uses_trailer_tags(void *dsa_ptr)
static void dsa_link_poll_work(struct work_struct *ugly)
static void dsa_link_poll_timer(unsigned long _dst)
static int dev_is_class(struct device *dev, void *class)
static struct device *dev_find_class(struct device *parent, char *class)
static struct mii_bus *dev_to_mii_bus(struct device *dev)
static struct net_device *dev_to_net_device(struct device *dev)
static int dsa_probe(struct platform_device *pdev)
static int dsa_remove(struct platform_device *pdev)
static void dsa_shutdown(struct platform_device *pdev)
static struct platform_driver dsa_driver = ;
static int __init dsa_init_module(void)
module_init(dsa_init_module);
static void __exit dsa_cleanup_module(void)
module_exit(dsa_cleanup_module);
MODULE_AUTHOR("Lennert Buytenhek <buytenh@wantstofly.org>");
MODULE_DESCRIPTION("Driver for Distributed Switch Architecture switch chips");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:dsa");
