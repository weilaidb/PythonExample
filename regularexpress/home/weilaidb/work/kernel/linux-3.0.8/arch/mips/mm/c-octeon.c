unsigned long long cache_err_dcache[NR_CPUS];
static void octeon_flush_data_cache_page(unsigned long addr)
static inline void octeon_local_flush_icache(void)
static void local_octeon_flush_icache_range(unsigned long start,
unsigned long end)
static void octeon_flush_icache_all_cores(struct vm_area_struct *vma)
static void octeon_flush_icache_all(void)
static void octeon_flush_cache_mm(struct mm_struct *mm)
static void octeon_flush_icache_range(unsigned long start, unsigned long end)
static void octeon_flush_cache_sigtramp(unsigned long addr)
static void octeon_flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static void octeon_flush_cache_page(struct vm_area_struct *vma,
unsigned long page, unsigned long pfn)
static void __cpuinit probe_octeon(void)
void __cpuinit octeon_cache_init(void)
static void  cache_parity_error_octeon(int non_recoverable)
asmlinkage void cache_parity_error_octeon_recoverable(void)
asmlinkage void cache_parity_error_octeon_non_recoverable(void)
