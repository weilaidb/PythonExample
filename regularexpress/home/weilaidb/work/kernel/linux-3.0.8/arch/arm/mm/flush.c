#define ALIAS_FLUSH_START	0xffff4000
static void flush_pfn_alias(unsigned long pfn, unsigned long vaddr)
static void flush_icache_alias(unsigned long pfn, unsigned long vaddr, unsigned long len)
void flush_cache_mm(struct mm_struct *mm)
void flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
void flush_cache_page(struct vm_area_struct *vma, unsigned long user_addr, unsigned long pfn)
#define flush_pfn_alias(pfn,vaddr)		do  while (0)
#define flush_icache_alias(pfn,vaddr,len)	do  while (0)
static void flush_ptrace_access_other(void *args)
static
void flush_ptrace_access(struct vm_area_struct *vma, struct page *page,
unsigned long uaddr, void *kaddr, unsigned long len)
void copy_to_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long uaddr, void *dst, const void *src,
unsigned long len)
void __flush_dcache_page(struct address_space *mapping, struct page *page)
static void __flush_dcache_aliases(struct address_space *mapping, struct page *page)
#if __LINUX_ARM_ARCH__ >= 6
void __sync_icache_dcache(pte_t pteval)
void flush_dcache_page(struct page *page)
EXPORT_SYMBOL(flush_dcache_page);
void __flush_anon_page(struct vm_area_struct *vma, struct page *page, unsigned long vmaddr)
