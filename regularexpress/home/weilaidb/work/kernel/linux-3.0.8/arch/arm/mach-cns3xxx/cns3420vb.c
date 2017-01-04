static struct mtd_partition cns3420_nor_partitions[] = ;
static struct physmap_flash_data cns3420_nor_pdata = ;
static struct resource cns3420_nor_res = ;
static struct platform_device cns3420_nor_pdev = ;
static void __init cns3420_early_serial_setup(void)
static struct resource cns3xxx_usb_ehci_resources[] = ;
static u64 cns3xxx_usb_ehci_dma_mask = DMA_BIT_MASK(32);
static struct platform_device cns3xxx_usb_ehci_device = ;
static struct resource cns3xxx_usb_ohci_resources[] = ;
static u64 cns3xxx_usb_ohci_dma_mask = DMA_BIT_MASK(32);
static struct platform_device cns3xxx_usb_ohci_device = ;
static struct platform_device *cns3420_pdevs[] __initdata = ;
static void __init cns3420_init(void)
static struct map_desc cns3420_io_desc[] __initdata = ;
static void __init cns3420_map_io(void)
MACHINE_START(CNS3420VB, "Cavium Networks CNS3420 Validation Board")
.boot_params	= 0x00000100,
.map_io		= cns3420_map_io,
.init_irq	= cns3xxx_init_irq,
.timer		= &cns3xxx_timer,
.init_machine	= cns3420_init,
MACHINE_END
