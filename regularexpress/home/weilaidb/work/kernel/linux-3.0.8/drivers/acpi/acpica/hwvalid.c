#define _COMPONENT          ACPI_HARDWARE
ACPI_MODULE_NAME("hwvalid")
static acpi_status
acpi_hw_validate_io_request(acpi_io_address address, u32 bit_width);
static const struct acpi_port_info acpi_protected_ports[] = ;
#define ACPI_PORT_INFO_ENTRIES  ACPI_ARRAY_LENGTH (acpi_protected_ports)
static acpi_status
acpi_hw_validate_io_request(acpi_io_address address, u32 bit_width)
acpi_status acpi_hw_read_port(acpi_io_address address, u32 *value, u32 width)
acpi_status acpi_hw_write_port(acpi_io_address address, u32 value, u32 width)
