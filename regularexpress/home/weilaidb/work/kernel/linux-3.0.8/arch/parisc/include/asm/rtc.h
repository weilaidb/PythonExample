#define __ASM_RTC_H__
#define SECS_PER_HOUR   (60 * 60)
#define SECS_PER_DAY    (SECS_PER_HOUR * 24)
#define RTC_PIE 0x40
#define RTC_AIE 0x20
#define RTC_UIE 0x10
#define RTC_BATT_BAD 0x100
#define RTC_SQWE 0x08
#define RTC_DM_BINARY 0x04
#define RTC_24H 0x02
#define RTC_DST_EN 0x01
# define __isleap(year) \
((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
static const unsigned short int __mon_yday[2][13] =
;
static inline unsigned int get_rtc_time(struct rtc_time *wtime)
static int set_rtc_time(struct rtc_time *wtime)
static inline unsigned int get_rtc_ss(void)
static inline int get_rtc_pll(struct rtc_pll_info *pll)
static inline int set_rtc_pll(struct rtc_pll_info *pll)
