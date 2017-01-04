#define __ASM_MACH_JAZZ_MC146818RTC_H
#define RTC_PORT(x)	(0x70 + (x))
#define RTC_IRQ		8
static inline unsigned char CMOS_READ(unsigned long addr)
static inline void CMOS_WRITE(unsigned char data, unsigned long addr)
#define RTC_ALWAYS_BCD	0
#define mc146818_decode_year(year) ((year) + 1980)
