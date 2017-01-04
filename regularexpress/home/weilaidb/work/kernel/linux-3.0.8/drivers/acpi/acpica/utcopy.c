#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utcopy")
static acpi_status
acpi_ut_copy_isimple_to_esimple(union acpi_operand_object *internal_object,
union acpi_object *external_object,
u8 * data_space, acpi_size * buffer_space_used);
static acpi_status
acpi_ut_copy_ielement_to_ielement(u8 object_type,
union acpi_operand_object *source_object,
union acpi_generic_state *state,
void *context);
static acpi_status
acpi_ut_copy_ipackage_to_epackage(union acpi_operand_object *internal_object,
u8 * buffer, acpi_size * space_used);
static acpi_status
acpi_ut_copy_esimple_to_isimple(union acpi_object *user_obj,
union acpi_operand_object **return_obj);
static acpi_status
acpi_ut_copy_epackage_to_ipackage(union acpi_object *external_object,
union acpi_operand_object **internal_object);
static acpi_status
acpi_ut_copy_simple_object(union acpi_operand_object *source_desc,
union acpi_operand_object *dest_desc);
static acpi_status
acpi_ut_copy_ielement_to_eelement(u8 object_type,
union acpi_operand_object *source_object,
union acpi_generic_state *state,
void *context);
static acpi_status
acpi_ut_copy_ipackage_to_ipackage(union acpi_operand_object *source_obj,
union acpi_operand_object *dest_obj,
struct acpi_walk_state *walk_state);
static acpi_status
acpi_ut_copy_isimple_to_esimple(union acpi_operand_object *internal_object,
union acpi_object *external_object,
u8 * data_space, acpi_size * buffer_space_used)
static acpi_status
acpi_ut_copy_ielement_to_eelement(u8 object_type,
union acpi_operand_object *source_object,
union acpi_generic_state *state,
void *context)
static acpi_status
acpi_ut_copy_ipackage_to_epackage(union acpi_operand_object *internal_object,
u8 * buffer, acpi_size * space_used)
acpi_status
acpi_ut_copy_iobject_to_eobject(union acpi_operand_object *internal_object,
struct acpi_buffer *ret_buffer)
static acpi_status
acpi_ut_copy_esimple_to_isimple(union acpi_object *external_object,
union acpi_operand_object **ret_internal_object)
static acpi_status
acpi_ut_copy_epackage_to_ipackage(union acpi_object *external_object,
union acpi_operand_object **internal_object)
acpi_status
acpi_ut_copy_eobject_to_iobject(union acpi_object *external_object,
union acpi_operand_object **internal_object)
static acpi_status
acpi_ut_copy_simple_object(union acpi_operand_object *source_desc,
union acpi_operand_object *dest_desc)
static acpi_status
acpi_ut_copy_ielement_to_ielement(u8 object_type,
union acpi_operand_object *source_object,
union acpi_generic_state *state,
void *context)
static acpi_status
acpi_ut_copy_ipackage_to_ipackage(union acpi_operand_object *source_obj,
union acpi_operand_object *dest_obj,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ut_copy_iobject_to_iobject(union acpi_operand_object *source_desc,
union acpi_operand_object **dest_desc,
struct acpi_walk_state *walk_state)
