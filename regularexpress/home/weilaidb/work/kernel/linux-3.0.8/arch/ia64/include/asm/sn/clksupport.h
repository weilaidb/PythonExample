#define _ASM_IA64_SN_CLKSUPPORT_H
extern unsigned long sn_rtc_cycles_per_second;
#define RTC_COUNTER_ADDR	((long *)LOCAL_MMR_ADDR(SH_RTC))
#define rtc_time()		(*RTC_COUNTER_ADDR)
