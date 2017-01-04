struct tomoyo_domain_info tomoyo_kernel_domain;
int tomoyo_update_policy(struct tomoyo_acl_head *new_entry, const int size,
bool is_delete, struct list_head *list,
bool (*check_duplicate) (const struct tomoyo_acl_head
*,
const struct tomoyo_acl_head
*))
int tomoyo_update_domain(struct tomoyo_acl_info *new_entry, const int size,
bool is_delete, struct tomoyo_domain_info *domain,
bool (*check_duplicate) (const struct tomoyo_acl_info
*,
const struct tomoyo_acl_info
*),
bool (*merge_duplicate) (struct tomoyo_acl_info *,
struct tomoyo_acl_info *,
const bool))
void tomoyo_check_acl(struct tomoyo_request_info *r,
bool (*check_entry) (struct tomoyo_request_info *,
const struct tomoyo_acl_info *))
LIST_HEAD(tomoyo_domain_list);
struct list_head tomoyo_policy_list[TOMOYO_MAX_POLICY];
struct list_head tomoyo_group_list[TOMOYO_MAX_GROUP];
static const char *tomoyo_last_word(const char *name)
static bool tomoyo_same_transition_control(const struct tomoyo_acl_head *a,
const struct tomoyo_acl_head *b)
static int tomoyo_update_transition_control_entry(const char *domainname,
const char *program,
const u8 type,
const bool is_delete)
int tomoyo_write_transition_control(char *data, const bool is_delete,
const u8 type)
static u8 tomoyo_transition_type(const struct tomoyo_path_info *domainname,
const struct tomoyo_path_info *program)
static bool tomoyo_same_aggregator(const struct tomoyo_acl_head *a,
const struct tomoyo_acl_head *b)
static int tomoyo_update_aggregator_entry(const char *original_name,
const char *aggregated_name,
const bool is_delete)
int tomoyo_write_aggregator(char *data, const bool is_delete)
struct tomoyo_domain_info *tomoyo_assign_domain(const char *domainname,
const u8 profile)
int tomoyo_find_next_domain(struct linux_binprm *bprm)
