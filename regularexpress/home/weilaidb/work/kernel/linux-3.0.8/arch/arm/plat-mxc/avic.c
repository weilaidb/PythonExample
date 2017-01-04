#define AVIC_INTCNTL		0x00
#define AVIC_NIMASK		0x04
#define AVIC_INTENNUM		0x08
#define AVIC_INTDISNUM		0x0C
#define AVIC_INTENABLEH		0x10
#define AVIC_INTENABLEL		0x14
#define AVIC_INTTYPEH		0x18
#define AVIC_INTTYPEL		0x1C
#define AVIC_NIPRIORITY(x)	(0x20 + 4 * (7 - (x)))
#define AVIC_NIVECSR		0x40
#define AVIC_FIVECSR		0x44
#define AVIC_INTSRCH		0x48
#define AVIC_INTSRCL		0x4C
#define AVIC_INTFRCH		0x50
#define AVIC_INTFRCL		0x54
#define AVIC_NIPNDH		0x58
#define AVIC_NIPNDL		0x5C
#define AVIC_FIPNDH		0x60
#define AVIC_FIPNDL		0x64
void __iomem *avic_base;
static int avic_irq_set_priority(unsigned char irq, unsigned char prio)
static int avic_set_irq_fiq(unsigned int irq, unsigned int type)
static void mxc_mask_irq(struct irq_data *d)
static void mxc_unmask_irq(struct irq_data *d)
static struct mxc_irq_chip mxc_avic_chip = ;
void __init mxc_init_irq(void __iomem *irqbase)
