static unsigned long spitz_pin_config[] __initdata = ;
#if defined(CONFIG_SHARP_SCOOP) || defined(CONFIG_SHARP_SCOOP_MODULE)
static struct resource spitz_scoop_1_resources[] = ;
static struct scoop_config spitz_scoop_1_setup = ;
struct platform_device spitz_scoop_1_device = ;
static struct resource spitz_scoop_2_resources[] = ;
static struct scoop_config spitz_scoop_2_setup = ;
struct platform_device spitz_scoop_2_device = ;
static void __init spitz_scoop_init(void)
static void spitz_card_pwr_ctrl(uint8_t enable, uint8_t new_cpr)
static inline void spitz_scoop_init(void)
static inline void spitz_card_pwr_ctrl(uint8_t enable, uint8_t new_cpr)
#if defined(CONFIG_PCMCIA_PXA2XX) || defined(CONFIG_PCMCIA_PXA2XX_MODULE)
static void spitz_pcmcia_pwr(struct device *scoop, uint16_t cpr, int nr)
static struct scoop_pcmcia_dev spitz_pcmcia_scoop[] = ;
static struct scoop_pcmcia_config spitz_pcmcia_config = ;
static void __init spitz_pcmcia_init(void)
static inline void spitz_pcmcia_init(void)
#if defined(CONFIG_KEYBOARD_MATRIX) || defined(CONFIG_KEYBOARD_MATRIX_MODULE)
#define SPITZ_KEY_CALENDAR	KEY_F1
#define SPITZ_KEY_ADDRESS	KEY_F2
#define SPITZ_KEY_FN		KEY_F3
#define SPITZ_KEY_CANCEL	KEY_F4
#define SPITZ_KEY_EXOK		KEY_F5
#define SPITZ_KEY_EXCANCEL	KEY_F6
#define SPITZ_KEY_EXJOGDOWN	KEY_F7
#define SPITZ_KEY_EXJOGUP	KEY_F8
#define SPITZ_KEY_JAP1		KEY_LEFTALT
#define SPITZ_KEY_JAP2		KEY_RIGHTCTRL
#define SPITZ_KEY_SYNC		KEY_F9
#define SPITZ_KEY_MAIL		KEY_F10
#define SPITZ_KEY_OK		KEY_F11
#define SPITZ_KEY_MENU		KEY_F12
static const uint32_t spitz_keymap[] = ;
static const struct matrix_keymap_data spitz_keymap_data = ;
static const uint32_t spitz_row_gpios[] =
;
static const uint32_t spitz_col_gpios[] =
;
static struct matrix_keypad_platform_data spitz_mkp_pdata = ;
static struct platform_device spitz_mkp_device = ;
static void __init spitz_mkp_init(void)
static inline void spitz_mkp_init(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button spitz_gpio_keys[] = ;
static struct gpio_keys_platform_data spitz_gpio_keys_platform_data = ;
static struct platform_device spitz_gpio_keys_device = ;
static void __init spitz_keys_init(void)
static inline void spitz_keys_init(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led spitz_gpio_leds[] = ;
static struct gpio_led_platform_data spitz_gpio_leds_info = ;
static struct platform_device spitz_led_device = ;
static void __init spitz_leds_init(void)
static inline void spitz_leds_init(void)
#if defined(CONFIG_SPI_PXA2XX) || defined(CONFIG_SPI_PXA2XX_MODULE)
static void spitz_ads7846_wait_for_hsync(void)
static struct ads7846_platform_data spitz_ads7846_info = ;
static struct pxa2xx_spi_chip spitz_ads7846_chip = ;
static void spitz_bl_kick_battery(void)
static struct corgi_lcd_platform_data spitz_lcdcon_info = ;
static struct pxa2xx_spi_chip spitz_lcdcon_chip = ;
static struct pxa2xx_spi_chip spitz_max1111_chip = ;
static struct spi_board_info spitz_spi_devices[] = ;
static struct pxa2xx_spi_master spitz_spi_info = ;
static void __init spitz_spi_init(void)
static inline void spitz_spi_init(void)
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static void spitz_mci_setpower(struct device *dev, unsigned int vdd)
static struct pxamci_platform_data spitz_mci_platform_data = ;
static void __init spitz_mmc_init(void)
static inline void spitz_mmc_init(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static int spitz_ohci_init(struct device *dev)
static void spitz_ohci_exit(struct device *dev)
static struct pxaohci_platform_data spitz_ohci_platform_data = ;
static void __init spitz_uhc_init(void)
static inline void spitz_uhc_init(void)
#if defined(CONFIG_PXA_FICP) || defined(CONFIG_PXA_FICP_MODULE)
static struct pxaficp_platform_data spitz_ficp_platform_data = ;
static void __init spitz_irda_init(void)
static inline void spitz_irda_init(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct pxafb_mode_info spitz_pxafb_modes[] = ;
static struct pxafb_mach_info spitz_pxafb_info = ;
static void __init spitz_lcd_init(void)
static inline void spitz_lcd_init(void)
#if defined(CONFIG_MTD_NAND_SHARPSL) || defined(CONFIG_MTD_NAND_SHARPSL_MODULE)
static struct mtd_partition spitz_nand_partitions[] = ;
static uint8_t scan_ff_pattern[] = ;
static struct nand_bbt_descr spitz_nand_bbt = ;
static struct nand_ecclayout akita_oobinfo = ;
static struct sharpsl_nand_platform_data spitz_nand_pdata = ;
static struct resource spitz_nand_resources[] = ;
static struct platform_device spitz_nand_device = ;
static void __init spitz_nand_init(void)
static inline void spitz_nand_init(void)
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition spitz_rom_parts[] = ;
static struct physmap_flash_data spitz_rom_data = ;
static struct resource spitz_rom_resources[] = ;
static struct platform_device spitz_rom_device = ;
static void __init spitz_nor_init(void)
static inline void spitz_nor_init(void)
#if defined(CONFIG_I2C_PXA) || defined(CONFIG_I2C_PXA_MODULE)
static struct pca953x_platform_data akita_pca953x_pdata = ;
static struct i2c_board_info spitz_i2c_devs[] = ;
static struct regulator_consumer_supply isl6271a_consumers[] = ;
static struct regulator_init_data isl6271a_info[] = ;
static struct i2c_board_info spitz_pi2c_devs[] = ;
static void __init spitz_i2c_init(void)
static inline void spitz_i2c_init(void)
static void spitz_poweroff(void)
static void spitz_restart(char mode, const char *cmd)
static void __init spitz_init(void)
static void __init spitz_fixup(struct machine_desc *desc,
struct tag *tags, char **cmdline, struct meminfo *mi)
MACHINE_START(SPITZ, "SHARP Spitz")
.fixup		= spitz_fixup,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.init_machine	= spitz_init,
.timer		= &pxa_timer,
MACHINE_END
MACHINE_START(BORZOI, "SHARP Borzoi")
.fixup		= spitz_fixup,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.init_machine	= spitz_init,
.timer		= &pxa_timer,
MACHINE_END
MACHINE_START(AKITA, "SHARP Akita")
.fixup		= spitz_fixup,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.init_machine	= spitz_init,
.timer		= &pxa_timer,
MACHINE_END
