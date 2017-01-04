static void bvme6000_get_model(char *model);
extern void bvme6000_sched_init(irq_handler_t handler);
extern unsigned long bvme6000_gettimeoffset (void);
extern int bvme6000_hwclk (int, struct rtc_time *);
extern int bvme6000_set_clock_mmss (unsigned long);
extern void bvme6000_reset (void);
void bvme6000_set_vectors (void);
static irq_handler_t tick_handler;
int bvme6000_parse_bootinfo(const struct bi_record *bi)
void bvme6000_reset(void)
static void bvme6000_get_model(char *model)
static void __init bvme6000_init_IRQ(void)
void __init config_bvme6000(void)
irqreturn_t bvme6000_abort_int (int irq, void *dev_id)
static irqreturn_t bvme6000_timer_int (int irq, void *dev_id)
void bvme6000_sched_init (irq_handler_t timer_routine)
unsigned long bvme6000_gettimeoffset (void)
int bvme6000_hwclk(int op, struct rtc_time *t)
int bvme6000_set_clock_mmss (unsigned long nowtime)
