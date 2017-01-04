#define VX855_CFG_PMIO_OFFSET	0x88
#define VX855_PMIO_ACPI		0x00
#define VX855_PMIO_ACPI_LEN	0x0b
#define VX855_PMIO_PPM		0x10
#define VX855_PMIO_PPM_LEN	0x08
#define VX855_PMIO_GPPM		0x20
#define VX855_PMIO_R_GPI	0x48
#define VX855_PMIO_R_GPO	0x4c
#define VX855_PMIO_GPPM_LEN	0x33
#define VSPIC_MMIO_SIZE	0x1000
static struct resource vx855_gpio_resources[] = ;
static struct mfd_cell vx855_cells[] = ;
static __devinit int vx855_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit vx855_remove(struct pci_dev *pdev)
static struct pci_device_id vx855_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, vx855_pci_tbl);
static struct pci_driver vx855_pci_driver = ;
static int vx855_init(void)
module_init(vx855_init);
static void vx855_exit(void)
module_exit(vx855_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <HaraldWelte@viatech.com>");
MODULE_DESCRIPTION("Driver for the VIA VX855 chipset");
