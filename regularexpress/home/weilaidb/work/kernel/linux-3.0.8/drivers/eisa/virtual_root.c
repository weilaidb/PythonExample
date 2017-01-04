#if defined(CONFIG_ALPHA_JENSEN) || defined(CONFIG_EISA_VLB_PRIMING)
#define EISA_FORCE_PROBE_DEFAULT 1
#define EISA_FORCE_PROBE_DEFAULT 0
static int force_probe = EISA_FORCE_PROBE_DEFAULT;
static void virtual_eisa_release (struct device *);
static struct platform_device eisa_root_dev = ;
static struct eisa_root_device eisa_bus_root = ;
static void virtual_eisa_release (struct device *dev)
static int __init virtual_eisa_root_init (void)
module_param (force_probe, int, 0444);
device_initcall (virtual_eisa_root_init);
