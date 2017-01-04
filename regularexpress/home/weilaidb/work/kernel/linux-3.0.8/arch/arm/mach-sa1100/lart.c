#warning "include/asm/arch-sa1100/ide.h needs fixing for lart"
static struct mcp_plat_data lart_mcp_data = ;
static void __init lart_init(void)
static struct map_desc lart_io_desc[] __initdata = ;
static void __init lart_map_io(void)
MACHINE_START(LART, "LART")
.boot_params	= 0xc0000100,
.map_io		= lart_map_io,
.init_irq	= sa1100_init_irq,
.init_machine	= lart_init,
.timer		= &sa1100_timer,
MACHINE_END
