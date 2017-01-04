static struct mcf_platform_uart m5249_uart_platform[] = ;
static struct platform_device m5249_uart = ;
static struct resource m5249_smc91x_resources[] = ;
static struct platform_device m5249_smc91x = ;
#if defined(CONFIG_SPI_COLDFIRE_QSPI) || defined(CONFIG_SPI_COLDFIRE_QSPI_MODULE)
static struct resource m5249_qspi_resources[] = ;
#define MCFQSPI_CS0    29
#define MCFQSPI_CS1    24
#define MCFQSPI_CS2    21
#define MCFQSPI_CS3    22
static int m5249_cs_setup(struct mcfqspi_cs_control *cs_control)
static void m5249_cs_teardown(struct mcfqspi_cs_control *cs_control)
static void m5249_cs_select(struct mcfqspi_cs_control *cs_control,
u8 chip_select, bool cs_high)
static void m5249_cs_deselect(struct mcfqspi_cs_control *cs_control,
u8 chip_select, bool cs_high)
static struct mcfqspi_cs_control m5249_cs_control = ;
static struct mcfqspi_platform_data m5249_qspi_data = ;
static struct platform_device m5249_qspi = ;
static void __init m5249_qspi_init(void)
static struct platform_device *m5249_devices[] __initdata = ;
static void __init m5249_uart_init_line(int line, int irq)
static void __init m5249_uarts_init(void)
static void __init m5249_smc91x_init(void)
static void __init m5249_timers_init(void)
void m5249_cpu_reset(void)
void __init config_BSP(char *commandp, int size)
static int __init init_BSP(void)
arch_initcall(init_BSP);
