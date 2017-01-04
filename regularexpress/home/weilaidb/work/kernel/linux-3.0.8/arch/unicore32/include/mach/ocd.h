#define __MACH_PUV3_OCD_H__
#if defined(CONFIG_DEBUG_OCD)
static inline void ocd_putc(unsigned int c)
#define putc(ch)	ocd_putc(ch)
#define putc(ch)
