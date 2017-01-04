static struct gpio_led wrt350n_v2_led_pins[] = ;
static struct gpio_led_platform_data wrt350n_v2_led_data = ;
static struct platform_device wrt350n_v2_leds = ;
static struct gpio_keys_button wrt350n_v2_buttons[] = ;
static struct gpio_keys_platform_data wrt350n_v2_button_data = ;
static struct platform_device wrt350n_v2_button_device = ;
static unsigned int wrt350n_v2_mpp_modes[] __initdata = ;
#define WRT350N_V2_NOR_BOOT_BASE	0xf4000000
#define WRT350N_V2_NOR_BOOT_SIZE	SZ_8M
static struct mtd_partition wrt350n_v2_nor_flash_partitions[] = ;
static struct physmap_flash_data wrt350n_v2_nor_flash_data = ;
static struct resource wrt350n_v2_nor_flash_resource = ;
static struct platform_device wrt350n_v2_nor_flash = ;
static struct mv643xx_eth_platform_data wrt350n_v2_eth_data = ;
static struct dsa_chip_data wrt350n_v2_switch_chip_data = ;
static struct dsa_platform_data wrt350n_v2_switch_plat_data = ;
static void __init wrt350n_v2_init(void)
static int __init wrt350n_v2_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci wrt350n_v2_pci __initdata = ;
static int __init wrt350n_v2_pci_init(void)
subsys_initcall(wrt350n_v2_pci_init);
MACHINE_START(WRT350N_V2, "Linksys WRT350N v2")
.boot_params	= 0x00000100,
.init_machine	= wrt350n_v2_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
