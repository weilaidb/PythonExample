#define SPI0_CS_GPIO	LPC32XX_GPIO(LPC32XX_GPIO_P3_GRP, 5)
#define LCD_POWER_GPIO	LPC32XX_GPIO(LPC32XX_GPO_P3_GRP, 0)
#define BKL_POWER_GPIO	LPC32XX_GPIO(LPC32XX_GPO_P3_GRP, 4)
#define LED_GPIO	LPC32XX_GPIO(LPC32XX_GPO_P3_GRP, 1)
static struct clcd_panel conn_lcd_panel = ;
#define PANEL_SIZE (3 * SZ_64K)
static int lpc32xx_clcd_setup(struct clcd_fb *fb)
static int lpc32xx_clcd_mmap(struct clcd_fb *fb, struct vm_area_struct *vma)
static void lpc32xx_clcd_remove(struct clcd_fb *fb)
static void clcd_disable(struct clcd_fb *fb)
static void clcd_enable(struct clcd_fb *fb)
static struct clcd_board lpc32xx_clcd_data = ;
static struct amba_device lpc32xx_clcd_device = ;
static void phy3250_spi_cs_set(u32 control)
static struct pl022_config_chip spi0_chip_info = ;
static struct pl022_ssp_controller lpc32xx_ssp0_data = ;
static struct amba_device lpc32xx_ssp0_device = ;
static int __init phy3250_spi_board_register(void)
arch_initcall(phy3250_spi_board_register);
static struct i2c_board_info __initdata phy3250_i2c_board_info[] = ;
static struct gpio_led phy_leds[] = ;
static struct gpio_led_platform_data led_data = ;
static struct platform_device lpc32xx_gpio_led_device = ;
static struct platform_device *phy3250_devs[] __initdata = ;
static struct amba_device *amba_devs[] __initdata = ;
static void __init phy3250_board_init(void)
static int __init lpc32xx_display_uid(void)
arch_initcall(lpc32xx_display_uid);
MACHINE_START(PHY3250, "Phytec 3250 board with the LPC3250 Microcontroller")
.boot_params	= 0x80000100,
.map_io		= lpc32xx_map_io,
.init_irq	= lpc32xx_init_irq,
.timer		= &lpc32xx_timer,
.init_machine	= phy3250_board_init,
MACHINE_END
