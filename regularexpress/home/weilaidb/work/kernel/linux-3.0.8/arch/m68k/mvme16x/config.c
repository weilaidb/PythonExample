extern t_bdid mvme_bdid;
static MK48T08ptr_t volatile rtc = (MK48T08ptr_t)MVME_RTC_BASE;
static void mvme16x_get_model(char *model);
extern void mvme16x_sched_init(irq_handler_t handler);
extern unsigned long mvme16x_gettimeoffset (void);
extern int mvme16x_hwclk (int, struct rtc_time *);
extern int mvme16x_set_clock_mmss (unsigned long);
extern void mvme16x_reset (void);
int bcd2int (unsigned char b);
static irq_handler_t tick_handler;
unsigned short mvme16x_config;
EXPORT_SYMBOL(mvme16x_config);
int mvme16x_parse_bootinfo(const struct bi_record *bi)
void mvme16x_reset(void)
static void mvme16x_get_model(char *model)
static void mvme16x_get_hardware_list(struct seq_file *m)
static void __init mvme16x_init_IRQ (void)
#define pcc2chip	((volatile u_char *)0xfff42000)
#define PccSCCMICR	0x1d
#define PccSCCTICR	0x1e
#define PccSCCRICR	0x1f
void __init config_mvme16x(void)
static irqreturn_t mvme16x_abort_int (int irq, void *dev_id)
static irqreturn_t mvme16x_timer_int (int irq, void *dev_id)
void mvme16x_sched_init (irq_handler_t timer_routine)
unsigned long mvme16x_gettimeoffset (void)
int bcd2int (unsigned char b)
int mvme16x_hwclk(int op, struct rtc_time *t)
int mvme16x_set_clock_mmss (unsigned long nowtime)
