#define __ASM_SPARC64_MC146818RTC_H
extern unsigned long cmos_regs;
#define RTC_PORT(x)	(cmos_regs + (x))
#define RTC_ALWAYS_BCD	0
#define CMOS_READ(addr) ()
#define CMOS_WRITE(val, addr) ()
