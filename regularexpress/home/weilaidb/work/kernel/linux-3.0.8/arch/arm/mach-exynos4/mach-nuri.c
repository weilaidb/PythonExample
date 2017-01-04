#define NURI_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define NURI_ULCON_DEFAULT	S3C2410_LCON_CS8
#define NURI_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S5PV210_UFCON_TXTRIG256 |	\
S5PV210_UFCON_RXTRIG256)
enum fixed_regulator_id ;
static struct s3c2410_uartcfg nuri_uartcfgs[] __initdata = ;
static struct s3c_sdhci_platdata nuri_hsmmc0_data __initdata = ;
static struct regulator_consumer_supply emmc_supplies[] = ;
static struct regulator_init_data emmc_fixed_voltage_init_data = ;
static struct fixed_voltage_config emmc_fixed_voltage_config = ;
static struct platform_device emmc_fixed_voltage = ;
static struct s3c_sdhci_platdata nuri_hsmmc2_data __initdata = ;
static struct s3c_sdhci_platdata nuri_hsmmc3_data __initdata = ;
static void __init nuri_sdhci_init(void)
static struct gpio_keys_button nuri_gpio_keys_tables[] = ;
static struct gpio_keys_platform_data nuri_gpio_keys_data = ;
static struct platform_device nuri_gpio_keys = ;
static void nuri_lcd_power_on(struct plat_lcd_data *pd, unsigned int power)
static int nuri_bl_init(struct device *dev)
static int nuri_bl_notify(struct device *dev, int brightness)
static void nuri_bl_exit(struct device *dev)
static struct platform_pwm_backlight_data nuri_backlight_data = ;
static struct platform_device nuri_backlight_device = ;
static struct plat_lcd_data nuri_lcd_platform_data = ;
static struct platform_device nuri_lcd_device = ;
static struct i2c_board_info i2c1_devs[] __initdata = ;
static u8 mxt_init_vals[] = ;
static struct mxt_platform_data mxt_platform_data = ;
static struct s3c2410_platform_i2c i2c3_data __initdata = ;
static struct i2c_board_info i2c3_devs[] __initdata = ;
static void __init nuri_tsp_init(void)
static struct i2c_board_info i2c5_devs[] __initdata = ;
static struct s5p_ehci_platdata nuri_ehci_pdata;
static void __init nuri_ehci_init(void)
static struct platform_device *nuri_devices[] __initdata = ;
static void __init nuri_map_io(void)
static void __init nuri_machine_init(void)
MACHINE_START(NURI, "NURI")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= exynos4_init_irq,
.map_io		= nuri_map_io,
.init_machine	= nuri_machine_init,
.timer		= &exynos4_timer,
MACHINE_END
