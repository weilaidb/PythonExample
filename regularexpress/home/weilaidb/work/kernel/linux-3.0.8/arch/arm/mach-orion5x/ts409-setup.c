#define QNAP_TS409_NOR_BOOT_BASE 0xff800000
#define QNAP_TS409_NOR_BOOT_SIZE SZ_8M
static struct mtd_partition qnap_ts409_partitions[] = ;
static struct physmap_flash_data qnap_ts409_nor_flash_data = ;
static struct resource qnap_ts409_nor_flash_resource = ;
static struct platform_device qnap_ts409_nor_flash = ;
static int __init qnap_ts409_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci qnap_ts409_pci __initdata = ;
static int __init qnap_ts409_pci_init(void)
subsys_initcall(qnap_ts409_pci_init);
#define TS409_RTC_GPIO	10
static struct i2c_board_info __initdata qnap_ts409_i2c_rtc = ;
static struct gpio_led ts409_led_pins[] = ;
static struct gpio_led_platform_data ts409_led_data = ;
static struct platform_device ts409_leds = ;
#define QNAP_TS409_GPIO_KEY_RESET	14
#define QNAP_TS409_GPIO_KEY_MEDIA	15
static struct gpio_keys_button qnap_ts409_buttons[] = ;
static struct gpio_keys_platform_data qnap_ts409_button_data = ;
static struct platform_device qnap_ts409_button_device = ;
static unsigned int ts409_mpp_modes[] __initdata = ;
static void __init qnap_ts409_init(void)
MACHINE_START(TS409, "QNAP TS-409")
.boot_params	= 0x00000100,
.init_machine	= qnap_ts409_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
