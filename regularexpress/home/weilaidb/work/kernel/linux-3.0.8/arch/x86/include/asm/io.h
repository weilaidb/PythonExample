#define _ASM_X86_IO_H
#define ARCH_HAS_IOREMAP_WC
#define build_mmio_read(name, size, type, reg, barrier) \
static inline type name(const volatile void __iomem *addr) \
#define build_mmio_write(name, size, type, reg, barrier) \
static inline void name(type val, volatile void __iomem *addr) \
build_mmio_read(readb, "b", unsigned char, "=q", :"memory")
build_mmio_read(readw, "w", unsigned short, "=r", :"memory")
build_mmio_read(readl, "l", unsigned int, "=r", :"memory")
build_mmio_read(__readb, "b", unsigned char, "=q", )
build_mmio_read(__readw, "w", unsigned short, "=r", )
build_mmio_read(__readl, "l", unsigned int, "=r", )
build_mmio_write(writeb, "b", unsigned char, "q", :"memory")
build_mmio_write(writew, "w", unsigned short, "r", :"memory")
build_mmio_write(writel, "l", unsigned int, "r", :"memory")
build_mmio_write(__writeb, "b", unsigned char, "q", )
build_mmio_write(__writew, "w", unsigned short, "r", )
build_mmio_write(__writel, "l", unsigned int, "r", )
#define readb_relaxed(a) __readb(a)
#define readw_relaxed(a) __readw(a)
#define readl_relaxed(a) __readl(a)
#define __raw_readb __readb
#define __raw_readw __readw
#define __raw_readl __readl
#define __raw_writeb __writeb
#define __raw_writew __writew
#define __raw_writel __writel
#define mmiowb() barrier()
build_mmio_read(readq, "q", unsigned long, "=r", :"memory")
build_mmio_write(writeq, "q", unsigned long, "r", :"memory")
#define readq_relaxed(a)	readq(a)
#define __raw_readq(a)		readq(a)
#define __raw_writeq(val, addr)	writeq(val, addr)
#define readq			readq
#define writeq			writeq
static inline phys_addr_t virt_to_phys(volatile void *address)
static inline void *phys_to_virt(phys_addr_t address)
#define page_to_phys(page)    ((dma_addr_t)page_to_pfn(page) << PAGE_SHIFT)
static inline unsigned int isa_virt_to_bus(volatile void *address)
#define isa_page_to_bus(page)	((unsigned int)page_to_phys(page))
#define isa_bus_to_virt		phys_to_virt
#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
extern void __iomem *ioremap_nocache(resource_size_t offset, unsigned long size);
extern void __iomem *ioremap_cache(resource_size_t offset, unsigned long size);
extern void __iomem *ioremap_prot(resource_size_t offset, unsigned long size,
unsigned long prot_val);
static inline void __iomem *ioremap(resource_size_t offset, unsigned long size)
extern void iounmap(volatile void __iomem *addr);
extern void set_iounmap_nonlazy(void);
#define xlate_dev_kmem_ptr(p)	p
static inline void
memset_io(volatile void __iomem *addr, unsigned char val, size_t count)
static inline void
memcpy_fromio(void *dst, const volatile void __iomem *src, size_t count)
static inline void
memcpy_toio(volatile void __iomem *dst, const void *src, size_t count)
#define __ISA_IO_base ((char __iomem *)(PAGE_OFFSET))
static inline void flush_write_buffers(void)
extern void native_io_delay(void);
extern int io_delay_type;
extern void io_delay_init(void);
#if defined(CONFIG_PARAVIRT)
static inline void slow_down_io(void)
#define BUILDIO(bwl, bw, type)						\
static inline void out##bwl(unsigned type value, int port)		\
\
\
static inline unsigned type in##bwl(int port)				\
\
\
static inline void out##bwl##_p(unsigned type value, int port)		\
\
\
static inline unsigned type in##bwl##_p(int port)			\
\
\
static inline void outs##bwl(int port, const void *addr, unsigned long count) \
\
\
static inline void ins##bwl(int port, void *addr, unsigned long count)	\
BUILDIO(b, b, char)
BUILDIO(w, w, short)
BUILDIO(l, , int)
extern void *xlate_dev_mem_ptr(unsigned long phys);
extern void unxlate_dev_mem_ptr(unsigned long phys, void *addr);
extern int ioremap_change_attr(unsigned long vaddr, unsigned long size,
unsigned long prot_val);
extern void __iomem *ioremap_wc(resource_size_t offset, unsigned long size);
extern void early_ioremap_init(void);
extern void early_ioremap_reset(void);
extern void __iomem *early_ioremap(resource_size_t phys_addr,
unsigned long size);
extern void __iomem *early_memremap(resource_size_t phys_addr,
unsigned long size);
extern void early_iounmap(void __iomem *addr, unsigned long size);
extern void fixup_early_ioremap(void);
extern bool is_early_ioremap_ptep(pte_t *ptep);
struct bio_vec;
extern bool xen_biovec_phys_mergeable(const struct bio_vec *vec1,
const struct bio_vec *vec2);
#define BIOVEC_PHYS_MERGEABLE(vec1, vec2)				\
(__BIOVEC_PHYS_MERGEABLE(vec1, vec2) &&				\
(!xen_domain() || xen_biovec_phys_mergeable(vec1, vec2)))
#define IO_SPACE_LIMIT 0xffff
