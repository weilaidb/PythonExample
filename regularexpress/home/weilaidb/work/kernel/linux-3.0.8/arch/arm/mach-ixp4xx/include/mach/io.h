#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0x0000ffff
extern int (*ixp4xx_pci_read)(u32 addr, u32 cmd, u32* data);
extern int ixp4xx_pci_write(u32 addr, u32 cmd, u32 data);
#define __mem_pci(a)		(a)
static inline int is_pci_memory(u32 addr)
static inline void __iomem * __indirect_ioremap(unsigned long addr, size_t size,
unsigned int mtype)
static inline void __indirect_iounmap(void __iomem *addr)
#define __arch_ioremap			__indirect_ioremap
#define __arch_iounmap			__indirect_iounmap
#define writeb(v, p)			__indirect_writeb(v, p)
#define writew(v, p)			__indirect_writew(v, p)
#define writel(v, p)			__indirect_writel(v, p)
#define writesb(p, v, l)		__indirect_writesb(p, v, l)
#define writesw(p, v, l)		__indirect_writesw(p, v, l)
#define writesl(p, v, l)		__indirect_writesl(p, v, l)
#define readb(p)			__indirect_readb(p)
#define readw(p)			__indirect_readw(p)
#define readl(p)			__indirect_readl(p)
#define readsb(p, v, l)			__indirect_readsb(p, v, l)
#define readsw(p, v, l)			__indirect_readsw(p, v, l)
#define readsl(p, v, l)			__indirect_readsl(p, v, l)
static inline void __indirect_writeb(u8 value, volatile void __iomem *p)
static inline void __indirect_writesb(volatile void __iomem *bus_addr,
const u8 *vaddr, int count)
static inline void __indirect_writew(u16 value, volatile void __iomem *p)
static inline void __indirect_writesw(volatile void __iomem *bus_addr,
const u16 *vaddr, int count)
static inline void __indirect_writel(u32 value, volatile void __iomem *p)
static inline void __indirect_writesl(volatile void __iomem *bus_addr,
const u32 *vaddr, int count)
static inline unsigned char __indirect_readb(const volatile void __iomem *p)
static inline void __indirect_readsb(const volatile void __iomem *bus_addr,
u8 *vaddr, u32 count)
static inline unsigned short __indirect_readw(const volatile void __iomem *p)
static inline void __indirect_readsw(const volatile void __iomem *bus_addr,
u16 *vaddr, u32 count)
static inline unsigned long __indirect_readl(const volatile void __iomem *p)
static inline void __indirect_readsl(const volatile void __iomem *bus_addr,
u32 *vaddr, u32 count)
#define memset_io(c,v,l)		_memset_io((c),(v),(l))
#define memcpy_fromio(a,c,l)		_memcpy_fromio((a),(c),(l))
#define memcpy_toio(c,a,l)		_memcpy_toio((c),(a),(l))
#define	__io(v)		__typesafe_io(v)
static inline void outb(u8 value, u32 addr)
static inline void outsb(u32 io_addr, const u8 *vaddr, u32 count)
static inline void outw(u16 value, u32 addr)
static inline void outsw(u32 io_addr, const u16 *vaddr, u32 count)
static inline void outl(u32 value, u32 addr)
static inline void outsl(u32 io_addr, const u32 *vaddr, u32 count)
static inline u8 inb(u32 addr)
static inline void insb(u32 io_addr, u8 *vaddr, u32 count)
static inline u16 inw(u32 addr)
static inline void insw(u32 io_addr, u16 *vaddr, u32 count)
static inline u32 inl(u32 addr)
static inline void insl(u32 io_addr, u32 *vaddr, u32 count)
#define PIO_OFFSET      0x10000UL
#define PIO_MASK        0x0ffffUL
#define	__is_io_address(p)	(((unsigned long)p >= PIO_OFFSET) && \
((unsigned long)p <= (PIO_MASK + PIO_OFFSET)))
#define	ioread8(p)			ioread8(p)
static inline unsigned int ioread8(const void __iomem *addr)
#define	ioread8_rep(p, v, c)		ioread8_rep(p, v, c)
static inline void ioread8_rep(const void __iomem *addr, void *vaddr, u32 count)
#define	ioread16(p)			ioread16(p)
static inline unsigned int ioread16(const void __iomem *addr)
#define	ioread16_rep(p, v, c)		ioread16_rep(p, v, c)
static inline void ioread16_rep(const void __iomem *addr, void *vaddr,
u32 count)
#define	ioread32(p)			ioread32(p)
static inline unsigned int ioread32(const void __iomem *addr)
#define	ioread32_rep(p, v, c)		ioread32_rep(p, v, c)
static inline void ioread32_rep(const void __iomem *addr, void *vaddr,
u32 count)
#define	iowrite8(v, p)			iowrite8(v, p)
static inline void iowrite8(u8 value, void __iomem *addr)
#define	iowrite8_rep(p, v, c)		iowrite8_rep(p, v, c)
static inline void iowrite8_rep(void __iomem *addr, const void *vaddr,
u32 count)
#define	iowrite16(v, p)			iowrite16(v, p)
static inline void iowrite16(u16 value, void __iomem *addr)
#define	iowrite16_rep(p, v, c)		iowrite16_rep(p, v, c)
static inline void iowrite16_rep(void __iomem *addr, const void *vaddr,
u32 count)
#define	iowrite32(v, p)			iowrite32(v, p)
static inline void iowrite32(u32 value, void __iomem *addr)
#define	iowrite32_rep(p, v, c)		iowrite32_rep(p, v, c)
static inline void iowrite32_rep(void __iomem *addr, const void *vaddr,
u32 count)
#define	ioport_map(port, nr)		((void __iomem*)(port + PIO_OFFSET))
#define	ioport_unmap(addr)
