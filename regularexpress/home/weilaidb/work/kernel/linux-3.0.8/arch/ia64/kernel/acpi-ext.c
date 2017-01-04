struct acpi_vendor_uuid hp_ccsr_uuid = ;
static acpi_status hp_ccsr_locate(acpi_handle obj, u64 *base, u64 *length)
struct csr_space ;
static acpi_status find_csr_space(struct acpi_resource *resource, void *data)
static acpi_status hp_crs_locate(acpi_handle obj, u64 *base, u64 *length)
acpi_status hp_acpi_csr_space(acpi_handle obj, u64 *csr_base, u64 *csr_length)
EXPORT_SYMBOL(hp_acpi_csr_space);
