static u8 ams_delta_latch1_reg;
static u16 ams_delta_latch2_reg;
static const unsigned int ams_delta_keymap[] = ;
void ams_delta_latch1_write(u8 mask, u8 value)
void ams_delta_latch2_write(u16 mask, u16 value)
static void __init ams_delta_init_irq(void)
static struct map_desc ams_delta_io_desc[] __initdata = ;
static struct omap_lcd_config ams_delta_lcd_config = ;
static struct omap_usb_config ams_delta_usb_config __initdata = ;
static struct omap_board_config_kernel ams_delta_config[] __initdata = ;
static struct resource ams_delta_nand_resources[] = ;
static struct platform_device ams_delta_nand_device = ;
static struct resource ams_delta_kp_resources[] = ;
static const struct matrix_keymap_data ams_delta_keymap_data = ;
static struct omap_kp_platform_data ams_delta_kp_data __initdata = ;
static struct platform_device ams_delta_kp_device = ;
static struct platform_device ams_delta_lcd_device = ;
static struct platform_device ams_delta_led_device = ;
static struct i2c_board_info ams_delta_camera_board_info[] = ;
DEFINE_LED_TRIGGER(ams_delta_camera_led_trigger);
static int ams_delta_camera_power(struct device *dev, int power)
#define ams_delta_camera_power	NULL
static struct soc_camera_link ams_delta_iclink = ;
static struct platform_device ams_delta_camera_device = ;
static struct omap1_cam_platform_data ams_delta_camera_platform_data = ;
static struct platform_device *ams_delta_devices[] __initdata = ;
static void __init ams_delta_init(void)
static struct plat_serial8250_port ams_delta_modem_ports[] = ;
static struct platform_device ams_delta_modem_device = ;
static int __init ams_delta_modem_init(void)
arch_initcall(ams_delta_modem_init);
static void __init ams_delta_map_io(void)
MACHINE_START(AMS_DELTA, "Amstrad E3 (Delta)")
.boot_params	= 0x10000100,
.map_io		= ams_delta_map_io,
.reserve	= omap_reserve,
.init_irq	= ams_delta_init_irq,
.init_machine	= ams_delta_init,
.timer		= &omap_timer,
MACHINE_END
EXPORT_SYMBOL(ams_delta_latch1_write);
EXPORT_SYMBOL(ams_delta_latch2_write);
