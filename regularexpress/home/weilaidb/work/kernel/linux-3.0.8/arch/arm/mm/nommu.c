void __init arm_mm_memblock_reserve(void)
void __init sanity_check_meminfo(void)
void __init paging_init(struct machine_desc *mdesc)
void setup_mm_for_reboot(char mode)
void flush_dcache_page(struct page *page)
EXPORT_SYMBOL(flush_dcache_page);
void copy_to_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long uaddr, void *dst, const void *src,
unsigned long len)
void __iomem *__arm_ioremap_pfn(unsigned long pfn, unsigned long offset,
size_t size, unsigned int mtype)
EXPORT_SYMBOL(__arm_ioremap_pfn);
void __iomem *__arm_ioremap_pfn_caller(unsigned long pfn, unsigned long offset,
size_t size, unsigned int mtype, void *caller)
void __iomem *__arm_ioremap(unsigned long phys_addr, size_t size,
unsigned int mtype)
EXPORT_SYMBOL(__arm_ioremap);
void __iomem *__arm_ioremap_caller(unsigned long phys_addr, size_t size,
unsigned int mtype, void *caller)
void __iounmap(volatile void __iomem *addr)
EXPORT_SYMBOL(__iounmap);
