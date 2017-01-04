#define __ASM_PARISC_IDE_H
#define __ide_insw	insw
#define __ide_insl	insl
#define __ide_outsw	outsw
#define __ide_outsl	outsl
static __inline__ void __ide_mm_insw(void __iomem *port, void *addr, u32 count)
static __inline__ void __ide_mm_insl(void __iomem *port, void *addr, u32 count)
static __inline__ void __ide_mm_outsw(void __iomem *port, void *addr, u32 count)
static __inline__ void __ide_mm_outsl(void __iomem *port, void *addr, u32 count)
