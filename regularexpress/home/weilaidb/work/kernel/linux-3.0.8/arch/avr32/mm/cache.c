#define CACHEFLUSH_MAX_LEN	1024
void invalidate_dcache_region(void *start, size_t size)
void clean_dcache_region(void *start, size_t size)
void flush_dcache_region(void *start, size_t size)
void invalidate_icache_region(void *start, size_t size)
static inline void __flush_icache_range(unsigned long start, unsigned long end)
void flush_icache_range(unsigned long start, unsigned long end)
void flush_icache_page(struct vm_area_struct *vma, struct page *page)
asmlinkage int sys_cacheflush(int operation, void __user *addr, size_t len)
void copy_to_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long vaddr, void *dst, const void *src,
unsigned long len)
