#define _ASM_MICROBLAZE_PROM_H
#define HAVE_ARCH_DEVTREE_FIXUPS
extern int early_uartlite_console(void);
extern int early_uart16550_console(void);
struct pci_bus;
struct pci_dev;
extern int pci_device_from_OF_node(struct device_node *node,
u8 *bus, u8 *devfn);
extern struct device_node *pci_busdev_to_OF_node(struct pci_bus *bus,
int devfn);
extern struct device_node *pci_device_to_OF_node(struct pci_dev *dev);
extern void pci_create_OF_bus_map(void);
extern unsigned long pci_address_to_pio(phys_addr_t address);
#define pci_address_to_pio pci_address_to_pio
void of_parse_dma_window(struct device_node *dn, const void *dma_window_prop,
unsigned long *busno, unsigned long *phys, unsigned long *size);
extern void kdump_move_device_tree(void);
struct device_node *of_get_cpu_node(int cpu, unsigned int *thread);
