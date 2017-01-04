#define ID(x)	ID_C(x, PCI_CLASS_STORAGE_SCSI)
static const struct pci_device_id ahc_linux_pci_id_table[] = ;
MODULE_DEVICE_TABLE(pci, ahc_linux_pci_id_table);
static int
ahc_linux_pci_dev_suspend(struct pci_dev *pdev, pm_message_t mesg)
static int
ahc_linux_pci_dev_resume(struct pci_dev *pdev)
static void
ahc_linux_pci_dev_remove(struct pci_dev *pdev)
static void
ahc_linux_pci_inherit_flags(struct ahc_softc *ahc)
static int
ahc_linux_pci_dev_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
uint32_t
ahc_pci_read_config(ahc_dev_softc_t pci, int reg, int width)
void
ahc_pci_write_config(ahc_dev_softc_t pci, int reg, uint32_t value, int width)
static struct pci_driver aic7xxx_pci_driver = ;
int
ahc_linux_pci_init(void)
void
ahc_linux_pci_exit(void)
static int
ahc_linux_pci_reserve_io_region(struct ahc_softc *ahc, resource_size_t *base)
static int
ahc_linux_pci_reserve_mem_region(struct ahc_softc *ahc,
resource_size_t *bus_addr,
uint8_t __iomem **maddr)
int
ahc_pci_map_registers(struct ahc_softc *ahc)
int
ahc_pci_map_int(struct ahc_softc *ahc)
