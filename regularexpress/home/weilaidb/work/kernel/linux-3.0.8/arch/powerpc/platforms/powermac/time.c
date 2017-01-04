#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
#define RTC_OFFSET	2082844800
#define VIA_TIMER_FREQ_6	4700000
#define RS		0x200
#define T1CL		(4*RS)
#define T1CH		(5*RS)
#define T1LL		(6*RS)
#define T1LH		(7*RS)
#define ACR		(11*RS)
#define IFR		(13*RS)
#define T1MODE		0xc0
#define T1MODE_CONT	0x40
#define T1_INT		0x40
long __init pmac_time_init(void)
#if defined(CONFIG_ADB_CUDA) || defined(CONFIG_ADB_PMU)
static void to_rtc_time(unsigned long now, struct rtc_time *tm)
#if defined(CONFIG_ADB_CUDA) || defined(CONFIG_ADB_PMU) || \
defined(CONFIG_PMAC_SMU)
static unsigned long from_rtc_time(struct rtc_time *tm)
static unsigned long cuda_get_time(void)
#define cuda_get_rtc_time(tm)	to_rtc_time(cuda_get_time(), (tm))
static int cuda_set_rtc_time(struct rtc_time *tm)
#define cuda_get_time()		0
#define cuda_get_rtc_time(tm)
#define cuda_set_rtc_time(tm)	0
static unsigned long pmu_get_time(void)
#define pmu_get_rtc_time(tm)	to_rtc_time(pmu_get_time(), (tm))
static int pmu_set_rtc_time(struct rtc_time *tm)
#define pmu_get_time()		0
#define pmu_get_rtc_time(tm)
#define pmu_set_rtc_time(tm)	0
static unsigned long smu_get_time(void)
#define smu_get_time()			0
#define smu_get_rtc_time(tm, spin)
#define smu_set_rtc_time(tm, spin)	0
unsigned long pmac_get_boot_time(void)
void pmac_get_rtc_time(struct rtc_time *tm)
int pmac_set_rtc_time(struct rtc_time *tm)
int __init via_calibrate_decr(void)
void __init pmac_calibrate_decr(void)
