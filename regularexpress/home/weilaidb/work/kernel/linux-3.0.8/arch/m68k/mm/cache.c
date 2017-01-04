static unsigned long virt_to_phys_slow(unsigned long vaddr)
void flush_icache_range(unsigned long address, unsigned long endaddr)
EXPORT_SYMBOL(flush_icache_range);
void flush_icache_user_range(struct vm_area_struct *vma, struct page *page,
unsigned long addr, int len)
