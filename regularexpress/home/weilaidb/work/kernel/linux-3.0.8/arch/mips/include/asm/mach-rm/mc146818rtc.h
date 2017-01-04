#define __ASM_MACH_RM_MC146818RTC_H
#define mc146818_decode_year(year) ((year) < 70 ? (year) + 2000 : (year) + 1900)
#define mc146818_decode_year(year) ((year) + 1980)
