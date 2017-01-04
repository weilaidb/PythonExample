#define COMBINER_ENABLE_SET	0x0
#define COMBINER_ENABLE_CLEAR	0x4
#define COMBINER_INT_STATUS	0xC
static DEFINE_SPINLOCK(irq_controller_lock);
struct combiner_chip_data ;
static struct combiner_chip_data combiner_data[MAX_COMBINER_NR];
static inline void __iomem *combiner_base(struct irq_data *data)
static void combiner_mask_irq(struct irq_data *data)
static void combiner_unmask_irq(struct irq_data *data)
static void combiner_handle_cascade_irq(unsigned int irq, struct irq_desc *desc)
static struct irq_chip combiner_chip = ;
void __init combiner_cascade_irq(unsigned int combiner_nr, unsigned int irq)
void __init combiner_init(unsigned int combiner_nr, void __iomem *base,
unsigned int irq_start)
