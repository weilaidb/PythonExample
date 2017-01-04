struct sh_mtu2_priv ;
static DEFINE_SPINLOCK(sh_mtu2_lock);
#define TSTR -1
#define TCR  0
#define TMDR 1
#define TIOR 2
#define TIER 3
#define TSR  4
#define TCNT 5
#define TGR  6
static unsigned long mtu2_reg_offs[] = ;
static inline unsigned long sh_mtu2_read(struct sh_mtu2_priv *p, int reg_nr)
static inline void sh_mtu2_write(struct sh_mtu2_priv *p, int reg_nr,
unsigned long value)
static void sh_mtu2_start_stop_ch(struct sh_mtu2_priv *p, int start)
static int sh_mtu2_enable(struct sh_mtu2_priv *p)
static void sh_mtu2_disable(struct sh_mtu2_priv *p)
static irqreturn_t sh_mtu2_interrupt(int irq, void *dev_id)
static struct sh_mtu2_priv *ced_to_sh_mtu2(struct clock_event_device *ced)
static void sh_mtu2_clock_event_mode(enum clock_event_mode mode,
struct clock_event_device *ced)
static void sh_mtu2_register_clockevent(struct sh_mtu2_priv *p,
char *name, unsigned long rating)
static int sh_mtu2_register(struct sh_mtu2_priv *p, char *name,
unsigned long clockevent_rating)
static int sh_mtu2_setup(struct sh_mtu2_priv *p, struct platform_device *pdev)
static int __devinit sh_mtu2_probe(struct platform_device *pdev)
static int __devexit sh_mtu2_remove(struct platform_device *pdev)
static struct platform_driver sh_mtu2_device_driver = ;
static int __init sh_mtu2_init(void)
static void __exit sh_mtu2_exit(void)
early_platform_init("earlytimer", &sh_mtu2_device_driver);
module_init(sh_mtu2_init);
module_exit(sh_mtu2_exit);
MODULE_AUTHOR("Magnus Damm");
MODULE_DESCRIPTION("SuperH MTU2 Timer Driver");
MODULE_LICENSE("GPL v2");
