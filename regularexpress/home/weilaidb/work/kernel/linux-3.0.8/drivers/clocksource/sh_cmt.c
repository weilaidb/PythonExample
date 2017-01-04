struct sh_cmt_priv ;
static DEFINE_SPINLOCK(sh_cmt_lock);
#define CMSTR -1
#define CMCSR 0
#define CMCNT 1
#define CMCOR 2
static inline unsigned long sh_cmt_read(struct sh_cmt_priv *p, int reg_nr)
static inline void sh_cmt_write(struct sh_cmt_priv *p, int reg_nr,
unsigned long value)
static unsigned long sh_cmt_get_counter(struct sh_cmt_priv *p,
int *has_wrapped)
static void sh_cmt_start_stop_ch(struct sh_cmt_priv *p, int start)
static int sh_cmt_enable(struct sh_cmt_priv *p, unsigned long *rate)
static void sh_cmt_disable(struct sh_cmt_priv *p)
#define FLAG_CLOCKEVENT (1 << 0)
#define FLAG_CLOCKSOURCE (1 << 1)
#define FLAG_REPROGRAM (1 << 2)
#define FLAG_SKIPEVENT (1 << 3)
#define FLAG_IRQCONTEXT (1 << 4)
static void sh_cmt_clock_event_program_verify(struct sh_cmt_priv *p,
int absolute)
static void __sh_cmt_set_next(struct sh_cmt_priv *p, unsigned long delta)
static void sh_cmt_set_next(struct sh_cmt_priv *p, unsigned long delta)
static irqreturn_t sh_cmt_interrupt(int irq, void *dev_id)
static int sh_cmt_start(struct sh_cmt_priv *p, unsigned long flag)
static void sh_cmt_stop(struct sh_cmt_priv *p, unsigned long flag)
static struct sh_cmt_priv *cs_to_sh_cmt(struct clocksource *cs)
static cycle_t sh_cmt_clocksource_read(struct clocksource *cs)
static int sh_cmt_clocksource_enable(struct clocksource *cs)
static void sh_cmt_clocksource_disable(struct clocksource *cs)
static void sh_cmt_clocksource_resume(struct clocksource *cs)
static int sh_cmt_register_clocksource(struct sh_cmt_priv *p,
char *name, unsigned long rating)
static struct sh_cmt_priv *ced_to_sh_cmt(struct clock_event_device *ced)
static void sh_cmt_clock_event_start(struct sh_cmt_priv *p, int periodic)
static void sh_cmt_clock_event_mode(enum clock_event_mode mode,
struct clock_event_device *ced)
static int sh_cmt_clock_event_next(unsigned long delta,
struct clock_event_device *ced)
static void sh_cmt_register_clockevent(struct sh_cmt_priv *p,
char *name, unsigned long rating)
static int sh_cmt_register(struct sh_cmt_priv *p, char *name,
unsigned long clockevent_rating,
unsigned long clocksource_rating)
static int sh_cmt_setup(struct sh_cmt_priv *p, struct platform_device *pdev)
static int __devinit sh_cmt_probe(struct platform_device *pdev)
static int __devexit sh_cmt_remove(struct platform_device *pdev)
static struct platform_driver sh_cmt_device_driver = ;
static int __init sh_cmt_init(void)
static void __exit sh_cmt_exit(void)
early_platform_init("earlytimer", &sh_cmt_device_driver);
module_init(sh_cmt_init);
module_exit(sh_cmt_exit);
MODULE_AUTHOR("Magnus Damm");
MODULE_DESCRIPTION("SuperH CMT Timer Driver");
MODULE_LICENSE("GPL v2");
