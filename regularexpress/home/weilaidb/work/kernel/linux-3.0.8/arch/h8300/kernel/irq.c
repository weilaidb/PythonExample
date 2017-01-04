extern unsigned long *interrupt_redirect_table;
extern const int h8300_saved_vectors[];
extern const h8300_vector h8300_trap_table[];
int h8300_enable_irq_pin(unsigned int irq);
void h8300_disable_irq_pin(unsigned int irq);
#define CPU_VECTOR ((unsigned long *)0x000000)
#define ADDR_MASK (0xffffff)
static inline int is_ext_irq(unsigned int irq)
static void h8300_enable_irq(struct irq_data *data)
static void h8300_disable_irq(struct irq_data *data)
static unsigned int h8300_startup_irq(struct irq_data *data)
static void h8300_shutdown_irq(struct irq_data *data)
struct irq_chip h8300irq_chip = ;
#if defined(CONFIG_RAMKERNEL)
static unsigned long __init *get_vector_address(void)
static void __init setup_vector(void)
#define setup_vector() do  while(0)
void __init init_IRQ(void)
asmlinkage void do_IRQ(int irq)
