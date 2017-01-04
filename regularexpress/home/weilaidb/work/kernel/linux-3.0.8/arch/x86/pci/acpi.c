struct pci_root_info ;
static bool pci_use_crs = true;
static int __init set_use_crs(const struct dmi_system_id *id)
static const struct dmi_system_id pci_use_crs_table[] __initconst = ;
void __init pci_acpi_crs_quirks(void)
static acpi_status
resource_to_addr(struct acpi_resource *resource,
struct acpi_resource_address64 *addr)
static acpi_status
count_resource(struct acpi_resource *acpi_res, void *data)
static acpi_status
setup_resource(struct acpi_resource *acpi_res, void *data)
static bool resource_contains(struct resource *res, resource_size_t point)
static void coalesce_windows(struct pci_root_info *info, unsigned long type)
static void add_resources(struct pci_root_info *info)
static void
get_current_resources(struct acpi_device *device, int busnum,
int domain, struct pci_bus *bus)
struct pci_bus * __devinit pci_acpi_scan_root(struct acpi_pci_root *root)
int __init pci_acpi_init(void)
