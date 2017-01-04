#define INTC_REVISION		0x0000
#define INTC_SYSCONFIG		0x0010
#define INTC_SYSSTATUS		0x0014
#define INTC_SIR		0x0040
#define INTC_CONTROL		0x0048
#define INTC_PROTECTION		0x004C
#define INTC_IDLE		0x0050
#define INTC_THRESHOLD		0x0068
#define INTC_MIR0		0x0084
#define INTC_MIR_CLEAR0		0x0088
#define INTC_MIR_SET0		0x008c
#define INTC_PENDING_IRQ0	0x0098
#define IRQ_BITS_PER_REG	32
static struct omap_irq_bank  __attribute__ ((aligned(4))) irq_banks[] = ;
struct omap3_intc_regs ;
static void intc_bank_write_reg(u32 val, struct omap_irq_bank *bank, u16 reg)
static u32 intc_bank_read_reg(struct omap_irq_bank *bank, u16 reg)
static void omap_ack_irq(struct irq_data *d)
static void omap_mask_ack_irq(struct irq_data *d)
static void __init omap_irq_bank_init_one(struct omap_irq_bank *bank)
int omap_irq_pending(void)
static __init void
omap_alloc_gc(void __iomem *base, unsigned int irq_start, unsigned int num)
void __init omap_init_irq(void)
static struct omap3_intc_regs intc_context[ARRAY_SIZE(irq_banks)];
void omap_intc_save_context(void)
void omap_intc_restore_context(void)
void omap3_intc_suspend(void)
void omap3_intc_prepare_idle(void)
void omap3_intc_resume_idle(void)
