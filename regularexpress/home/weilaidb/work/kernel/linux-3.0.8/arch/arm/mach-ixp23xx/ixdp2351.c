static void ixdp2351_inta_mask(struct irq_data *d)
static void ixdp2351_inta_unmask(struct irq_data *d)
static void ixdp2351_inta_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip ixdp2351_inta_chip = ;
static void ixdp2351_intb_mask(struct irq_data *d)
static void ixdp2351_intb_unmask(struct irq_data *d)
static void ixdp2351_intb_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip ixdp2351_intb_chip = ;
void __init ixdp2351_init_irq(void)
#define DEVPIN(dev, pin) ((pin) | ((dev) << 3))
static int __init ixdp2351_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci ixdp2351_pci __initdata = ;
int __init ixdp2351_pci_init(void)
subsys_initcall(ixdp2351_pci_init);
static struct map_desc ixdp2351_io_desc[] __initdata = ;
static void __init ixdp2351_map_io(void)
static struct physmap_flash_data ixdp2351_flash_data = ;
static struct resource ixdp2351_flash_resource = ;
static struct platform_device ixdp2351_flash = ;
static void __init ixdp2351_init(void)
MACHINE_START(IXDP2351, "Intel IXDP2351 Development Platform")
.map_io		= ixdp2351_map_io,
.init_irq	= ixdp2351_init_irq,
.timer		= &ixp23xx_timer,
.boot_params	= 0x00000100,
.init_machine	= ixdp2351_init,
MACHINE_END
