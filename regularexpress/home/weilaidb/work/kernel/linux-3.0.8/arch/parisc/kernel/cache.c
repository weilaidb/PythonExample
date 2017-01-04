int split_tlb __read_mostly;
int dcache_stride __read_mostly;
int icache_stride __read_mostly;
EXPORT_SYMBOL(dcache_stride);
void flush_dcache_page_asm(unsigned long phys_addr, unsigned long vaddr);
EXPORT_SYMBOL(flush_dcache_page_asm);
void flush_icache_page_asm(unsigned long phys_addr, unsigned long vaddr);
DEFINE_SPINLOCK(pa_tlb_lock);
struct pdc_cache_info cache_info __read_mostly;
static struct pdc_btlb_info btlb_info __read_mostly;
void
flush_data_cache(void)
void
flush_instruction_cache(void)
void
flush_cache_all_local(void)
EXPORT_SYMBOL(flush_cache_all_local);
void
update_mmu_cache(struct vm_area_struct *vma, unsigned long address, pte_t *ptep)
void
show_cache_info(struct seq_file *m)
void __init
parisc_cache_init(void)
void disable_sr_hashing(void)
static inline void
__flush_cache_page(struct vm_area_struct *vma, unsigned long vmaddr,
unsigned long physaddr)
void flush_dcache_page(struct page *page)
EXPORT_SYMBOL(flush_dcache_page);
EXPORT_SYMBOL(flush_kernel_dcache_range_asm);
EXPORT_SYMBOL(flush_kernel_dcache_page_asm);
EXPORT_SYMBOL(flush_data_cache_local);
EXPORT_SYMBOL(flush_kernel_icache_range_asm);
void clear_user_page_asm(void *page, unsigned long vaddr)
#define FLUSH_THRESHOLD 0x80000
int parisc_cache_flush_threshold __read_mostly = FLUSH_THRESHOLD;
void __init parisc_setup_cache_timing(void)
extern void purge_kernel_dcache_page(unsigned long);
extern void clear_user_page_asm(void *page, unsigned long vaddr);
void clear_user_page(void *page, unsigned long vaddr, struct page *pg)
EXPORT_SYMBOL(clear_user_page);
void flush_kernel_dcache_page_addr(void *addr)
EXPORT_SYMBOL(flush_kernel_dcache_page_addr);
void copy_user_page(void *vto, void *vfrom, unsigned long vaddr,
struct page *pg)
EXPORT_SYMBOL(copy_user_page);
void kunmap_parisc(void *addr)
EXPORT_SYMBOL(kunmap_parisc);
void __flush_tlb_range(unsigned long sid, unsigned long start,
unsigned long end)
static void cacheflush_h_tmp_function(void *dummy)
void flush_cache_all(void)
void flush_cache_mm(struct mm_struct *mm)
void
flush_user_dcache_range(unsigned long start, unsigned long end)
void
flush_user_icache_range(unsigned long start, unsigned long end)
void flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
void
flush_cache_page(struct vm_area_struct *vma, unsigned long vmaddr, unsigned long pfn)
