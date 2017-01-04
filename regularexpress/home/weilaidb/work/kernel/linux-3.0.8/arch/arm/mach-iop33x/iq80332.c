static void __init iq80332_timer_init(void)
static struct sys_timer iq80332_timer = ;
static int __init
iq80332_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci iq80332_pci __initdata = ;
static int __init iq80332_pci_init(void)
subsys_initcall(iq80332_pci_init);
static struct physmap_flash_data iq80332_flash_data = ;
static struct resource iq80332_flash_resource = ;
static struct platform_device iq80332_flash_device = ;
static void __init iq80332_init_machine(void)
MACHINE_START(IQ80332, "Intel IQ80332")
.boot_params	= 0x00000100,
.map_io		= iop3xx_map_io,
.init_irq	= iop33x_init_irq,
.timer		= &iq80332_timer,
.init_machine	= iq80332_init_machine,
MACHINE_END
