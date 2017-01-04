static void __iomem *jz_intc_base;
static uint32_t jz_intc_wakeup;
static uint32_t jz_intc_saved;
#define JZ_REG_INTC_STATUS	0x00
#define JZ_REG_INTC_MASK	0x04
#define JZ_REG_INTC_SET_MASK	0x08
#define JZ_REG_INTC_CLEAR_MASK	0x0c
#define JZ_REG_INTC_PENDING	0x10
#define IRQ_BIT(x) BIT((x) - JZ4740_IRQ_BASE)
static inline unsigned long intc_irq_bit(struct irq_data *data)
static void intc_irq_unmask(struct irq_data *data)
static void intc_irq_mask(struct irq_data *data)
static int intc_irq_set_wake(struct irq_data *data, unsigned int on)
static struct irq_chip intc_irq_type = ;
static irqreturn_t jz4740_cascade(int irq, void *data)
static struct irqaction jz4740_cascade_action = ;
void __init arch_init_irq(void)
asmlinkage void plat_irq_dispatch(void)
void jz4740_intc_suspend(void)
void jz4740_intc_resume(void)
static inline void intc_seq_reg(struct seq_file *s, const char *name,
unsigned int reg)
static int intc_regs_show(struct seq_file *s, void *unused)
static int intc_regs_open(struct inode *inode, struct file *file)
static const struct file_operations intc_regs_operations = ;
static int __init intc_debugfs_init(void)
subsys_initcall(intc_debugfs_init);
