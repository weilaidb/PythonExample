#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exdump")
#if defined(ACPI_DEBUG_OUTPUT) || defined(ACPI_DEBUGGER)
static void acpi_ex_out_string(char *title, char *value);
static void acpi_ex_out_pointer(char *title, void *value);
static void
acpi_ex_dump_object(union acpi_operand_object *obj_desc,
struct acpi_exdump_info *info);
static void acpi_ex_dump_reference_obj(union acpi_operand_object *obj_desc);
static void
acpi_ex_dump_package_obj(union acpi_operand_object *obj_desc,
u32 level, u32 index);
static struct acpi_exdump_info acpi_ex_dump_integer[2] = ;
static struct acpi_exdump_info acpi_ex_dump_string[4] = ;
static struct acpi_exdump_info acpi_ex_dump_buffer[5] = ;
static struct acpi_exdump_info acpi_ex_dump_package[5] = ;
static struct acpi_exdump_info acpi_ex_dump_device[4] = ;
static struct acpi_exdump_info acpi_ex_dump_event[2] = ;
static struct acpi_exdump_info acpi_ex_dump_method[9] = ;
static struct acpi_exdump_info acpi_ex_dump_mutex[5] = ;
static struct acpi_exdump_info acpi_ex_dump_region[7] = ;
static struct acpi_exdump_info acpi_ex_dump_power[5] = ;
static struct acpi_exdump_info acpi_ex_dump_processor[7] = ;
static struct acpi_exdump_info acpi_ex_dump_thermal[4] = ;
static struct acpi_exdump_info acpi_ex_dump_buffer_field[3] = ;
static struct acpi_exdump_info acpi_ex_dump_region_field[3] = ;
static struct acpi_exdump_info acpi_ex_dump_bank_field[5] = ;
static struct acpi_exdump_info acpi_ex_dump_index_field[5] = ;
static struct acpi_exdump_info acpi_ex_dump_reference[8] = ;
static struct acpi_exdump_info acpi_ex_dump_address_handler[6] = ;
static struct acpi_exdump_info acpi_ex_dump_notify[3] = ;
static struct acpi_exdump_info acpi_ex_dump_common[4] = ;
static struct acpi_exdump_info acpi_ex_dump_field_common[7] = ;
static struct acpi_exdump_info acpi_ex_dump_node[5] = ;
static struct acpi_exdump_info *acpi_ex_dump_info[] = ;
static void
acpi_ex_dump_object(union acpi_operand_object *obj_desc,
struct acpi_exdump_info *info)
void acpi_ex_dump_operand(union acpi_operand_object *obj_desc, u32 depth)
void
acpi_ex_dump_operands(union acpi_operand_object **operands,
const char *opcode_name, u32 num_operands)
static void acpi_ex_out_string(char *title, char *value)
static void acpi_ex_out_pointer(char *title, void *value)
void acpi_ex_dump_namespace_node(struct acpi_namespace_node *node, u32 flags)
static void acpi_ex_dump_reference_obj(union acpi_operand_object *obj_desc)
static void
acpi_ex_dump_package_obj(union acpi_operand_object *obj_desc,
u32 level, u32 index)
void
acpi_ex_dump_object_descriptor(union acpi_operand_object *obj_desc, u32 flags)
