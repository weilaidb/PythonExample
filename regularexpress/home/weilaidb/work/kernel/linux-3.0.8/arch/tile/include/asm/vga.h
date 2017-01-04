#define _ASM_TILE_VGA_H
#define VT_BUF_HAVE_RW
static inline void scr_writew(u16 val, volatile u16 *addr)
static inline u16 scr_readw(volatile const u16 *addr)
#define vga_readb(a)	readb((u8 __iomem *)(a))
#define vga_writeb(v,a)	writeb(v, (u8 __iomem *)(a))
#define VGA_MAP_MEM(x,s)	((unsigned long) ioremap(x, s))
