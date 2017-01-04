static unsigned long tosa_pin_config[] = ;
static struct resource tosa_scoop_resources[] = ;
static struct scoop_config tosa_scoop_setup = ;
static struct platform_device tosascoop_device = ;
static struct resource tosa_scoop_jc_resources[] = ;
static struct scoop_config tosa_scoop_jc_setup = ;
static struct platform_device tosascoop_jc_device = ;
static struct scoop_pcmcia_dev tosa_pcmcia_scoop[] = ;
static struct scoop_pcmcia_config tosa_pcmcia_config = ;
static struct gpio_vbus_mach_info tosa_udc_info = ;
static struct platform_device tosa_gpio_vbus = ;
static int tosa_mci_init(struct device *dev, irq_handler_t tosa_detect_int, void *data)
static void tosa_mci_exit(struct device *dev, void *data)
static struct pxamci_platform_data tosa_mci_platform_data = ;
static void tosa_irda_transceiver_mode(struct device *dev, int mode)
static int tosa_irda_startup(struct device *dev)
static void tosa_irda_shutdown(struct device *dev)
static struct pxaficp_platform_data tosa_ficp_platform_data = ;
static int tosa_power_init(struct device *dev)
static void tosa_power_exit(struct device *dev)
static int tosa_power_ac_online(void)
static char *tosa_ac_supplied_to[] = ;
static struct pda_power_pdata tosa_power_data = ;
static struct resource tosa_power_resource[] = ;
static struct platform_device tosa_power_device = ;
static const uint32_t tosakbd_keymap[] = ;
static struct matrix_keymap_data tosakbd_keymap_data = ;
static const int tosakbd_col_gpios[] =
;
static const int tosakbd_row_gpios[] =
;
static struct matrix_keypad_platform_data tosakbd_pdata = ;
static struct platform_device tosakbd_device = ;
static struct gpio_keys_button tosa_gpio_keys[] = ;
static struct gpio_keys_platform_data tosa_gpio_keys_platform_data = ;
static struct platform_device tosa_gpio_keys_device = ;
static struct gpio_led tosa_gpio_leds[] = ;
static struct gpio_led_platform_data tosa_gpio_leds_platform_data = ;
static struct platform_device tosaled_device = ;
static struct resource tc6393xb_resources[] = ;
static int tosa_tc6393xb_enable(struct platform_device *dev)
static int tosa_tc6393xb_disable(struct platform_device *dev)
static int tosa_tc6393xb_resume(struct platform_device *dev)
static int tosa_tc6393xb_suspend(struct platform_device *dev)
static struct mtd_partition tosa_nand_partition[] = ;
static uint8_t scan_ff_pattern[] = ;
static struct nand_bbt_descr tosa_tc6393xb_nand_bbt = ;
static struct tmio_nand_data tosa_tc6393xb_nand_config = ;
static int tosa_tc6393xb_setup(struct platform_device *dev)
static void tosa_tc6393xb_teardown(struct platform_device *dev)
static struct fb_videomode tosa_tc6393xb_lcd_mode[] = ;
static struct tmio_fb_data tosa_tc6393xb_fb_config = ;
static struct tc6393xb_platform_data tosa_tc6393xb_data = ;
static struct platform_device tc6393xb_device = ;
static struct tosa_bt_data tosa_bt_data = ;
static struct platform_device tosa_bt_device = ;
static struct pxa2xx_spi_master pxa_ssp_master_info = ;
static struct spi_board_info spi_board_info[] __initdata = ;
static struct mtd_partition sharpsl_rom_parts[] = ;
static struct physmap_flash_data sharpsl_rom_data = ;
static struct resource sharpsl_rom_resources[] = ;
static struct platform_device sharpsl_rom_device = ;
static struct platform_device wm9712_device = ;
static struct platform_device *devices[] __initdata = ;
static void tosa_poweroff(void)
static void tosa_restart(char mode, const char *cmd)
static void __init tosa_init(void)
static void __init fixup_tosa(struct machine_desc *desc,
struct tag *tags, char **cmdline, struct meminfo *mi)
MACHINE_START(TOSA, "SHARP Tosa")
.fixup          = fixup_tosa,
.map_io         = pxa25x_map_io,
.nr_irqs	= TOSA_NR_IRQS,
.init_irq       = pxa25x_init_irq,
.init_machine   = tosa_init,
.timer          = &pxa_timer,
MACHINE_END
