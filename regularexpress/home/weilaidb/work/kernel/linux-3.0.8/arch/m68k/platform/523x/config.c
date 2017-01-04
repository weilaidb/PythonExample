static struct mcf_platform_uart m523x_uart_platform[] = ;
static struct platform_device m523x_uart = ;
static struct resource m523x_fec_resources[] = ;
static struct platform_device m523x_fec = ;
#if defined(CONFIG_SPI_COLDFIRE_QSPI) || defined(CONFIG_SPI_COLDFIRE_QSPI_MODULE)
static struct resource m523x_qspi_resources[] = ;
#define MCFQSPI_CS0    91
#define MCFQSPI_CS1    92
#define MCFQSPI_CS2    103
#define MCFQSPI_CS3    99
static int m523x_cs_setup(struct mcfqspi_cs_control *cs_control)
static void m523x_cs_teardown(struct mcfqspi_cs_control *cs_control)
static void m523x_cs_select(struct mcfqspi_cs_control *cs_control,
u8 chip_select, bool cs_high)
static void m523x_cs_deselect(struct mcfqspi_cs_control *cs_control,
u8 chip_select, bool cs_high)
static struct mcfqspi_cs_control m523x_cs_control = ;
static struct mcfqspi_platform_data m523x_qspi_data = ;
static struct platform_device m523x_qspi = ;
static void __init m523x_qspi_init(void)
static struct platform_device *m523x_devices[] __initdata = ;
static void __init m523x_fec_init(void)
static void m523x_cpu_reset(void)
void __init config_BSP(char *commandp, int size)
static int __init init_BSP(void)
arch_initcall(init_BSP);
