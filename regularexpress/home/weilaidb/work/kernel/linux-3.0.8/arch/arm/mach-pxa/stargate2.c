#define STARGATE_NR_IRQS	(IRQ_BOARD_START + 8)
#define SG2_BT_RESET		81
#define SG2_GPIO_nSD_DETECT	90
#define SG2_SD_POWER_ENABLE	89
static unsigned long sg2_im2_unified_pin_config[] __initdata = ;
static struct sht15_platform_data platform_data_sht15 = ;
static struct platform_device sht15 = ;
static struct regulator_consumer_supply stargate2_sensor_3_con[] = ;
enum stargate2_ldos;
static struct regulator_init_data stargate2_ldo_init_data[] = ;
static struct mtd_partition stargate2flash_partitions[] = ;
static struct resource flash_resources = ;
static struct flash_platform_data stargate2_flash_data = ;
static struct platform_device stargate2_flash_device = ;
static struct pxa2xx_spi_master pxa_ssp_master_0_info = ;
static struct pxa2xx_spi_master pxa_ssp_master_1_info = ;
static struct pxa2xx_spi_master pxa_ssp_master_2_info = ;
static struct pxa2xx_spi_chip staccel_chip_info = ;
static struct pxa2xx_spi_chip cc2420_info = ;
static struct spi_board_info spi_board_info[] __initdata = ;
static void sg2_udc_command(int cmd)
static struct i2c_pxa_platform_data i2c_pwr_pdata = ;
static struct i2c_pxa_platform_data i2c_pdata = ;
static void __init imote2_stargate2_init(void)
static int imote2_mci_get_ro(struct device *dev)
static struct pxamci_platform_data imote2_mci_platform_data = ;
static struct gpio_led imote2_led_pins[] = ;
static struct gpio_led_platform_data imote2_led_data = ;
static struct platform_device imote2_leds = ;
static struct da903x_subdev_info imote2_da9030_subdevs[] = ;
static struct da903x_platform_data imote2_da9030_pdata = ;
static struct i2c_board_info __initdata imote2_pwr_i2c_board_info[] = ;
static struct i2c_board_info __initdata imote2_i2c_board_info[] = ;
static unsigned long imote2_pin_config[] __initdata = ;
static struct pxa2xx_udc_mach_info imote2_udc_info __initdata = ;
static struct platform_device *imote2_devices[] = ;
static void __init imote2_init(void)
static unsigned long stargate2_pin_config[] __initdata = ;
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata stargate2_smc91x_info = ;
static struct platform_device smc91x_device = ;
static int stargate2_mci_init(struct device *dev,
irq_handler_t stargate2_detect_int,
void *data)
static void stargate2_mci_setpower(struct device *dev, unsigned int vdd)
static void stargate2_mci_exit(struct device *dev, void *data)
static struct pxamci_platform_data stargate2_mci_platform_data = ;
static struct resource sram_resources = ;
static struct platdata_mtd_ram stargate2_sram_pdata = ;
static struct platform_device stargate2_sram = ;
static struct pcf857x_platform_data platform_data_pcf857x = ;
static struct at24_platform_data pca9500_eeprom_pdata = ;
static int stargate2_reset_bluetooth(void)
static struct led_info stargate2_leds[] = ;
static struct da903x_subdev_info stargate2_da9030_subdevs[] = ;
static struct da903x_platform_data stargate2_da9030_pdata = ;
static struct i2c_board_info __initdata stargate2_pwr_i2c_board_info[] = ;
static struct i2c_board_info __initdata stargate2_i2c_board_info[] = ;
static int sg2_udc_detect(void)
static struct pxa2xx_udc_mach_info stargate2_udc_info __initdata = ;
static struct platform_device *stargate2_devices[] = ;
static void __init stargate2_init(void)
MACHINE_START(INTELMOTE2, "IMOTE 2")
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= imote2_init,
.boot_params	= 0xA0000100,
MACHINE_END
MACHINE_START(STARGATE2, "Stargate 2")
.map_io = pxa27x_map_io,
.nr_irqs = STARGATE_NR_IRQS,
.init_irq = pxa27x_init_irq,
.timer = &pxa_timer,
.init_machine = stargate2_init,
.boot_params = 0xA0000100,
MACHINE_END
