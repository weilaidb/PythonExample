static unsigned long phys_initrd_start __initdata = 0x01000000;
static unsigned long phys_initrd_size __initdata = SZ_8M;
static int __init early_initrd(char *p)
early_param("initrd", early_initrd);
struct meminfo meminfo;
void show_mem(unsigned int filter)
static void __init find_limits(unsigned long *min, unsigned long *max_low,
unsigned long *max_high)
static void __init uc32_bootmem_init(unsigned long start_pfn,
unsigned long end_pfn)
static void __init uc32_bootmem_free(unsigned long min, unsigned long max_low,
unsigned long max_high)
int pfn_valid(unsigned long pfn)
EXPORT_SYMBOL(pfn_valid);
static void uc32_memory_present(void)
static int __init meminfo_cmp(const void *_a, const void *_b)
void __init uc32_memblock_init(struct meminfo *mi)
void __init bootmem_init(void)
static inline int free_area(unsigned long pfn, unsigned long end, char *s)
static inline void
free_memmap(unsigned long start_pfn, unsigned long end_pfn)
static void __init free_unused_memmap(struct meminfo *mi)
void __init mem_init(void)
void free_initmem(void)
static int keep_initrd;
void free_initrd_mem(unsigned long start, unsigned long end)
static int __init keepinitrd_setup(char *__unused)
__setup("keepinitrd", keepinitrd_setup);
