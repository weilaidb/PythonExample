#define _ASM_POWERPC_VGA_H_
#if defined(CONFIG_VGA_CONSOLE) || defined(CONFIG_MDA_CONSOLE)
#define VT_BUF_HAVE_RW
static inline void scr_writew(u16 val, volatile u16 *addr)
static inline u16 scr_readw(volatile const u16 *addr)
#define VT_BUF_HAVE_MEMCPYW
#define scr_memcpyw	memcpy
extern unsigned long vgacon_remap_base;
#define VGA_MAP_MEM(x,s) ((unsigned long) ioremap((x), s))
#define VGA_MAP_MEM(x,s) (x + vgacon_remap_base)
#define vga_readb(x) (*(x))
#define vga_writeb(x,y) (*(y) = (x))
