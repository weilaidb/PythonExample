#define _ASM_M68K_NUBUS_H
#define nubus_readb raw_inb
#define nubus_readw raw_inw
#define nubus_readl raw_inl
#define nubus_writeb raw_outb
#define nubus_writew raw_outw
#define nubus_writel raw_outl
#define nubus_memset_io(a,b,c)		memset((void *)(a),(b),(c))
#define nubus_memcpy_fromio(a,b,c)	memcpy((a),(void *)(b),(c))
#define nubus_memcpy_toio(a,b,c)	memcpy((void *)(a),(b),(c))
static inline void *nubus_remap_nocache_ser(unsigned long physaddr,
unsigned long size)
static inline void *nubus_remap_nocache_nonser(unsigned long physaddr,
unsigned long size)
static inline void *nbus_remap_writethrough(unsigned long physaddr,
unsigned long size)
static inline void *nubus_remap_fullcache(unsigned long physaddr,
unsigned long size)
#define nubus_unmap iounmap
#define nubus_iounmap iounmap
#define nubus_ioremap nubus_remap_nocache_ser
