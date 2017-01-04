#define _ASM_IO_H
static inline unsigned short _swapw(unsigned short v)
static inline unsigned long _swapl(unsigned long v)
#define __raw_readb __builtin_read8
#define __raw_readw __builtin_read16
#define __raw_readl __builtin_read32
#define __raw_writeb(datum, addr) __builtin_write8(addr, datum)
#define __raw_writew(datum, addr) __builtin_write16(addr, datum)
#define __raw_writel(datum, addr) __builtin_write32(addr, datum)
static inline void io_outsb(unsigned int addr, const void *buf, int len)
static inline void io_outsw(unsigned int addr, const void *buf, int len)
extern void __outsl_ns(unsigned int addr, const void *buf, int len);
extern void __outsl_sw(unsigned int addr, const void *buf, int len);
static inline void __outsl(unsigned int addr, const void *buf, int len, int swap)
static inline void io_insb(unsigned long addr, void *buf, int len)
static inline void io_insw(unsigned long addr, void *buf, int len)
extern void __insl_ns(unsigned long addr, void *buf, int len);
extern void __insl_sw(unsigned long addr, void *buf, int len);
static inline void __insl(unsigned long addr, void *buf, int len, int swap)
#define mmiowb() mb()
static inline void memset_io(volatile void __iomem *addr, unsigned char val, int count)
static inline void memcpy_fromio(void *dst, const volatile void __iomem *src, int count)
static inline void memcpy_toio(volatile void __iomem *dst, const void *src, int count)
static inline uint8_t inb(unsigned long addr)
static inline uint16_t inw(unsigned long addr)
static inline uint32_t inl(unsigned long addr)
static inline void outb(uint8_t datum, unsigned long addr)
static inline void outw(uint16_t datum, unsigned long addr)
static inline void outl(uint32_t datum, unsigned long addr)
#define inb_p(addr)	inb(addr)
#define inw_p(addr)	inw(addr)
#define inl_p(addr)	inl(addr)
#define outb_p(x,addr)	outb(x,addr)
#define outw_p(x,addr)	outw(x,addr)
#define outl_p(x,addr)	outl(x,addr)
#define outsb(a,b,l)	io_outsb(a,b,l)
#define outsw(a,b,l)	io_outsw(a,b,l)
#define outsl(a,b,l)	__outsl(a,b,l,0)
#define insb(a,b,l)	io_insb(a,b,l)
#define insw(a,b,l)	io_insw(a,b,l)
#define insl(a,b,l)	__insl(a,b,l,0)
#define IO_SPACE_LIMIT	0xffffffff
static inline uint8_t readb(const volatile void __iomem *addr)
static inline uint16_t readw(const volatile void __iomem *addr)
static inline uint32_t readl(const volatile void __iomem *addr)
#define readb_relaxed readb
#define readw_relaxed readw
#define readl_relaxed readl
static inline void writeb(uint8_t datum, volatile void __iomem *addr)
static inline void writew(uint16_t datum, volatile void __iomem *addr)
static inline void writel(uint32_t datum, volatile void __iomem *addr)
#define IOMAP_FULL_CACHING		0
#define IOMAP_NOCACHE_SER		1
#define IOMAP_NOCACHE_NONSER		2
#define IOMAP_WRITETHROUGH		3
extern void __iomem *__ioremap(unsigned long physaddr, unsigned long size, int cacheflag);
static inline void __iomem *ioremap(unsigned long physaddr, unsigned long size)
static inline void __iomem *ioremap_nocache(unsigned long physaddr, unsigned long size)
static inline void __iomem *ioremap_writethrough(unsigned long physaddr, unsigned long size)
static inline void __iomem *ioremap_fullcache(unsigned long physaddr, unsigned long size)
#define ioremap_wc ioremap_nocache
extern void iounmap(void volatile __iomem *addr);
static inline void __iomem *ioport_map(unsigned long port, unsigned int nr)
static inline void ioport_unmap(void __iomem *p)
static inline void flush_write_buffers(void)
static inline unsigned int ioread8(void __iomem *p)
static inline unsigned int ioread16(void __iomem *p)
static inline unsigned int ioread32(void __iomem *p)
static inline void iowrite8(u8 val, void __iomem *p)
static inline void iowrite16(u16 val, void __iomem *p)
static inline void iowrite32(u32 val, void __iomem *p)
static inline void ioread8_rep(void __iomem *p, void *dst, unsigned long count)
static inline void ioread16_rep(void __iomem *p, void *dst, unsigned long count)
static inline void ioread32_rep(void __iomem *p, void *dst, unsigned long count)
static inline void iowrite8_rep(void __iomem *p, const void *src, unsigned long count)
static inline void iowrite16_rep(void __iomem *p, const void *src, unsigned long count)
static inline void iowrite32_rep(void __iomem *p, const void *src, unsigned long count)
struct pci_dev;
extern void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
static inline void pci_iounmap(struct pci_dev *dev, void __iomem *p)
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
