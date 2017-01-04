#define _ASM_M48T37_H
extern spinlock_t rtc_lock;
struct m48t37_rtc ;
#define M48T37_RTC_SET		0x80
#define M48T37_RTC_STOPPED	0x80
#define M48T37_RTC_READ		0x40
