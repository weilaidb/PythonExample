#define __ASM_MACH_IP32_MC146818RTC_H
#define RTC_PORT(x)	(0x70 + (x))
static unsigned char CMOS_READ(unsigned long addr)
static inline void CMOS_WRITE(unsigned char data, unsigned long addr)
#define mc146818_decode_year(year) ((year) + 2000)
#define RTC_ALWAYS_BCD	0
