#define RTC_MAJOR_NR 121
static DEFINE_MUTEX(ds1302_mutex);
static const char ds1302_name[] = "ds1302";
#define TK_RST_OUT(x) REG_SHADOW_SET(R_PORT_G_DATA,  port_g_data_shadow,  CONFIG_ETRAX_DS1302_RSTBIT, x)
#define TK_RST_DIR(x)
#define TK_RST_OUT(x) REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, CONFIG_ETRAX_DS1302_RSTBIT, x)
#define TK_RST_DIR(x) REG_SHADOW_SET(R_PORT_PB_DIR,  port_pb_dir_shadow,  CONFIG_ETRAX_DS1302_RSTBIT, x)
#define TK_SDA_OUT(x) REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, CONFIG_ETRAX_DS1302_SDABIT, x)
#define TK_SCL_OUT(x) REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, CONFIG_ETRAX_DS1302_SCLBIT, x)
#define TK_SDA_IN()   ((*R_PORT_PB_READ >> CONFIG_ETRAX_DS1302_SDABIT) & 1)
#define TK_SDA_DIR(x) REG_SHADOW_SET(R_PORT_PB_DIR,  port_pb_dir_shadow,  CONFIG_ETRAX_DS1302_SDABIT, x)
#define TK_SCL_DIR(x) REG_SHADOW_SET(R_PORT_PB_DIR,  port_pb_dir_shadow,  CONFIG_ETRAX_DS1302_SCLBIT, x)
static void tempudelay(int usecs)
static void
out_byte(unsigned char x)
static unsigned char
in_byte(void)
static void
start(void)
static void
stop(void)
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
static int rtc_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long rtc_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static void
print_rtc_status(void)
static const struct file_operations rtc_fops = ;
#define MAGIC_PATTERN 0x42
static int __init
ds1302_probe(void)
int __init
ds1302_init(void)
static int __init ds1302_register(void)
module_init(ds1302_register);
