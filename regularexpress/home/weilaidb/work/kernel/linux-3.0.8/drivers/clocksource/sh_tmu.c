struct sh_tmu_priv ;
static DEFINE_SPINLOCK(sh_tmu_lock);
#define TSTR -1
#define TCOR  0
#define TCNT 1
#define TCR 2
static inline unsigned long sh_tmu_read(struct sh_tmu_priv *p, int reg_nr)
static inline void sh_tmu_write(struct sh_tmu_priv *p, int reg_nr,
unsigned long value)
static void sh_tmu_start_stop_ch(struct sh_tmu_priv *p, int start)
static int sh_tmu_enable(struct sh_tmu_priv *p)
static void sh_tmu_disable(struct sh_tmu_priv *p)
static void sh_tmu_set_next(struct sh_tmu_priv *p, unsigned long delta,
int periodic)
static irqreturn_t sh_tmu_interrupt(int irq, void *dev_id)
static struct sh_tmu_priv *cs_to_sh_tmu(struct clocksource *cs)
static cycle_t sh_tmu_clocksource_read(struct clocksource *cs)
static int sh_tmu_clocksource_enable(struct clocksource *cs)
static void sh_tmu_clocksource_disable(struct clocksource *cs)
static int sh_tmu_register_clocksource(struct sh_tmu_priv *p,
char *name, unsigned long rating)
static struct sh_tmu_priv *ced_to_sh_tmu(struct clock_event_device *ced)
static void sh_tmu_clock_event_start(struct sh_tmu_priv *p, int periodic)
static void sh_tmu_clock_event_mode(enum clock_event_mode mode,
struct clock_event_device *ced)
static int sh_tmu_clock_event_next(unsigned long delta,
struct clock_event_device *ced)
static void sh_tmu_register_clockevent(struct sh_tmu_priv *p,
char *name, unsigned long rating)
static int sh_tmu_register(struct sh_tmu_priv *p, char *name,
unsigned long clockevent_rating,
unsigned long clocksource_rating)
static int sh_tmu_setup(struct sh_tmu_priv *p, struct platform_device *pdev)
static int __devinit sh_tmu_probe(struct platform_device *pdev)
static int __devexit sh_tmu_remove(struct platform_device *pdev)
static struct platform_driver sh_tmu_device_driver = ;
static int __init sh_tmu_init(void)
static void __exit sh_tmu_exit(void)
early_platform_init("earlytimer", &sh_tmu_device_driver);
module_init(sh_tmu_init);
module_exit(sh_tmu_exit);
MODULE_AUTHOR("Magnus Damm");
MODULE_DESCRIPTION("SuperH TMU Timer Driver");
MODULE_LICENSE("GPL v2");
