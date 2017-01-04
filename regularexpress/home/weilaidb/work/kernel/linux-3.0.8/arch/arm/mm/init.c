static unsigned long phys_initrd_start __initdata = 0;
static unsigned long phys_initrd_size __initdata = 0;
static int __init early_initrd(char *p)
early_param("initrd", early_initrd);
static int __init parse_tag_initrd(const struct tag *tag)
__tagtable(ATAG_INITRD, parse_tag_initrd);
static int __init parse_tag_initrd2(const struct tag *tag)
__tagtable(ATAG_INITRD2, parse_tag_initrd2);
void __init early_init_dt_setup_initrd_arch(unsigned long start, unsigned long end)
struct meminfo meminfo;
void show_mem(unsigned int filter)
static void __init find_limits(unsigned long *min, unsigned long *max_low,
unsigned long *max_high)
static void __init arm_bootmem_init(unsigned long start_pfn,
unsigned long end_pfn)
static void __init arm_adjust_dma_zone(unsigned long *size, unsigned long *hole,
unsigned long dma_size)
static void __init arm_bootmem_free(unsigned long min, unsigned long max_low,
unsigned long max_high)
int pfn_valid(unsigned long pfn)
EXPORT_SYMBOL(pfn_valid);
static void arm_memory_present(void)
static void arm_memory_present(void)
static int __init meminfo_cmp(const void *_a, const void *_b)
void __init arm_memblock_init(struct meminfo *mi, struct machine_desc *mdesc)
void __init bootmem_init(void)
static inline int free_area(unsigned long pfn, unsigned long end, char *s)
static inline void
free_memmap(unsigned long start_pfn, unsigned long end_pfn)
static void __init free_unused_memmap(struct meminfo *mi)
static void __init free_highpages(void)
void __init mem_init(void)
void free_initmem(void)
static int keep_initrd;
void free_initrd_mem(unsigned long start, unsigned long end)
static int __init keepinitrd_setup(char *__unused)
__setup("keepinitrd", keepinitrd_setup);
