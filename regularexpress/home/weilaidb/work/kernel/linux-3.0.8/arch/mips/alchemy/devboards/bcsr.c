static struct bcsr_reg  bcsr_regs[BCSR_CNT];
static void __iomem *bcsr_virt;
static int bcsr_csc_base;
void __init bcsr_init(unsigned long bcsr1_phys, unsigned long bcsr2_phys)
unsigned short bcsr_read(enum bcsr_id reg)
EXPORT_SYMBOL_GPL(bcsr_read);
void bcsr_write(enum bcsr_id reg, unsigned short val)
EXPORT_SYMBOL_GPL(bcsr_write);
void bcsr_mod(enum bcsr_id reg, unsigned short clr, unsigned short set)
EXPORT_SYMBOL_GPL(bcsr_mod);
static void bcsr_csc_handler(unsigned int irq, struct irq_desc *d)
static void bcsr_irq_mask(struct irq_data *d)
static void bcsr_irq_maskack(struct irq_data *d)
static void bcsr_irq_unmask(struct irq_data *d)
static struct irq_chip bcsr_irq_type = ;
void __init bcsr_init_irq(int csc_start, int csc_end, int hook_irq)
