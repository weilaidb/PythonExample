static void null_rtc_get_time(struct timespec *tv)
static int null_rtc_set_time(const time_t secs)
void (*rtc_sh_get_time)(struct timespec *) = null_rtc_get_time;
int (*rtc_sh_set_time)(const time_t) = null_rtc_set_time;
void read_persistent_clock(struct timespec *ts)
int update_persistent_clock(struct timespec now)
unsigned int get_rtc_time(struct rtc_time *tm)
EXPORT_SYMBOL(get_rtc_time);
int set_rtc_time(struct rtc_time *tm)
EXPORT_SYMBOL(set_rtc_time);
static int __init rtc_generic_init(void)
module_init(rtc_generic_init);
void (*board_time_init)(void);
static void __init sh_late_time_init(void)
void __init time_init(void)
