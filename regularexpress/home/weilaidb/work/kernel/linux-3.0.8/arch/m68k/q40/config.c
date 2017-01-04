extern void q40_init_IRQ(void);
static void q40_get_model(char *model);
extern void q40_sched_init(irq_handler_t handler);
static unsigned long q40_gettimeoffset(void);
static int q40_hwclk(int, struct rtc_time *);
static unsigned int q40_get_ss(void);
static int q40_set_clock_mmss(unsigned long);
static int q40_get_rtc_pll(struct rtc_pll_info *pll);
static int q40_set_rtc_pll(struct rtc_pll_info *pll);
extern void q40_mksound(unsigned int, unsigned int);
static void q40_mem_console_write(struct console *co, const char *b,
unsigned int count);
extern int ql_ticks;
static struct console q40_console_driver = ;
extern char *q40_mem_cptr;
static int _cpleft;
static void q40_mem_console_write(struct console *co, const char *s,
unsigned int count)
static int __init q40_debug_setup(char *arg)
early_param("debug", q40_debug_setup);
static int halted;
static void q40_heartbeat(int on)
static void q40_reset(void)
static void q40_halt(void)
static void q40_get_model(char *model)
static unsigned int serports[] =
;
static void q40_disable_irqs(void)
void __init config_q40(void)
int q40_parse_bootinfo(const struct bi_record *rec)
static unsigned long q40_gettimeoffset(void)
static int q40_hwclk(int op, struct rtc_time *t)
static unsigned int q40_get_ss(void)
static int q40_set_clock_mmss(unsigned long nowtime)
#define Q40_RTC_PLL_MASK ((1<<5)-1)
#define Q40_RTC_PLL_SIGN (1<<5)
static int q40_get_rtc_pll(struct rtc_pll_info *pll)
static int q40_set_rtc_pll(struct rtc_pll_info *pll)
