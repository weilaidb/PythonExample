static struct tomoyo_profile tomoyo_default_profile = ;
static unsigned int tomoyo_profile_version;
static struct tomoyo_profile *tomoyo_profile_ptr[TOMOYO_MAX_PROFILES];
static const char *tomoyo_mode[4] = ;
static const char *tomoyo_mac_keywords[TOMOYO_MAX_MAC_INDEX
+ TOMOYO_MAX_MAC_CATEGORY_INDEX] = ;
static bool tomoyo_manage_by_non_root;
static const char *tomoyo_yesno(const unsigned int value)
static void tomoyo_addprintf(char *buffer, int len, const char *fmt, ...)
static bool tomoyo_flush(struct tomoyo_io_buffer *head)
static void tomoyo_set_string(struct tomoyo_io_buffer *head, const char *string)
void tomoyo_io_printf(struct tomoyo_io_buffer *head, const char *fmt, ...)
static void tomoyo_set_space(struct tomoyo_io_buffer *head)
static bool tomoyo_set_lf(struct tomoyo_io_buffer *head)
static void tomoyo_print_name_union(struct tomoyo_io_buffer *head,
const struct tomoyo_name_union *ptr)
static void tomoyo_print_number_union(struct tomoyo_io_buffer *head,
const struct tomoyo_number_union *ptr)
static struct tomoyo_profile *tomoyo_assign_profile(const unsigned int profile)
struct tomoyo_profile *tomoyo_profile(const u8 profile)
static s8 tomoyo_find_yesno(const char *string, const char *find)
static void tomoyo_set_bool(bool *b, const char *string, const char *find)
static void tomoyo_set_uint(unsigned int *i, const char *string,
const char *find)
static void tomoyo_set_pref(const char *name, const char *value,
const bool use_default,
struct tomoyo_profile *profile)
static int tomoyo_set_mode(char *name, const char *value,
const bool use_default,
struct tomoyo_profile *profile)
static int tomoyo_write_profile(struct tomoyo_io_buffer *head)
static void tomoyo_print_preference(struct tomoyo_io_buffer *head,
const int idx)
static void tomoyo_print_config(struct tomoyo_io_buffer *head, const u8 config)
static void tomoyo_read_profile(struct tomoyo_io_buffer *head)
static bool tomoyo_same_manager(const struct tomoyo_acl_head *a,
const struct tomoyo_acl_head *b)
static int tomoyo_update_manager_entry(const char *manager,
const bool is_delete)
static int tomoyo_write_manager(struct tomoyo_io_buffer *head)
static void tomoyo_read_manager(struct tomoyo_io_buffer *head)
static bool tomoyo_manager(void)
static bool tomoyo_select_one(struct tomoyo_io_buffer *head, const char *data)
static int tomoyo_delete_domain(char *domainname)
static int tomoyo_write_domain2(char *data, struct tomoyo_domain_info *domain,
const bool is_delete)
static int tomoyo_write_domain(struct tomoyo_io_buffer *head)
static u8 tomoyo_fns(const u8 perm, u8 bit)
static bool tomoyo_print_entry(struct tomoyo_io_buffer *head,
struct tomoyo_acl_info *acl)
static bool tomoyo_read_domain2(struct tomoyo_io_buffer *head,
struct tomoyo_domain_info *domain)
static void tomoyo_read_domain(struct tomoyo_io_buffer *head)
static int tomoyo_write_domain_profile(struct tomoyo_io_buffer *head)
static void tomoyo_read_domain_profile(struct tomoyo_io_buffer *head)
static int tomoyo_write_pid(struct tomoyo_io_buffer *head)
static void tomoyo_read_pid(struct tomoyo_io_buffer *head)
static const char *tomoyo_transition_type[TOMOYO_MAX_TRANSITION_TYPE] = ;
static const char *tomoyo_group_name[TOMOYO_MAX_GROUP] = ;
static int tomoyo_write_exception(struct tomoyo_io_buffer *head)
static bool tomoyo_read_group(struct tomoyo_io_buffer *head, const int idx)
static bool tomoyo_read_policy(struct tomoyo_io_buffer *head, const int idx)
static void tomoyo_read_exception(struct tomoyo_io_buffer *head)
static char *tomoyo_print_header(struct tomoyo_request_info *r)
static char *tomoyo_init_audit_log(int *len, struct tomoyo_request_info *r)
static DECLARE_WAIT_QUEUE_HEAD(tomoyo_query_wait);
static DEFINE_SPINLOCK(tomoyo_query_list_lock);
struct tomoyo_query ;
static LIST_HEAD(tomoyo_query_list);
static atomic_t tomoyo_query_observers = ATOMIC_INIT(0);
int tomoyo_supervisor(struct tomoyo_request_info *r, const char *fmt, ...)
static int tomoyo_poll_query(struct file *file, poll_table *wait)
static void tomoyo_read_query(struct tomoyo_io_buffer *head)
static int tomoyo_write_answer(struct tomoyo_io_buffer *head)
static void tomoyo_read_version(struct tomoyo_io_buffer *head)
static void tomoyo_read_self_domain(struct tomoyo_io_buffer *head)
int tomoyo_open_control(const u8 type, struct file *file)
int tomoyo_poll_control(struct file *file, poll_table *wait)
int tomoyo_read_control(struct file *file, char __user *buffer,
const int buffer_len)
int tomoyo_write_control(struct file *file, const char __user *buffer,
const int buffer_len)
int tomoyo_close_control(struct file *file)
void tomoyo_check_profile(void)
