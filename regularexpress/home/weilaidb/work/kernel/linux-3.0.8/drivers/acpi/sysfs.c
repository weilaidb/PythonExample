#define _COMPONENT		ACPI_SYSTEM_COMPONENT
ACPI_MODULE_NAME("sysfs");
#define PREFIX "ACPI: "
struct acpi_dlayer ;
struct acpi_dlevel ;
#define ACPI_DEBUG_INIT(v)
static const struct acpi_dlayer acpi_debug_layers[] = ;
static const struct acpi_dlevel acpi_debug_levels[] = ;
static int param_get_debug_layer(char *buffer, const struct kernel_param *kp)
static int param_get_debug_level(char *buffer, const struct kernel_param *kp)
static struct kernel_param_ops param_ops_debug_layer = ;
static struct kernel_param_ops param_ops_debug_level = ;
module_param_cb(debug_layer, &param_ops_debug_layer, &acpi_dbg_layer, 0644);
module_param_cb(debug_level, &param_ops_debug_level, &acpi_dbg_level, 0644);
static char trace_method_name[6];
module_param_string(trace_method_name, trace_method_name, 6, 0644);
static unsigned int trace_debug_layer;
module_param(trace_debug_layer, uint, 0644);
static unsigned int trace_debug_level;
module_param(trace_debug_level, uint, 0644);
static int param_set_trace_state(const char *val, struct kernel_param *kp)
static int param_get_trace_state(char *buffer, struct kernel_param *kp)
module_param_call(trace_state, param_set_trace_state, param_get_trace_state,
NULL, 0644);
module_param_named(aml_debug_output, acpi_gbl_enable_aml_debug_object,
bool, 0644);
MODULE_PARM_DESC(aml_debug_output,
"To enable/disable the ACPI Debug Object output.");
static int param_get_acpica_version(char *buffer, struct kernel_param *kp)
module_param_call(acpica_version, NULL, param_get_acpica_version, NULL, 0444);
static LIST_HEAD(acpi_table_attr_list);
static struct kobject *tables_kobj;
static struct kobject *dynamic_tables_kobj;
struct acpi_table_attr ;
static ssize_t acpi_table_show(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr, char *buf,
loff_t offset, size_t count)
static void acpi_table_attr_init(struct acpi_table_attr *table_attr,
struct acpi_table_header *table_header)
static acpi_status
acpi_sysfs_table_handler(u32 event, void *table, void *context)
static int acpi_tables_sysfs_init(void)
u32 acpi_irq_handled;
u32 acpi_irq_not_handled;
#define COUNT_GPE 0
#define COUNT_SCI 1
#define COUNT_SCI_NOT 2
#define COUNT_ERROR 3
#define NUM_COUNTERS_EXTRA 4
struct event_counter ;
static struct event_counter *all_counters;
static u32 num_gpes;
static u32 num_counters;
static struct attribute **all_attrs;
static u32 acpi_gpe_count;
static struct attribute_group interrupt_stats_attr_group = ;
static struct kobj_attribute *counter_attrs;
static void delete_gpe_attr_array(void)
static void gpe_count(u32 gpe_number)
static void fixed_event_count(u32 event_number)
static void acpi_gbl_event_handler(u32 event_type, acpi_handle device,
u32 event_number, void *context)
static int get_status(u32 index, acpi_event_status *status,
acpi_handle *handle)
static ssize_t counter_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t counter_set(struct kobject *kobj,
struct kobj_attribute *attr, const char *buf,
size_t size)
void acpi_irq_stats_init(void)
static void __exit interrupt_stats_exit(void)
int __init acpi_sysfs_init(void)
