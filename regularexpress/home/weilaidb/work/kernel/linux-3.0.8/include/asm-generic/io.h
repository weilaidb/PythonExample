#define __ASM_GENERIC_IO_H
#define mmiowb() do  while (0)
static inline u8 __raw_readb(const volatile void __iomem *addr)
static inline u16 __raw_readw(const volatile void __iomem *addr)
static inline u32 __raw_readl(const volatile void __iomem *addr)
#define readb __raw_readb
#define readw(addr) __le16_to_cpu(__raw_readw(addr))
#define readl(addr) __le32_to_cpu(__raw_readl(addr))
static inline void __raw_writeb(u8 b, volatile void __iomem *addr)
static inline void __raw_writew(u16 b, volatile void __iomem *addr)
static inline void __raw_writel(u32 b, volatile void __iomem *addr)
#define writeb __raw_writeb
#define writew(b,addr) __raw_writew(__cpu_to_le16(b),addr)
#define writel(b,addr) __raw_writel(__cpu_to_le32(b),addr)
static inline u64 __raw_readq(const volatile void __iomem *addr)
#define readq(addr) __le64_to_cpu(__raw_readq(addr))
static inline void __raw_writeq(u64 b, volatile void __iomem *addr)
#define writeq(b,addr) __raw_writeq(__cpu_to_le64(b),addr)
#define PCI_IOBASE ((void __iomem *) 0)
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
static inline void outsl(unsigned long addr, const void *buffer, int count)
static inline void readsl(const void __iomem *addr, void *buf, int len)
static inline void readsw(const void __iomem *addr, void *buf, int len)
static inline void readsb(const void __iomem *addr, void *buf, int len)
static inline void writesl(const void __iomem *addr, const void *buf, int len)
static inline void writesw(const void __iomem *addr, const void *buf, int len)
static inline void writesb(const void __iomem *addr, const void *buf, int len)
#define ioread8(addr)		readb(addr)
#define ioread16(addr)		readw(addr)
#define ioread16be(addr)	be16_to_cpu(ioread16(addr))
#define ioread32(addr)		readl(addr)
#define ioread32be(addr)	be32_to_cpu(ioread32(addr))
#define iowrite8(v, addr)	writeb((v), (addr))
#define iowrite16(v, addr)	writew((v), (addr))
#define iowrite16be(v, addr)	iowrite16(be16_to_cpu(v), (addr))
#define iowrite32(v, addr)	writel((v), (addr))
#define iowrite32be(v, addr)	iowrite32(be32_to_cpu(v), (addr))
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
#define IO_SPACE_LIMIT 0xffff
#define __io_virt(x) ((void __force *) (x))
struct pci_dev;
extern void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
static inline void pci_iounmap(struct pci_dev *dev, void __iomem *p)
static inline unsigned long virt_to_phys(volatile void *address)
static inline void *phys_to_virt(unsigned long address)
static inline void __iomem *ioremap(phys_addr_t offset, unsigned long size)
#define __ioremap(offset, size, flags)	ioremap(offset, size)
#define ioremap_nocache ioremap
#define ioremap_wc ioremap_nocache
static inline void iounmap(void *addr)
static inline void __iomem *ioport_map(unsigned long port, unsigned int nr)
static inline void ioport_unmap(void __iomem *p)
extern void __iomem *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void __iomem *p);
#define xlate_dev_kmem_ptr(p)	p
#define xlate_dev_mem_ptr(p)	((void *) (p))
static inline unsigned long virt_to_bus(volatile void *address)
static inline void *bus_to_virt(unsigned long address)
#define memset_io(a, b, c)	memset(__io_virt(a), (b), (c))
#define memcpy_fromio(a, b, c)	memcpy((a), __io_virt(b), (c))
#define memcpy_toio(a, b, c)	memcpy(__io_virt(a), (b), (c))
