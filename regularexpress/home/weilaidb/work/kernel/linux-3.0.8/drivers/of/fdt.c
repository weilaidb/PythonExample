char *of_fdt_get_string(struct boot_param_header *blob, u32 offset)
void *of_fdt_get_property(struct boot_param_header *blob,
unsigned long node, const char *name,
unsigned long *size)
int of_fdt_is_compatible(struct boot_param_header *blob,
unsigned long node, const char *compat)
int of_fdt_match(struct boot_param_header *blob, unsigned long node,
const char **compat)
static void *unflatten_dt_alloc(unsigned long *mem, unsigned long size,
unsigned long align)
static unsigned long unflatten_dt_node(struct boot_param_header *blob,
unsigned long mem,
unsigned long *p,
struct device_node *dad,
struct device_node ***allnextpp,
unsigned long fpsize)
static void __unflatten_device_tree(struct boot_param_header *blob,
struct device_node **mynodes,
void * (*dt_alloc)(u64 size, u64 align))
static void *kernel_tree_alloc(u64 size, u64 align)
void of_fdt_unflatten_tree(unsigned long *blob,
struct device_node **mynodes)
EXPORT_SYMBOL_GPL(of_fdt_unflatten_tree);
int __initdata dt_root_addr_cells;
int __initdata dt_root_size_cells;
struct boot_param_header *initial_boot_params;
int __init of_scan_flat_dt(int (*it)(unsigned long node,
const char *uname, int depth,
void *data),
void *data)
unsigned long __init of_get_flat_dt_root(void)
void *__init of_get_flat_dt_prop(unsigned long node, const char *name,
unsigned long *size)
int __init of_flat_dt_is_compatible(unsigned long node, const char *compat)
int __init of_flat_dt_match(unsigned long node, const char **compat)
void __init early_init_dt_check_for_initrd(unsigned long node)
inline void early_init_dt_check_for_initrd(unsigned long node)
int __init early_init_dt_scan_root(unsigned long node, const char *uname,
int depth, void *data)
u64 __init dt_mem_next_cell(int s, __be32 **cellp)
int __init early_init_dt_scan_memory(unsigned long node, const char *uname,
int depth, void *data)
int __init early_init_dt_scan_chosen(unsigned long node, const char *uname,
int depth, void *data)
void __init unflatten_device_tree(void)
