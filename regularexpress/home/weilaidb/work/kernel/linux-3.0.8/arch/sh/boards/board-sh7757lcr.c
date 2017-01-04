static struct resource heartbeat_resource = ;
static unsigned char heartbeat_bit_pos[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct platform_device heartbeat_device = ;
#define GBECONT		0xffc10100
#define GBECONT_RMII1	BIT(17)
#define GBECONT_RMII0	BIT(16)
static void sh7757_eth_set_mdio_gate(unsigned long addr)
static struct resource sh_eth0_resources[] = ;
static struct sh_eth_plat_data sh7757_eth0_pdata = ;
static struct platform_device sh7757_eth0_device = ;
static struct resource sh_eth1_resources[] = ;
static struct sh_eth_plat_data sh7757_eth1_pdata = ;
static struct platform_device sh7757_eth1_device = ;
static void sh7757_eth_giga_set_mdio_gate(unsigned long addr)
static struct resource sh_eth_giga0_resources[] = ;
static struct sh_eth_plat_data sh7757_eth_giga0_pdata = ;
static struct platform_device sh7757_eth_giga0_device = ;
static struct resource sh_eth_giga1_resources[] = ;
static struct sh_eth_plat_data sh7757_eth_giga1_pdata = ;
static struct platform_device sh7757_eth_giga1_device = ;
static struct resource sh_mmcif_resources[] = ;
static struct sh_mmcif_dma sh7757lcr_mmcif_dma = ;
static struct sh_mmcif_plat_data sh_mmcif_plat = ;
static struct platform_device sh_mmcif_device = ;
static struct sh_mobile_sdhi_info sdhi_info = ;
static struct resource sdhi_resources[] = ;
static struct platform_device sdhi_device = ;
static struct platform_device *sh7757lcr_devices[] __initdata = ;
static struct flash_platform_data spi_flash_data = ;
static struct spi_board_info spi_board_info[] = ;
static int __init sh7757lcr_devices_setup(void)
arch_initcall(sh7757lcr_devices_setup);
void __init init_sh7757lcr_IRQ(void)
static void __init sh7757lcr_setup(char **cmdline_p)
static int sh7757lcr_mode_pins(void)
static struct sh_machine_vector mv_sh7757lcr __initmv = ;
