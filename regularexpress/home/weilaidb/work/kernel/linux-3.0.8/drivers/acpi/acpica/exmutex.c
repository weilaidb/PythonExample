#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exmutex")
static void
acpi_ex_link_mutex(union acpi_operand_object *obj_desc,
struct acpi_thread_state *thread);
void acpi_ex_unlink_mutex(union acpi_operand_object *obj_desc)
static void
acpi_ex_link_mutex(union acpi_operand_object *obj_desc,
struct acpi_thread_state *thread)
acpi_status
acpi_ex_acquire_mutex_object(u16 timeout,
union acpi_operand_object *obj_desc,
acpi_thread_id thread_id)
acpi_status
acpi_ex_acquire_mutex(union acpi_operand_object *time_desc,
union acpi_operand_object *obj_desc,
struct acpi_walk_state *walk_state)
acpi_status acpi_ex_release_mutex_object(union acpi_operand_object *obj_desc)
acpi_status
acpi_ex_release_mutex(union acpi_operand_object *obj_desc,
struct acpi_walk_state *walk_state)
void acpi_ex_release_all_mutexes(struct acpi_thread_state *thread)
