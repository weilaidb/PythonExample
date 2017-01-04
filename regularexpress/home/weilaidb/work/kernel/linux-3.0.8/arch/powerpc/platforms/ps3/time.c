#define dump_tm(_a) _dump_tm(_a, __func__, __LINE__)
static void _dump_tm(const struct rtc_time *tm, const char* func, int line)
#define dump_time(_a) _dump_time(_a, __func__, __LINE__)
static void __maybe_unused _dump_time(int time, const char *func,
int line)
void __init ps3_calibrate_decr(void)
static u64 read_rtc(void)
unsigned long __init ps3_get_boot_time(void)
static int __init ps3_rtc_init(void)
module_init(ps3_rtc_init);
