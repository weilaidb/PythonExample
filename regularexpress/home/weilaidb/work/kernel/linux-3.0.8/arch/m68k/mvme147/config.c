static void mvme147_get_model(char *model);
extern void mvme147_sched_init(irq_handler_t handler);
extern unsigned long mvme147_gettimeoffset (void);
extern int mvme147_hwclk (int, struct rtc_time *);
extern int mvme147_set_clock_mmss (unsigned long);
extern void mvme147_reset (void);
static int bcd2int (unsigned char b);
irq_handler_t tick_handler;
int mvme147_parse_bootinfo(const struct bi_record *bi)
void mvme147_reset(void)
static void mvme147_get_model(char *model)
void __init mvme147_init_IRQ(void)
void __init config_mvme147(void)
static irqreturn_t mvme147_timer_int (int irq, void *dev_id)
void mvme147_sched_init (irq_handler_t timer_routine)
unsigned long mvme147_gettimeoffset (void)
static int bcd2int (unsigned char b)
int mvme147_hwclk(int op, struct rtc_time *t)
int mvme147_set_clock_mmss (unsigned long nowtime)
static void scc_delay (void)
static void scc_write (char ch)
void m147_scc_write (struct console *co, const char *str, unsigned count)
void mvme147_init_console_port (struct console *co, int cflag)
