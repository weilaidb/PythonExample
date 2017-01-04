#define H4_FLASH_CS	0
#define H4_SMC91X_CS	1
#define H4_ETHR_GPIO_IRQ		92
static unsigned int row_gpios[6] = ;
static unsigned int col_gpios[7] = ;
static const unsigned int h4_keymap[] = ;
static struct mtd_partition h4_partitions[] = ;
static struct physmap_flash_data h4_flash_data = ;
static struct resource h4_flash_resource = ;
static struct platform_device h4_flash_device = ;
static const struct matrix_keymap_data h4_keymap_data = ;
static struct omap_kp_platform_data h4_kp_data = ;
static struct platform_device h4_kp_device = ;
static struct platform_device h4_lcd_device = ;
static struct platform_device *h4_devices[] __initdata = ;
static u32 get_sysboot_value(void)
static u32 is_gpmc_muxed(void)
static inline void __init h4_init_debug(void)
static void __init h4_init_flash(void)
static struct omap_lcd_config h4_lcd_config __initdata = ;
static struct omap_usb_config h4_usb_config __initdata = ;
static struct omap_board_config_kernel h4_config[] __initdata = ;
static void __init omap_h4_init_early(void)
static void __init omap_h4_init_irq(void)
static struct at24_platform_data m24c01 = ;
static struct i2c_board_info __initdata h4_i2c_board_info[] = ;
static struct omap_board_mux board_mux[] __initdata = ;
static void __init omap_h4_init(void)
static void __init omap_h4_map_io(void)
MACHINE_START(OMAP_H4, "OMAP2420 H4 board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap_h4_map_io,
.init_early	= omap_h4_init_early,
.init_irq	= omap_h4_init_irq,
.init_machine	= omap_h4_init,
.timer		= &omap_timer,
MACHINE_END
