#define DA850_EVM_PHY_ID		"0:00"
#define DA850_LCD_PWR_PIN		GPIO_TO_PIN(2, 8)
#define DA850_LCD_BL_PIN		GPIO_TO_PIN(2, 15)
#define DA850_MMCSD_CD_PIN		GPIO_TO_PIN(4, 0)
#define DA850_MMCSD_WP_PIN		GPIO_TO_PIN(4, 1)
#define DA850_MII_MDIO_CLKEN_PIN	GPIO_TO_PIN(2, 6)
static struct mtd_partition da850evm_spiflash_part[] = ;
static struct flash_platform_data da850evm_spiflash_data = ;
static struct davinci_spi_config da850evm_spiflash_cfg = ;
static struct spi_board_info da850evm_spi_info[] = ;
static void da850_evm_m25p80_notify_add(struct mtd_info *mtd)
static struct mtd_notifier da850evm_spi_notifier = ;
static void da850_evm_setup_mac_addr(void)
static void da850_evm_setup_mac_addr(void)
static struct mtd_partition da850_evm_norflash_partition[] = ;
static struct physmap_flash_data da850_evm_norflash_data = ;
static struct resource da850_evm_norflash_resource[] = ;
static struct platform_device da850_evm_norflash_device = ;
static struct davinci_pm_config da850_pm_pdata = ;
static struct platform_device da850_pm_device = ;
static struct mtd_partition da850_evm_nandflash_partition[] = ;
static struct davinci_aemif_timing da850_evm_nandflash_timing = ;
static struct davinci_nand_pdata da850_evm_nandflash_data = ;
static struct resource da850_evm_nandflash_resource[] = ;
static struct platform_device da850_evm_nandflash_device = ;
static struct platform_device *da850_evm_devices[] __initdata = ;
#define DA8XX_AEMIF_CE2CFG_OFFSET	0x10
#define DA8XX_AEMIF_ASIZE_16BIT		0x1
static void __init da850_evm_init_nor(void)
static const short da850_evm_nand_pins[] = ;
static const short da850_evm_nor_pins[] = ;
#if defined(CONFIG_MMC_DAVINCI) || \
defined(CONFIG_MMC_DAVINCI_MODULE)
#define HAS_MMC 1
#define HAS_MMC 0
static inline void da850_evm_setup_nor_nand(void)
static inline void da850_evm_setup_emac_rmii(int rmii_sel)
static inline void da850_evm_setup_emac_rmii(int rmii_sel)
#define DA850_KEYS_DEBOUNCE_MS	10
#define DA850_GPIO_KEYS_POLL_MS	200
enum da850_evm_ui_exp_pins ;
static const char const *da850_evm_ui_exp[] = ;
#define DA850_N_UI_PB		8
static struct gpio_keys_button da850_evm_ui_keys[] = ;
static struct gpio_keys_platform_data da850_evm_ui_keys_pdata = ;
static struct platform_device da850_evm_ui_keys_device = ;
static void da850_evm_ui_keys_init(unsigned gpio)
static int da850_evm_ui_expander_setup(struct i2c_client *client, unsigned gpio,
unsigned ngpio, void *c)
static int da850_evm_ui_expander_teardown(struct i2c_client *client,
unsigned gpio, unsigned ngpio, void *c)
#define DA850_UI_EXPANDER_N_GPIOS ARRAY_SIZE(da850_evm_ui_exp)
#define DA850_BB_EXPANDER_GPIO_BASE (DAVINCI_N_GPIO + DA850_UI_EXPANDER_N_GPIOS)
enum da850_evm_bb_exp_pins ;
static const char const *da850_evm_bb_exp[] = ;
#define DA850_N_BB_USER_SW	8
static struct gpio_keys_button da850_evm_bb_keys[] = ;
static struct gpio_keys_platform_data da850_evm_bb_keys_pdata = ;
static struct platform_device da850_evm_bb_keys_device = ;
static void da850_evm_bb_keys_init(unsigned gpio)
#define DA850_N_BB_USER_LED	2
static struct gpio_led da850_evm_bb_leds[] = ;
static struct gpio_led_platform_data da850_evm_bb_leds_pdata = ;
static struct platform_device da850_evm_bb_leds_device = ;
static void da850_evm_bb_leds_init(unsigned gpio)
static int da850_evm_bb_expander_setup(struct i2c_client *client,
unsigned gpio, unsigned ngpio,
void *c)
static int da850_evm_bb_expander_teardown(struct i2c_client *client,
unsigned gpio, unsigned ngpio, void *c)
static struct pca953x_platform_data da850_evm_ui_expander_info = ;
static struct pca953x_platform_data da850_evm_bb_expander_info = ;
static struct i2c_board_info __initdata da850_evm_i2c_devices[] = ;
static struct davinci_i2c_platform_data da850_evm_i2c_0_pdata = ;
static struct davinci_uart_config da850_evm_uart_config __initdata = ;
static u8 da850_iis_serializer_direction[] = ;
static struct snd_platform_data da850_evm_snd_data = ;
static const short da850_evm_mcasp_pins[] __initconst = ;
static int da850_evm_mmc_get_ro(int index)
static int da850_evm_mmc_get_cd(int index)
static struct davinci_mmc_config da850_mmc_config = ;
static const short da850_evm_mmcsd0_pins[] __initconst = ;
static void da850_panel_power_ctrl(int val)
static int da850_lcd_hw_init(void)
static struct regulator_consumer_supply tps65070_dcdc1_consumers[] = ;
static struct regulator_consumer_supply tps65070_dcdc2_consumers[] = ;
static struct regulator_consumer_supply tps65070_dcdc3_consumers[] = ;
static struct regulator_consumer_supply tps65070_ldo1_consumers[] = ;
static struct regulator_consumer_supply tps65070_ldo2_consumers[] = ;
static struct tps6507x_reg_platform_data tps6507x_platform_data = ;
static struct regulator_init_data tps65070_regulator_data[] = ;
static struct touchscreen_init_data tps6507x_touchscreen_data = ;
static struct tps6507x_board tps_board = ;
static struct i2c_board_info __initdata da850_evm_tps65070_info[] = ;
static int __init pmic_tps65070_init(void)
static const short da850_evm_lcdc_pins[] = ;
static const short da850_evm_mii_pins[] = ;
static const short da850_evm_rmii_pins[] = ;
static int __init da850_evm_config_emac(void)
device_initcall(da850_evm_config_emac);
static const s16 da850_dma0_rsv_chans[][2] = ;
static const s16 da850_dma0_rsv_slots[][2] = ;
static const s16 da850_dma1_rsv_chans[][2] = ;
static const s16 da850_dma1_rsv_slots[][2] = ;
static struct edma_rsv_info da850_edma_cc0_rsv = ;
static struct edma_rsv_info da850_edma_cc1_rsv = ;
static struct edma_rsv_info *da850_edma_rsv[2] = ;
static __init int da850_evm_init_cpufreq(void)
static __init int da850_evm_init_cpufreq(void)
static __init void da850_evm_init(void)
static int __init da850_evm_console_init(void)
console_initcall(da850_evm_console_init);
static void __init da850_evm_map_io(void)
MACHINE_START(DAVINCI_DA850_EVM, "DaVinci DA850/OMAP-L138/AM18x EVM")
.boot_params	= (DA8XX_DDR_BASE + 0x100),
.map_io		= da850_evm_map_io,
.init_irq	= cp_intc_init,
.timer		= &davinci_timer,
.init_machine	= da850_evm_init,
MACHINE_END
