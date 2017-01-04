#define	AT91_TC_CLK0BASE	0
#define	AT91_TC_CLK1BASE	0x40
#define	AT91_TC_CLK2BASE	0x80
static unsigned long at91x40_gettimeoffset(void)
static irqreturn_t at91x40_timer_interrupt(int irq, void *dev_id)
static struct irqaction at91x40_timer_irq = ;
void __init at91x40_timer_init(void)
struct sys_timer at91x40_timer = ;
