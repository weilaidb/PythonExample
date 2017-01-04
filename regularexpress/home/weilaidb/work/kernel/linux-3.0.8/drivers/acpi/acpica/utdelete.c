#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utdelete")
static void acpi_ut_delete_internal_obj(union acpi_operand_object *object);
static void
acpi_ut_update_ref_count(union acpi_operand_object *object, u32 action);
static void acpi_ut_delete_internal_obj(union acpi_operand_object *object)
void acpi_ut_delete_internal_object_list(union acpi_operand_object **obj_list)
static void
acpi_ut_update_ref_count(union acpi_operand_object *object, u32 action)
acpi_status
acpi_ut_update_object_reference(union acpi_operand_object *object, u16 action)
void acpi_ut_add_reference(union acpi_operand_object *object)
void acpi_ut_remove_reference(union acpi_operand_object *object)
