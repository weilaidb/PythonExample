static void icu_mask_irq(struct irq_data *d)
static void icu_unmask_irq(struct irq_data *d)
static struct irq_chip icu_irq_chip = ;
static void pmic_irq_ack(struct irq_data *d)
#define SECOND_IRQ_MASK(_name_, irq_base, prefix)			\
static void _name_##_mask_irq(struct irq_data *d)			\
#define SECOND_IRQ_UNMASK(_name_, irq_base, prefix)			\
static void _name_##_unmask_irq(struct irq_data *d)			\
#define SECOND_IRQ_DEMUX(_name_, irq_base, prefix)			\
static void _name_##_irq_demux(unsigned int irq, struct irq_desc *desc)	\
#define SECOND_IRQ_CHIP(_name_, irq_base, prefix)			\
SECOND_IRQ_MASK(_name_, irq_base, prefix)				\
SECOND_IRQ_UNMASK(_name_, irq_base, prefix)				\
SECOND_IRQ_DEMUX(_name_, irq_base, prefix)				\
static struct irq_chip _name_##_irq_chip =
SECOND_IRQ_CHIP(pmic, IRQ_MMP2_PMIC_BASE, MMP2_ICU_INT4);
SECOND_IRQ_CHIP(rtc,  IRQ_MMP2_RTC_BASE,  MMP2_ICU_INT5);
SECOND_IRQ_CHIP(twsi, IRQ_MMP2_TWSI_BASE, MMP2_ICU_INT17);
SECOND_IRQ_CHIP(misc, IRQ_MMP2_MISC_BASE, MMP2_ICU_INT35);
SECOND_IRQ_CHIP(ssp,  IRQ_MMP2_SSP_BASE,  MMP2_ICU_INT51);
static void init_mux_irq(struct irq_chip *chip, int start, int num)
void __init mmp2_init_icu(void)
