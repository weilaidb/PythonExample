static const unsigned char rtc_days_in_month[] = ;
static const unsigned short rtc_ydays[2][13] = ;
#define LEAPS_THRU_END_OF(y) ((y)/4 - (y)/100 + (y)/400)
int rtc_month_days(unsigned int month, unsigned int year)
EXPORT_SYMBOL(rtc_month_days);
int rtc_year_days(unsigned int day, unsigned int month, unsigned int year)
EXPORT_SYMBOL(rtc_year_days);
void rtc_time_to_tm(unsigned long time, struct rtc_time *tm)
EXPORT_SYMBOL(rtc_time_to_tm);
int rtc_valid_tm(struct rtc_time *tm)
EXPORT_SYMBOL(rtc_valid_tm);
int rtc_tm_to_time(struct rtc_time *tm, unsigned long *time)
EXPORT_SYMBOL(rtc_tm_to_time);
ktime_t rtc_tm_to_ktime(struct rtc_time tm)
EXPORT_SYMBOL_GPL(rtc_tm_to_ktime);
struct rtc_time rtc_ktime_to_tm(ktime_t kt)
EXPORT_SYMBOL_GPL(rtc_ktime_to_tm);
MODULE_LICENSE("GPL");
