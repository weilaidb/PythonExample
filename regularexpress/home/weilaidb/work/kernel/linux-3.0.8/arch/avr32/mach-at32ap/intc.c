struct intc ;
extern struct platform_device at32_intc0_device;
static void intc_mask_irq(struct irq_data *d)
static void intc_unmask_irq(struct irq_data *d)
static struct intc intc0 = ;
asmlinkage void do_IRQ(int level, struct pt_regs *regs)
void __init init_IRQ(void)
void intc_set_suspend_handler(unsigned long offset)
static int intc_suspend(void)
static void intc_resume(void)
#define intc_suspend	NULL
#define intc_resume	NULL
static struct syscore_ops intc_syscore_ops = ;
static int __init intc_init_syscore(void)
device_initcall(intc_init_syscore);
unsigned long intc_get_pending(unsigned int group)
EXPORT_SYMBOL_GPL(intc_get_pending);
