#if defined(CONFIG_CPU_H8300H)
#if defined(CONFIG_CPU_H8S)
#define CMFA	6
#if defined(CONFIG_H8300_TIMER8_CH0)
#define _8BASE	_8TCR0
#define _8IRQ	36
#define _8IRQ	72
#elif defined(CONFIG_H8300_TIMER8_CH2)
#define _8BASE	_8TCR2
#define _8IRQ	40
#error Unknown timer channel.
#define _8TCR	0
#define _8TCSR	2
#define TCORA	4
#define TCORB	6
#define _8TCNT	8
#define CMIEA	0x40
#define CCLR_CMA 0x08
#define CKS2	0x04
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction timer8_irq = ;
static const int __initdata divide_rate[] = ;
void __init h8300_timer_setup(void)
