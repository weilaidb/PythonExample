#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rsaddr")
struct acpi_rsconvert_info acpi_rs_convert_address16[5] = ;
struct acpi_rsconvert_info acpi_rs_convert_address32[5] = ;
struct acpi_rsconvert_info acpi_rs_convert_address64[5] = ;
struct acpi_rsconvert_info acpi_rs_convert_ext_address64[5] = ;
static struct acpi_rsconvert_info acpi_rs_convert_general_flags[6] = ;
static struct acpi_rsconvert_info acpi_rs_convert_mem_flags[5] = ;
static struct acpi_rsconvert_info acpi_rs_convert_io_flags[4] = ;
u8
acpi_rs_get_address_common(struct acpi_resource *resource,
union aml_resource *aml)
void
acpi_rs_set_address_common(union aml_resource *aml,
struct acpi_resource *resource)
