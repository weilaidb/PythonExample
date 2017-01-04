static struct resource collie_scoop_resources[] = ;
static struct scoop_config collie_scoop_setup = ;
struct platform_device colliescoop_device = ;
static struct scoop_pcmcia_dev collie_pcmcia_scoop[] = ;
static struct scoop_pcmcia_config collie_pcmcia_config = ;
static struct mcp_plat_data collie_mcp_data = ;
static int collie_power_init(struct device *dev)
static void collie_power_exit(struct device *dev)
static int collie_power_ac_online(void)
static char *collie_ac_supplied_to[] = ;
static struct pda_power_pdata collie_power_data = ;
static struct resource collie_power_resource[] = ;
static struct platform_device collie_power_device = ;
struct platform_device collie_locomo_device;
static void collie_uart_set_mctrl(struct uart_port *port, u_int mctrl)
static u_int collie_uart_get_mctrl(struct uart_port *port)
static struct sa1100_port_fns collie_port_fns __initdata = ;
static int collie_uart_probe(struct locomo_dev *dev)
static int collie_uart_remove(struct locomo_dev *dev)
static struct locomo_driver collie_uart_driver = ;
static int __init collie_uart_init(void)
device_initcall(collie_uart_init);
static struct resource locomo_resources[] = ;
static struct locomo_platform_data locomo_info = ;
struct platform_device collie_locomo_device = ;
static struct platform_device *devices[] __initdata = ;
static struct mtd_partition collie_partitions[] = ;
static int collie_flash_init(void)
static void collie_set_vpp(int vpp)
static void collie_flash_exit(void)
static struct flash_platform_data collie_flash_data = ;
static struct resource collie_flash_resources[] = ;
static void __init collie_init(void)
static struct map_desc collie_io_desc[] __initdata = ;
static void __init collie_map_io(void)
MACHINE_START(COLLIE, "Sharp-Collie")
.map_io		= collie_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine	= collie_init,
MACHINE_END
