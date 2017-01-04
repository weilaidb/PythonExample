#define TZIC_INTCNTL	0x0000
#define TZIC_INTTYPE	0x0004
#define TZIC_IMPID	0x0008
#define TZIC_PRIOMASK	0x000C
#define TZIC_SYNCCTRL	0x0010
#define TZIC_DSMINT	0x0014
#define TZIC_INTSEC0(i)	(0x0080 + ((i) << 2))
#define TZIC_ENSET0(i)	(0x0100 + ((i) << 2))
#define TZIC_ENCLEAR0(i) (0x0180 + ((i) << 2))
#define TZIC_SRCSET0	0x0200
#define TZIC_SRCCLAR0	0x0280
#define TZIC_PRIORITY0	0x0400
#define TZIC_PND0	0x0D00
#define TZIC_HIPND0	0x0D80
#define TZIC_WAKEUP0(i)	(0x0E00 + ((i) << 2))
#define TZIC_SWINT	0x0F00
#define TZIC_ID0	0x0FD0
void __iomem *tzic_base;
static int tzic_set_irq_fiq(unsigned int irq, unsigned int type)
static void tzic_mask_irq(struct irq_data *d)
static void tzic_unmask_irq(struct irq_data *d)
static unsigned int wakeup_intr[4];
static int tzic_set_wake_irq(struct irq_data *d, unsigned int enable)
static struct mxc_irq_chip mxc_tzic_chip = ;
void __init tzic_init_irq(void __iomem *irqbase)
int tzic_enable_wake(int is_idle)
