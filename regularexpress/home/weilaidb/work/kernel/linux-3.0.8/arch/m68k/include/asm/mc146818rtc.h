#define _ASM_MC146818RTC_H
#define RTC_PORT(x)	(TT_RTC_BAS + 2*(x))
#define RTC_ALWAYS_BCD	0
#define CMOS_READ(addr) ()
#define CMOS_WRITE(val, addr) ()
