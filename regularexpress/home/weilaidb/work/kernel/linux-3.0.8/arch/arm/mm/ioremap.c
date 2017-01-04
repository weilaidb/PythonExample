#define VM_ARM_SECTION_MAPPING	0x80000000
int ioremap_page(unsigned long virt, unsigned long phys,
const struct mem_type *mtype)
EXPORT_SYMBOL(ioremap_page);
void __check_kvm_seq(struct mm_struct *mm)
static void unmap_area_sections(unsigned long virt, unsigned long size)
static int
remap_area_sections(unsigned long virt, unsigned long pfn,
size_t size, const struct mem_type *type)
static int
remap_area_supersections(unsigned long virt, unsigned long pfn,
size_t size, const struct mem_type *type)
void __iomem * __arm_ioremap_pfn_caller(unsigned long pfn,
unsigned long offset, size_t size, unsigned int mtype, void *caller)
void __iomem *__arm_ioremap_caller(unsigned long phys_addr, size_t size,
unsigned int mtype, void *caller)
void __iomem *
__arm_ioremap_pfn(unsigned long pfn, unsigned long offset, size_t size,
unsigned int mtype)
EXPORT_SYMBOL(__arm_ioremap_pfn);
void __iomem *
__arm_ioremap(unsigned long phys_addr, size_t size, unsigned int mtype)
EXPORT_SYMBOL(__arm_ioremap);
void __iounmap(volatile void __iomem *io_addr)
EXPORT_SYMBOL(__iounmap);
