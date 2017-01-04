static unsigned int wnr854t_mpp_modes[] __initdata = ;
#define WNR854T_NOR_BOOT_BASE	0xf4000000
#define WNR854T_NOR_BOOT_SIZE	SZ_8M
static struct mtd_partition wnr854t_nor_flash_partitions[] = ;
static struct physmap_flash_data wnr854t_nor_flash_data = ;
static struct resource wnr854t_nor_flash_resource = ;
static struct platform_device wnr854t_nor_flash = ;
static struct mv643xx_eth_platform_data wnr854t_eth_data = ;
static struct dsa_chip_data wnr854t_switch_chip_data = ;
static struct dsa_platform_data wnr854t_switch_plat_data = ;
static void __init wnr854t_init(void)
static int __init wnr854t_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci wnr854t_pci __initdata = ;
static int __init wnr854t_pci_init(void)
subsys_initcall(wnr854t_pci_init);
MACHINE_START(WNR854T, "Netgear WNR854T")
.boot_params	= 0x00000100,
.init_machine	= wnr854t_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
