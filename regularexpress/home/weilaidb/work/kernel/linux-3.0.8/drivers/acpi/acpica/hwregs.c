#define _COMPONENT          ACPI_HARDWARE
ACPI_MODULE_NAME("hwregs")
static acpi_status
acpi_hw_read_multiple(u32 *value,
struct acpi_generic_address *register_a,
struct acpi_generic_address *register_b);
static acpi_status
acpi_hw_write_multiple(u32 value,
struct acpi_generic_address *register_a,
struct acpi_generic_address *register_b);
acpi_status
acpi_hw_validate_register(struct acpi_generic_address *reg,
u8 max_bit_width, u64 *address)
acpi_status acpi_hw_read(u32 *value, struct acpi_generic_address *reg)
acpi_status acpi_hw_write(u32 value, struct acpi_generic_address *reg)
acpi_status acpi_hw_clear_acpi_status(void)
struct acpi_bit_register_info *acpi_hw_get_bit_register_info(u32 register_id)
acpi_status acpi_hw_write_pm1_control(u32 pm1a_control, u32 pm1b_control)
acpi_status
acpi_hw_register_read(u32 register_id, u32 * return_value)
acpi_status acpi_hw_register_write(u32 register_id, u32 value)
static acpi_status
acpi_hw_read_multiple(u32 *value,
struct acpi_generic_address *register_a,
struct acpi_generic_address *register_b)
static acpi_status
acpi_hw_write_multiple(u32 value,
struct acpi_generic_address *register_a,
struct acpi_generic_address *register_b)
