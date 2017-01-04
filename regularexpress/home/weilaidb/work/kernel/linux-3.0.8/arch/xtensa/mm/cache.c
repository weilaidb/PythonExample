#define printd(x...) do  while(0)
#if (DCACHE_WAY_SIZE > PAGE_SIZE) && XCHAL_DCACHE_IS_WRITEBACK
void flush_dcache_page(struct page *page)
void flush_cache_range(struct vm_area_struct* vma,
unsigned long start, unsigned long end)
void flush_cache_page(struct vm_area_struct* vma, unsigned long address,
unsigned long pfn)
void
update_mmu_cache(struct vm_area_struct * vma, unsigned long addr, pte_t *ptep)
#if (DCACHE_WAY_SIZE > PAGE_SIZE) && XCHAL_DCACHE_IS_WRITEBACK
void copy_to_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long vaddr, void *dst, const void *src,
unsigned long len)
extern void copy_from_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long vaddr, void *dst, const void *src,
unsigned long len)
