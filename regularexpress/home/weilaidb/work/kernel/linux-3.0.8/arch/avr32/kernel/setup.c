extern int root_mountflags;
struct avr32_cpuinfo boot_cpu_data = ;
EXPORT_SYMBOL(boot_cpu_data);
static char __initdata command_line[COMMAND_LINE_SIZE];
static struct resource __initdata kernel_data = ;
static struct resource __initdata kernel_code = ;
static struct resource *__initdata system_ram;
static struct resource *__initdata reserved = &kernel_code;
static struct resource __initdata res_cache[32];
static unsigned int __initdata res_cache_next_free;
static void __init resource_init(void)
static void __init
add_physical_memory(resource_size_t start, resource_size_t end)
static int __init
add_reserved_region(resource_size_t start, resource_size_t end,
const char *name)
static unsigned long __init
find_free_region(const struct resource *mem, resource_size_t size,
resource_size_t align)
static int __init
alloc_reserved_region(resource_size_t *start, resource_size_t size,
resource_size_t align, const char *name)
resource_size_t __initdata fbmem_start;
resource_size_t __initdata fbmem_size;
static int __init early_parse_fbmem(char *p)
early_param("fbmem", early_parse_fbmem);
static int __init early_mem(char *p)
early_param("mem", early_mem);
static int __init parse_tag_core(struct tag *tag)
__tagtable(ATAG_CORE, parse_tag_core);
static int __init parse_tag_mem(struct tag *tag)
__tagtable(ATAG_MEM, parse_tag_mem);
static int __init parse_tag_rdimg(struct tag *tag)
__tagtable(ATAG_RDIMG, parse_tag_rdimg);
static int __init parse_tag_rsvd_mem(struct tag *tag)
__tagtable(ATAG_RSVD_MEM, parse_tag_rsvd_mem);
static int __init parse_tag_cmdline(struct tag *tag)
__tagtable(ATAG_CMDLINE, parse_tag_cmdline);
static int __init parse_tag_clock(struct tag *tag)
__tagtable(ATAG_CLOCK, parse_tag_clock);
u32 __initdata board_number;
static int __init parse_tag_boardinfo(struct tag *tag)
__tagtable(ATAG_BOARDINFO, parse_tag_boardinfo);
static int __init parse_tag(struct tag *tag)
static void __init parse_tags(struct tag *t)
static unsigned long __init
find_bootmap_pfn(const struct resource *mem)
#define MAX_LOWMEM	HIGHMEM_START
#define MAX_LOWMEM_PFN	PFN_DOWN(MAX_LOWMEM)
static void __init setup_bootmem(void)
void __init setup_arch (char **cmdline_p)
