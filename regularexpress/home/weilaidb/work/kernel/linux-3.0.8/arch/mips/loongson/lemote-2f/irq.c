#define LOONGSON_TIMER_IRQ	(MIPS_CPU_IRQ_BASE + 7)
#define LOONGSON_NORTH_BRIDGE_IRQ	(MIPS_CPU_IRQ_BASE + 6)
#define LOONGSON_UART_IRQ	(MIPS_CPU_IRQ_BASE + 3)
#define LOONGSON_SOUTH_BRIDGE_IRQ	(MIPS_CPU_IRQ_BASE + 2)
#define LOONGSON_INT_BIT_INT0		(1 << 11)
#define LOONGSON_INT_BIT_INT1		(1 << 12)
int mach_i8259_irq(void)
EXPORT_SYMBOL(mach_i8259_irq);
static void i8259_irqdispatch(void)
void mach_irq_dispatch(unsigned int pending)
static irqreturn_t ip6_action(int cpl, void *dev_id)
struct irqaction ip6_irqaction = ;
struct irqaction cascade_irqaction = ;
void __init mach_init_irq(void)
