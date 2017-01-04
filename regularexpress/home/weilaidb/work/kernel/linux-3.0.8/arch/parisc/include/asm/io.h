#define _ASM_IO_H
#define virt_to_phys(a) ((unsigned long)__pa(a))
#define phys_to_virt(a) __va(a)
#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
static inline unsigned long isa_bus_to_virt(unsigned long addr)
static inline unsigned long isa_virt_to_bus(void *addr)
static inline unsigned char gsc_readb(unsigned long addr)
static inline unsigned short gsc_readw(unsigned long addr)
static inline unsigned int gsc_readl(unsigned long addr)
static inline unsigned long long gsc_readq(unsigned long addr)
static inline void gsc_writeb(unsigned char val, unsigned long addr)
static inline void gsc_writew(unsigned short val, unsigned long addr)
static inline void gsc_writel(unsigned int val, unsigned long addr)
static inline void gsc_writeq(unsigned long long val, unsigned long addr)
extern void __iomem * __ioremap(unsigned long offset, unsigned long size, unsigned long flags);
static inline void __iomem * ioremap(unsigned long offset, unsigned long size)
#define ioremap_nocache(off, sz)	ioremap((off), (sz))
extern void iounmap(const volatile void __iomem *addr);
static inline unsigned char __raw_readb(const volatile void __iomem *addr)
static inline unsigned short __raw_readw(const volatile void __iomem *addr)
static inline unsigned int __raw_readl(const volatile void __iomem *addr)
static inline unsigned long long __raw_readq(const volatile void __iomem *addr)
static inline void __raw_writeb(unsigned char b, volatile void __iomem *addr)
static inline void __raw_writew(unsigned short b, volatile void __iomem *addr)
static inline void __raw_writel(unsigned int b, volatile void __iomem *addr)
static inline void __raw_writeq(unsigned long long b, volatile void __iomem *addr)
static inline unsigned char readb(const volatile void __iomem *addr)
static inline unsigned short readw(const volatile void __iomem *addr)
static inline unsigned int readl(const volatile void __iomem *addr)
static inline unsigned long long readq(const volatile void __iomem *addr)
static inline void writeb(unsigned char b, volatile void __iomem *addr)
static inline void writew(unsigned short w, volatile void __iomem *addr)
static inline void writel(unsigned int l, volatile void __iomem *addr)
static inline void writeq(unsigned long long q, volatile void __iomem *addr)
#define	readb	readb
#define	readw	readw
#define	readl	readl
#define readq	readq
#define writeb	writeb
#define writew	writew
#define writel	writel
#define writeq	writeq
#define readb_relaxed(addr) readb(addr)
#define readw_relaxed(addr) readw(addr)
#define readl_relaxed(addr) readl(addr)
#define readq_relaxed(addr) readq(addr)
#define mmiowb() do  while (0)
void memset_io(volatile void __iomem *addr, unsigned char val, int count);
void memcpy_fromio(void *dst, const volatile void __iomem *src, int count);
void memcpy_toio(volatile void __iomem *dst, const void *src, int count);
#define inb_p inb
#define inw_p inw
#define inl_p inl
#define outb_p outb
#define outw_p outw
#define outl_p outl
extern unsigned char eisa_in8(unsigned short port);
extern unsigned short eisa_in16(unsigned short port);
extern unsigned int eisa_in32(unsigned short port);
extern void eisa_out8(unsigned char data, unsigned short port);
extern void eisa_out16(unsigned short data, unsigned short port);
extern void eisa_out32(unsigned int data, unsigned short port);
#if defined(CONFIG_PCI)
extern unsigned char inb(int addr);
extern unsigned short inw(int addr);
extern unsigned int inl(int addr);
extern void outb(unsigned char b, int addr);
extern void outw(unsigned short b, int addr);
extern void outl(unsigned int b, int addr);
#elif defined(CONFIG_EISA)
#define inb eisa_in8
#define inw eisa_in16
#define inl eisa_in32
#define outb eisa_out8
#define outw eisa_out16
#define outl eisa_out32
static inline char inb(unsigned long addr)
static inline short inw(unsigned long addr)
static inline int inl(unsigned long addr)
#define outb(x, y)	BUG()
#define outw(x, y)	BUG()
#define outl(x, y)	BUG()
extern void insb (unsigned long port, void *dst, unsigned long count);
extern void insw (unsigned long port, void *dst, unsigned long count);
extern void insl (unsigned long port, void *dst, unsigned long count);
extern void outsb (unsigned long port, const void *src, unsigned long count);
extern void outsw (unsigned long port, const void *src, unsigned long count);
extern void outsl (unsigned long port, const void *src, unsigned long count);
#define IO_SPACE_LIMIT 0x00ffffff
#define F_EXTEND(x) ((unsigned long)((x) | (0xffffffff00000000ULL)))
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
