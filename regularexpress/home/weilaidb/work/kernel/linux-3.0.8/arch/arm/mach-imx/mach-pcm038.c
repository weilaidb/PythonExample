static const int pcm038_pins[] __initconst = ;
static struct platdata_mtd_ram pcm038_sram_data = ;
static struct resource pcm038_sram_resource = ;
static struct platform_device pcm038_sram_mtd_device = ;
static struct physmap_flash_data pcm038_flash_data = ;
static struct resource pcm038_flash_resource = ;
static struct platform_device pcm038_nor_mtd_device = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static const struct mxc_nand_platform_data
pcm038_nand_board_info __initconst = ;
static struct platform_device *platform_devices[] __initdata = ;
static void __init pcm038_init_sram(void)
static const struct imxi2c_platform_data pcm038_i2c1_data __initconst = ;
static struct at24_platform_data board_eeprom = ;
static struct i2c_board_info pcm038_i2c_devices[] = ;
static int pcm038_spi_cs[] = ;
static const struct spi_imx_master pcm038_spi0_data __initconst = ;
static struct regulator_consumer_supply sdhc1_consumers[] = ;
static struct regulator_init_data sdhc1_data = ;
static struct regulator_consumer_supply cam_consumers[] = ;
static struct regulator_init_data cam_data = ;
static struct mc13xxx_regulator_init_data pcm038_regulators[] = ;
static struct mc13xxx_platform_data pcm038_pmic = ;
static struct spi_board_info pcm038_spi_board_info[] __initdata = ;
static int pcm038_usbh2_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data usbh2_pdata __initconst = ;
static void __init pcm038_init(void)
static void __init pcm038_timer_init(void)
static struct sys_timer pcm038_timer = ;
MACHINE_START(PCM038, "phyCORE-i.MX27")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.timer = &pcm038_timer,
.init_machine = pcm038_init,
MACHINE_END
