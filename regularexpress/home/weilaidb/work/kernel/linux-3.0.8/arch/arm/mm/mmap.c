#define COLOUR_ALIGN(addr,pgoff)		\
((((addr)+SHMLBA-1)&~(SHMLBA-1)) +	\
(((pgoff)<<PAGE_SHIFT) & (SHMLBA-1)))
unsigned long
arch_get_unmapped_area(struct file *filp, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
int valid_phys_addr_range(unsigned long addr, size_t size)
int valid_mmap_phys_addr_range(unsigned long pfn, size_t size)
int devmem_is_allowed(unsigned long pfn)
