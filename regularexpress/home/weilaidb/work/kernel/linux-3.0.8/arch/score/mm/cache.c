static void flush_data_cache_page(unsigned long addr)
void flush_dcache_page(struct page *page)
void __update_cache(struct vm_area_struct *vma, unsigned long address,
pte_t pte)
static inline void setup_protection_map(void)
void __devinit cpu_cache_init(void)
void flush_icache_all(void)
void flush_dcache_all(void)
void flush_cache_all(void)
void flush_cache_mm(struct mm_struct *mm)
void flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
void flush_cache_page(struct vm_area_struct *vma,
unsigned long addr, unsigned long pfn)
void flush_cache_sigtramp(unsigned long addr)
void flush_dcache_range(unsigned long start, unsigned long end)
void flush_icache_range(unsigned long start, unsigned long end)
