#define __M68K_SBUS_H
struct sbus_dev ;
static inline void _sbus_writeb(unsigned char val, unsigned long addr)
static inline unsigned char _sbus_readb(unsigned long addr)
static inline void _sbus_writel(unsigned long val, unsigned long addr)
extern inline unsigned long _sbus_readl(unsigned long addr)
#define sbus_readb(a) _sbus_readb((unsigned long)a)
#define sbus_writeb(v, a) _sbus_writeb(v, (unsigned long)a)
#define sbus_readl(a) _sbus_readl((unsigned long)a)
#define sbus_writel(v, a) _sbus_writel(v, (unsigned long)a)
