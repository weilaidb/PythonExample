#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evregion")
static u8
acpi_ev_has_default_handler(struct acpi_namespace_node *node,
acpi_adr_space_type space_id);
static void acpi_ev_orphan_ec_reg_method(void);
static acpi_status
acpi_ev_reg_run(acpi_handle obj_handle,
u32 level, void *context, void **return_value);
static acpi_status
acpi_ev_install_handler(acpi_handle obj_handle,
u32 level, void *context, void **return_value);
#define ACPI_NUM_DEFAULT_SPACES     4
static u8 acpi_gbl_default_address_spaces[ACPI_NUM_DEFAULT_SPACES] = ;
acpi_status acpi_ev_install_region_handlers(void)
static u8
acpi_ev_has_default_handler(struct acpi_namespace_node *node,
acpi_adr_space_type space_id)
acpi_status acpi_ev_initialize_op_regions(void)
acpi_status
acpi_ev_execute_reg_method(union acpi_operand_object *region_obj, u32 function)
acpi_status
acpi_ev_address_space_dispatch(union acpi_operand_object *region_obj,
u32 function,
u32 region_offset, u32 bit_width, u64 *value)
void
acpi_ev_detach_region(union acpi_operand_object *region_obj,
u8 acpi_ns_is_locked)
acpi_status
acpi_ev_attach_region(union acpi_operand_object *handler_obj,
union acpi_operand_object *region_obj,
u8 acpi_ns_is_locked)
static acpi_status
acpi_ev_install_handler(acpi_handle obj_handle,
u32 level, void *context, void **return_value)
acpi_status
acpi_ev_install_space_handler(struct acpi_namespace_node * node,
acpi_adr_space_type space_id,
acpi_adr_space_handler handler,
acpi_adr_space_setup setup, void *context)
acpi_status
acpi_ev_execute_reg_methods(struct acpi_namespace_node *node,
acpi_adr_space_type space_id)
static acpi_status
acpi_ev_reg_run(acpi_handle obj_handle,
u32 level, void *context, void **return_value)
static void acpi_ev_orphan_ec_reg_method(void)
