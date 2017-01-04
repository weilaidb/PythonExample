#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rsinfo")
struct acpi_rsconvert_info *acpi_gbl_set_resource_dispatch[] = ;
struct acpi_rsconvert_info *acpi_gbl_get_resource_dispatch[] = ;
#if defined(ACPI_DEBUG_OUTPUT) || defined(ACPI_DEBUGGER)
struct acpi_rsdump_info *acpi_gbl_dump_resource_dispatch[] = ;
const u8 acpi_gbl_aml_resource_sizes[] = ;
const u8 acpi_gbl_resource_struct_sizes[] = ;
