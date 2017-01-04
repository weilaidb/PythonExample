#define _RAW_IO_H
#define IOMAP_FULL_CACHING		0
#define IOMAP_NOCACHE_SER		1
#define IOMAP_NOCACHE_NONSER		2
#define IOMAP_WRITETHROUGH		3
extern void iounmap(void __iomem *addr);
extern void __iomem *__ioremap(unsigned long physaddr, unsigned long size,
int cacheflag);
extern void __iounmap(void *addr, unsigned long size);
#define in_8(addr) \
()
#define in_be16(addr) \
()
#define in_be32(addr) \
()
#define in_le16(addr) \
()
#define in_le32(addr) \
()
#define out_8(addr,b) (void)((*(__force volatile u8 *) (addr)) = (b))
#define out_be16(addr,w) (void)((*(__force volatile u16 *) (addr)) = (w))
#define out_be32(addr,l) (void)((*(__force volatile u32 *) (addr)) = (l))
#define out_le16(addr,w) (void)((*(__force volatile __le16 *) (addr)) = cpu_to_le16(w))
#define out_le32(addr,l) (void)((*(__force volatile __le32 *) (addr)) = cpu_to_le32(l))
#define raw_inb in_8
#define raw_inw in_be16
#define raw_inl in_be32
#define __raw_readb in_8
#define __raw_readw in_be16
#define __raw_readl in_be32
#define raw_outb(val,port) out_8((port),(val))
#define raw_outw(val,port) out_be16((port),(val))
#define raw_outl(val,port) out_be32((port),(val))
#define __raw_writeb(val,addr) out_8((addr),(val))
#define __raw_writew(val,addr) out_be16((addr),(val))
#define __raw_writel(val,addr) out_be32((addr),(val))
static inline void raw_insb(volatile u8 __iomem *port, u8 *buf, unsigned int len)
static inline void raw_outsb(volatile u8 __iomem *port, const u8 *buf,
unsigned int len)
static inline void raw_insw(volatile u16 __iomem *port, u16 *buf, unsigned int nr)
static inline void raw_outsw(volatile u16 __iomem *port, const u16 *buf,
unsigned int nr)
static inline void raw_insl(volatile u32 __iomem *port, u32 *buf, unsigned int nr)
static inline void raw_outsl(volatile u32 __iomem *port, const u32 *buf,
unsigned int nr)
static inline void raw_insw_swapw(volatile u16 __iomem *port, u16 *buf,
unsigned int nr)
static inline void raw_outsw_swapw(volatile u16 __iomem *port, const u16 *buf,
unsigned int nr)
