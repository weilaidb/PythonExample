#define RD88F5182_NOR_BOOT_BASE		0xf4000000
#define RD88F5182_NOR_BOOT_SIZE		SZ_512K
#define RD88F5182_NOR_BASE		0xfc000000
#define RD88F5182_NOR_SIZE		SZ_16M
#define RD88F5182_PCI_SLOT0_OFFS	7
#define RD88F5182_PCI_SLOT0_IRQ_A_PIN	7
#define RD88F5182_PCI_SLOT0_IRQ_B_PIN	6
#define RD88F5182_GPIO_DBG_LED		0
static struct physmap_flash_data rd88f5182_nor_flash_data = ;
static struct resource rd88f5182_nor_flash_resource = ;
static struct platform_device rd88f5182_nor_flash = ;
static void rd88f5182_dbgled_event(led_event_t evt)
static int __init rd88f5182_dbgled_init(void)
__initcall(rd88f5182_dbgled_init);
void __init rd88f5182_pci_preinit(void)
static int __init rd88f5182_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci rd88f5182_pci __initdata = ;
static int __init rd88f5182_pci_init(void)
subsys_initcall(rd88f5182_pci_init);
static struct mv643xx_eth_platform_data rd88f5182_eth_data = ;
static struct i2c_board_info __initdata rd88f5182_i2c_rtc = ;
static struct mv_sata_platform_data rd88f5182_sata_data = ;
static unsigned int rd88f5182_mpp_modes[] __initdata = ;
static void __init rd88f5182_init(void)
MACHINE_START(RD88F5182, "Marvell Orion-NAS Reference Design")
.boot_params	= 0x00000100,
.init_machine	= rd88f5182_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
MACHINE_END
