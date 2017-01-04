#define TSP2_NOR_BOOT_BASE	0xf4000000
#define TSP2_NOR_BOOT_SIZE	SZ_256K
static struct physmap_flash_data tsp2_nor_flash_data = ;
static struct resource tsp2_nor_flash_resource = ;
static struct platform_device tsp2_nor_flash = ;
#define TSP2_PCI_SLOT0_OFFS		7
#define TSP2_PCI_SLOT0_IRQ_PIN		11
void __init tsp2_pci_preinit(void)
static int __init tsp2_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci tsp2_pci __initdata = ;
static int __init tsp2_pci_init(void)
subsys_initcall(tsp2_pci_init);
static struct mv643xx_eth_platform_data tsp2_eth_data = ;
#define TSP2_RTC_GPIO	9
static struct i2c_board_info __initdata tsp2_i2c_rtc = ;
#define UART1_REG(x)	(UART1_VIRT_BASE + ((UART_##x) << 2))
static int tsp2_miconread(unsigned char *buf, int count)
static int tsp2_miconwrite(const unsigned char *buf, int count)
static int tsp2_miconsend(const unsigned char *data, int count)
static void tsp2_power_off(void)
static unsigned int tsp2_mpp_modes[] __initdata = ;
static void __init tsp2_init(void)
MACHINE_START(TERASTATION_PRO2, "Buffalo Terastation Pro II/Live")
.boot_params	= 0x00000100,
.init_machine	= tsp2_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
