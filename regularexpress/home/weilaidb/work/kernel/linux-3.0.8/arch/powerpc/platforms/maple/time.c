#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
static int maple_rtc_addr;
static int maple_clock_read(int addr)
static void maple_clock_write(unsigned long val, int addr)
void maple_get_rtc_time(struct rtc_time *tm)
int maple_set_rtc_time(struct rtc_time *tm)
static struct resource rtc_iores = ;
unsigned long __init maple_get_boot_time(void)
