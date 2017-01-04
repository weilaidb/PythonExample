#define __ASM_SH_IO_H
#define __IO_PREFIX     generic
#define __raw_writeb(v,a)	(__chk_io_ptr(a), *(volatile u8  __force *)(a) = (v))
#define __raw_writew(v,a)	(__chk_io_ptr(a), *(volatile u16 __force *)(a) = (v))
#define __raw_writel(v,a)	(__chk_io_ptr(a), *(volatile u32 __force *)(a) = (v))
#define __raw_writeq(v,a)	(__chk_io_ptr(a), *(volatile u64 __force *)(a) = (v))
#define __raw_readb(a)		(__chk_io_ptr(a), *(volatile u8  __force *)(a))
#define __raw_readw(a)		(__chk_io_ptr(a), *(volatile u16 __force *)(a))
#define __raw_readl(a)		(__chk_io_ptr(a), *(volatile u32 __force *)(a))
#define __raw_readq(a)		(__chk_io_ptr(a), *(volatile u64 __force *)(a))
#define readb_relaxed(c)	()
#define readw_relaxed(c)	()
#define readl_relaxed(c)	()
#define readq_relaxed(c)	()
#define writeb_relaxed(v,c)	((void)__raw_writeb(v,c))
#define writew_relaxed(v,c)	((void)__raw_writew((__force u16) \
cpu_to_le16(v),c))
#define writel_relaxed(v,c)	((void)__raw_writel((__force u32) \
cpu_to_le32(v),c))
#define writeq_relaxed(v,c)	((void)__raw_writeq((__force u64) \
cpu_to_le64(v),c))
#define readb(a)		()
#define readw(a)		()
#define readl(a)		()
#define readq(a)		()
#define writeb(v,a)		()
#define writew(v,a)		()
#define writel(v,a)		()
#define writeq(v,a)		()
#define readsb(p,d,l)		__raw_readsb(p,d,l)
#define readsw(p,d,l)		__raw_readsw(p,d,l)
#define readsl(p,d,l)		__raw_readsl(p,d,l)
#define writesb(p,d,l)		__raw_writesb(p,d,l)
#define writesw(p,d,l)		__raw_writesw(p,d,l)
#define writesl(p,d,l)		__raw_writesl(p,d,l)
#define __BUILD_UNCACHED_IO(bwlq, type)					\
static inline type read##bwlq##_uncached(unsigned long addr)		\
\
\
static inline void write##bwlq##_uncached(type v, unsigned long addr)	\
__BUILD_UNCACHED_IO(b, u8)
__BUILD_UNCACHED_IO(w, u16)
__BUILD_UNCACHED_IO(l, u32)
__BUILD_UNCACHED_IO(q, u64)
#define __BUILD_MEMORY_STRING(pfx, bwlq, type)				\
\
static inline void							\
pfx##writes##bwlq(volatile void __iomem *mem, const void *addr,		\
unsigned int count)					\
\
\
static inline void pfx##reads##bwlq(volatile void __iomem *mem,		\
void *addr, unsigned int count)	\
__BUILD_MEMORY_STRING(__raw_, b, u8)
__BUILD_MEMORY_STRING(__raw_, w, u16)
void __raw_writesl(void __iomem *addr, const void *data, int longlen);
void __raw_readsl(const void __iomem *addr, void *data, int longlen);
__BUILD_MEMORY_STRING(__raw_, l, u32)
__BUILD_MEMORY_STRING(__raw_, q, u64)
#undef CONF_SLOWDOWN_IO
extern const unsigned long sh_io_port_base;
static inline void __set_io_port_base(unsigned long pbase)
#define __ioport_map ioport_map
extern void __iomem *__ioport_map(unsigned long addr, unsigned int size);
#define SLOW_DOWN_IO __raw_readw(sh_io_port_base)
#define SLOW_DOWN_IO
#define __BUILD_IOPORT_SINGLE(pfx, bwlq, type, p, slow)			\
\
static inline void pfx##out##bwlq##p(type val, unsigned long port)	\
\
\
static inline type pfx##in##bwlq##p(unsigned long port)			\
#define __BUILD_IOPORT_PFX(bus, bwlq, type)				\
__BUILD_IOPORT_SINGLE(bus, bwlq, type, ,)			\
__BUILD_IOPORT_SINGLE(bus, bwlq, type, _p, SLOW_DOWN_IO)
#define BUILDIO_IOPORT(bwlq, type)					\
__BUILD_IOPORT_PFX(, bwlq, type)
BUILDIO_IOPORT(b, u8)
BUILDIO_IOPORT(w, u16)
BUILDIO_IOPORT(l, u32)
BUILDIO_IOPORT(q, u64)
#define __BUILD_IOPORT_STRING(bwlq, type)				\
\
static inline void outs##bwlq(unsigned long port, const void *addr,	\
unsigned int count)			\
\
\
static inline void ins##bwlq(unsigned long port, void *addr,		\
unsigned int count)			\
__BUILD_IOPORT_STRING(b, u8)
__BUILD_IOPORT_STRING(w, u16)
__BUILD_IOPORT_STRING(l, u32)
__BUILD_IOPORT_STRING(q, u64)
#define IO_SPACE_LIMIT 0xffffffff
#define mmiowb()		wmb()
void memcpy_fromio(void *, const volatile void __iomem *, unsigned long);
void memcpy_toio(volatile void __iomem *, const void *, unsigned long);
void memset_io(volatile void __iomem *, int, unsigned long);
unsigned long long peek_real_address_q(unsigned long long addr);
unsigned long long poke_real_address_q(unsigned long long addr,
unsigned long long val);
#if !defined(CONFIG_MMU)
#define virt_to_phys(address)	((unsigned long)(address))
#define phys_to_virt(address)	((void *)(address))
#define virt_to_phys(address)	(__pa(address))
#define phys_to_virt(address)	(__va(address))
void __iomem *__ioremap_caller(phys_addr_t offset, unsigned long size,
pgprot_t prot, void *caller);
void __iounmap(void __iomem *addr);
static inline void __iomem *
__ioremap(phys_addr_t offset, unsigned long size, pgprot_t prot)
static inline void __iomem *
__ioremap_29bit(phys_addr_t offset, unsigned long size, pgprot_t prot)
static inline void __iomem *
__ioremap_mode(phys_addr_t offset, unsigned long size, pgprot_t prot)
#define __ioremap(offset, size, prot)		((void __iomem *)(offset))
#define __ioremap_mode(offset, size, prot)	((void __iomem *)(offset))
#define __iounmap(addr)				do  while (0)
static inline void __iomem *ioremap(phys_addr_t offset, unsigned long size)
static inline void __iomem *
ioremap_cache(phys_addr_t offset, unsigned long size)
static inline void __iomem *
ioremap_prot(phys_addr_t offset, unsigned long size, unsigned long flags)
extern void __iomem *ioremap_fixed(phys_addr_t, unsigned long, pgprot_t);
extern int iounmap_fixed(void __iomem *);
extern void ioremap_fixed_init(void);
static inline void __iomem *
ioremap_fixed(phys_addr_t phys_addr, unsigned long size, pgprot_t prot)
static inline void ioremap_fixed_init(void)
static inline int iounmap_fixed(void __iomem *addr)
#define ioremap_nocache	ioremap
#define iounmap		__iounmap
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
#define ARCH_HAS_VALID_PHYS_ADDR_RANGE
int valid_phys_addr_range(unsigned long addr, size_t size);
int valid_mmap_phys_addr_range(unsigned long pfn, size_t size);
