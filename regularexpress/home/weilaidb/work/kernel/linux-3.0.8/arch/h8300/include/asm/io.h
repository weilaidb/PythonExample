#define _H8300_IO_H
#if defined(CONFIG_H83007) || defined(CONFIG_H83068)
#elif defined(CONFIG_H8S2678)
#error UNKNOWN CPU TYPE
static inline unsigned short _swapw(volatile unsigned short v)
static inline unsigned long _swapl(volatile unsigned long v)
#define readb(addr) \
()
#define readw(addr) \
()
#define readl(addr) \
()
#define writeb(b,addr) (void)((*(volatile unsigned char *) \
((unsigned long)(addr) & 0x00ffffff)) = (b))
#define writew(b,addr) (void)((*(volatile unsigned short *) \
((unsigned long)(addr) & 0x00ffffff)) = (b))
#define writel(b,addr) (void)((*(volatile unsigned long *) \
((unsigned long)(addr) & 0x00ffffff)) = (b))
#define readb_relaxed(addr) readb(addr)
#define readw_relaxed(addr) readw(addr)
#define readl_relaxed(addr) readl(addr)
#define __raw_readb readb
#define __raw_readw readw
#define __raw_readl readl
#define __raw_writeb writeb
#define __raw_writew writew
#define __raw_writel writel
static inline int h8300_buswidth(unsigned int addr)
static inline void io_outsb(unsigned int addr, const void *buf, int len)
static inline void io_outsw(unsigned int addr, const void *buf, int len)
static inline void io_outsl(unsigned int addr, const void *buf, int len)
static inline void io_outsw_noswap(unsigned int addr, const void *buf, int len)
static inline void io_outsl_noswap(unsigned int addr, const void *buf, int len)
static inline void io_insb(unsigned int addr, void *buf, int len)
static inline void io_insw(unsigned int addr, void *buf, int len)
static inline void io_insl(unsigned int addr, void *buf, int len)
static inline void io_insw_noswap(unsigned int addr, void *buf, int len)
static inline void io_insl_noswap(unsigned int addr, void *buf, int len)
#define memset_io(a,b,c)	memset((void *)(a),(b),(c))
#define memcpy_fromio(a,b,c)	memcpy((a),(void *)(b),(c))
#define memcpy_toio(a,b,c)	memcpy((void *)(a),(b),(c))
#define mmiowb()
#define inb(addr)    ((h8300_buswidth(addr))?readw((addr) & ~1) & 0xff:readb(addr))
#define inw(addr)    _swapw(readw(addr))
#define inl(addr)    _swapl(readl(addr))
#define outb(x,addr) ((void)((h8300_buswidth(addr) && \
((addr) & 1))?writew(x,(addr) & ~1):writeb(x,addr)))
#define outw(x,addr) ((void) writew(_swapw(x),addr))
#define outl(x,addr) ((void) writel(_swapl(x),addr))
#define inb_p(addr)    inb(addr)
#define inw_p(addr)    inw(addr)
#define inl_p(addr)    inl(addr)
#define outb_p(x,addr) outb(x,addr)
#define outw_p(x,addr) outw(x,addr)
#define outl_p(x,addr) outl(x,addr)
#define outsb(a,b,l) io_outsb(a,b,l)
#define outsw(a,b,l) io_outsw(a,b,l)
#define outsl(a,b,l) io_outsl(a,b,l)
#define insb(a,b,l) io_insb(a,b,l)
#define insw(a,b,l) io_insw(a,b,l)
#define insl(a,b,l) io_insl(a,b,l)
#define IO_SPACE_LIMIT 0xffffff
#define IOMAP_FULL_CACHING		0
#define IOMAP_NOCACHE_SER		1
#define IOMAP_NOCACHE_NONSER		2
#define IOMAP_WRITETHROUGH		3
extern void *__ioremap(unsigned long physaddr, unsigned long size, int cacheflag);
extern void __iounmap(void *addr, unsigned long size);
static inline void *ioremap(unsigned long physaddr, unsigned long size)
static inline void *ioremap_nocache(unsigned long physaddr, unsigned long size)
static inline void *ioremap_writethrough(unsigned long physaddr, unsigned long size)
static inline void *ioremap_fullcache(unsigned long physaddr, unsigned long size)
extern void iounmap(void *addr);
static __inline__ unsigned char ctrl_inb(unsigned long addr)
static __inline__ unsigned short ctrl_inw(unsigned long addr)
static __inline__ unsigned long ctrl_inl(unsigned long addr)
static __inline__ void ctrl_outb(unsigned char b, unsigned long addr)
static __inline__ void ctrl_outw(unsigned short b, unsigned long addr)
static __inline__ void ctrl_outl(unsigned long b, unsigned long addr)
static __inline__ void ctrl_bclr(int b, unsigned long addr)
static __inline__ void ctrl_bset(int b, unsigned long addr)
#define page_to_phys(page)      ((page - mem_map) << PAGE_SHIFT)
#define page_to_bus(page)       ((page - mem_map) << PAGE_SHIFT)
#define phys_to_virt(vaddr)	((void *) (vaddr))
#define virt_to_phys(vaddr)	((unsigned long) (vaddr))
#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
