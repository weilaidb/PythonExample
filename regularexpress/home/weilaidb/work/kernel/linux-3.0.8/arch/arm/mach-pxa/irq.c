#define IRQ_BASE		(void __iomem *)io_p2v(0x40d00000)
#define ICIP			(0x000)
#define ICMR			(0x004)
#define ICLR			(0x008)
#define ICFR			(0x00c)
#define ICPR			(0x010)
#define ICCR			(0x014)
#define ICHP			(0x018)
#define IPR(i)			(((i) < 32) ? (0x01c + ((i) << 2)) :		\
((i) < 64) ? (0x0b0 + (((i) - 32) << 2)) :	\
(0x144 + (((i) - 64) << 2)))
#define IPR_VALID		(1 << 31)
#define IRQ_BIT(n)		(((n) - PXA_IRQ(0)) & 0x1f)
#define MAX_INTERNAL_IRQS	128
static int pxa_internal_irq_nr;
static inline int cpu_has_ipr(void)
static inline void __iomem *irq_base(int i)
static void pxa_mask_irq(struct irq_data *d)
static void pxa_unmask_irq(struct irq_data *d)
static struct irq_chip pxa_internal_irq_chip = ;
static int pxa_set_low_gpio_type(struct irq_data *d, unsigned int type)
static void pxa_ack_low_gpio(struct irq_data *d)
static struct irq_chip pxa_low_gpio_chip = ;
static void __init pxa_init_low_gpio_irq(set_wake_t fn)
void __init pxa_init_irq(int irq_nr, set_wake_t fn)
static unsigned long saved_icmr[MAX_INTERNAL_IRQS/32];
static unsigned long saved_ipr[MAX_INTERNAL_IRQS];
static int pxa_irq_suspend(void)
static void pxa_irq_resume(void)
#define pxa_irq_suspend		NULL
#define pxa_irq_resume		NULL
struct syscore_ops pxa_irq_syscore_ops = ;
