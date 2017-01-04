struct resource spipnx_0_resources[] = ;
struct resource spipnx_1_resources[] = ;
static struct spi_board_info spi_board_info[] __initdata = ;
static struct platform_device spipnx_1 = ;
static struct platform_device spipnx_2 = ;
static struct plat_serial8250_port platform_serial_ports[] = ;
static struct platform_device serial_device = ;
static struct platform_device nand_flash_device = ;
static u64 ohci_dmamask = ~(u32) 0;
static struct resource ohci_resources[] = ;
static struct platform_device ohci_device = ;
static struct platform_device sdum_device = ;
static struct platform_device rgbfb_device = ;
struct resource watchdog_resources[] = ;
static struct platform_device watchdog_device = ;
static struct platform_device *devices[] __initdata = ;
extern void pnx4008_uart_init(void);
static void __init pnx4008_init(void)
static struct map_desc pnx4008_io_desc[] __initdata = ;
void __init pnx4008_map_io(void)
extern struct sys_timer pnx4008_timer;
MACHINE_START(PNX4008, "Philips PNX4008")
.boot_params		= 0x80000100,
.map_io 		= pnx4008_map_io,
.init_irq 		= pnx4008_init_irq,
.init_machine 		= pnx4008_init,
.timer 			= &pnx4008_timer,
MACHINE_END
