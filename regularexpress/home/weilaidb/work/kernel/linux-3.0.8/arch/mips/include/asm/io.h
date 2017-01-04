#define _ASM_IO_H
#undef CONF_SLOWDOWN_IO
# define __raw_ioswabb(a, x)	(x)
# define __raw_ioswabw(a, x)	(x)
# define __raw_ioswabl(a, x)	(x)
# define __raw_ioswabq(a, x)	(x)
# define ____raw_ioswabq(a, x)	(x)
#define IO_SPACE_LIMIT 0xffff
extern const unsigned long mips_io_port_base;
static inline void set_io_port_base(unsigned long base)
#define __SLOW_DOWN_IO \
__asm__ __volatile__( \
"sb\t$0,0x80(%0)" \
: : "r" (mips_io_port_base));
#define SLOW_DOWN_IO
#define SLOW_DOWN_IO __SLOW_DOWN_IO
#define SLOW_DOWN_IO
static inline unsigned long virt_to_phys(volatile const void *address)
static inline void * phys_to_virt(unsigned long address)
static inline unsigned long isa_virt_to_bus(volatile void * address)
static inline void * isa_bus_to_virt(unsigned long address)
#define isa_page_to_bus page_to_phys
#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
#define page_to_phys(page)	((dma_addr_t)page_to_pfn(page) << PAGE_SHIFT)
extern void __iomem * __ioremap(phys_t offset, phys_t size, unsigned long flags);
extern void __iounmap(const volatile void __iomem *addr);
static inline void __iomem * __ioremap_mode(phys_t offset, unsigned long size,
unsigned long flags)
#define ioremap(offset, size)						\
__ioremap_mode((offset), (size), _CACHE_UNCACHED)
#define ioremap_nocache(offset, size)					\
__ioremap_mode((offset), (size), _CACHE_UNCACHED)
#define ioremap_cachable(offset, size)					\
__ioremap_mode((offset), (size), _page_cachable_default)
#define ioremap_cacheable_cow(offset, size)				\
__ioremap_mode((offset), (size), _CACHE_CACHABLE_COW)
#define ioremap_uncached_accelerated(offset, size)			\
__ioremap_mode((offset), (size), _CACHE_UNCACHED_ACCELERATED)
static inline void iounmap(const volatile void __iomem *addr)
#define war_octeon_io_reorder_wmb()  		wmb()
#define war_octeon_io_reorder_wmb()		do  while (0)
#define __BUILD_MEMORY_SINGLE(pfx, bwlq, type, irq)			\
\
static inline void pfx##write##bwlq(type val,				\
volatile void __iomem *mem)		\
\
\
static inline type pfx##read##bwlq(const volatile void __iomem *mem)	\
#define __BUILD_IOPORT_SINGLE(pfx, bwlq, type, p, slow)			\
\
static inline void pfx##out##bwlq##p(type val, unsigned long port)	\
\
\
static inline type pfx##in##bwlq##p(unsigned long port)			\
#define __BUILD_MEMORY_PFX(bus, bwlq, type)				\
\
__BUILD_MEMORY_SINGLE(bus, bwlq, type, 1)
#define BUILDIO_MEM(bwlq, type)						\
\
__BUILD_MEMORY_PFX(__raw_, bwlq, type)					\
__BUILD_MEMORY_PFX(, bwlq, type)					\
__BUILD_MEMORY_PFX(__mem_, bwlq, type)					\
BUILDIO_MEM(b, u8)
BUILDIO_MEM(w, u16)
BUILDIO_MEM(l, u32)
BUILDIO_MEM(q, u64)
#define __BUILD_IOPORT_PFX(bus, bwlq, type)				\
__BUILD_IOPORT_SINGLE(bus, bwlq, type, ,)			\
__BUILD_IOPORT_SINGLE(bus, bwlq, type, _p, SLOW_DOWN_IO)
#define BUILDIO_IOPORT(bwlq, type)					\
__BUILD_IOPORT_PFX(, bwlq, type)				\
__BUILD_IOPORT_PFX(__mem_, bwlq, type)
BUILDIO_IOPORT(b, u8)
BUILDIO_IOPORT(w, u16)
BUILDIO_IOPORT(l, u32)
BUILDIO_IOPORT(q, u64)
#define __BUILDIO(bwlq, type)						\
\
__BUILD_MEMORY_SINGLE(____raw_, bwlq, type, 0)
__BUILDIO(q, u64)
#define readb_relaxed			readb
#define readw_relaxed			readw
#define readl_relaxed			readl
#define readq_relaxed			readq
#define readb_be(addr)							\
__raw_readb((__force unsigned *)(addr))
#define readw_be(addr)							\
be16_to_cpu(__raw_readw((__force unsigned *)(addr)))
#define readl_be(addr)							\
be32_to_cpu(__raw_readl((__force unsigned *)(addr)))
#define readq_be(addr)							\
be64_to_cpu(__raw_readq((__force unsigned *)(addr)))
#define writeb_be(val, addr)						\
__raw_writeb((val), (__force unsigned *)(addr))
#define writew_be(val, addr)						\
__raw_writew(cpu_to_be16((val)), (__force unsigned *)(addr))
#define writel_be(val, addr)						\
__raw_writel(cpu_to_be32((val)), (__force unsigned *)(addr))
#define writeq_be(val, addr)						\
__raw_writeq(cpu_to_be64((val)), (__force unsigned *)(addr))
#define readq				readq
#define writeq				writeq
#define __BUILD_MEMORY_STRING(bwlq, type)				\
\
static inline void writes##bwlq(volatile void __iomem *mem,		\
const void *addr, unsigned int count)	\
\
\
static inline void reads##bwlq(volatile void __iomem *mem, void *addr,	\
unsigned int count)			\
#define __BUILD_IOPORT_STRING(bwlq, type)				\
\
static inline void outs##bwlq(unsigned long port, const void *addr,	\
unsigned int count)			\
\
\
static inline void ins##bwlq(unsigned long port, void *addr,		\
unsigned int count)			\
#define BUILDSTRING(bwlq, type)						\
\
__BUILD_MEMORY_STRING(bwlq, type)					\
__BUILD_IOPORT_STRING(bwlq, type)
BUILDSTRING(b, u8)
BUILDSTRING(w, u16)
BUILDSTRING(l, u32)
BUILDSTRING(q, u64)
#define mmiowb() wmb()
#define mmiowb() asm volatile ("sync" ::: "memory")
static inline void memset_io(volatile void __iomem *addr, unsigned char val, int count)
static inline void memcpy_fromio(void *dst, const volatile void __iomem *src, int count)
static inline void memcpy_toio(volatile void __iomem *dst, const void *src, int count)
extern void (*_dma_cache_wback_inv)(unsigned long start, unsigned long size);
extern void (*_dma_cache_wback)(unsigned long start, unsigned long size);
extern void (*_dma_cache_inv)(unsigned long start, unsigned long size);
#define dma_cache_wback_inv(start, size)	_dma_cache_wback_inv(start, size)
#define dma_cache_wback(start, size)		_dma_cache_wback(start, size)
#define dma_cache_inv(start, size)		_dma_cache_inv(start, size)
#define dma_cache_wback_inv(start,size)	\
do  while (0)
#define dma_cache_wback(start,size)	\
do  while (0)
#define dma_cache_inv(start,size)	\
do  while (0)
#define __CSR_32_ADJUST 4
#define __CSR_32_ADJUST 0
#define csr_out32(v, a) (*(volatile u32 *)((unsigned long)(a) + __CSR_32_ADJUST) = (v))
#define csr_in32(a)    (*(volatile u32 *)((unsigned long)(a) + __CSR_32_ADJUST))
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
