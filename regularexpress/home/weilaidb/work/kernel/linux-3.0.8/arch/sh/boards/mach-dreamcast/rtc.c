#define TWENTY_YEARS ((20 * 365LU + 5) * 86400)
#define AICA_RTC_SECS_H		0xa0710000
#define AICA_RTC_SECS_L		0xa0710004
static void aica_rtc_gettimeofday(struct timespec *ts)
static int aica_rtc_settimeofday(const time_t secs)
void aica_time_init(void)
