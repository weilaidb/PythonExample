static int micrel_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct ks8695_pci_cfg __initdata micrel_pci = ;
static void __init micrel_init(void)
MACHINE_START(KS8695, "KS8695 Centaur Development Board")
.boot_params	= KS8695_SDRAM_PA + 0x100,
.map_io		= ks8695_map_io,
.init_irq	= ks8695_init_irq,
.init_machine	= micrel_init,
.timer		= &ks8695_timer,
MACHINE_END
