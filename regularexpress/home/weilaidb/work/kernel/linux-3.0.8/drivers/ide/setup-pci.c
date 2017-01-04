static int ide_setup_pci_baseregs(struct pci_dev *dev, const char *name)
static int ide_pci_clear_simplex(unsigned long dma_base, const char *name)
unsigned long ide_pci_dma_base(ide_hwif_t *hwif, const struct ide_port_info *d)
EXPORT_SYMBOL_GPL(ide_pci_dma_base);
int ide_pci_check_simplex(ide_hwif_t *hwif, const struct ide_port_info *d)
EXPORT_SYMBOL_GPL(ide_pci_check_simplex);
int ide_pci_set_master(struct pci_dev *dev, const char *name)
EXPORT_SYMBOL_GPL(ide_pci_set_master);
void ide_setup_pci_noise(struct pci_dev *dev, const struct ide_port_info *d)
EXPORT_SYMBOL_GPL(ide_setup_pci_noise);
static int ide_pci_enable(struct pci_dev *dev, const struct ide_port_info *d)
static int ide_pci_configure(struct pci_dev *dev, const struct ide_port_info *d)
static int ide_pci_check_iomem(struct pci_dev *dev, const struct ide_port_info *d,
int bar)
static int ide_hw_configure(struct pci_dev *dev, const struct ide_port_info *d,
unsigned int port, struct ide_hw *hw)
int ide_hwif_setup_dma(ide_hwif_t *hwif, const struct ide_port_info *d)
static int ide_setup_pci_controller(struct pci_dev *dev,
const struct ide_port_info *d, int noisy)
void ide_pci_setup_ports(struct pci_dev *dev, const struct ide_port_info *d,
struct ide_hw *hw, struct ide_hw **hws)
EXPORT_SYMBOL_GPL(ide_pci_setup_ports);
static int do_ide_setup_pci_device(struct pci_dev *dev,
const struct ide_port_info *d,
u8 noisy)
int ide_pci_init_two(struct pci_dev *dev1, struct pci_dev *dev2,
const struct ide_port_info *d, void *priv)
EXPORT_SYMBOL_GPL(ide_pci_init_two);
int ide_pci_init_one(struct pci_dev *dev, const struct ide_port_info *d,
void *priv)
EXPORT_SYMBOL_GPL(ide_pci_init_one);
void ide_pci_remove(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(ide_pci_remove);
int ide_pci_suspend(struct pci_dev *dev, pm_message_t state)
EXPORT_SYMBOL_GPL(ide_pci_suspend);
int ide_pci_resume(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(ide_pci_resume);
