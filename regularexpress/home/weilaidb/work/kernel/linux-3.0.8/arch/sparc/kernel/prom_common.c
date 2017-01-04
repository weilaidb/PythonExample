struct device_node *of_console_device;
EXPORT_SYMBOL(of_console_device);
char *of_console_path;
EXPORT_SYMBOL(of_console_path);
char *of_console_options;
EXPORT_SYMBOL(of_console_options);
int of_getintprop_default(struct device_node *np, const char *name, int def)
EXPORT_SYMBOL(of_getintprop_default);
DEFINE_MUTEX(of_set_property_mutex);
EXPORT_SYMBOL(of_set_property_mutex);
int of_set_property(struct device_node *dp, const char *name, void *val, int len)
EXPORT_SYMBOL(of_set_property);
int of_find_in_proplist(const char *list, const char *match, int len)
EXPORT_SYMBOL(of_find_in_proplist);
static int __init handle_nextprop_quirks(char *buf, const char *name)
static int __init prom_common_nextprop(phandle node, char *prev, char *buf)
unsigned int prom_early_allocated __initdata;
static struct of_pdt_ops prom_sparc_ops __initdata = ;
void __init prom_build_devicetree(void)
