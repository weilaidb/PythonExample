#define MV64X60_IC_MAIN_CAUSE_LO	0x0004
#define MV64X60_IC_MAIN_CAUSE_HI	0x000c
#define MV64X60_IC_CPU0_INTR_MASK_LO	0x0014
#define MV64X60_IC_CPU0_INTR_MASK_HI	0x001c
#define MV64X60_IC_CPU0_SELECT_CAUSE	0x0024
#define MV64X60_HIGH_GPP_GROUPS		0x0f000000
#define MV64X60_SELECT_CAUSE_HIGH	0x40000000
#define MV64x60_GPP_INTR_CAUSE		0x0008
#define MV64x60_GPP_INTR_MASK		0x000c
#define MV64x60_LEVEL1_LOW		0
#define MV64x60_LEVEL1_HIGH		1
#define MV64x60_LEVEL1_GPP		2
#define MV64x60_LEVEL1_MASK		0x00000060
#define MV64x60_LEVEL1_OFFSET		5
#define MV64x60_LEVEL2_MASK		0x0000001f
#define MV64x60_NUM_IRQS		96
static DEFINE_SPINLOCK(mv64x60_lock);
static void __iomem *mv64x60_irq_reg_base;
static void __iomem *mv64x60_gpp_reg_base;
static u32 mv64x60_cached_low_mask;
static u32 mv64x60_cached_high_mask = MV64X60_HIGH_GPP_GROUPS;
static u32 mv64x60_cached_gpp_mask;
static struct irq_host *mv64x60_irq_host;
static void mv64x60_mask_low(struct irq_data *d)
static void mv64x60_unmask_low(struct irq_data *d)
static struct irq_chip mv64x60_chip_low = ;
static void mv64x60_mask_high(struct irq_data *d)
static void mv64x60_unmask_high(struct irq_data *d)
static struct irq_chip mv64x60_chip_high = ;
static void mv64x60_mask_gpp(struct irq_data *d)
static void mv64x60_mask_ack_gpp(struct irq_data *d)
static void mv64x60_unmask_gpp(struct irq_data *d)
static struct irq_chip mv64x60_chip_gpp = ;
static struct irq_chip *mv64x60_chips[] = ;
static int mv64x60_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hwirq)
static struct irq_host_ops mv64x60_host_ops = ;
void __init mv64x60_init_irq(void)
unsigned int mv64x60_get_irq(void)
