static unsigned long balloon3_pin_config[] __initdata = ;
static unsigned long balloon3_irq_enabled;
static unsigned long balloon3_features_present =
(1 << BALLOON3_FEATURE_OHCI) | (1 << BALLOON3_FEATURE_CF) |
(1 << BALLOON3_FEATURE_AUDIO) |
(1 << BALLOON3_FEATURE_TOPPOLY);
int balloon3_has(enum balloon3_features feature)
EXPORT_SYMBOL_GPL(balloon3_has);
int __init parse_balloon3_features(char *arg)
early_param("balloon3_features", parse_balloon3_features);
#if	defined(CONFIG_PCMCIA_PXA2XX) || defined(CONFIG_PCMCIA_PXA2XX_MODULE)
static unsigned long balloon3_cf_pin_config[] __initdata = ;
static void __init balloon3_cf_init(void)
static inline void balloon3_cf_init(void)
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition balloon3_nor_partitions[] = ;
static struct physmap_flash_data balloon3_flash_data[] = ;
static struct resource balloon3_flash_resource = ;
static struct platform_device balloon3_flash = ;
static void __init balloon3_nor_init(void)
static inline void balloon3_nor_init(void)
#if	defined(CONFIG_TOUCHSCREEN_UCB1400) || \
defined(CONFIG_TOUCHSCREEN_UCB1400_MODULE)
static unsigned long balloon3_ac97_pin_config[] __initdata = ;
static struct ucb1400_pdata vpac270_ucb1400_pdata = ;
static struct platform_device balloon3_ucb1400_device = ;
static void __init balloon3_ts_init(void)
static inline void balloon3_ts_init(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static unsigned long balloon3_lcd_pin_config[] __initdata = ;
static struct pxafb_mode_info balloon3_lcd_modes[] = ;
static struct pxafb_mach_info balloon3_lcd_screen = ;
static void balloon3_backlight_power(int on)
static void __init balloon3_lcd_init(void)
static inline void balloon3_lcd_init(void)
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static unsigned long balloon3_mmc_pin_config[] __initdata = ;
static struct pxamci_platform_data balloon3_mci_platform_data = ;
static void __init balloon3_mmc_init(void)
static inline void balloon3_mmc_init(void)
#if defined(CONFIG_USB_GADGET_PXA27X)||defined(CONFIG_USB_GADGET_PXA27X_MODULE)
static void balloon3_udc_command(int cmd)
static int balloon3_udc_is_connected(void)
static struct pxa2xx_udc_mach_info balloon3_udc_info __initdata = ;
static void __init balloon3_udc_init(void)
static inline void balloon3_udc_init(void)
#if defined(CONFIG_IRDA) || defined(CONFIG_IRDA_MODULE)
static struct pxaficp_platform_data balloon3_ficp_platform_data = ;
static void __init balloon3_irda_init(void)
static inline void balloon3_irda_init(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static unsigned long balloon3_uhc_pin_config[] __initdata = ;
static struct pxaohci_platform_data balloon3_ohci_info = ;
static void __init balloon3_uhc_init(void)
static inline void balloon3_uhc_init(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static unsigned long balloon3_led_pin_config[] __initdata = ;
struct gpio_led balloon3_gpio_leds[] = ;
static struct gpio_led_platform_data balloon3_gpio_led_info = ;
static struct platform_device balloon3_leds = ;
struct gpio_led balloon3_pcf_gpio_leds[] = ;
static struct gpio_led_platform_data balloon3_pcf_gpio_led_info = ;
static struct platform_device balloon3_pcf_leds = ;
static void __init balloon3_leds_init(void)
static inline void balloon3_leds_init(void)
static void balloon3_mask_irq(struct irq_data *d)
static void balloon3_unmask_irq(struct irq_data *d)
static struct irq_chip balloon3_irq_chip = ;
static void balloon3_irq_handler(unsigned int irq, struct irq_desc *desc)
static void __init balloon3_init_irq(void)
#if defined(CONFIG_GPIO_PCF857X) || defined(CONFIG_GPIO_PCF857X_MODULE)
static struct pcf857x_platform_data balloon3_pcf857x_pdata = ;
static struct i2c_board_info __initdata balloon3_i2c_devs[] = ;
static void __init balloon3_i2c_init(void)
static inline void balloon3_i2c_init(void)
#if defined(CONFIG_MTD_NAND_PLATFORM)||defined(CONFIG_MTD_NAND_PLATFORM_MODULE)
static void balloon3_nand_cmd_ctl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static void balloon3_nand_select_chip(struct mtd_info *mtd, int chip)
static int balloon3_nand_dev_ready(struct mtd_info *mtd)
static int balloon3_nand_probe(struct platform_device *pdev)
static void balloon3_nand_remove(struct platform_device *pdev)
static struct mtd_partition balloon3_partition_info[] = ;
static const char *balloon3_part_probes[] = ;
struct platform_nand_data balloon3_nand_pdata = ;
static struct resource balloon3_nand_resource[] = ;
static struct platform_device balloon3_nand = ;
static void __init balloon3_nand_init(void)
static inline void balloon3_nand_init(void)
#if defined(CONFIG_REGULATOR_MAX1586) || \
defined(CONFIG_REGULATOR_MAX1586_MODULE)
static struct regulator_consumer_supply balloon3_max1587a_consumers[] = ;
static struct regulator_init_data balloon3_max1587a_v3_info = ;
static struct max1586_subdev_data balloon3_max1587a_subdevs[] = ;
static struct max1586_platform_data balloon3_max1587a_info = ;
static struct i2c_board_info __initdata balloon3_pi2c_board_info[] = ;
static void __init balloon3_pmic_init(void)
static inline void balloon3_pmic_init(void)
static void __init balloon3_init(void)
static struct map_desc balloon3_io_desc[] __initdata = ;
static void __init balloon3_map_io(void)
MACHINE_START(BALLOON3, "Balloon3")
.map_io		= balloon3_map_io,
.nr_irqs	= BALLOON3_NR_IRQS,
.init_irq	= balloon3_init_irq,
.timer		= &pxa_timer,
.init_machine	= balloon3_init,
.boot_params	= PLAT_PHYS_OFFSET + 0x100,
MACHINE_END
