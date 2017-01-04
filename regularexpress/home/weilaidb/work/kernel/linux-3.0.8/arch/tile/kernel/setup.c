#define setup_max_cpus 1
static inline int ABS(int x)
char chip_model[64] __write_once;
struct pglist_data node_data[MAX_NUMNODES] __read_mostly;
EXPORT_SYMBOL(node_data);
static bootmem_data_t __initdata node0_bdata;
unsigned long __cpuinitdata node_start_pfn[MAX_NUMNODES];
unsigned long __cpuinitdata node_end_pfn[MAX_NUMNODES];
unsigned long __initdata node_memmap_pfn[MAX_NUMNODES];
unsigned long __initdata node_percpu_pfn[MAX_NUMNODES];
unsigned long __initdata node_free_pfn[MAX_NUMNODES];
static unsigned long __initdata node_percpu[MAX_NUMNODES];
unsigned long __cpuinitdata node_lowmem_end_pfn[MAX_NUMNODES];
static unsigned long __initdata mappable_physpages;
int node_controller[MAX_NUMNODES] = ;
unsigned long pbase_map[1 << (32 - HPAGE_SHIFT)]
__write_once __attribute__((aligned(L2_CACHE_BYTES)));
EXPORT_SYMBOL(pbase_map);
void *vbase_map[NR_PA_HIGHBIT_VALUES]
__write_once __attribute__((aligned(L2_CACHE_BYTES)));
EXPORT_SYMBOL(vbase_map);
int highbits_to_node[NR_PA_HIGHBIT_VALUES] __write_once;
EXPORT_SYMBOL(highbits_to_node);
static unsigned int __initdata maxmem_pfn = -1U;
static unsigned int __initdata maxnodemem_pfn[MAX_NUMNODES] = ;
static nodemask_t __initdata isolnodes;
enum ;
static unsigned int __initdata pci_reserve_mb = DEFAULT_PCI_RESERVE_MB;
unsigned long __initdata pci_reserve_start_pfn = -1U;
unsigned long __initdata pci_reserve_end_pfn = -1U;
static int __init setup_maxmem(char *str)
early_param("maxmem", setup_maxmem);
static int __init setup_maxnodemem(char *str)
early_param("maxnodemem", setup_maxnodemem);
static int __init setup_isolnodes(char *str)
early_param("isolnodes", setup_isolnodes);
static int __init setup_pci_reserve(char* str)
early_param("pci_reserve", setup_pci_reserve);
static int __init parse_vmalloc(char *arg)
early_param("vmalloc", parse_vmalloc);
static void *__init setup_pa_va_mapping(void)
static void __cpuinit store_permanent_mappings(void)
static void __init setup_memory(void)
static void __init setup_bootmem_allocator(void)
void *__init alloc_remap(int nid, unsigned long size)
static int __init percpu_size(void)
static inline unsigned long alloc_bootmem_pfn(int size, unsigned long goal)
static void __init zone_sizes_init(void)
struct cpumask node_2_cpu_mask[MAX_NUMNODES] __write_once;
EXPORT_SYMBOL(node_2_cpu_mask);
char cpu_2_node[NR_CPUS] __write_once __attribute__((aligned(L2_CACHE_BYTES)));
EXPORT_SYMBOL(cpu_2_node);
static int __init cpu_to_bound_node(int cpu, struct cpumask* unbound_cpus)
static int __init node_neighbors(int node, int cpu,
struct cpumask *unbound_cpus)
static void __init setup_numa_mapping(void)
static struct cpu cpu_devices[NR_CPUS];
static int __init topology_init(void)
subsys_initcall(topology_init);
#define setup_numa_mapping() do  while (0)
void __cpuinit setup_cpu(int boot)
static int __initdata set_initramfs_file;
static char __initdata initramfs_file[128] = "initramfs.cpio.gz";
static int __init setup_initramfs_file(char *str)
early_param("initramfs_file", setup_initramfs_file);
static void __init load_hv_initrd(void)
void __init free_initrd_mem(unsigned long begin, unsigned long end)
static inline void load_hv_initrd(void)
static void __init validate_hv(void)
static void __init validate_va(void)
struct cpumask __write_once cpu_lotar_map;
EXPORT_SYMBOL(cpu_lotar_map);
#if CHIP_HAS_CBOX_HOME_MAP()
struct cpumask hash_for_home_map;
EXPORT_SYMBOL(hash_for_home_map);
struct cpumask __write_once cpu_cacheable_map;
EXPORT_SYMBOL(cpu_cacheable_map);
static __initdata struct cpumask disabled_map;
static int __init disabled_cpus(char *str)
early_param("disabled_cpus", disabled_cpus);
void __init print_disabled_cpus(void)
static void __init setup_cpu_maps(void)
static int __init dataplane(char *str)
early_param("dataplane", dataplane);
static char __initdata builtin_cmdline[COMMAND_LINE_SIZE] = CONFIG_CMDLINE;
void __init setup_arch(char **cmdline_p)
unsigned long __per_cpu_offset[NR_CPUS] __write_once;
EXPORT_SYMBOL(__per_cpu_offset);
static size_t __initdata pfn_offset[MAX_NUMNODES] = ;
static unsigned long __initdata percpu_pfn[NR_CPUS] = ;
static void *__init pcpu_fc_alloc(unsigned int cpu, size_t size, size_t align)
static void __init pcpu_fc_free(void *ptr, size_t size)
static void __init pcpu_fc_populate_pte(unsigned long addr)
void __init setup_per_cpu_areas(void)
static struct resource data_resource = ;
static struct resource code_resource = ;
static struct resource* __init
insert_non_bus_resource(void)
static struct resource* __init
insert_ram_resource(u64 start_pfn, u64 end_pfn)
static int __init request_standard_resources(void)
subsys_initcall(request_standard_resources);
