#define INTACK		0xfe4100b8
#define INTACKCLR	0xfe4100bc
#define INTC_USERIMASK	0xfe411000
unsigned int irq_lookup(unsigned int irq)
void irq_finish(unsigned int irq)
static int __init shx3_irq_setup(void)
arch_initcall(shx3_irq_setup);
