static struct pcf50633 *gta02_pcf;
static long gta02_panic_blink(int state)
static struct map_desc gta02_iodesc[] __initdata = ;
#define UCON (S3C2410_UCON_DEFAULT | S3C2443_UCON_RXERR_IRQEN)
#define ULCON (S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB)
#define UFCON (S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE)
static struct s3c2410_uartcfg gta02_uartcfgs[] = ;
#define ADC_NOM_CHG_DETECT_1A 6
#define ADC_NOM_CHG_DETECT_USB 43
static void
gta02_configure_pmu_for_charger(struct pcf50633 *pcf, void *unused, int res)
static struct delayed_work gta02_charger_work;
static int gta02_usb_vbus_draw;
static void gta02_charger_worker(struct work_struct *work)
#define GTA02_CHARGER_CONFIGURE_TIMEOUT ((3000 * HZ) / 1000)
static void gta02_pmu_event_callback(struct pcf50633 *pcf, int irq)
static void gta02_udc_vbus_draw(unsigned int ma)
#define gta02_pmu_event_callback	NULL
#define gta02_udc_vbus_draw		NULL
static void gta02_pmu_attach_child_devices(struct pcf50633 *pcf);
static char *gta02_batteries[] = ;
static struct pcf50633_bl_platform_data gta02_backlight_data = ;
struct pcf50633_platform_data gta02_pcf_pdata = ;
#define GTA02_FLASH_BASE	0x18000000
#define GTA02_FLASH_SIZE	0x200000
static struct physmap_flash_data gta02_nor_flash_data = ;
static struct resource gta02_nor_flash_resource = ;
static struct platform_device gta02_nor_flash = ;
struct platform_device s3c24xx_pwm_device = ;
static struct platform_device gta02_dfbmcs320_device = ;
static struct i2c_board_info gta02_i2c_devs[] __initdata = ;
static struct s3c2410_nand_set __initdata gta02_nand_sets[] = ;
static struct s3c2410_platform_nand __initdata gta02_nand_info = ;
static struct s3c2410_udc_mach_info gta02_udc_cfg __initdata = ;
static struct s3c2410_hcd_info gta02_usb_info __initdata = ;
static struct s3c2410_ts_mach_info gta02_ts_info = ;
static struct gpio_keys_button gta02_buttons[] = ;
static struct gpio_keys_platform_data gta02_buttons_pdata = ;
static struct platform_device gta02_buttons_device = ;
static void __init gta02_map_io(void)
static struct platform_device *gta02_devices[] __initdata = ;
static struct platform_device *gta02_devices_pmu_children[] = ;
static void gta02_pmu_attach_child_devices(struct pcf50633 *pcf)
static void gta02_poweroff(void)
static void __init gta02_machine_init(void)
MACHINE_START(NEO1973_GTA02, "GTA02")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= gta02_map_io,
.init_irq	= s3c24xx_init_irq,
.init_machine	= gta02_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
