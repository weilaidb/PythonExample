#if CONFIG_H8300_TPU_CH == 0
#define TPUBASE	0xffffd0
#define TPUIRQ	40
#elif CONFIG_H8300_TPU_CH == 1
#define TPUBASE	0xffffe0
#define TPUIRQ	48
#elif CONFIG_H8300_TPU_CH == 2
#define TPUBASE	0xfffff0
#define TPUIRQ	52
#elif CONFIG_H8300_TPU_CH == 3
#define TPUBASE	0xfffe80
#define TPUIRQ	56
#elif CONFIG_H8300_TPU_CH == 4
#define TPUBASE	0xfffe90
#define TPUIRQ	64
#error Unknown timer channel.
#define _TCR	0
#define _TMDR	1
#define _TIOR	2
#define _TIER	4
#define _TSR	5
#define _TCNT	6
#define _GRA	8
#define _GRB	10
#define CCLR0	0x20
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction tpu_irq = ;
static const int __initdata divide_rate[] = ;
void __init h8300_timer_setup(void)
