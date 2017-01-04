#define __ASM_MACH_GENERIC_IDE_H
static inline void __ide_flush_prologue(void)
static inline void __ide_flush_epilogue(void)
static inline void __ide_flush_dcache_range(unsigned long addr, unsigned long size)
static inline void __ide_insw(unsigned long port, void *addr,
unsigned int count)
static inline void __ide_insl(unsigned long port, void *addr, unsigned int count)
static inline void __ide_outsw(unsigned long port, const void *addr,
unsigned long count)
static inline void __ide_outsl(unsigned long port, const void *addr,
unsigned long count)
static inline void __ide_mm_insw(void __iomem *port, void *addr, u32 count)
static inline void __ide_mm_insl(void __iomem *port, void *addr, u32 count)
static inline void __ide_mm_outsw(void __iomem *port, void *addr, u32 count)
static inline void __ide_mm_outsl(void __iomem * port, void *addr, u32 count)
#undef insw
#undef insl
#undef outsw
#undef outsl
#define insw(port, addr, count) __ide_insw(port, addr, count)
#define insl(port, addr, count) __ide_insl(port, addr, count)
#define outsw(port, addr, count) __ide_outsw(port, addr, count)
#define outsl(port, addr, count) __ide_outsl(port, addr, count)
