#define VM_UNICORE_SECTION_MAPPING	0x80000000
int ioremap_page(unsigned long virt, unsigned long phys,
const struct mem_type *mtype)
EXPORT_SYMBOL(ioremap_page);
static void unmap_area_sections(unsigned long virt, unsigned long size)
static int
remap_area_sections(unsigned long virt, unsigned long pfn,
size_t size, const struct mem_type *type)
void __iomem *__uc32_ioremap_pfn_caller(unsigned long pfn,
unsigned long offset, size_t size, unsigned int mtype, void *caller)
void __iomem *__uc32_ioremap_caller(unsigned long phys_addr, size_t size,
unsigned int mtype, void *caller)
void __iomem *
__uc32_ioremap_pfn(unsigned long pfn, unsigned long offset, size_t size,
unsigned int mtype)
EXPORT_SYMBOL(__uc32_ioremap_pfn);
void __iomem *
__uc32_ioremap(unsigned long phys_addr, size_t size)
EXPORT_SYMBOL(__uc32_ioremap);
void __iomem *
__uc32_ioremap_cached(unsigned long phys_addr, size_t size)
EXPORT_SYMBOL(__uc32_ioremap_cached);
void __uc32_iounmap(volatile void __iomem *io_addr)
EXPORT_SYMBOL(__uc32_iounmap);
