#define M_CONTROL 0xf8
#define M_SEC     0xf9
#define M_MIN     0xfa
#define M_HOUR    0xfb
#define M_DAY     0xfc
#define M_DATE    0xfd
#define M_MONTH   0xfe
#define M_YEAR    0xff
#define C_WRITE   0x80
#define C_READ    0x40
#define C_SIGN    0x20
#define C_CALIB   0x1f
int sun3x_hwclk(int set, struct rtc_time *t)
unsigned long sun3x_gettimeoffset (void)
void __init sun3x_sched_init(irq_handler_t vector)
