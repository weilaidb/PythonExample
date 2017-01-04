#define _M68KNOMMU_IO_H
static inline unsigned short _swapw(volatile unsigned short v)
static inline unsigned int _swapl(volatile unsigned long v)
#define readb(addr) \
()
#define readw(addr) \
()
#define readl(addr) \
()
#define readb_relaxed(addr) readb(addr)
#define readw_relaxed(addr) readw(addr)
#define readl_relaxed(addr) readl(addr)
#define writeb(b,addr) (void)((*(volatile unsigned char *) (addr)) = (b))
#define writew(b,addr) (void)((*(volatile unsigned short *) (addr)) = (b))
#define writel(b,addr) (void)((*(volatile unsigned int *) (addr)) = (b))
#define __raw_readb readb
#define __raw_readw readw
#define __raw_readl readl
#define __raw_writeb writeb
#define __raw_writew writew
#define __raw_writel writel
static inline void io_outsb(unsigned int addr, void *buf, int len)
static inline void io_outsw(unsigned int addr, void *buf, int len)
static inline void io_outsl(unsigned int addr, void *buf, int len)
static inline void io_insb(unsigned int addr, void *buf, int len)
static inline void io_insw(unsigned int addr, void *buf, int len)
static inline void io_insl(unsigned int addr, void *buf, int len)
#define mmiowb()
#define memset_io(a,b,c)	memset((void *)(a),(b),(c))
#define memcpy_fromio(a,b,c)	memcpy((a),(void *)(b),(c))
#define memcpy_toio(a,b,c)	memcpy((void *)(a),(b),(c))
#define inb(addr)    readb(addr)
#define inw(addr)    readw(addr)
#define inl(addr)    readl(addr)
#define outb(x,addr) ((void) writeb(x,addr))
#define outw(x,addr) ((void) writew(x,addr))
#define outl(x,addr) ((void) writel(x,addr))
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
#define IO_SPACE_LIMIT 0xffffffff
#define IOMAP_FULL_CACHING		0
#define IOMAP_NOCACHE_SER		1
#define IOMAP_NOCACHE_NONSER		2
#define IOMAP_WRITETHROUGH		3
static inline void *__ioremap(unsigned long physaddr, unsigned long size, int cacheflag)
static inline void *ioremap(unsigned long physaddr, unsigned long size)
static inline void *ioremap_nocache(unsigned long physaddr, unsigned long size)
static inline void *ioremap_writethrough(unsigned long physaddr, unsigned long size)
static inline void *ioremap_fullcache(unsigned long physaddr, unsigned long size)
#define	iounmap(addr)	do  while(0)
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
