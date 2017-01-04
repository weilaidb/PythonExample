static struct mcf_platform_uart m5206e_uart_platform[] = ;
static struct platform_device m5206e_uart = ;
static struct platform_device *m5206e_devices[] __initdata = ;
static void __init m5206e_uart_init_line(int line, int irq)
static void __init m5206e_uarts_init(void)
static void __init m5206e_timers_init(void)
void m5206e_cpu_reset(void)
void __init config_BSP(char *commandp, int size)
static int __init init_BSP(void)
arch_initcall(init_BSP);
