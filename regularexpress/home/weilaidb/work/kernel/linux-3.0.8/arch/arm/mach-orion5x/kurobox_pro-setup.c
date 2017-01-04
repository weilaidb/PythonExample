#define KUROBOX_PRO_NOR_BOOT_BASE	0xf4000000
#define KUROBOX_PRO_NOR_BOOT_SIZE	SZ_256K
#define KUROBOX_PRO_NAND_BASE		0xfc000000
#define KUROBOX_PRO_NAND_SIZE		SZ_2M
static struct mtd_partition kurobox_pro_nand_parts[] = ;
static struct resource kurobox_pro_nand_resource = ;
static struct orion_nand_data kurobox_pro_nand_data = ;
static struct platform_device kurobox_pro_nand_flash = ;
static struct physmap_flash_data kurobox_pro_nor_flash_data = ;
static struct resource kurobox_pro_nor_flash_resource = ;
static struct platform_device kurobox_pro_nor_flash = ;
static int __init kurobox_pro_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci kurobox_pro_pci __initdata = ;
static int __init kurobox_pro_pci_init(void)
subsys_initcall(kurobox_pro_pci_init);
static struct mv643xx_eth_platform_data kurobox_pro_eth_data = ;
static struct i2c_board_info __initdata kurobox_pro_i2c_rtc = ;
static struct mv_sata_platform_data kurobox_pro_sata_data = ;
#define UART1_REG(x)	(UART1_VIRT_BASE + ((UART_##x) << 2))
static int kurobox_pro_miconread(unsigned char *buf, int count)
static int kurobox_pro_miconwrite(const unsigned char *buf, int count)
static int kurobox_pro_miconsend(const unsigned char *data, int count)
static void kurobox_pro_power_off(void)
static unsigned int kurobox_pro_mpp_modes[] __initdata = ;
static void __init kurobox_pro_init(void)
MACHINE_START(KUROBOX_PRO, "Buffalo/Revogear Kurobox Pro")
.boot_params	= 0x00000100,
.init_machine	= kurobox_pro_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
MACHINE_START(LINKSTATION_PRO, "Buffalo Linkstation Pro/Live")
.boot_params	= 0x00000100,
.init_machine	= kurobox_pro_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
