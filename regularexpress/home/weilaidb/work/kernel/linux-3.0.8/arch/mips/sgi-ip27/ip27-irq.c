#undef DEBUG
extern asmlinkage void ip27_irq(void);
extern struct bridge_controller *irq_to_bridge[];
extern int irq_to_slot[];
#define IRQ_TO_BRIDGE(i)		irq_to_bridge[(i)]
#define	SLOT_FROM_PCI_IRQ(i)		irq_to_slot[i]
static inline int alloc_level(int cpu, int irq)
static inline int find_level(cpuid_t *cpunum, int irq)
static int ms1bit(unsigned long x)
static void ip27_do_irq_mask0(void)
static void ip27_do_irq_mask1(void)
static void ip27_prof_timer(void)
static void ip27_hub_error(void)
static int intr_connect_level(int cpu, int bit)
static int intr_disconnect_level(int cpu, int bit)
static unsigned int startup_bridge_irq(struct irq_data *d)
static void shutdown_bridge_irq(struct irq_data *d)
static inline void enable_bridge_irq(struct irq_data *d)
static inline void disable_bridge_irq(struct irq_data *d)
static struct irq_chip bridge_irq_type = ;
void __devinit register_bridge_irq(unsigned int irq)
int __devinit request_bridge_irq(struct bridge_controller *bc)
asmlinkage void plat_irq_dispatch(void)
void __init arch_init_irq(void)
void install_ipi(void)
