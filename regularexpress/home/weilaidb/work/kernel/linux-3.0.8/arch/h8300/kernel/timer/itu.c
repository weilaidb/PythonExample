#if CONFIG_H8300_ITU_CH == 0
#define ITUBASE	0xffff64
#define ITUIRQ	24
#elif CONFIG_H8300_ITU_CH == 1
#define ITUBASE	0xffff6e
#define ITUIRQ	28
#elif CONFIG_H8300_ITU_CH == 2
#define ITUBASE	0xffff78
#define ITUIRQ	32
#elif CONFIG_H8300_ITU_CH == 3
#define ITUBASE	0xffff82
#define ITUIRQ	36
#elif CONFIG_H8300_ITU_CH == 4
#define ITUBASE	0xffff92
#define ITUIRQ	40
#error Unknown timer channel.
#define TCR	0
#define TIOR	1
#define TIER	2
#define TSR	3
#define TCNT	4
#define GRA	6
#define GRB	8
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction itu_irq = ;
static const int __initdata divide_rate[] = ;
void __init h8300_timer_setup(void)
