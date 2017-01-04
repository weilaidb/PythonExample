void __init stamp9g20_init_early(void)
static void __init stamp9g20evb_init_early(void)
static void __init portuxg20_init_early(void)
static void __init init_irq(void)
static struct atmel_nand_data __initdata nand_data = ;
static struct sam9_smc_config __initdata nand_smc_config = ;
static void __init add_device_nand(void)
#if defined(CONFIG_MMC_ATMELMCI) || defined(CONFIG_MMC_ATMELMCI_MODULE)
static struct mci_platform_data __initdata mmc_data = ;
static struct at91_mmc_data __initdata mmc_data = ;
static struct at91_usbh_data __initdata usbh_data = ;
static struct at91_udc_data __initdata portuxg20_udc_data = ;
static struct at91_udc_data __initdata stamp9g20evb_udc_data = ;
static struct at91_eth_data __initdata macb_data = ;
static struct gpio_led portuxg20_leds[] = ;
static struct gpio_led stamp9g20evb_leds[] = ;
static struct spi_board_info portuxg20_spi_devices[] = ;
static struct w1_gpio_platform_data w1_gpio_pdata = ;
static struct platform_device w1_device = ;
void add_w1(void)
void __init stamp9g20_board_init(void)
static void __init portuxg20_board_init(void)
static void __init stamp9g20evb_board_init(void)
MACHINE_START(PORTUXG20, "taskit PortuxG20")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= portuxg20_init_early,
.init_irq	= init_irq,
.init_machine	= portuxg20_board_init,
MACHINE_END
MACHINE_START(STAMP9G20, "taskit Stamp9G20")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= stamp9g20evb_init_early,
.init_irq	= init_irq,
.init_machine	= stamp9g20evb_board_init,
MACHINE_END
