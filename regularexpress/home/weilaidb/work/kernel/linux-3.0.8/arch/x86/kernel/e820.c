struct e820map e820;
struct e820map e820_saved;
unsigned long pci_mem_start = 0xaeedbabe;
EXPORT_SYMBOL(pci_mem_start);
int
e820_any_mapped(u64 start, u64 end, unsigned type)
EXPORT_SYMBOL_GPL(e820_any_mapped);
int __init e820_all_mapped(u64 start, u64 end, unsigned type)
static void __init __e820_add_region(struct e820map *e820x, u64 start, u64 size,
int type)
void __init e820_add_region(u64 start, u64 size, int type)
static void __init e820_print_type(u32 type)
void __init e820_print_map(char *who)
int __init sanitize_e820_map(struct e820entry *biosmap, int max_nr_map,
u32 *pnr_map)
static int __init __append_e820_map(struct e820entry *biosmap, int nr_map)
static int __init append_e820_map(struct e820entry *biosmap, int nr_map)
static u64 __init __e820_update_range(struct e820map *e820x, u64 start,
u64 size, unsigned old_type,
unsigned new_type)
u64 __init e820_update_range(u64 start, u64 size, unsigned old_type,
unsigned new_type)
static u64 __init e820_update_range_saved(u64 start, u64 size,
unsigned old_type, unsigned new_type)
u64 __init e820_remove_range(u64 start, u64 size, unsigned old_type,
int checktype)
void __init update_e820(void)
static void __init update_e820_saved(void)
#define MAX_GAP_END 0x100000000ull
__init int e820_search_gap(unsigned long *gapstart, unsigned long *gapsize,
unsigned long start_addr, unsigned long long end_addr)
__init void e820_setup_gap(void)
void __init parse_e820_ext(struct setup_data *sdata)
#if defined(CONFIG_X86_64) || \
(defined(CONFIG_X86_32) && defined(CONFIG_HIBERNATION))
void __init e820_mark_nosave_regions(unsigned long limit_pfn)
static int __init e820_mark_nvs_memory(void)
core_initcall(e820_mark_nvs_memory);
u64 __init early_reserve_e820(u64 startt, u64 sizet, u64 align)
# ifdef CONFIG_X86_PAE
#  define MAX_ARCH_PFN		(1ULL<<(36-PAGE_SHIFT))
# else
#  define MAX_ARCH_PFN		(1ULL<<(32-PAGE_SHIFT))
# endif
# define MAX_ARCH_PFN MAXMEM>>PAGE_SHIFT
static unsigned long __init e820_end_pfn(unsigned long limit_pfn, unsigned type)
unsigned long __init e820_end_of_ram_pfn(void)
unsigned long __init e820_end_of_low_ram_pfn(void)
static void early_panic(char *msg)
static int userdef __initdata;
static int __init parse_memopt(char *p)
early_param("mem", parse_memopt);
static int __init parse_memmap_opt(char *p)
early_param("memmap", parse_memmap_opt);
void __init finish_e820_parsing(void)
static inline const char *e820_type_to_string(int e820_type)
static struct resource __initdata *e820_res;
void __init e820_reserve_resources(void)
static unsigned long ram_alignment(resource_size_t pos)
#define MAX_RESOURCE_SIZE ((resource_size_t)-1)
void __init e820_reserve_resources_late(void)
char *__init default_machine_specific_memory_setup(void)
void __init setup_memory_map(void)
void __init memblock_x86_fill(void)
void __init memblock_find_dma_reserve(void)
