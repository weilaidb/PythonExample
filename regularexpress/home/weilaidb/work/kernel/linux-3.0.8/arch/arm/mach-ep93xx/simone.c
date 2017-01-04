static struct ep93xx_eth_data __initdata simone_eth_data = ;
static struct ep93xxfb_mach_info __initdata simone_fb_info = ;
static struct i2c_gpio_platform_data __initdata simone_i2c_gpio_data = ;
static struct i2c_board_info __initdata simone_i2c_board_info[] = ;
static void __init simone_init_machine(void)
MACHINE_START(SIM_ONE, "Simplemachines Sim.One Board")
.boot_params	= EP93XX_SDCE0_PHYS_BASE + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= simone_init_machine,
MACHINE_END
