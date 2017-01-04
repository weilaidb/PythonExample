#define MAX_RTC_WAIT 5000
#define RTAS_CLOCK_BUSY (-2)
unsigned long __init rtas_get_boot_time(void)
void rtas_get_rtc_time(struct rtc_time *rtc_tm)
int rtas_set_rtc_time(struct rtc_time *tm)
