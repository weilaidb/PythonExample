#define DEFINE_AML_GLOBALS
#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exutils")
static u32 acpi_ex_digits_needed(u64 value, u32 base);
void acpi_ex_enter_interpreter(void)
void acpi_ex_reacquire_interpreter(void)
void acpi_ex_exit_interpreter(void)
void acpi_ex_relinquish_interpreter(void)
void acpi_ex_truncate_for32bit_table(union acpi_operand_object *obj_desc)
void acpi_ex_acquire_global_lock(u32 field_flags)
void acpi_ex_release_global_lock(u32 field_flags)
static u32 acpi_ex_digits_needed(u64 value, u32 base)
void acpi_ex_eisa_id_to_string(char *out_string, u64 compressed_id)
void acpi_ex_integer_to_string(char *out_string, u64 value)
