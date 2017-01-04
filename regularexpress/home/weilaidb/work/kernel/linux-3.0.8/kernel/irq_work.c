#define IRQ_WORK_PENDING	1UL
#define IRQ_WORK_BUSY		2UL
#define IRQ_WORK_FLAGS		3UL
static inline bool irq_work_is_set(struct irq_work *entry, int flags)
static inline struct irq_work *irq_work_next(struct irq_work *entry)
static inline struct irq_work *next_flags(struct irq_work *entry, int flags)
static DEFINE_PER_CPU(struct irq_work *, irq_work_list);
static bool irq_work_claim(struct irq_work *entry)
void __weak arch_irq_work_raise(void)
static void __irq_work_queue(struct irq_work *entry)
bool irq_work_queue(struct irq_work *entry)
EXPORT_SYMBOL_GPL(irq_work_queue);
void irq_work_run(void)
EXPORT_SYMBOL_GPL(irq_work_run);
void irq_work_sync(struct irq_work *entry)
EXPORT_SYMBOL_GPL(irq_work_sync);
