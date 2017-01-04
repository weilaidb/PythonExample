#define _LINUX_VT_BUFFER_H_
#if defined(CONFIG_VGA_CONSOLE) || defined(CONFIG_MDA_CONSOLE)
#define scr_writew(val, addr) (*(addr) = (val))
#define scr_readw(addr) (*(addr))
#define scr_memcpyw(d, s, c) memcpy(d, s, c)
#define scr_memmovew(d, s, c) memmove(d, s, c)
#define VT_BUF_HAVE_MEMCPYW
#define VT_BUF_HAVE_MEMMOVEW
static inline void scr_memsetw(u16 *s, u16 c, unsigned int count)
static inline void scr_memcpyw(u16 *d, const u16 *s, unsigned int count)
static inline void scr_memmovew(u16 *d, const u16 *s, unsigned int count)
