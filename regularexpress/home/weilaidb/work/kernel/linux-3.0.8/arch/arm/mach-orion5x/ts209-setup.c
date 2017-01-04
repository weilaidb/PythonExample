#define QNAP_TS209_NOR_BOOT_BASE 0xf4000000
#define QNAP_TS209_NOR_BOOT_SIZE SZ_8M
static struct mtd_partition qnap_ts209_partitions[] = ;
static struct physmap_flash_data qnap_ts209_nor_flash_data = ;
static struct resource qnap_ts209_nor_flash_resource = ;
static struct platform_device qnap_ts209_nor_flash = ;
#define QNAP_TS209_PCI_SLOT0_OFFS	7
#define QNAP_TS209_PCI_SLOT0_IRQ_PIN	6
#define QNAP_TS209_PCI_SLOT1_IRQ_PIN	7
void __init qnap_ts209_pci_preinit(void)
static int __init qnap_ts209_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci qnap_ts209_pci __initdata = ;
static int __init qnap_ts209_pci_init(void)
subsys_initcall(qnap_ts209_pci_init);
#define TS209_RTC_GPIO	3
static struct i2c_board_info __initdata qnap_ts209_i2c_rtc = ;
#define QNAP_TS209_GPIO_KEY_MEDIA	1
#define QNAP_TS209_GPIO_KEY_RESET	2
static struct gpio_keys_button qnap_ts209_buttons[] = ;
static struct gpio_keys_platform_data qnap_ts209_button_data = ;
static struct platform_device qnap_ts209_button_device = ;
static struct mv_sata_platform_data qnap_ts209_sata_data = ;
static unsigned int ts209_mpp_modes[] __initdata = ;
static void __init qnap_ts209_init(void)
MACHINE_START(TS209, "QNAP TS-109/TS-209")
.boot_params	= 0x00000100,
.init_machine	= qnap_ts209_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
