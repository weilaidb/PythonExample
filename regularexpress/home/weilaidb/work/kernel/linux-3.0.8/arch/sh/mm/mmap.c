unsigned long shm_align_mask = PAGE_SIZE - 1;
EXPORT_SYMBOL(shm_align_mask);
static inline unsigned long COLOUR_ALIGN(unsigned long addr,
unsigned long pgoff)
static inline unsigned long COLOUR_ALIGN_DOWN(unsigned long addr,
unsigned long pgoff)
unsigned long arch_get_unmapped_area(struct file *filp, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
unsigned long
arch_get_unmapped_area_topdown(struct file *filp, const unsigned long addr0,
const unsigned long len, const unsigned long pgoff,
const unsigned long flags)
int valid_phys_addr_range(unsigned long addr, size_t count)
int valid_mmap_phys_addr_range(unsigned long pfn, size_t size)
