#define DB88F5281_NOR_BOOT_BASE		0xf4000000
#define DB88F5281_NOR_BOOT_SIZE		SZ_512K
#define DB88F5281_7SEG_BASE		0xfa000000
#define DB88F5281_7SEG_SIZE		SZ_1K
#define DB88F5281_NOR_BASE		0xfc000000
#define DB88F5281_NOR_SIZE		SZ_32M
#define DB88F5281_NAND_BASE		0xfa800000
#define DB88F5281_NAND_SIZE		SZ_1K
#define DB88F5281_PCI_SLOT0_OFFS		7
#define DB88F5281_PCI_SLOT0_IRQ_PIN		12
#define DB88F5281_PCI_SLOT1_SLOT2_IRQ_PIN	13
static struct physmap_flash_data db88f5281_boot_flash_data = ;
static struct resource db88f5281_boot_flash_resource = ;
static struct platform_device db88f5281_boot_flash = ;
static struct physmap_flash_data db88f5281_nor_flash_data = ;
static struct resource db88f5281_nor_flash_resource = ;
static struct platform_device db88f5281_nor_flash = ;
static struct mtd_partition db88f5281_nand_parts[] = ;
static struct resource db88f5281_nand_resource = ;
static struct orion_nand_data db88f5281_nand_data = ;
static struct platform_device db88f5281_nand_flash = ;
static void __iomem *db88f5281_7seg;
static struct timer_list db88f5281_timer;
static void db88f5281_7seg_event(unsigned long data)
static int __init db88f5281_7seg_init(void)
__initcall(db88f5281_7seg_init);
void __init db88f5281_pci_preinit(void)
static int __init db88f5281_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci db88f5281_pci __initdata = ;
static int __init db88f5281_pci_init(void)
subsys_initcall(db88f5281_pci_init);
static struct mv643xx_eth_platform_data db88f5281_eth_data = ;
static struct i2c_board_info __initdata db88f5281_i2c_rtc = ;
static unsigned int db88f5281_mpp_modes[] __initdata = ;
static void __init db88f5281_init(void)
MACHINE_START(DB88F5281, "Marvell Orion-2 Development Board")
.boot_params	= 0x00000100,
.init_machine	= db88f5281_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
MACHINE_END
