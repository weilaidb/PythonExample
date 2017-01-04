int sx1_i2c_write_byte(u8 devaddr, u8 regoffset, u8 value)
int sx1_i2c_read_byte(u8 devaddr, u8 regoffset, u8 *value)
int sx1_setkeylight(u8 keylight)
int sx1_getkeylight(u8 * keylight)
int sx1_setbacklight(u8 backlight)
int sx1_getbacklight (u8 * backlight)
int sx1_setmmipower(u8 onoff)
int sx1_setusbpower(u8 onoff)
EXPORT_SYMBOL(sx1_setkeylight);
EXPORT_SYMBOL(sx1_getkeylight);
EXPORT_SYMBOL(sx1_setbacklight);
EXPORT_SYMBOL(sx1_getbacklight);
EXPORT_SYMBOL(sx1_setmmipower);
EXPORT_SYMBOL(sx1_setusbpower);
static const unsigned int sx1_keymap[] = ;
static struct resource sx1_kp_resources[] = ;
static const struct matrix_keymap_data sx1_keymap_data = ;
static struct omap_kp_platform_data sx1_kp_data = ;
static struct platform_device sx1_kp_device = ;
static struct omap_irda_config sx1_irda_data = ;
static struct resource sx1_irda_resources[] = ;
static u64 irda_dmamask = 0xffffffff;
static struct platform_device sx1_irda_device = ;
static struct mtd_partition sx1_partitions[] = ;
static struct physmap_flash_data sx1_flash_data = ;
static struct resource sx1_old_flash_resource[] = ;
static struct platform_device sx1_flash_device = ;
static struct resource sx1_new_flash_resource = ;
static struct platform_device sx1_flash_device = ;
static struct omap_usb_config sx1_usb_config __initdata = ;
static struct platform_device sx1_lcd_device = ;
static struct omap_lcd_config sx1_lcd_config __initdata = ;
static struct platform_device *sx1_devices[] __initdata = ;
static struct omap_board_config_kernel sx1_config[] __initdata = ;
static void __init omap_sx1_init(void)
static void __init omap_sx1_init_irq(void)
static void __init omap_sx1_map_io(void)
MACHINE_START(SX1, "OMAP310 based Siemens SX1")
.boot_params	= 0x10000100,
.map_io		= omap_sx1_map_io,
.reserve	= omap_reserve,
.init_irq	= omap_sx1_init_irq,
.init_machine	= omap_sx1_init,
.timer		= &omap_timer,
MACHINE_END
