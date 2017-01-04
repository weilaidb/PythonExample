unsigned long hp300_model;
unsigned long hp300_uart_scode = -1;
unsigned char ledstate;
static char s_hp330[] __initdata = "330";
static char s_hp340[] __initdata = "340";
static char s_hp345[] __initdata = "345";
static char s_hp360[] __initdata = "360";
static char s_hp370[] __initdata = "370";
static char s_hp375[] __initdata = "375";
static char s_hp380[] __initdata = "380";
static char s_hp385[] __initdata = "385";
static char s_hp400[] __initdata = "400";
static char s_hp425t[] __initdata = "425t";
static char s_hp425s[] __initdata = "425s";
static char s_hp425e[] __initdata = "425e";
static char s_hp433t[] __initdata = "433t";
static char s_hp433s[] __initdata = "433s";
static char *hp300_models[] __initdata = ;
static char hp300_model_name[13] = "HP9000/";
extern void hp300_reset(void);
extern int hp300_setup_serial_console(void) __init;
int __init hp300_parse_bootinfo(const struct bi_record *record)
static void hp300_pulse(int x)
static void hp300_get_model(char *model)
#define RTCBASE			0xf0420000
#define RTC_DATA		0x1
#define RTC_CMD			0x3
#define	RTC_BUSY		0x02
#define	RTC_DATA_RDY		0x01
#define rtc_busy()		(in_8(RTCBASE + RTC_CMD) & RTC_BUSY)
#define rtc_data_available()	(in_8(RTCBASE + RTC_CMD) & RTC_DATA_RDY)
#define rtc_status()		(in_8(RTCBASE + RTC_CMD))
#define rtc_command(x)		out_8(RTCBASE + RTC_CMD, (x))
#define rtc_read_data()		(in_8(RTCBASE + RTC_DATA))
#define rtc_write_data(x)	out_8(RTCBASE + RTC_DATA, (x))
#define RTC_SETREG	0xe0
#define RTC_WRITEREG	0xc2
#define RTC_READREG	0xc3
#define RTC_REG_SEC2	0
#define RTC_REG_SEC1	1
#define RTC_REG_MIN2	2
#define RTC_REG_MIN1	3
#define RTC_REG_HOUR2	4
#define RTC_REG_HOUR1	5
#define RTC_REG_WDAY	6
#define RTC_REG_DAY2	7
#define RTC_REG_DAY1	8
#define RTC_REG_MON2	9
#define RTC_REG_MON1	10
#define RTC_REG_YEAR2	11
#define RTC_REG_YEAR1	12
#define RTC_HOUR1_24HMODE 0x8
#define RTC_STAT_MASK	0xf0
#define RTC_STAT_RDY	0x40
static inline unsigned char hp300_rtc_read(unsigned char reg)
static inline unsigned char hp300_rtc_write(unsigned char reg,
unsigned char val)
static int hp300_hwclk(int op, struct rtc_time *t)
static unsigned int hp300_get_ss(void)
static void __init hp300_init_IRQ(void)
void __init config_hp300(void)
