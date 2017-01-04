struct irq_class ;
static const struct irq_class intrclass_names[] = ;
int show_interrupts(struct seq_file *p, void *v)
void __init init_IRQ(void)
asmlinkage void do_softirq(void)
void init_irq_proc(void)
struct ext_int_info ;
static struct ext_int_info *ext_int_hash[256];
static inline int ext_hash(u16 code)
int register_external_interrupt(u16 code, ext_int_handler_t handler)
EXPORT_SYMBOL(register_external_interrupt);
int unregister_external_interrupt(u16 code, ext_int_handler_t handler)
EXPORT_SYMBOL(unregister_external_interrupt);
void __irq_entry do_extint(struct pt_regs *regs, unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static DEFINE_SPINLOCK(sc_irq_lock);
static int sc_irq_refcount;
void service_subclass_irq_register(void)
EXPORT_SYMBOL(service_subclass_irq_register);
void service_subclass_irq_unregister(void)
EXPORT_SYMBOL(service_subclass_irq_unregister);
