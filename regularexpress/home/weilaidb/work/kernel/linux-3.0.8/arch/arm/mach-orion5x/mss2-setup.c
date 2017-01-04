#define MSS2_NOR_BOOT_BASE	0xff800000
#define MSS2_NOR_BOOT_SIZE	SZ_256K
static struct physmap_flash_data mss2_nor_flash_data = ;
static struct resource mss2_nor_flash_resource = ;
static struct platform_device mss2_nor_flash = ;
static int __init mss2_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci mss2_pci __initdata = ;
static int __init mss2_pci_init(void)
subsys_initcall(mss2_pci_init);
static struct mv643xx_eth_platform_data mss2_eth_data = ;
static struct mv_sata_platform_data mss2_sata_data = ;
#define MSS2_GPIO_KEY_RESET	12
#define MSS2_GPIO_KEY_POWER	11
static struct gpio_keys_button mss2_buttons[] = ;
static struct gpio_keys_platform_data mss2_button_data = ;
static struct platform_device mss2_button_device = ;
#define MSS2_GPIO_RTC_IRQ	3
static struct i2c_board_info __initdata mss2_i2c_rtc = ;
static void mss2_power_off(void)
static unsigned int mss2_mpp_modes[] __initdata = ;
static void __init mss2_init(void)
MACHINE_START(MSS2, "Maxtor Shared Storage II")
.boot_params	= 0x00000100,
.init_machine	= mss2_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32
MACHINE_END
