extern u32 auto_irqhandler_fixup[];
extern u32 user_irqhandler_fixup[];
extern u16 user_irqvec_fixup[];
static struct irq_node *irq_list[NR_IRQS];
static struct irq_controller *irq_controller[NR_IRQS];
static int irq_depth[NR_IRQS];
static int m68k_first_user_vec;
static struct irq_controller auto_irq_controller = ;
static struct irq_controller user_irq_controller = ;
#define NUM_IRQ_NODES 100
static irq_node_t nodes[NUM_IRQ_NODES];
void __init init_IRQ(void)
void __init m68k_setup_auto_interrupt(void (*handler)(unsigned int, struct pt_regs *))
void __init m68k_setup_user_interrupt(unsigned int vec, unsigned int cnt,
void (*handler)(unsigned int, struct pt_regs *))
void m68k_setup_irq_controller(struct irq_controller *contr, unsigned int irq,
unsigned int cnt)
irq_node_t *new_irq_node(void)
int setup_irq(unsigned int irq, struct irq_node *node)
int request_irq(unsigned int irq,
irq_handler_t handler,
unsigned long flags, const char *devname, void *dev_id)
EXPORT_SYMBOL(request_irq);
void free_irq(unsigned int irq, void *dev_id)
EXPORT_SYMBOL(free_irq);
void enable_irq(unsigned int irq)
EXPORT_SYMBOL(enable_irq);
void disable_irq(unsigned int irq)
EXPORT_SYMBOL(disable_irq);
void disable_irq_nosync(unsigned int irq) __attribute__((alias("disable_irq")));
EXPORT_SYMBOL(disable_irq_nosync);
int m68k_irq_startup(unsigned int irq)
void m68k_irq_shutdown(unsigned int irq)
unsigned long probe_irq_on (void)
EXPORT_SYMBOL(probe_irq_on);
int probe_irq_off (unsigned long irqs)
EXPORT_SYMBOL(probe_irq_off);
unsigned int irq_canonicalize(unsigned int irq)
EXPORT_SYMBOL(irq_canonicalize);
asmlinkage void m68k_handle_int(unsigned int irq)
asmlinkage void __m68k_handle_int(unsigned int irq, struct pt_regs *regs)
asmlinkage void handle_badint(struct pt_regs *regs)
int show_interrupts(struct seq_file *p, void *v)
void init_irq_proc(void)
