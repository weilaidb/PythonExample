struct acpi_vendor_uuid sn_uuid = ;
struct sn_pcidev_match ;
static long
sal_ioif_init(u64 *result)
static acpi_status __init
sn_acpi_hubdev_init(acpi_handle handle, u32 depth, void *context, void **ret)
static struct pcibus_bussoft *
sn_get_bussoft_ptr(struct pci_bus *bus)
static int
sn_extract_device_info(acpi_handle handle, struct pcidev_info **pcidev_info,
struct sn_irq_info **sn_irq_info)
static unsigned int
get_host_devfn(acpi_handle device_handle, acpi_handle rootbus_handle)
static acpi_status
find_matching_device(acpi_handle handle, u32 lvl, void *context, void **rv)
int
sn_acpi_get_pcidev_info(struct pci_dev *dev, struct pcidev_info **pcidev_info,
struct sn_irq_info **sn_irq_info)
void
sn_acpi_slot_fixup(struct pci_dev *dev)
EXPORT_SYMBOL(sn_acpi_slot_fixup);
void
sn_acpi_bus_fixup(struct pci_bus *bus)
void __init
sn_io_acpi_init(void)
