#define KMSG_COMPONENT "s390dbf"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define DEBUG_PROLOG_ENTRY -1
#define ALL_AREAS 0
#define NO_AREAS  1
typedef struct file_private_info  file_private_info_t;
typedef struct
debug_sprintf_entry_t;
static int debug_init(void);
static ssize_t debug_output(struct file *file, char __user *user_buf,
size_t user_len, loff_t * offset);
static ssize_t debug_input(struct file *file, const char __user *user_buf,
size_t user_len, loff_t * offset);
static int debug_open(struct inode *inode, struct file *file);
static int debug_close(struct inode *inode, struct file *file);
static debug_info_t *debug_info_create(const char *name, int pages_per_area,
int nr_areas, int buf_size, mode_t mode);
static void debug_info_get(debug_info_t *);
static void debug_info_put(debug_info_t *);
static int debug_prolog_level_fn(debug_info_t * id,
struct debug_view *view, char *out_buf);
static int debug_input_level_fn(debug_info_t * id, struct debug_view *view,
struct file *file, const char __user *user_buf,
size_t user_buf_size, loff_t * offset);
static int debug_prolog_pages_fn(debug_info_t * id,
struct debug_view *view, char *out_buf);
static int debug_input_pages_fn(debug_info_t * id, struct debug_view *view,
struct file *file, const char __user *user_buf,
size_t user_buf_size, loff_t * offset);
static int debug_input_flush_fn(debug_info_t * id, struct debug_view *view,
struct file *file, const char __user *user_buf,
size_t user_buf_size, loff_t * offset);
static int debug_hex_ascii_format_fn(debug_info_t * id, struct debug_view *view,
char *out_buf, const char *in_buf);
static int debug_raw_format_fn(debug_info_t * id,
struct debug_view *view, char *out_buf,
const char *in_buf);
static int debug_raw_header_fn(debug_info_t * id, struct debug_view *view,
int area, debug_entry_t * entry, char *out_buf);
static int debug_sprintf_format_fn(debug_info_t * id, struct debug_view *view,
char *out_buf, debug_sprintf_entry_t *curr_event);
struct debug_view debug_raw_view = ;
struct debug_view debug_hex_ascii_view = ;
static struct debug_view debug_level_view = ;
static struct debug_view debug_pages_view = ;
static struct debug_view debug_flush_view = ;
struct debug_view debug_sprintf_view = ;
static unsigned int __used debug_feature_version = __DEBUG_FEATURE_VERSION;
static debug_info_t *debug_area_first = NULL;
static debug_info_t *debug_area_last = NULL;
static DEFINE_MUTEX(debug_mutex);
static int initialized;
static const struct file_operations debug_file_ops = ;
static struct dentry *debug_debugfs_root_entry;
static debug_entry_t***
debug_areas_alloc(int pages_per_area, int nr_areas)
static debug_info_t*
debug_info_alloc(const char *name, int pages_per_area, int nr_areas,
int buf_size, int level, int mode)
static void
debug_areas_free(debug_info_t* db_info)
static void
debug_info_free(debug_info_t* db_info)
static debug_info_t*
debug_info_create(const char *name, int pages_per_area, int nr_areas,
int buf_size, mode_t mode)
static debug_info_t*
debug_info_copy(debug_info_t* in, int mode)
static void
debug_info_get(debug_info_t * db_info)
static void
debug_info_put(debug_info_t *db_info)
static int
debug_format_entry(file_private_info_t *p_info)
static inline int
debug_next_entry(file_private_info_t *p_info)
static ssize_t
debug_output(struct file *file,
char __user *user_buf,
size_t  len,
loff_t *offset)
static ssize_t
debug_input(struct file *file, const char __user *user_buf, size_t length,
loff_t *offset)
static int
debug_open(struct inode *inode, struct file *file)
static int
debug_close(struct inode *inode, struct file *file)
debug_info_t *debug_register_mode(const char *name, int pages_per_area,
int nr_areas, int buf_size, mode_t mode,
uid_t uid, gid_t gid)
EXPORT_SYMBOL(debug_register_mode);
debug_info_t *debug_register(const char *name, int pages_per_area,
int nr_areas, int buf_size)
void
debug_unregister(debug_info_t * id)
static int
debug_set_size(debug_info_t* id, int nr_areas, int pages_per_area)
void
debug_set_level(debug_info_t* id, int new_level)
static inline void
proceed_active_entry(debug_info_t * id)
static inline void
proceed_active_area(debug_info_t * id)
static inline debug_entry_t*
get_active_entry(debug_info_t * id)
static inline void
debug_finish_entry(debug_info_t * id, debug_entry_t* active, int level,
int exception)
static int debug_stoppable=1;
static int debug_active=1;
#define CTL_S390DBF_STOPPABLE 5678
#define CTL_S390DBF_ACTIVE 5679
static int
s390dbf_procactive(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static struct ctl_table s390dbf_table[] = ;
static struct ctl_table s390dbf_dir_table[] = ;
static struct ctl_table_header *s390dbf_sysctl_header;
void
debug_stop_all(void)
debug_entry_t*
debug_event_common(debug_info_t * id, int level, const void *buf, int len)
debug_entry_t
*debug_exception_common(debug_info_t * id, int level, const void *buf, int len)
static inline int
debug_count_numargs(char *string)
debug_entry_t*
debug_sprintf_event(debug_info_t* id, int level,char *string,...)
debug_entry_t*
debug_sprintf_exception(debug_info_t* id, int level,char *string,...)
static int
__init debug_init(void)
int
debug_register_view(debug_info_t * id, struct debug_view *view)
int
debug_unregister_view(debug_info_t * id, struct debug_view *view)
static inline char *
debug_get_user_string(const char __user *user_buf, size_t user_len)
static inline int
debug_get_uint(char *buf)
static int
debug_prolog_pages_fn(debug_info_t * id,
struct debug_view *view, char *out_buf)
static int
debug_input_pages_fn(debug_info_t * id, struct debug_view *view,
struct file *file, const char __user *user_buf,
size_t user_len, loff_t * offset)
static int
debug_prolog_level_fn(debug_info_t * id, struct debug_view *view, char *out_buf)
static int
debug_input_level_fn(debug_info_t * id, struct debug_view *view,
struct file *file, const char __user *user_buf,
size_t user_len, loff_t * offset)
static void debug_flush(debug_info_t* id, int area)
static int
debug_input_flush_fn(debug_info_t * id, struct debug_view *view,
struct file *file, const char __user *user_buf,
size_t user_len, loff_t * offset)
static int
debug_raw_header_fn(debug_info_t * id, struct debug_view *view,
int area, debug_entry_t * entry, char *out_buf)
static int
debug_raw_format_fn(debug_info_t * id, struct debug_view *view,
char *out_buf, const char *in_buf)
static int
debug_hex_ascii_format_fn(debug_info_t * id, struct debug_view *view,
char *out_buf, const char *in_buf)
int
debug_dflt_header_fn(debug_info_t * id, struct debug_view *view,
int area, debug_entry_t * entry, char *out_buf)
#define DEBUG_SPRINTF_MAX_ARGS 10
static int
debug_sprintf_format_fn(debug_info_t * id, struct debug_view *view,
char *out_buf, debug_sprintf_entry_t *curr_event)
static void __exit debug_exit(void)
postcore_initcall(debug_init);
module_exit(debug_exit);
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(debug_register);
EXPORT_SYMBOL(debug_unregister);
EXPORT_SYMBOL(debug_set_level);
EXPORT_SYMBOL(debug_stop_all);
EXPORT_SYMBOL(debug_register_view);
EXPORT_SYMBOL(debug_unregister_view);
EXPORT_SYMBOL(debug_event_common);
EXPORT_SYMBOL(debug_exception_common);
EXPORT_SYMBOL(debug_hex_ascii_view);
EXPORT_SYMBOL(debug_raw_view);
EXPORT_SYMBOL(debug_dflt_header_fn);
EXPORT_SYMBOL(debug_sprintf_view);
EXPORT_SYMBOL(debug_sprintf_exception);
EXPORT_SYMBOL(debug_sprintf_event);
