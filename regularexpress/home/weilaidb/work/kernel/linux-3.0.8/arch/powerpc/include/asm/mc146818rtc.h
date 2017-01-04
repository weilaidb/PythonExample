#define _ASM_POWERPC_MC146818RTC_H
#define RTC_PORT(x)	(0x70 + (x))
#define RTC_ALWAYS_BCD	1
#define CMOS_READ(addr) ()
#define CMOS_WRITE(val, addr) ()
