#define XEN_PLATFORM_ERR_MAGIC -1
#define XEN_PLATFORM_ERR_PROTOCOL -2
#define XEN_PLATFORM_ERR_BLACKLIST -3
int xen_platform_pci_unplug;
EXPORT_SYMBOL_GPL(xen_platform_pci_unplug);
static int xen_emul_unplug;
static int __init check_platform_magic(void)
void xen_unplug_emulated_devices(void)
static int __init parse_xen_emul_unplug(char *arg)
early_param("xen_emul_unplug", parse_xen_emul_unplug);
