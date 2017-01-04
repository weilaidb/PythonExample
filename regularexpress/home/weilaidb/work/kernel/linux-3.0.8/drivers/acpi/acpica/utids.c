#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utids")
acpi_status
acpi_ut_execute_HID(struct acpi_namespace_node *device_node,
struct acpica_device_id **return_id)
acpi_status
acpi_ut_execute_UID(struct acpi_namespace_node *device_node,
struct acpica_device_id **return_id)
acpi_status
acpi_ut_execute_CID(struct acpi_namespace_node *device_node,
struct acpica_device_id_list **return_cid_list)
