#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("hwpci")
#define PCI_CFG_HEADER_TYPE_REG             0x0E
#define PCI_CFG_PRIMARY_BUS_NUMBER_REG      0x18
#define PCI_CFG_SECONDARY_BUS_NUMBER_REG    0x19
#define PCI_HEADER_TYPE_MASK                0x7F
#define PCI_TYPE_BRIDGE                     0x01
#define PCI_TYPE_CARDBUS_BRIDGE             0x02
typedef struct acpi_pci_device  acpi_pci_device;
static acpi_status
acpi_hw_build_pci_list(acpi_handle root_pci_device,
acpi_handle pci_region,
struct acpi_pci_device **return_list_head);
static acpi_status
acpi_hw_process_pci_list(struct acpi_pci_id *pci_id,
struct acpi_pci_device *list_head);
static void acpi_hw_delete_pci_list(struct acpi_pci_device *list_head);
static acpi_status
acpi_hw_get_pci_device_info(struct acpi_pci_id *pci_id,
acpi_handle pci_device,
u16 *bus_number, u8 *is_bridge);
acpi_status
acpi_hw_derive_pci_id(struct acpi_pci_id *pci_id,
acpi_handle root_pci_device, acpi_handle pci_region)
static acpi_status
acpi_hw_build_pci_list(acpi_handle root_pci_device,
acpi_handle pci_region,
struct acpi_pci_device **return_list_head)
static acpi_status
acpi_hw_process_pci_list(struct acpi_pci_id *pci_id,
struct acpi_pci_device *list_head)
static void acpi_hw_delete_pci_list(struct acpi_pci_device *list_head)
static acpi_status
acpi_hw_get_pci_device_info(struct acpi_pci_id *pci_id,
acpi_handle pci_device,
u16 *bus_number, u8 *is_bridge)
