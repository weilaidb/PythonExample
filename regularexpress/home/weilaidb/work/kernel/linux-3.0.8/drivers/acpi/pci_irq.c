#define PREFIX "ACPI: "
#define _COMPONENT		ACPI_PCI_COMPONENT
ACPI_MODULE_NAME("pci_irq");
struct acpi_prt_entry ;
static LIST_HEAD(acpi_prt_list);
static DEFINE_SPINLOCK(acpi_prt_lock);
static inline char pin_name(int pin)
static struct acpi_prt_entry *acpi_pci_irq_find_prt_entry(struct pci_dev *dev,
int pin)
const char		*actual_source;
};
#define PCI_INTX_PIN(c)		(c - 'A' + 1)
static const struct prt_quirk prt_quirks[] = ;
static void do_prt_fixups(struct acpi_prt_entry *entry,
struct acpi_pci_routing_table *prt)
static int acpi_pci_irq_add_entry(acpi_handle handle, struct pci_bus *bus,
struct acpi_pci_routing_table *prt)
int acpi_pci_irq_add_prt(acpi_handle handle, struct pci_bus *bus)
void acpi_pci_irq_del_prt(struct pci_bus *bus)
static struct acpi_prt_entry *acpi_pci_irq_lookup(struct pci_dev *dev, int pin)
int acpi_pci_irq_enable(struct pci_dev *dev)
void __attribute__ ((weak)) acpi_unregister_gsi(u32 i)
void acpi_pci_irq_disable(struct pci_dev *dev)
