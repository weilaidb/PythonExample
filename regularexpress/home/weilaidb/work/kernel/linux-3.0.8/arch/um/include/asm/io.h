#define __UM_IO_H
#define IO_SPACE_LIMIT 0xdeadbeef
static inline int inb(unsigned long i)
static inline void outb(char c, unsigned long i)
static inline unsigned long virt_to_phys(volatile void * address)
static inline void * phys_to_virt(unsigned long address)
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
static inline void writeb(unsigned char b, volatile void __iomem *addr)
static inline void writew(unsigned short b, volatile void __iomem *addr)
static inline void writel(unsigned int b, volatile void __iomem *addr)
static inline void writeq(unsigned int b, volatile void __iomem *addr)
#define __raw_writeb writeb
#define __raw_writew writew
#define __raw_writel writel
#define __raw_writeq writeq
