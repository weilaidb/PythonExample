extern spinlock_t rtc_lock;
#define NVRAM_AS0  0x74
#define NVRAM_AS1  0x75
#define NVRAM_DATA 0x77
static int nvram_as1 = NVRAM_AS1;
static int nvram_as0 = NVRAM_AS0;
static int nvram_data = NVRAM_DATA;
long __init chrp_time_init(void)
int chrp_cmos_clock_read(int addr)
void chrp_cmos_clock_write(unsigned long val, int addr)
int chrp_set_rtc_time(struct rtc_time *tmarg)
void chrp_get_rtc_time(struct rtc_time *tm)
