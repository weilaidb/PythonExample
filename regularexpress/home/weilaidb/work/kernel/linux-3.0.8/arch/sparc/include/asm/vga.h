#define _LINUX_ASM_VGA_H_
#define VT_BUF_HAVE_RW
#undef scr_writew
#undef scr_readw
static inline void scr_writew(u16 val, u16 *addr)
static inline u16 scr_readw(const u16 *addr)
#define VGA_MAP_MEM(x,s) (x)
