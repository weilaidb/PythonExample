const char bfin_board_name[] = "Tepla-BF561";
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_SERIAL_BFIN) || defined(CONFIG_SERIAL_BFIN_MODULE)
static struct resource bfin_uart0_resources[] = ;
static unsigned short bfin_uart0_peripherals[] = ;
static struct platform_device bfin_uart0_device = ;
#if defined(CONFIG_BFIN_SIR) || defined(CONFIG_BFIN_SIR_MODULE)
static struct resource bfin_sir0_resources[] = ;
static struct platform_device bfin_sir0_device = ;
static struct platform_device *tepla_devices[] __initdata = ;
static int __init tepla_init(void)
arch_initcall(tepla_init);
static struct platform_device *tepla_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
