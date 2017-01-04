#define I7300_IDLE_H
#define IOAT_BUS 0
#define IOAT_DEVFN PCI_DEVFN(8, 0)
#define MEMCTL_BUS 0
#define MEMCTL_DEVFN PCI_DEVFN(16, 1)
struct fbd_ioat ;
static const struct fbd_ioat fbd_ioat_list[] = ;
static const struct pci_device_id pci_tbl[] = ;
static inline int i7300_idle_platform_probe(struct pci_dev **fbd_dev,
struct pci_dev **ioat_dev,
int enable_all)
