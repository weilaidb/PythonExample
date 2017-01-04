#define _COMPONENT          ACPI_PARSER
ACPI_MODULE_NAME("psopcode")
static const u8 acpi_gbl_argument_count[] =
;
const struct acpi_opcode_info acpi_gbl_aml_op_info[AML_NUM_OPCODES] = ;
static const u8 acpi_gbl_short_op_index[256] = ;
static const u8 acpi_gbl_long_op_index[NUM_EXTENDED_OPCODE] = ;
const struct acpi_opcode_info *acpi_ps_get_opcode_info(u16 opcode)
char *acpi_ps_get_opcode_name(u16 opcode)
u8 acpi_ps_get_argument_count(u32 op_type)
