static struct mcf_platform_uart m54xx_uart_platform[] = ;
static struct platform_device m54xx_uart = ;
static struct platform_device *m54xx_devices[] __initdata = ;
static void __init m54xx_uart_init_line(int line, int irq)
static void __init m54xx_uarts_init(void)
static void mcf54xx_reset(void)
void __init config_BSP(char *commandp, int size)
static int __init init_BSP(void)
arch_initcall(init_BSP);
