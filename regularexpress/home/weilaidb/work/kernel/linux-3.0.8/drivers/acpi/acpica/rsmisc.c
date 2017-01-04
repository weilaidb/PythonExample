#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rsmisc")
#define INIT_RESOURCE_TYPE(i)       i->resource_offset
#define INIT_RESOURCE_LENGTH(i)     i->aml_offset
#define INIT_TABLE_LENGTH(i)        i->value
#define COMPARE_OPCODE(i)           i->resource_offset
#define COMPARE_TARGET(i)           i->aml_offset
#define COMPARE_VALUE(i)            i->value
acpi_status
acpi_rs_convert_aml_to_resource(struct acpi_resource *resource,
union aml_resource *aml,
struct acpi_rsconvert_info *info)
acpi_status
acpi_rs_convert_resource_to_aml(struct acpi_resource *resource,
union aml_resource *aml,
struct acpi_rsconvert_info *info)
