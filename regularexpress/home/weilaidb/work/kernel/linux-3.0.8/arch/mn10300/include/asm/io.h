#define _ASM_IO_H
#define mmiowb() do  while (0)
static inline u8 readb(const volatile void __iomem *addr)
static inline u16 readw(const volatile void __iomem *addr)
static inline u32 readl(const volatile void __iomem *addr)
#define __raw_readb readb
#define __raw_readw readw
#define __raw_readl readl
#define readb_relaxed readb
#define readw_relaxed readw
#define readl_relaxed readl
static inline void writeb(u8 b, volatile void __iomem *addr)
static inline void writew(u16 b, volatile void __iomem *addr)
static inline void writel(u32 b, volatile void __iomem *addr)
#define __raw_writeb writeb
#define __raw_writew writew
#define __raw_writel writel
static inline u8 inb_local(unsigned long addr)
static inline void outb_local(u8 b, unsigned long addr)
static inline u8 inb(unsigned long addr)
static inline u16 inw(unsigned long addr)
static inline u32 inl(unsigned long addr)
static inline void outb(u8 b, unsigned long addr)
static inline void outw(u16 b, unsigned long addr)
static inline void outl(u32 b, unsigned long addr)
#define inb_p(addr)	inb(addr)
#define inw_p(addr)	inw(addr)
#define inl_p(addr)	inl(addr)
#define outb_p(x, addr)	outb((x), (addr))
#define outw_p(x, addr)	outw((x), (addr))
#define outl_p(x, addr)	outl((x), (addr))
static inline void insb(unsigned long addr, void *buffer, int count)
static inline void insw(unsigned long addr, void *buffer, int count)
static inline void insl(unsigned long addr, void *buffer, int count)
static inline void outsb(unsigned long addr, const void *buffer, int count)
static inline void outsw(unsigned long addr, const void *buffer, int count)
extern void __outsl(unsigned long addr, const void *buffer, int count);
static inline void outsl(unsigned long addr, const void *buffer, int count)
#define ioread8(addr)		readb(addr)
#define ioread16(addr)		readw(addr)
#define ioread32(addr)		readl(addr)
#define iowrite8(v, addr)	writeb((v), (addr))
#define iowrite16(v, addr)	writew((v), (addr))
#define iowrite32(v, addr)	writel((v), (addr))
#define ioread8_rep(p, dst, count) \
insb((unsigned long) (p), (dst), (count))
#define ioread16_rep(p, dst, count) \
insw((unsigned long) (p), (dst), (count))
#define ioread32_rep(p, dst, count) \
insl((unsigned long) (p), (dst), (count))
#define iowrite8_rep(p, src, count) \
outsb((unsigned long) (p), (src), (count))
#define iowrite16_rep(p, src, count) \
outsw((unsigned long) (p), (src), (count))
#define iowrite32_rep(p, src, count) \
outsl((unsigned long) (p), (src), (count))
#define readsb(p, dst, count) \
insb((unsigned long) (p), (dst), (count))
#define readsw(p, dst, count) \
insw((unsigned long) (p), (dst), (count))
#define readsl(p, dst, count) \
insl((unsigned long) (p), (dst), (count))
#define writesb(p, src, count) \
outsb((unsigned long) (p), (src), (count))
#define writesw(p, src, count) \
outsw((unsigned long) (p), (src), (count))
#define writesl(p, src, count) \
outsl((unsigned long) (p), (src), (count))
#define IO_SPACE_LIMIT 0xffffffff
#define __io_virt(x) ((void *) (x))
struct pci_dev;
extern void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
static inline void pci_iounmap(struct pci_dev *dev, void __iomem *p)
static inline unsigned long virt_to_phys(volatile void *address)
static inline void *phys_to_virt(unsigned long address)
static inline void *__ioremap(unsigned long offset, unsigned long size,
unsigned long flags)
static inline void *ioremap(unsigned long offset, unsigned long size)
static inline void *ioremap_nocache(unsigned long offset, unsigned long size)
#define ioremap_wc ioremap_nocache
static inline void iounmap(void *addr)
static inline void __iomem *ioport_map(unsigned long port, unsigned int nr)
static inline void ioport_unmap(void __iomem *p)
#define xlate_dev_kmem_ptr(p)	((void *) (p))
#define xlate_dev_mem_ptr(p)	((void *) (p))
static inline unsigned long virt_to_bus(volatile void *address)
static inline void *bus_to_virt(unsigned long address)
#define page_to_bus page_to_phys
#define memset_io(a, b, c)	memset(__io_virt(a), (b), (c))
#define memcpy_fromio(a, b, c)	memcpy((a), __io_virt(b), (c))
#define memcpy_toio(a, b, c)	memcpy(__io_virt(a), (b), (c))
