#undef DEBUG
# define DBG(x...) printk(x)
# define DBG(x...)
static int pciauto_upper_iospc;
static int pciauto_upper_memspc;
static struct pci_dev pciauto_dev;
static struct pci_bus pciauto_bus;
static void __init
pciauto_setup_bars(struct pci_dev *dev, int bar_limit)
static void __init
pciauto_setup_irq(struct pci_controller* pci_ctrl,struct pci_dev *dev,int devfn)
static void __init
pciauto_prescan_setup_bridge(struct pci_dev *dev, int current_bus,
int sub_bus, int *iosave, int *memsave)
static void __init
pciauto_postscan_setup_bridge(struct pci_dev *dev, int current_bus, int sub_bus,
int *iosave, int *memsave)
int __init pciauto_bus_scan(struct pci_controller *pci_ctrl, int current_bus)
