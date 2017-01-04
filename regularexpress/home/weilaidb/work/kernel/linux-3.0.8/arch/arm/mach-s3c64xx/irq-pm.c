static struct sleep_save irq_save[] = ;
static struct irq_grp_save  eint_grp_save[5];
static u32 irq_uart_mask[CONFIG_SERIAL_SAMSUNG_UARTS];
static int s3c64xx_irq_pm_suspend(void)
static void s3c64xx_irq_pm_resume(void)
struct syscore_ops s3c64xx_irq_syscore_ops = ;
static __init int s3c64xx_syscore_init(void)
core_initcall(s3c64xx_syscore_init);
