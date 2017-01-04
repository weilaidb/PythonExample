long cs3_shadow;
long get_cs3_shadow(void)
void set_cs3(long value)
void set_cs3_bit(int value)
void clear_cs3_bit(int value)
EXPORT_SYMBOL(set_cs3_bit);
EXPORT_SYMBOL(clear_cs3_bit);
static struct map_desc simpad_io_desc[] __initdata = ;
static void simpad_uart_pm(struct uart_port *port, u_int state, u_int oldstate)
static struct sa1100_port_fns simpad_port_fns __initdata = ;
static struct mtd_partition simpad_partitions[] = ;
static struct flash_platform_data simpad_flash_data = ;
static struct resource simpad_flash_resources [] = ;
static struct mcp_plat_data simpad_mcp_data = ;
static void __init simpad_map_io(void)
static void simpad_power_off(void)
static struct platform_device simpad_mq200fb = ;
static struct platform_device *devices[] __initdata = ;
static int __init simpad_init(void)
arch_initcall(simpad_init);
MACHINE_START(SIMPAD, "Simpad")
.boot_params	= 0xc0000100,
.map_io		= simpad_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
MACHINE_END
