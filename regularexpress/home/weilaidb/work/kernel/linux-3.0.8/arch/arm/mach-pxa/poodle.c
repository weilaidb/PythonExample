static unsigned long poodle_pin_config[] __initdata = ;
static struct resource poodle_scoop_resources[] = ;
static struct scoop_config poodle_scoop_setup = ;
struct platform_device poodle_scoop_device = ;
static struct scoop_pcmcia_dev poodle_pcmcia_scoop[] = ;
static struct scoop_pcmcia_config poodle_pcmcia_config = ;
EXPORT_SYMBOL(poodle_scoop_device);
static struct resource locomo_resources[] = ;
static struct locomo_platform_data locomo_info = ;
struct platform_device poodle_locomo_device = ;
EXPORT_SYMBOL(poodle_locomo_device);
#if defined(CONFIG_SPI_PXA2XX) || defined(CONFIG_SPI_PXA2XX_MODULE)
static struct pxa2xx_spi_master poodle_spi_info = ;
static struct ads7846_platform_data poodle_ads7846_info = ;
static struct pxa2xx_spi_chip poodle_ads7846_chip = ;
static struct spi_board_info poodle_spi_devices[] = ;
static void __init poodle_init_spi(void)
static inline void poodle_init_spi(void)
static int poodle_mci_init(struct device *dev, irq_handler_t poodle_detect_int, void *data)
static void poodle_mci_setpower(struct device *dev, unsigned int vdd)
static void poodle_mci_exit(struct device *dev, void *data)
static struct pxamci_platform_data poodle_mci_platform_data = ;
static struct pxaficp_platform_data poodle_ficp_platform_data = ;
static struct pxa2xx_udc_mach_info udc_info __initdata = ;
static struct pxafb_mode_info poodle_fb_mode = ;
static struct pxafb_mach_info poodle_fb_info = ;
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
static struct i2c_board_info __initdata poodle_i2c_devices[] = ;
static void poodle_poweroff(void)
static void poodle_restart(char mode, const char *cmd)
static void __init poodle_init(void)
static void __init fixup_poodle(struct machine_desc *desc,
struct tag *tags, char **cmdline, struct meminfo *mi)
MACHINE_START(POODLE, "SHARP Poodle")
.fixup		= fixup_poodle,
.map_io		= pxa25x_map_io,
.nr_irqs	= POODLE_NR_IRQS,
.init_irq	= pxa25x_init_irq,
.timer		= &pxa_timer,
.init_machine	= poodle_init,
MACHINE_END
