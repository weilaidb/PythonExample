DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL_GPL(rtc_lock);
void __init
atari_sched_init(irq_handler_t timer_routine)
#define TICK_SIZE 10000
unsigned long atari_gettimeoffset (void)
static void mste_read(struct MSTE_RTC *val)
static void mste_write(struct MSTE_RTC *val)
#define	RTC_READ(reg)				\
()
#define	RTC_WRITE(reg,val)			\
do  while(0)
#define HWCLK_POLL_INTERVAL	5
int atari_mste_hwclk( int op, struct rtc_time *t )
int atari_tt_hwclk( int op, struct rtc_time *t )
int atari_mste_set_clock_mmss (unsigned long nowtime)
int atari_tt_set_clock_mmss (unsigned long nowtime)
