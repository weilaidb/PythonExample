volatile unsigned long cmos_lock;
EXPORT_SYMBOL(cmos_lock);
#define CMOS_YEARS_OFFS 2000
DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL(rtc_lock);
int mach_set_rtc_mmss(unsigned long nowtime)
unsigned long mach_get_cmos_time(void)
unsigned char rtc_cmos_read(unsigned char addr)
EXPORT_SYMBOL(rtc_cmos_read);
void rtc_cmos_write(unsigned char val, unsigned char addr)
EXPORT_SYMBOL(rtc_cmos_write);
int update_persistent_clock(struct timespec now)
void read_persistent_clock(struct timespec *ts)
unsigned long long native_read_tsc(void)
EXPORT_SYMBOL(native_read_tsc);
static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
static __init int add_rtc_cmos(void)
device_initcall(add_rtc_cmos);
