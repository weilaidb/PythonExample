#define PREFIX "ACPI: "
#define _COMPONENT		ACPI_PCI_COMPONENT
ACPI_MODULE_NAME("pci_root");
#define ACPI_PCI_ROOT_CLASS		"pci_bridge"
#define ACPI_PCI_ROOT_DEVICE_NAME	"PCI Root Bridge"
static int acpi_pci_root_add(struct acpi_device *device);
static int acpi_pci_root_remove(struct acpi_device *device, int type);
static int acpi_pci_root_start(struct acpi_device *device);
#define ACPI_PCIE_REQ_SUPPORT (OSC_EXT_PCI_CONFIG_SUPPORT \
| OSC_ACTIVE_STATE_PWR_SUPPORT \
| OSC_CLOCK_PWR_CAPABILITY_SUPPORT \
| OSC_MSI_SUPPORT)
static const struct acpi_device_id root_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, root_device_ids);
static struct acpi_driver acpi_pci_root_driver = ;
static LIST_HEAD(acpi_pci_roots);
static struct acpi_pci_driver *sub_driver;
static DEFINE_MUTEX(osc_lock);
int acpi_pci_register_driver(struct acpi_pci_driver *driver)
EXPORT_SYMBOL(acpi_pci_register_driver);
void acpi_pci_unregister_driver(struct acpi_pci_driver *driver)
EXPORT_SYMBOL(acpi_pci_unregister_driver);
acpi_handle acpi_get_pci_rootbridge_handle(unsigned int seg, unsigned int bus)
EXPORT_SYMBOL_GPL(acpi_get_pci_rootbridge_handle);
int acpi_is_root_bridge(acpi_handle handle)
EXPORT_SYMBOL_GPL(acpi_is_root_bridge);
static acpi_status
get_root_bridge_busnr_callback(struct acpi_resource *resource, void *data)
static acpi_status try_get_root_bridge_busnr(acpi_handle handle,
struct resource *res)
static void acpi_pci_bridge_scan(struct acpi_device *device)
static u8 pci_osc_uuid_str[] = "33DB4D5B-1FF7-401C-9657-7441C03DD766";
static acpi_status acpi_pci_run_osc(acpi_handle handle,
const u32 *capbuf, u32 *retval)
static acpi_status acpi_pci_query_osc(struct acpi_pci_root *root,
u32 support,
u32 *control)
static acpi_status acpi_pci_osc_support(struct acpi_pci_root *root, u32 flags)
struct acpi_pci_root *acpi_pci_find_root(acpi_handle handle)
EXPORT_SYMBOL_GPL(acpi_pci_find_root);
struct acpi_handle_node ;
struct pci_dev *acpi_get_pci_dev(acpi_handle handle)
EXPORT_SYMBOL_GPL(acpi_get_pci_dev);
acpi_status acpi_pci_osc_control_set(acpi_handle handle, u32 *mask, u32 req)
EXPORT_SYMBOL(acpi_pci_osc_control_set);
static int __devinit acpi_pci_root_add(struct acpi_device *device)
static int acpi_pci_root_start(struct acpi_device *device)
static int acpi_pci_root_remove(struct acpi_device *device, int type)
static int __init acpi_pci_root_init(void)
subsys_initcall(acpi_pci_root_init);
