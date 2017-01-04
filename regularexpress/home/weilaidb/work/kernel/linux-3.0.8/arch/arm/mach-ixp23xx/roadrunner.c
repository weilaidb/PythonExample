#define INTA		IRQ_ROADRUNNER_PCI_INTA
#define INTB		IRQ_ROADRUNNER_PCI_INTB
#define INTC		IRQ_ROADRUNNER_PCI_INTC
#define INTD		IRQ_ROADRUNNER_PCI_INTD
#define INTC_PIN	IXP23XX_GPIO_PIN_11
#define INTD_PIN	IXP23XX_GPIO_PIN_12
static int __init roadrunner_map_irq(struct pci_dev *dev, u8 idsel, u8 pin)
static void __init roadrunner_pci_preinit(void)
static struct hw_pci roadrunner_pci __initdata = ;
static int __init roadrunner_pci_init(void)
;
subsys_initcall(roadrunner_pci_init);
static struct physmap_flash_data roadrunner_flash_data = ;
static struct resource roadrunner_flash_resource = ;
static struct platform_device roadrunner_flash = ;
static void __init roadrunner_init(void)
MACHINE_START(ROADRUNNER, "ADI Engineering RoadRunner Development Platform")
.map_io		= ixp23xx_map_io,
.init_irq	= ixp23xx_init_irq,
.timer		= &ixp23xx_timer,
.boot_params	= 0x00000100,
.init_machine	= roadrunner_init,
MACHINE_END
