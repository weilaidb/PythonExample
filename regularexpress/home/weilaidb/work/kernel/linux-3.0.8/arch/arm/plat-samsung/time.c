static unsigned long timer_startval;
static unsigned long timer_usec_ticks;
#define TICK_MAX (0xffff)
#define TIMER_USEC_SHIFT 16
static inline unsigned long
timer_mask_usec_ticks(unsigned long scaler, unsigned long pclk)
static inline unsigned long timer_ticks_to_usec(unsigned long ticks)
static unsigned long s3c2410_gettimeoffset (void)
static irqreturn_t
s3c2410_timer_interrupt(int irq, void *dev_id)
static struct irqaction s3c2410_timer_irq = ;
#define use_tclk1_12() ( \
machine_is_bast()	|| \
machine_is_vr1000()	|| \
machine_is_anubis()	|| \
machine_is_osiris())
static struct clk *tin;
static struct clk *tdiv;
static struct clk *timerclk;
static void s3c2410_timer_setup (void)
static void __init s3c2410_timer_resources(void)
static void __init s3c2410_timer_init(void)
struct sys_timer s3c24xx_timer = ;
