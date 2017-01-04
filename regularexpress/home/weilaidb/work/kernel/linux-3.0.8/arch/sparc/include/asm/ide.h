#define _SPARC_IDE_H
#define __ide_insl(data_reg, buffer, wcount) \
__ide_insw(data_reg, buffer, (wcount)<<1)
#define __ide_outsl(data_reg, buffer, wcount) \
__ide_outsw(data_reg, buffer, (wcount)<<1)
#define __ide_mm_insw	__ide_insw
#define __ide_mm_insl	__ide_insl
#define __ide_mm_outsw	__ide_outsw
#define __ide_mm_outsl	__ide_outsl
static inline void __ide_insw(void __iomem *port, void *dst, u32 count)
static inline void __ide_outsw(void __iomem *port, const void *src, u32 count)
