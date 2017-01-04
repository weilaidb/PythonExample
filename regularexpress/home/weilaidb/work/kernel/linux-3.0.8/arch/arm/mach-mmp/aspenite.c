static unsigned long common_pin_config[] __initdata = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct mtd_partition aspenite_nand_partitions[] = ;
static struct pxa3xx_nand_platform_data aspenite_nand_info = ;
static struct i2c_board_info aspenite_i2c_info[] __initdata = ;
static struct fb_videomode video_modes[] = ;
struct pxa168fb_mach_info aspenite_lcd_info = ;
static unsigned int aspenite_matrix_key_map[] = ;
static struct pxa27x_keypad_platform_data aspenite_keypad_info __initdata = ;
static void __init common_init(void)
MACHINE_START(ASPENITE, "PXA168-based Aspenite Development Platform")
.map_io		= mmp_map_io,
.nr_irqs	= IRQ_BOARD_START,
.init_irq       = pxa168_init_irq,
.timer          = &pxa168_timer,
.init_machine   = common_init,
MACHINE_END
MACHINE_START(ZYLONITE2, "PXA168-based Zylonite2 Development Platform")
.map_io		= mmp_map_io,
.nr_irqs	= IRQ_BOARD_START,
.init_irq       = pxa168_init_irq,
.timer          = &pxa168_timer,
.init_machine   = common_init,
MACHINE_END
