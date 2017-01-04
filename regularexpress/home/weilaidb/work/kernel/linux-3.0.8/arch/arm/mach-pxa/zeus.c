static unsigned long zeus_irq_enabled_mask;
static const int zeus_isa_irqs[] = ;
static const int zeus_isa_irq_map[] = ;
static inline int zeus_irq_to_bitmask(unsigned int irq)
static inline int zeus_bit_to_irq(int bit)
static void zeus_ack_irq(struct irq_data *d)
static void zeus_mask_irq(struct irq_data *d)
static void zeus_unmask_irq(struct irq_data *d)
static inline unsigned long zeus_irq_pending(void)
static void zeus_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip zeus_irq_chip = ;
static void __init zeus_init_irq(void)
static struct resource zeus_mtd_resources[] = ;
static struct physmap_flash_data zeus_flash_data[] = ;
static struct platform_device zeus_mtd_devices[] = ;
static struct resource zeus_serial_resources[] = ;
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device zeus_serial_device = ;
static struct resource zeus_dm9k0_resource[] = ;
static struct resource zeus_dm9k1_resource[] = ;
static struct dm9000_plat_data zeus_dm9k_platdata = ;
static struct platform_device zeus_dm9k0_device = ;
static struct platform_device zeus_dm9k1_device = ;
static struct resource zeus_sram_resource = ;
static struct platform_device zeus_sram_device = ;
static struct pxa2xx_spi_master pxa2xx_spi_ssp3_master_info = ;
static int zeus_mcp2515_setup(struct spi_device *sdev)
static int zeus_mcp2515_transceiver_enable(int enable)
static struct mcp251x_platform_data zeus_mcp2515_pdata = ;
static struct spi_board_info zeus_spi_board_info[] = ;
static struct gpio_led zeus_leds[] = ;
static struct gpio_led_platform_data zeus_leds_info = ;
static struct platform_device zeus_leds_device = ;
static void zeus_cf_reset(int state)
static struct arcom_pcmcia_pdata zeus_pcmcia_info = ;
static struct platform_device zeus_pcmcia_device = ;
static struct resource zeus_max6369_resource = ;
struct platform_device zeus_max6369_device = ;
static struct platform_device *zeus_devices[] __initdata = ;
static pxa2xx_audio_ops_t zeus_ac97_info = ;
static int zeus_ohci_init(struct device *dev)
static void zeus_ohci_exit(struct device *dev)
static struct pxaohci_platform_data zeus_ohci_platform_data = ;
static void zeus_lcd_power(int on, struct fb_var_screeninfo *si)
static void zeus_backlight_power(int on)
static int zeus_setup_fb_gpios(void)
static struct pxafb_mode_info zeus_fb_mode_info[] = ;
static struct pxafb_mach_info zeus_fb_info = ;
static struct pxamci_platform_data zeus_mci_platform_data = ;
static void zeus_udc_command(int cmd)
static struct pxa2xx_udc_mach_info zeus_udc_info = ;
static void zeus_power_off(void)
#define zeus_power_off   NULL
static void zeus_get_power_status(struct apm_power_info *info)
static inline void zeus_setup_apm(void)
static inline void zeus_setup_apm(void)
static int zeus_get_pcb_info(struct i2c_client *client, unsigned gpio,
unsigned ngpio, void *context)
static struct pca953x_platform_data zeus_pca953x_pdata[] = ;
static struct i2c_board_info __initdata zeus_i2c_devices[] = ;
static mfp_cfg_t zeus_pin_config[] __initdata = ;
#define DM9K_MSC_VALUE		0xe4c9
static void __init zeus_init(void)
static struct map_desc zeus_io_desc[] __initdata = ;
static void __init zeus_map_io(void)
MACHINE_START(ARCOM_ZEUS, "Arcom/Eurotech ZEUS")
.boot_params	= 0xa0000100,
.map_io		= zeus_map_io,
.nr_irqs	= ZEUS_NR_IRQS,
.init_irq	= zeus_init_irq,
.timer		= &pxa_timer,
.init_machine	= zeus_init,
MACHINE_END
