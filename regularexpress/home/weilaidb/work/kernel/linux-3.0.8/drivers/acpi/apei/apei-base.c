#define APEI_PFX "APEI: "
#define APEI_EXEC_PRESERVE_REGISTER	0x1
void apei_exec_ctx_init(struct apei_exec_context *ctx,
struct apei_exec_ins_type *ins_table,
u32 instructions,
struct acpi_whea_header *action_table,
u32 entries)
EXPORT_SYMBOL_GPL(apei_exec_ctx_init);
int __apei_exec_read_register(struct acpi_whea_header *entry, u64 *val)
int apei_exec_read_register(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
EXPORT_SYMBOL_GPL(apei_exec_read_register);
int apei_exec_read_register_value(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
EXPORT_SYMBOL_GPL(apei_exec_read_register_value);
int __apei_exec_write_register(struct acpi_whea_header *entry, u64 val)
int apei_exec_write_register(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
EXPORT_SYMBOL_GPL(apei_exec_write_register);
int apei_exec_write_register_value(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
EXPORT_SYMBOL_GPL(apei_exec_write_register_value);
int apei_exec_noop(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
EXPORT_SYMBOL_GPL(apei_exec_noop);
int apei_exec_run(struct apei_exec_context *ctx, u8 action)
EXPORT_SYMBOL_GPL(apei_exec_run);
typedef int (*apei_exec_entry_func_t)(struct apei_exec_context *ctx,
struct acpi_whea_header *entry,
void *data);
static int apei_exec_for_each_entry(struct apei_exec_context *ctx,
apei_exec_entry_func_t func,
void *data,
int *end)
static int pre_map_gar_callback(struct apei_exec_context *ctx,
struct acpi_whea_header *entry,
void *data)
int apei_exec_pre_map_gars(struct apei_exec_context *ctx)
EXPORT_SYMBOL_GPL(apei_exec_pre_map_gars);
static int post_unmap_gar_callback(struct apei_exec_context *ctx,
struct acpi_whea_header *entry,
void *data)
int apei_exec_post_unmap_gars(struct apei_exec_context *ctx)
EXPORT_SYMBOL_GPL(apei_exec_post_unmap_gars);
struct apei_res ;
struct apei_resources apei_resources_all = ;
static int apei_res_add(struct list_head *res_list,
unsigned long start, unsigned long size)
static int apei_res_sub(struct list_head *res_list1,
struct list_head *res_list2)
static void apei_res_clean(struct list_head *res_list)
void apei_resources_fini(struct apei_resources *resources)
EXPORT_SYMBOL_GPL(apei_resources_fini);
static int apei_resources_merge(struct apei_resources *resources1,
struct apei_resources *resources2)
int apei_resources_sub(struct apei_resources *resources1,
struct apei_resources *resources2)
EXPORT_SYMBOL_GPL(apei_resources_sub);
int apei_resources_request(struct apei_resources *resources,
const char *desc)
EXPORT_SYMBOL_GPL(apei_resources_request);
void apei_resources_release(struct apei_resources *resources)
EXPORT_SYMBOL_GPL(apei_resources_release);
static int apei_check_gar(struct acpi_generic_address *reg, u64 *paddr)
static int collect_res_callback(struct apei_exec_context *ctx,
struct acpi_whea_header *entry,
void *data)
int apei_exec_collect_resources(struct apei_exec_context *ctx,
struct apei_resources *resources)
EXPORT_SYMBOL_GPL(apei_exec_collect_resources);
struct dentry *apei_get_debugfs_dir(void)
EXPORT_SYMBOL_GPL(apei_get_debugfs_dir);
