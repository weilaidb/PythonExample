#define _BFIN_IO_H
#define DECLARE_BFIN_RAW_READX(size, type, asm, asm_sign) \
static inline type __raw_read##size(const volatile void __iomem *addr) \
DECLARE_BFIN_RAW_READX(b, u8, b, (z))
#define __raw_readb __raw_readb
DECLARE_BFIN_RAW_READX(w, u16, w, (z))
#define __raw_readw __raw_readw
DECLARE_BFIN_RAW_READX(l, u32, , )
#define __raw_readl __raw_readl
extern void outsb(unsigned long port, const void *addr, unsigned long count);
extern void outsw(unsigned long port, const void *addr, unsigned long count);
extern void outsw_8(unsigned long port, const void *addr, unsigned long count);
extern void outsl(unsigned long port, const void *addr, unsigned long count);
#define outsb outsb
#define outsw outsw
#define outsl outsl
extern void insb(unsigned long port, void *addr, unsigned long count);
extern void insw(unsigned long port, void *addr, unsigned long count);
extern void insw_8(unsigned long port, void *addr, unsigned long count);
extern void insl(unsigned long port, void *addr, unsigned long count);
extern void insl_16(unsigned long port, void *addr, unsigned long count);
#define insb insb
#define insw insw
#define insl insl
extern void dma_outsb(unsigned long port, const void *addr, unsigned short count);
extern void dma_outsw(unsigned long port, const void *addr, unsigned short count);
extern void dma_outsl(unsigned long port, const void *addr, unsigned short count);
extern void dma_insb(unsigned long port, void *addr, unsigned short count);
extern void dma_insw(unsigned long port, void *addr, unsigned short count);
extern void dma_insl(unsigned long port, void *addr, unsigned short count);
#define mmiowb() do  while (0)
