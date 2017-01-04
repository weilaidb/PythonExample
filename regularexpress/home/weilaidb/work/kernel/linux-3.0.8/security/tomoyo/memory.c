void tomoyo_warn_oom(const char *function)
static atomic_t tomoyo_policy_memory_size;
static unsigned int tomoyo_quota_for_policy;
bool tomoyo_memory_ok(void *ptr)
void *tomoyo_commit_ok(void *data, const unsigned int size)
void tomoyo_memory_free(void *ptr)
struct tomoyo_group *tomoyo_get_group(const char *group_name, const u8 idx)
struct list_head tomoyo_name_list[TOMOYO_MAX_HASH];
const struct tomoyo_path_info *tomoyo_get_name(const char *name)
void __init tomoyo_mm_init(void)
unsigned int tomoyo_query_memory_size;
unsigned int tomoyo_quota_for_query;
void tomoyo_read_memory_counter(struct tomoyo_io_buffer *head)
int tomoyo_write_memory_quota(struct tomoyo_io_buffer *head)
