static unsigned long icache_size, dcache_size;
static unsigned long icache_lsize, dcache_lsize;
unsigned long __cpuinit r3k_cache_size(unsigned long ca_flags)
unsigned long __cpuinit r3k_cache_lsize(unsigned long ca_flags)
static void __cpuinit r3k_probe_cache(void)
static void r3k_flush_icache_range(unsigned long start, unsigned long end)
static void r3k_flush_dcache_range(unsigned long start, unsigned long end)
static inline void r3k_flush_cache_all(void)
static inline void r3k___flush_cache_all(void)
static void r3k_flush_cache_mm(struct mm_struct *mm)
static void r3k_flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static void r3k_flush_cache_page(struct vm_area_struct *vma,
unsigned long addr, unsigned long pfn)
static void local_r3k_flush_data_cache_page(void *addr)
static void r3k_flush_data_cache_page(unsigned long addr)
static void r3k_flush_cache_sigtramp(unsigned long addr)
static void r3k_dma_cache_wback_inv(unsigned long start, unsigned long size)
void __cpuinit r3k_cache_init(void)
