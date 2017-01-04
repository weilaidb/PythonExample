extern void clock_stop_probe(void);
extern void sun4c_probe_memerr_reg(void);
static char *cpu_mid_prop(void)
static int check_cpu_node(phandle nd, int *cur_inst,
int (*compare)(phandle, int, void *), void *compare_arg,
phandle *prom_node, int *mid)
static int __cpu_find_by(int (*compare)(phandle, int, void *),
void *compare_arg, phandle *prom_node, int *mid)
static int cpu_instance_compare(phandle nd, int instance, void *_arg)
int cpu_find_by_instance(int instance, phandle *prom_node, int *mid)
static int cpu_mid_compare(phandle nd, int instance, void *_arg)
int cpu_find_by_mid(int mid, phandle *prom_node)
int cpu_get_hwmid(phandle prom_node)
void __init device_scan(void)
