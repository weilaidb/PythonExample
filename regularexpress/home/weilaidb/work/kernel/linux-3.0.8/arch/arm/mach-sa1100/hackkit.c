static void __init hackkit_map_io(void);
static u_int hackkit_get_mctrl(struct uart_port *port);
static void hackkit_set_mctrl(struct uart_port *port, u_int mctrl);
static void hackkit_uart_pm(struct uart_port *port, u_int state, u_int oldstate);
static struct map_desc hackkit_io_desc[] __initdata = ;
static struct sa1100_port_fns hackkit_port_fns __initdata = ;
static void __init hackkit_map_io(void)
static void hackkit_uart_pm(struct uart_port *port, u_int state, u_int oldstate)
static void hackkit_set_mctrl(struct uart_port *port, u_int mctrl)
static u_int hackkit_get_mctrl(struct uart_port *port)
static struct mtd_partition hackkit_partitions[] = ;
static struct flash_platform_data hackkit_flash_data = ;
static struct resource hackkit_flash_resource = ;
static void __init hackkit_init(void)
MACHINE_START(HACKKIT, "HackKit Cpu Board")
.boot_params	= 0xc0000100,
.map_io		= hackkit_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine	= hackkit_init,
MACHINE_END
