#if defined(CONFIG_M32R)
#define RTC_MAJOR_NR 121
static DEFINE_MUTEX(rtc_mutex);
static const char ds1302_name[] = "ds1302";
static void
out_byte_rtc(unsigned int reg_addr, unsigned char x)
static unsigned char
in_byte_rtc(unsigned int reg_addr)
static void
ds1302_wenable(void)
static void
ds1302_wdisable(void)
unsigned char
ds1302_readreg(int reg)
void
ds1302_writereg(int reg, unsigned char val)
void
get_rtc_time(struct rtc_time *rtc_tm)
static unsigned char days_in_mo[] =
;
static long rtc_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
int
get_rtc_status(char *buf)
static const struct file_operations rtc_fops = ;
#define MAGIC_PATTERN 0x42
static int __init
ds1302_probe(void)
int __init
ds1302_init(void)
static int __init ds1302_register(void)
module_init(ds1302_register);
