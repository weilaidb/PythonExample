#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dsopcode")
static acpi_status
acpi_ds_init_buffer_field(u16 aml_opcode,
union acpi_operand_object *obj_desc,
union acpi_operand_object *buffer_desc,
union acpi_operand_object *offset_desc,
union acpi_operand_object *length_desc,
union acpi_operand_object *result_desc);
acpi_status acpi_ds_initialize_region(acpi_handle obj_handle)
static acpi_status
acpi_ds_init_buffer_field(u16 aml_opcode,
union acpi_operand_object *obj_desc,
union acpi_operand_object *buffer_desc,
union acpi_operand_object *offset_desc,
union acpi_operand_object *length_desc,
union acpi_operand_object *result_desc)
acpi_status
acpi_ds_eval_buffer_field_operands(struct acpi_walk_state *walk_state,
union acpi_parse_object *op)
acpi_status
acpi_ds_eval_region_operands(struct acpi_walk_state *walk_state,
union acpi_parse_object *op)
acpi_status
acpi_ds_eval_table_region_operands(struct acpi_walk_state *walk_state,
union acpi_parse_object *op)
acpi_status
acpi_ds_eval_data_object_operands(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
union acpi_operand_object *obj_desc)
acpi_status
acpi_ds_eval_bank_field_operands(struct acpi_walk_state *walk_state,
union acpi_parse_object *op)
