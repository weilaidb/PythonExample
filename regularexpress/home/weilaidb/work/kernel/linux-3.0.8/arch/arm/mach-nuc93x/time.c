#define RESETINT	0x01
#define PERIOD		(0x01 << 27)
#define ONESHOT		(0x00 << 27)
#define COUNTEN		(0x01 << 30)
#define INTEN		(0x01 << 29)
#define TICKS_PER_SEC	100
#define PRESCALE	0x63
unsigned int timer0_load;
static unsigned long nuc93x_gettimeoffset(void)
static irqreturn_t nuc93x_timer_interrupt(int irq, void *dev_id)
static struct irqaction nuc93x_timer_irq = ;
static void nuc93x_timer_setup(void)
static void __init nuc93x_timer_init(void)
struct sys_timer nuc93x_timer = ;
