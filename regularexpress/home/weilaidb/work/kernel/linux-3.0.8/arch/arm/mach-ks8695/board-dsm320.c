static int dsm320_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct ks8695_pci_cfg __initdata dsm320_pci = ;
static void __init dsm320_register_pci(void)
static inline void __init dsm320_register_pci(void)
static struct physmap_flash_data dsm320_nor_pdata = ;
static struct resource dsm320_nor_resource[] = ;
static struct platform_device dsm320_device_nor = ;
void __init dsm320_register_nor(void)
static void __init dsm320_init(void)
MACHINE_START(DSM320, "D-Link DSM-320 Wireless Media Player")
.boot_params	= KS8695_SDRAM_PA + 0x100,
.map_io		= ks8695_map_io,
.init_irq	= ks8695_init_irq,
.init_machine	= dsm320_init,
.timer		= &ks8695_timer,
MACHINE_END
