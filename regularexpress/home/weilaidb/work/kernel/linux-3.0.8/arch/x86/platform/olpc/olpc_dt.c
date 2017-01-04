static phandle __init olpc_dt_getsibling(phandle node)
static phandle __init olpc_dt_getchild(phandle node)
static int __init olpc_dt_getproplen(phandle node, const char *prop)
static int __init olpc_dt_getproperty(phandle node, const char *prop,
char *buf, int bufsize)
static int __init olpc_dt_nextprop(phandle node, char *prev, char *buf)
static int __init olpc_dt_pkg2path(phandle node, char *buf,
const int buflen, int *len)
static unsigned int prom_early_allocated __initdata;
void * __init prom_early_alloc(unsigned long size)
static struct of_pdt_ops prom_olpc_ops __initdata = ;
void __init olpc_dt_build_devicetree(void)
static struct of_device_id __initdata of_ids[] = ;
static int __init olpc_create_platform_devices(void)
device_initcall(olpc_create_platform_devices);
