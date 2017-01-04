static int __init espresso_pci_init(void)
;
subsys_initcall(espresso_pci_init);
static struct physmap_flash_data espresso_flash_data = ;
static struct resource espresso_flash_resource = ;
static struct platform_device espresso_flash = ;
static void __init espresso_init(void)
MACHINE_START(ESPRESSO, "IP Fabrics Double Espresso")
.map_io		= ixp23xx_map_io,
.init_irq	= ixp23xx_init_irq,
.timer		= &ixp23xx_timer,
.boot_params	= 0x00000100,
.init_machine	= espresso_init,
MACHINE_END
