#define SLOT_ADDRESS(r,n) (r->bus_base_addr + (0x1000 * n))
#define EISA_DEVINFO(i,s)
struct eisa_device_info ;
static struct eisa_device_info __initdata eisa_table[] = ;
#define EISA_INFOS (sizeof (eisa_table) / (sizeof (struct eisa_device_info)))
#define EISA_MAX_FORCED_DEV 16
static int enable_dev[EISA_MAX_FORCED_DEV];
static unsigned int enable_dev_count;
static int disable_dev[EISA_MAX_FORCED_DEV];
static unsigned int disable_dev_count;
static int is_forced_dev(int *forced_tab,
int forced_count,
struct eisa_root_device *root,
struct eisa_device *edev)
static void __init eisa_name_device(struct eisa_device *edev)
static char __init *decode_eisa_sig(unsigned long addr)
static int eisa_bus_match(struct device *dev, struct device_driver *drv)
static int eisa_bus_uevent(struct device *dev, struct kobj_uevent_env *env)
struct bus_type eisa_bus_type = ;
EXPORT_SYMBOL(eisa_bus_type);
int eisa_driver_register(struct eisa_driver *edrv)
EXPORT_SYMBOL(eisa_driver_register);
void eisa_driver_unregister(struct eisa_driver *edrv)
EXPORT_SYMBOL(eisa_driver_unregister);
static ssize_t eisa_show_sig(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(signature, S_IRUGO, eisa_show_sig, NULL);
static ssize_t eisa_show_state(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(enabled, S_IRUGO, eisa_show_state, NULL);
static ssize_t eisa_show_modalias(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(modalias, S_IRUGO, eisa_show_modalias, NULL);
static int __init eisa_init_device(struct eisa_root_device *root,
struct eisa_device *edev,
int slot)
static int __init eisa_register_device(struct eisa_device *edev)
static int __init eisa_request_resources(struct eisa_root_device *root,
struct eisa_device *edev,
int slot)
static void __init eisa_release_resources(struct eisa_device *edev)
static int __init eisa_probe(struct eisa_root_device *root)
static struct resource eisa_root_res = ;
static int eisa_bus_count;
int __init eisa_root_register(struct eisa_root_device *root)
static int __init eisa_init(void)
module_param_array(enable_dev, int, &enable_dev_count, 0444);
module_param_array(disable_dev, int, &disable_dev_count, 0444);
postcore_initcall(eisa_init);
int EISA_bus;
EXPORT_SYMBOL(EISA_bus);
