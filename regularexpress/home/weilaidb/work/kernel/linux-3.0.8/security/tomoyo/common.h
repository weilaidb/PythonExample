#define _SECURITY_TOMOYO_COMMON_H
struct linux_binprm;
#define TOMOYO_HASH_BITS  8
#define TOMOYO_MAX_HASH (1u<<TOMOYO_HASH_BITS)
#define TOMOYO_EXEC_TMPSIZE     4096
#define TOMOYO_MAX_PROFILES 256
enum tomoyo_mode_index ;
enum tomoyo_policy_id ;
enum tomoyo_group_id ;
#define TOMOYO_KEYWORD_AGGREGATOR                "aggregator "
#define TOMOYO_KEYWORD_ALLOW_MOUNT               "allow_mount "
#define TOMOYO_KEYWORD_ALLOW_READ                "allow_read "
#define TOMOYO_KEYWORD_DELETE                    "delete "
#define TOMOYO_KEYWORD_DENY_REWRITE              "deny_rewrite "
#define TOMOYO_KEYWORD_FILE_PATTERN              "file_pattern "
#define TOMOYO_KEYWORD_INITIALIZE_DOMAIN         "initialize_domain "
#define TOMOYO_KEYWORD_KEEP_DOMAIN               "keep_domain "
#define TOMOYO_KEYWORD_NO_INITIALIZE_DOMAIN      "no_initialize_domain "
#define TOMOYO_KEYWORD_NO_KEEP_DOMAIN            "no_keep_domain "
#define TOMOYO_KEYWORD_PATH_GROUP                "path_group "
#define TOMOYO_KEYWORD_NUMBER_GROUP              "number_group "
#define TOMOYO_KEYWORD_SELECT                    "select "
#define TOMOYO_KEYWORD_USE_PROFILE               "use_profile "
#define TOMOYO_KEYWORD_IGNORE_GLOBAL_ALLOW_READ  "ignore_global_allow_read"
#define TOMOYO_KEYWORD_QUOTA_EXCEEDED            "quota_exceeded"
#define TOMOYO_KEYWORD_TRANSITION_FAILED         "transition_failed"
#define TOMOYO_ROOT_NAME                         "<kernel>"
#define TOMOYO_ROOT_NAME_LEN                     (sizeof(TOMOYO_ROOT_NAME) - 1)
#define TOMOYO_VALUE_TYPE_INVALID     0
#define TOMOYO_VALUE_TYPE_DECIMAL     1
#define TOMOYO_VALUE_TYPE_OCTAL       2
#define TOMOYO_VALUE_TYPE_HEXADECIMAL 3
enum tomoyo_transition_type ;
enum tomoyo_acl_entry_type_index ;
enum tomoyo_path_acl_index ;
#define TOMOYO_RW_MASK ((1 << TOMOYO_TYPE_READ) | (1 << TOMOYO_TYPE_WRITE))
enum tomoyo_mkdev_acl_index ;
enum tomoyo_path2_acl_index ;
enum tomoyo_path_number_acl_index ;
enum tomoyo_securityfs_interface_index ;
enum tomoyo_mac_index ;
enum tomoyo_mac_category_index ;
#define TOMOYO_RETRY_REQUEST 1
struct tomoyo_acl_head  __packed;
struct tomoyo_request_info ;
struct tomoyo_path_info ;
struct tomoyo_name ;
struct tomoyo_name_union ;
struct tomoyo_number_union ;
struct tomoyo_group ;
struct tomoyo_path_group ;
struct tomoyo_number_group ;
struct tomoyo_acl_info  __packed;
struct tomoyo_domain_info ;
struct tomoyo_path_acl ;
struct tomoyo_path_number_acl ;
struct tomoyo_mkdev_acl ;
struct tomoyo_path2_acl ;
struct tomoyo_mount_acl ;
#define TOMOYO_MAX_IO_READ_QUEUE 32
struct tomoyo_io_buffer ;
struct tomoyo_readable_file ;
struct tomoyo_no_pattern ;
struct tomoyo_no_rewrite ;
struct tomoyo_transition_control ;
struct tomoyo_aggregator ;
struct tomoyo_manager ;
struct tomoyo_preference ;
struct tomoyo_profile ;
bool tomoyo_str_starts(char **src, const char *find);
const char *tomoyo_get_exe(void);
void tomoyo_normalize_line(unsigned char *buffer);
void tomoyo_warn_log(struct tomoyo_request_info *r, const char *fmt, ...)
__attribute__ ((format(printf, 2, 3)));
void tomoyo_check_profile(void);
int tomoyo_open_control(const u8 type, struct file *file);
int tomoyo_close_control(struct file *file);
int tomoyo_poll_control(struct file *file, poll_table *wait);
int tomoyo_read_control(struct file *file, char __user *buffer,
const int buffer_len);
int tomoyo_write_control(struct file *file, const char __user *buffer,
const int buffer_len);
bool tomoyo_domain_quota_is_ok(struct tomoyo_request_info *r);
void tomoyo_warn_oom(const char *function);
const struct tomoyo_path_info *
tomoyo_compare_name_union(const struct tomoyo_path_info *name,
const struct tomoyo_name_union *ptr);
bool tomoyo_compare_number_union(const unsigned long value,
const struct tomoyo_number_union *ptr);
int tomoyo_get_mode(const u8 profile, const u8 index);
void tomoyo_io_printf(struct tomoyo_io_buffer *head, const char *fmt, ...)
__attribute__ ((format(printf, 2, 3)));
bool tomoyo_correct_domain(const unsigned char *domainname);
bool tomoyo_correct_path(const char *filename);
bool tomoyo_correct_word(const char *string);
bool tomoyo_domain_def(const unsigned char *buffer);
bool tomoyo_parse_name_union(const char *filename,
struct tomoyo_name_union *ptr);
const struct tomoyo_path_info *
tomoyo_path_matches_group(const struct tomoyo_path_info *pathname,
const struct tomoyo_group *group);
bool tomoyo_number_matches_group(const unsigned long min,
const unsigned long max,
const struct tomoyo_group *group);
bool tomoyo_path_matches_pattern(const struct tomoyo_path_info *filename,
const struct tomoyo_path_info *pattern);
bool tomoyo_parse_number_union(char *data, struct tomoyo_number_union *num);
bool tomoyo_tokenize(char *buffer, char *w[], size_t size);
bool tomoyo_verbose_mode(const struct tomoyo_domain_info *domain);
int tomoyo_init_request_info(struct tomoyo_request_info *r,
struct tomoyo_domain_info *domain,
const u8 index);
int tomoyo_mount_permission(char *dev_name, struct path *path, char *type,
unsigned long flags, void *data_page);
int tomoyo_write_aggregator(char *data, const bool is_delete);
int tomoyo_write_transition_control(char *data, const bool is_delete,
const u8 type);
int tomoyo_write_file(char *data, struct tomoyo_domain_info *domain,
const bool is_delete);
int tomoyo_write_globally_readable(char *data, const bool is_delete);
int tomoyo_write_mount(char *data, struct tomoyo_domain_info *domain,
const bool is_delete);
int tomoyo_write_no_rewrite(char *data, const bool is_delete);
int tomoyo_write_pattern(char *data, const bool is_delete);
int tomoyo_write_group(char *data, const bool is_delete, const u8 type);
int tomoyo_supervisor(struct tomoyo_request_info *r, const char *fmt, ...)
__attribute__ ((format(printf, 2, 3)));
struct tomoyo_domain_info *tomoyo_find_domain(const char *domainname);
struct tomoyo_domain_info *tomoyo_assign_domain(const char *domainname,
const u8 profile);
struct tomoyo_profile *tomoyo_profile(const u8 profile);
struct tomoyo_group *tomoyo_get_group(const char *group_name, const u8 type);
unsigned int tomoyo_check_flags(const struct tomoyo_domain_info *domain,
const u8 index);
void tomoyo_fill_path_info(struct tomoyo_path_info *ptr);
void tomoyo_load_policy(const char *filename);
void tomoyo_put_number_union(struct tomoyo_number_union *ptr);
char *tomoyo_encode(const char *str);
char *tomoyo_realpath_nofollow(const char *pathname);
char *tomoyo_realpath_from_path(struct path *path);
const char *tomoyo_pattern(const struct tomoyo_path_info *filename);
bool tomoyo_memory_ok(void *ptr);
void *tomoyo_commit_ok(void *data, const unsigned int size);
const struct tomoyo_path_info *tomoyo_get_name(const char *name);
void tomoyo_read_memory_counter(struct tomoyo_io_buffer *head);
int tomoyo_write_memory_quota(struct tomoyo_io_buffer *head);
void __init tomoyo_mm_init(void);
int tomoyo_path_permission(struct tomoyo_request_info *r, u8 operation,
const struct tomoyo_path_info *filename);
int tomoyo_check_open_permission(struct tomoyo_domain_info *domain,
struct path *path, const int flag);
int tomoyo_path_number_perm(const u8 operation, struct path *path,
unsigned long number);
int tomoyo_mkdev_perm(const u8 operation, struct path *path,
const unsigned int mode, unsigned int dev);
int tomoyo_path_perm(const u8 operation, struct path *path);
int tomoyo_path2_perm(const u8 operation, struct path *path1,
struct path *path2);
int tomoyo_find_next_domain(struct linux_binprm *bprm);
void tomoyo_print_ulong(char *buffer, const int buffer_len,
const unsigned long value, const u8 type);
void tomoyo_put_name_union(struct tomoyo_name_union *ptr);
void tomoyo_run_gc(void);
void tomoyo_memory_free(void *ptr);
int tomoyo_update_domain(struct tomoyo_acl_info *new_entry, const int size,
bool is_delete, struct tomoyo_domain_info *domain,
bool (*check_duplicate) (const struct tomoyo_acl_info
*,
const struct tomoyo_acl_info
*),
bool (*merge_duplicate) (struct tomoyo_acl_info *,
struct tomoyo_acl_info *,
const bool));
int tomoyo_update_policy(struct tomoyo_acl_head *new_entry, const int size,
bool is_delete, struct list_head *list,
bool (*check_duplicate) (const struct tomoyo_acl_head
*,
const struct tomoyo_acl_head
*));
void tomoyo_check_acl(struct tomoyo_request_info *r,
bool (*check_entry) (struct tomoyo_request_info *,
const struct tomoyo_acl_info *));
extern struct srcu_struct tomoyo_ss;
extern struct list_head tomoyo_domain_list;
extern struct list_head tomoyo_policy_list[TOMOYO_MAX_POLICY];
extern struct list_head tomoyo_group_list[TOMOYO_MAX_GROUP];
extern struct list_head tomoyo_name_list[TOMOYO_MAX_HASH];
extern struct mutex tomoyo_policy_lock;
extern bool tomoyo_policy_loaded;
extern struct tomoyo_domain_info tomoyo_kernel_domain;
extern const char *tomoyo_path_keyword[TOMOYO_MAX_PATH_OPERATION];
extern const char *tomoyo_mkdev_keyword[TOMOYO_MAX_MKDEV_OPERATION];
extern const char *tomoyo_path2_keyword[TOMOYO_MAX_PATH2_OPERATION];
extern const char *tomoyo_path_number_keyword[TOMOYO_MAX_PATH_NUMBER_OPERATION];
extern unsigned int tomoyo_quota_for_query;
extern unsigned int tomoyo_query_memory_size;
static inline int tomoyo_read_lock(void)
static inline void tomoyo_read_unlock(int idx)
static inline bool tomoyo_pathcmp(const struct tomoyo_path_info *a,
const struct tomoyo_path_info *b)
static inline bool tomoyo_valid(const unsigned char c)
static inline bool tomoyo_invalid(const unsigned char c)
static inline void tomoyo_put_name(const struct tomoyo_path_info *name)
static inline void tomoyo_put_group(struct tomoyo_group *group)
static inline struct tomoyo_domain_info *tomoyo_domain(void)
static inline struct tomoyo_domain_info *tomoyo_real_domain(struct task_struct
*task)
static inline bool tomoyo_same_acl_head(const struct tomoyo_acl_info *p1,
const struct tomoyo_acl_info *p2)
static inline bool tomoyo_same_name_union
(const struct tomoyo_name_union *p1, const struct tomoyo_name_union *p2)
static inline bool tomoyo_same_number_union
(const struct tomoyo_number_union *p1, const struct tomoyo_number_union *p2)
#define list_for_each_cookie(pos, head)					\
if (!pos)							\
pos =  srcu_dereference((head)->next, &tomoyo_ss);	\
for ( ; pos != (head); pos = srcu_dereference(pos->next, &tomoyo_ss))
