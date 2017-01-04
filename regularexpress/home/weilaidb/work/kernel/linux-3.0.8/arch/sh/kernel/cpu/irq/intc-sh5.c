#define	INTC_BLOCK_OFFSET	0x01000000
#define INTC_BASE		PHYS_PERIPHERAL_BLOCK + \
INTC_BLOCK_OFFSET
#define INTC_ICR_SET		(intc_virt + 0x0)
#define INTC_ICR_CLEAR		(intc_virt + 0x8)
#define INTC_INTPRI_0		(intc_virt + 0x10)
#define INTC_INTSRC_0		(intc_virt + 0x50)
#define INTC_INTSRC_1		(intc_virt + 0x58)
#define INTC_INTREQ_0		(intc_virt + 0x60)
#define INTC_INTREQ_1		(intc_virt + 0x68)
#define INTC_INTENB_0		(intc_virt + 0x70)
#define INTC_INTENB_1		(intc_virt + 0x78)
#define INTC_INTDSB_0		(intc_virt + 0x80)
#define INTC_INTDSB_1		(intc_virt + 0x88)
#define INTC_ICR_IRLM		0x1
#define	INTC_INTPRI_PREGS	8
#define	INTC_INTPRI_PPREG	8
int intc_evt_to_irq[(0xE20/0x20)+1] = ;
static unsigned long intc_virt;
static int irlm;
static void enable_intc_irq(struct irq_data *data)
static void disable_intc_irq(struct irq_data *data)
static struct irq_chip intc_irq_type = ;
void __init plat_irq_setup(void)
