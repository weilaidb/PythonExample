void (*sni_hwint)(void);
asmlinkage void plat_irq_dispatch(void)
static irqreturn_t sni_isa_irq_handler(int dummy, void *p)
struct irqaction sni_isa_irq = ;
void __init arch_init_irq(void)
