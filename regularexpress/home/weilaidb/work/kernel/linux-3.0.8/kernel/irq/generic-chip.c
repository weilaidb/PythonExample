static LIST_HEAD(gc_list);
static DEFINE_RAW_SPINLOCK(gc_lock);
static inline struct irq_chip_regs *cur_regs(struct irq_data *d)
void irq_gc_noop(struct irq_data *d)
void irq_gc_mask_disable_reg(struct irq_data *d)
void irq_gc_mask_set_bit(struct irq_data *d)
void irq_gc_mask_clr_bit(struct irq_data *d)
void irq_gc_unmask_enable_reg(struct irq_data *d)
void irq_gc_ack_set_bit(struct irq_data *d)
void irq_gc_ack_clr_bit(struct irq_data *d)
void irq_gc_mask_disable_reg_and_ack(struct irq_data *d)
void irq_gc_eoi(struct irq_data *d)
int irq_gc_set_wake(struct irq_data *d, unsigned int on)
struct irq_chip_generic *
irq_alloc_generic_chip(const char *name, int num_ct, unsigned int irq_base,
void __iomem *reg_base, irq_flow_handler_t handler)
static struct lock_class_key irq_nested_lock_class;
void irq_setup_generic_chip(struct irq_chip_generic *gc, u32 msk,
enum irq_gc_flags flags, unsigned int clr,
unsigned int set)
int irq_setup_alt_chip(struct irq_data *d, unsigned int type)
void irq_remove_generic_chip(struct irq_chip_generic *gc, u32 msk,
unsigned int clr, unsigned int set)
static int irq_gc_suspend(void)
static void irq_gc_resume(void)
#define irq_gc_suspend NULL
#define irq_gc_resume NULL
static void irq_gc_shutdown(void)
static struct syscore_ops irq_gc_syscore_ops = ;
static int __init irq_gc_init_ops(void)
device_initcall(irq_gc_init_ops);
