#undef DEBUG
#define DBG(fmt...) printk(KERN_ERR fmt)
#define DBG(fmt...)
int __initdata iommu_is_off;
int __initdata iommu_force_on;
unsigned long tce_alloc_start, tce_alloc_end;
u64 ppc64_rma_size;
static phys_addr_t first_memblock_size;
static int __init early_parse_mem(char *p)
early_param("mem", early_parse_mem);
static inline int overlaps_initrd(unsigned long start, unsigned long size)
static void __init move_device_tree(void)
static struct ibm_pa_feature  ibm_pa_features[] __initdata = ;
static void __init scan_features(unsigned long node, unsigned char *ftrs,
unsigned long tablelen,
struct ibm_pa_feature *fp,
unsigned long ft_size)
static void __init check_cpu_pa_features(unsigned long node)
static void __init check_cpu_slb_size(unsigned long node)
#define check_cpu_slb_size(node) do  while(0)
static struct feature_property  feature_properties[] __initdata = ;
#if defined(CONFIG_44x) && defined(CONFIG_PPC_FPU)
static inline void identical_pvr_fixup(unsigned long node)
#define identical_pvr_fixup(node) do  while(0)
static void __init check_cpu_feature_properties(unsigned long node)
static int __init early_init_dt_scan_cpus(unsigned long node,
const char *uname, int depth,
void *data)
int __init early_init_dt_scan_chosen_ppc(unsigned long node, const char *uname,
int depth, void *data)
static int __init early_init_dt_scan_drconf_memory(unsigned long node)
#define early_init_dt_scan_drconf_memory(node)	0
static int __init early_init_dt_scan_memory_ppc(unsigned long node,
const char *uname,
int depth, void *data)
void __init early_init_dt_add_memory_arch(u64 base, u64 size)
void * __init early_init_dt_alloc_memory_arch(u64 size, u64 align)
void __init early_init_dt_setup_initrd_arch(unsigned long start,
unsigned long end)
static void __init early_reserve_mem(void)
static inline unsigned long phyp_dump_calculate_reserve_size(void)
static void __init phyp_dump_reserve_mem(void)
static inline void __init phyp_dump_reserve_mem(void)
void __init early_init_devtree(void *params)
struct device_node *of_find_next_cache_node(struct device_node *np)
static int of_finish_dynamic_node(struct device_node *node)
static int prom_reconfig_notifier(struct notifier_block *nb,
unsigned long action, void *node)
static struct notifier_block prom_reconfig_nb = ;
static int __init prom_reconfig_setup(void)
__initcall(prom_reconfig_setup);
struct device_node *of_get_cpu_node(int cpu, unsigned int *thread)
EXPORT_SYMBOL(of_get_cpu_node);
#if defined(CONFIG_DEBUG_FS) && defined(DEBUG)
static struct debugfs_blob_wrapper flat_dt_blob;
static int __init export_flat_device_tree(void)
__initcall(export_flat_device_tree);
