static struct resource sa1111_resources[] = ;
static struct sa1111_platform_data sa1111_info = ;
static u64 sa1111_dmamask = 0xffffffffUL;
static struct platform_device sa1111_device = ;
static struct platform_device *devices[] __initdata = ;
static int __init badge4_sa1111_init(void)
static struct mtd_partition badge4_partitions[] = ;
static struct flash_platform_data badge4_flash_data = ;
static struct resource badge4_flash_resource = ;
static int five_v_on __initdata = 0;
static int __init five_v_on_setup(char *ignore)
__setup("five_v_on", five_v_on_setup);
static int __init badge4_init(void)
arch_initcall(badge4_init);
static unsigned badge4_5V_bitmap = 0;
void badge4_set_5V(unsigned subsystem, int on)
EXPORT_SYMBOL(badge4_set_5V);
static struct map_desc badge4_io_desc[] __initdata = ;
static void
badge4_uart_pm(struct uart_port *port, u_int state, u_int oldstate)
static struct sa1100_port_fns badge4_port_fns __initdata = ;
static void __init badge4_map_io(void)
MACHINE_START(BADGE4, "Hewlett-Packard Laboratories BadgePAD 4")
.boot_params	= 0xc0000100,
.map_io		= badge4_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
MACHINE_END
