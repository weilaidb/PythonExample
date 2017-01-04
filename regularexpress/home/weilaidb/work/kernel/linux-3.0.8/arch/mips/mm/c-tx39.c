static unsigned long icache_size, dcache_size;
extern int r3k_have_wired_reg;
#define TX39_STOP_STREAMING() \
__asm__ __volatile__( \
".set    push\n\t" \
".set    noreorder\n\t" \
"b       1f\n\t" \
"nop\n\t" \
"1:\n\t" \
".set pop" \
)
static void tx39h_flush_icache_all(void)
static void tx39h_dma_cache_wback_inv(unsigned long addr, unsigned long size)
static inline void tx39_blast_dcache_page(unsigned long addr)
static inline void tx39_blast_dcache_page_indexed(unsigned long addr)
static inline void tx39_blast_dcache(void)
static inline void tx39_blast_icache_page(unsigned long addr)
static inline void tx39_blast_icache_page_indexed(unsigned long addr)
static inline void tx39_blast_icache(void)
static void tx39__flush_cache_vmap(void)
static void tx39__flush_cache_vunmap(void)
static inline void tx39_flush_cache_all(void)
static inline void tx39___flush_cache_all(void)
static void tx39_flush_cache_mm(struct mm_struct *mm)
static void tx39_flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static void tx39_flush_cache_page(struct vm_area_struct *vma, unsigned long page, unsigned long pfn)
static void local_tx39_flush_data_cache_page(void * addr)
static void tx39_flush_data_cache_page(unsigned long addr)
static void tx39_flush_icache_range(unsigned long start, unsigned long end)
static void tx39_dma_cache_wback_inv(unsigned long addr, unsigned long size)
static void tx39_dma_cache_inv(unsigned long addr, unsigned long size)
static void tx39_flush_cache_sigtramp(unsigned long addr)
static __init void tx39_probe_cache(void)
void __cpuinit tx39_cache_init(void)
