static u64 uart_dmamask     = DMA_BIT_MASK(32);
static struct resource pnx833x_uart_resources[] = ;
struct pnx8xxx_port pnx8xxx_ports[] = ;
static struct platform_device pnx833x_uart_device = ;
static u64 ehci_dmamask     = DMA_BIT_MASK(32);
static struct resource pnx833x_usb_ehci_resources[] = ;
static struct platform_device pnx833x_usb_ehci_device = ;
static struct resource pnx833x_i2c0_resources[] = ;
static struct resource pnx833x_i2c1_resources[] = ;
static struct i2c_pnx0105_dev pnx833x_i2c_dev[] = ;
static struct platform_device pnx833x_i2c0_device = ;
static struct platform_device pnx833x_i2c1_device = ;
static u64 ethernet_dmamask = DMA_BIT_MASK(32);
static struct resource pnx833x_ethernet_resources[] = ;
static struct platform_device pnx833x_ethernet_device = ;
static struct resource pnx833x_sata_resources[] = ;
static struct platform_device pnx833x_sata_device = ;
static const char *part_probes[] = ;
static void
pnx833x_flash_nand_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static struct platform_nand_data pnx833x_flash_nand_data = ;
static struct resource pnx833x_flash_nand_resource = ;
static struct platform_device pnx833x_flash_nand = ;
static struct platform_device *pnx833x_platform_devices[] __initdata = ;
static int __init pnx833x_platform_init(void)
arch_initcall(pnx833x_platform_init);
