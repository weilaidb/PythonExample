static unsigned long corgi_pin_config[] __initdata = ;
static struct resource corgi_scoop_resources[] = ;
static struct scoop_config corgi_scoop_setup = ;
struct platform_device corgiscoop_device = ;
static struct scoop_pcmcia_dev corgi_pcmcia_scoop[] = ;
static struct scoop_pcmcia_config corgi_pcmcia_config = ;
static struct w100_mem_info corgi_fb_mem = ;
static struct w100_gen_regs corgi_fb_regs = ;
static struct w100_gpio_regs corgi_fb_gpio = ;
static struct w100_mode corgi_fb_modes[] = ;
static struct w100fb_mach_info corgi_fb_info = ;
static struct resource corgi_fb_resources[] = ;
static struct platform_device corgifb_device = ;
#define CORGI_KEY_CALENDER	KEY_F1
#define CORGI_KEY_ADDRESS	KEY_F2
#define CORGI_KEY_FN		KEY_F3
#define CORGI_KEY_CANCEL	KEY_F4
#define CORGI_KEY_OFF		KEY_SUSPEND
#define CORGI_KEY_EXOK		KEY_F5
#define CORGI_KEY_EXCANCEL	KEY_F6
#define CORGI_KEY_EXJOGDOWN	KEY_F7
#define CORGI_KEY_EXJOGUP	KEY_F8
#define CORGI_KEY_JAP1		KEY_LEFTCTRL
#define CORGI_KEY_JAP2		KEY_LEFTALT
#define CORGI_KEY_MAIL		KEY_F10
#define CORGI_KEY_OK		KEY_F11
#define CORGI_KEY_MENU		KEY_F12
static const uint32_t corgikbd_keymap[] = ;
static struct matrix_keymap_data corgikbd_keymap_data = ;
static const int corgikbd_row_gpios[] =
;
static const int corgikbd_col_gpios[] =
;
static struct matrix_keypad_platform_data corgikbd_pdata = ;
static struct platform_device corgikbd_device = ;
static struct gpio_led corgi_gpio_leds[] = ;
static struct gpio_led_platform_data corgi_gpio_leds_info = ;
static struct platform_device corgiled_device = ;
static struct pxamci_platform_data corgi_mci_platform_data = ;
static struct pxaficp_platform_data corgi_ficp_platform_data = ;
static struct pxa2xx_udc_mach_info udc_info __initdata = ;
#if defined(CONFIG_SPI_PXA2XX) || defined(CONFIG_SPI_PXA2XX_MASTER)
static struct pxa2xx_spi_master corgi_spi_info = ;
static void corgi_wait_for_hsync(void)
static struct ads7846_platform_data corgi_ads7846_info = ;
static struct pxa2xx_spi_chip corgi_ads7846_chip = ;
static void corgi_bl_kick_battery(void)
static struct corgi_lcd_platform_data corgi_lcdcon_info = ;
static struct pxa2xx_spi_chip corgi_lcdcon_chip = ;
static struct pxa2xx_spi_chip corgi_max1111_chip = ;
static struct spi_board_info corgi_spi_devices[] = ;
static void __init corgi_init_spi(void)
static inline void corgi_init_spi(void)
static struct mtd_partition sharpsl_nand_partitions[] = ;
static uint8_t scan_ff_pattern[] = ;
static struct nand_bbt_descr sharpsl_bbt = ;
static struct sharpsl_nand_platform_data sharpsl_nand_platform_data = ;
static struct resource sharpsl_nand_resources[] = ;
static struct platform_device sharpsl_nand_device = ;
static struct mtd_partition sharpsl_rom_parts[] = ;
static struct physmap_flash_data sharpsl_rom_data = ;
static struct resource sharpsl_rom_resources[] = ;
static struct platform_device sharpsl_rom_device = ;
static struct platform_device *devices[] __initdata = ;
static struct i2c_board_info __initdata corgi_i2c_devices[] = ;
static void corgi_poweroff(void)
static void corgi_restart(char mode, const char *cmd)
static void __init corgi_init(void)
static void __init fixup_corgi(struct machine_desc *desc,
struct tag *tags, char **cmdline, struct meminfo *mi)
MACHINE_START(CORGI, "SHARP Corgi")
.fixup		= fixup_corgi,
.map_io		= pxa25x_map_io,
.init_irq	= pxa25x_init_irq,
.init_machine	= corgi_init,
.timer		= &pxa_timer,
MACHINE_END
MACHINE_START(SHEPHERD, "SHARP Shepherd")
.fixup		= fixup_corgi,
.map_io		= pxa25x_map_io,
.init_irq	= pxa25x_init_irq,
.init_machine	= corgi_init,
.timer		= &pxa_timer,
MACHINE_END
MACHINE_START(HUSKY, "SHARP Husky")
.fixup		= fixup_corgi,
.map_io		= pxa25x_map_io,
.init_irq	= pxa25x_init_irq,
.init_machine	= corgi_init,
.timer		= &pxa_timer,
MACHINE_END
