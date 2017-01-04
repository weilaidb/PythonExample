#if defined(CONFIG_KERNEL_START_BOOL) || defined(CONFIG_LOWMEM_SIZE_BOOL)
#if (CONFIG_LOWMEM_SIZE > (0xF0000000 - PAGE_OFFSET))
#error "You must adjust CONFIG_LOWMEM_SIZE or CONFIG_START_KERNEL"
#define MAX_LOW_MEM	CONFIG_LOWMEM_SIZE
phys_addr_t total_memory;
phys_addr_t total_lowmem;
phys_addr_t memstart_addr = (phys_addr_t)~0ull;
EXPORT_SYMBOL(memstart_addr);
phys_addr_t kernstart_addr;
EXPORT_SYMBOL(kernstart_addr);
phys_addr_t lowmem_end_addr;
int boot_mapsize;
unsigned long agp_special_page;
EXPORT_SYMBOL(agp_special_page);
void MMU_init(void);
extern struct task_struct *current_set[NR_CPUS];
int __map_without_bats;
int __map_without_ltlbs;
int __allow_ioremap_reserved;
unsigned long __max_low_memory = MAX_LOW_MEM;
void MMU_setup(void)
void __init MMU_init(void)
void __init *early_get_page(void)
static void free_sec(unsigned long start, unsigned long end, const char *name)
void free_initmem(void)
void setup_initial_memory_limit(phys_addr_t first_memblock_base,
phys_addr_t first_memblock_size)
