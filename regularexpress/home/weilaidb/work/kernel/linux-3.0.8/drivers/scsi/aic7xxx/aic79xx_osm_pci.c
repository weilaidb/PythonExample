#define ID(x)            \
ID2C(x),         \
ID2C(IDIROC(x))
static const struct pci_device_id ahd_linux_pci_id_table[] = ;
MODULE_DEVICE_TABLE(pci, ahd_linux_pci_id_table);
static int
ahd_linux_pci_dev_suspend(struct pci_dev *pdev, pm_message_t mesg)
static int
ahd_linux_pci_dev_resume(struct pci_dev *pdev)
static void
ahd_linux_pci_dev_remove(struct pci_dev *pdev)
static void
ahd_linux_pci_inherit_flags(struct ahd_softc *ahd)
static int
ahd_linux_pci_dev_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static struct pci_driver aic79xx_pci_driver = ;
int
ahd_linux_pci_init(void)
void
ahd_linux_pci_exit(void)
static int
ahd_linux_pci_reserve_io_regions(struct ahd_softc *ahd, resource_size_t *base,
resource_size_t *base2)
static int
ahd_linux_pci_reserve_mem_region(struct ahd_softc *ahd,
resource_size_t *bus_addr,
uint8_t __iomem **maddr)
int
ahd_pci_map_registers(struct ahd_softc *ahd)
int
ahd_pci_map_int(struct ahd_softc *ahd)
void
ahd_power_state_change(struct ahd_softc *ahd, ahd_power_state new_state)
