struct plat_vlynq_data ;
static int vlynq_on(struct vlynq_device *dev)
static void vlynq_off(struct vlynq_device *dev)
static struct resource vlynq_low_res[] = ;
static struct resource vlynq_high_res[] = ;
static struct plat_vlynq_data vlynq_low_data = ;
static struct plat_vlynq_data vlynq_high_data = ;
static struct platform_device vlynq_low = ;
static struct platform_device vlynq_high = ;
static struct resource physmap_flash_resource = ;
static struct physmap_flash_data physmap_flash_data = ;
static struct platform_device physmap_flash = ;
static struct resource cpmac_low_res[] = ;
static struct resource cpmac_high_res[] = ;
static struct fixed_phy_status fixed_phy_status __initdata = ;
static struct plat_cpmac_data cpmac_low_data = ;
static struct plat_cpmac_data cpmac_high_data = ;
static u64 cpmac_dma_mask = DMA_BIT_MASK(32);
static struct platform_device cpmac_low = ;
static struct platform_device cpmac_high = ;
static void __init cpmac_get_mac(int instance, unsigned char *dev_addr)
static struct resource usb_res[] = ;
static struct platform_device ar7_udc = ;
static struct gpio_led default_leds[] = ;
static struct gpio_led titan_leds[] = ;
static struct gpio_led dsl502t_leds[] = ;
static struct gpio_led dg834g_leds[] = ;
static struct gpio_led fb_sl_leds[] = ;
static struct gpio_led fb_fon_leds[] = ;
static struct gpio_led_platform_data ar7_led_data;
static struct platform_device ar7_gpio_leds = ;
static void __init detect_leds(void)
static struct resource ar7_wdt_res = ;
static struct platform_device ar7_wdt = ;
static int __init ar7_register_uarts(void)
static void __init titan_fixup_devices(void)
static int __init ar7_register_devices(void)
device_initcall(ar7_register_devices);
