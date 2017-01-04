static LIST_HEAD(subsystem_list);
static DEFINE_MUTEX(subsystem_mutex);
int transport_subsystem_register(struct se_subsystem_api *sub_api)
EXPORT_SYMBOL(transport_subsystem_register);
void transport_subsystem_release(struct se_subsystem_api *sub_api)
EXPORT_SYMBOL(transport_subsystem_release);
static struct se_subsystem_api *core_get_backend(const char *sub_name)
struct se_hba *
core_alloc_hba(const char *plugin_name, u32 plugin_dep_id, u32 hba_flags)
int
core_delete_hba(struct se_hba *hba)
