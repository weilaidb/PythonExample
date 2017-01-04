#define __ASM_MACH_AU1XX_MC146818RTC_H
#define RTC_PORT(x)	(0x0c000000 + (x))
#define RTC_IRQ		8
#define PB1500_RTC_ADDR 0x0c000000
static inline unsigned char CMOS_READ(unsigned long offset)
static inline void CMOS_WRITE(unsigned char data, unsigned long offset)
#define RTC_ALWAYS_BCD	1
