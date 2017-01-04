#if CONFIG_H8300_TIMER16_CH == 0
#define _16BASE	0xffff78
#define _16IRQ	24
#elif CONFIG_H8300_TIMER16_CH == 1
#define _16BASE	0xffff80
#define _16IRQ	28
#elif CONFIG_H8300_TIMER16_CH == 2
#define _16BASE	0xffff88
#define _16IRQ	32
#error Unknown timer channel.
#define TCR	0
#define TIOR	1
#define TCNT	2
#define GRA	4
#define GRB	6
#define H8300_TIMER_FREQ CONFIG_CPU_CLOCK*10000
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction timer16_irq = ;
static const int __initdata divide_rate[] = ;
void __init h8300_timer_setup(void)
