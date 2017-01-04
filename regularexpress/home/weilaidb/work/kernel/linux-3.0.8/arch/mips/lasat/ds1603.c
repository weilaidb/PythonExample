#define READ_TIME_CMD 0x81
#define SET_TIME_CMD 0x80
#define TRIMMER_SET_CMD 0xC0
#define TRIMMER_VALUE_MASK 0x38
#define TRIMMER_SHIFT 3
struct ds_defs *ds1603;
static void rtc_reg_write(unsigned long val)
static unsigned long rtc_reg_read(void)
static unsigned long rtc_datareg_read(void)
static void rtc_nrst_high(void)
static void rtc_nrst_low(void)
static void rtc_cycle_clock(unsigned long data)
static void rtc_write_databit(unsigned int bit)
static unsigned int rtc_read_databit(void)
static void rtc_write_byte(unsigned int byte)
static void rtc_write_word(unsigned long word)
static unsigned long rtc_read_word(void)
static void rtc_init_op(void)
static void rtc_end_op(void)
void read_persistent_clock(struct timespec *ts)
int rtc_mips_set_mmss(unsigned long time)
void ds1603_set_trimmer(unsigned int trimval)
void ds1603_disable(void)
void ds1603_enable(void)
