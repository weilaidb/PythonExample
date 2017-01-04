#define __ASM_RC32434_TIMER_H
#define TIMER0_BASE_ADDR		0x18028000
#define TIMER_COUNT			3
struct timer_counter ;
struct timer ;
#define RC32434_CTC_EN_BIT		0
#define RC32434_CTC_TO_BIT		1
#define RC32434_RTC_MSK(x)              BIT_TO_MASK(x)
#define RC32434_RTC_CE_BIT              0
#define RC32434_RTC_TO_BIT              1
#define RC32434_RTC_RQE_BIT             2
#define RC32434_RCOUNT_BIT              0
#define RC32434_RCOUNT_MSK              0x0000ffff
#define RC32434_RCOMP_BIT               0
#define RC32434_RCOMP_MSK               0x0000ffff
