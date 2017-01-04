#define RD88F5181L_GE_NOR_BOOT_BASE		0xff000000
#define RD88F5181L_GE_NOR_BOOT_SIZE		SZ_16M
static struct physmap_flash_data rd88f5181l_ge_nor_boot_flash_data = ;
static struct resource rd88f5181l_ge_nor_boot_flash_resource = ;
static struct platform_device rd88f5181l_ge_nor_boot_flash = ;
static unsigned int rd88f5181l_ge_mpp_modes[] __initdata = ;
static struct mv643xx_eth_platform_data rd88f5181l_ge_eth_data = ;
static struct dsa_chip_data rd88f5181l_ge_switch_chip_data = ;
static struct dsa_platform_data rd88f5181l_ge_switch_plat_data = ;
static struct i2c_board_info __initdata rd88f5181l_ge_i2c_rtc = ;
static void __init rd88f5181l_ge_init(void)
static int __init
rd88f5181l_ge_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci rd88f5181l_ge_pci __initdata = ;
static int __init rd88f5181l_ge_pci_init(void)
subsys_initcall(rd88f5181l_ge_pci_init);
MACHINE_START(RD88F5181L_GE, "Marvell Orion-VoIP GE Reference Design")
.boot_params	= 0x00000100,
.init_machine	= rd88f5181l_ge_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
