#define DM_MSG_PREFIX "ioctl"
#define DM_DRIVER_EMAIL "dm-devel@redhat.com"
struct hash_cell ;
struct vers_iter ;
#define NUM_BUCKETS 64
#define MASK_BUCKETS (NUM_BUCKETS - 1)
static struct list_head _name_buckets[NUM_BUCKETS];
static struct list_head _uuid_buckets[NUM_BUCKETS];
static void dm_hash_remove_all(int keep_open_devices);
static DECLARE_RWSEM(_hash_lock);
static DEFINE_MUTEX(dm_hash_cells_mutex);
static void init_buckets(struct list_head *buckets)
static int dm_hash_init(void)
static void dm_hash_exit(void)
static unsigned int hash_str(const char *str)
static struct hash_cell *__get_name_cell(const char *str)
static struct hash_cell *__get_uuid_cell(const char *str)
static struct hash_cell *alloc_cell(const char *name, const char *uuid,
struct mapped_device *md)
static void free_cell(struct hash_cell *hc)
static int dm_hash_insert(const char *name, const char *uuid, struct mapped_device *md)
static void __hash_remove(struct hash_cell *hc)
static void dm_hash_remove_all(int keep_open_devices)
static void __set_cell_uuid(struct hash_cell *hc, char *new_uuid)
static char *__change_cell_name(struct hash_cell *hc, char *new_name)
static struct mapped_device *dm_hash_rename(struct dm_ioctl *param,
const char *new)
typedef int (*ioctl_fn)(struct dm_ioctl *param, size_t param_size);
static int remove_all(struct dm_ioctl *param, size_t param_size)
#define ALIGN_MASK 7
static inline void *align_ptr(void *ptr)
static void *get_result_buffer(struct dm_ioctl *param, size_t param_size,
size_t *len)
static int list_devices(struct dm_ioctl *param, size_t param_size)
static void list_version_get_needed(struct target_type *tt, void *needed_param)
static void list_version_get_info(struct target_type *tt, void *param)
static int list_versions(struct dm_ioctl *param, size_t param_size)
static int check_name(const char *name)
static struct dm_table *dm_get_inactive_table(struct mapped_device *md)
static struct dm_table *dm_get_live_or_inactive_table(struct mapped_device *md,
struct dm_ioctl *param)
static void __dev_status(struct mapped_device *md, struct dm_ioctl *param)
static int dev_create(struct dm_ioctl *param, size_t param_size)
static struct hash_cell *__find_device_hash_cell(struct dm_ioctl *param)
static struct mapped_device *find_device(struct dm_ioctl *param)
static int dev_remove(struct dm_ioctl *param, size_t param_size)
static int invalid_str(char *str, void *end)
static int dev_rename(struct dm_ioctl *param, size_t param_size)
static int dev_set_geometry(struct dm_ioctl *param, size_t param_size)
static int do_suspend(struct dm_ioctl *param)
static int do_resume(struct dm_ioctl *param)
static int dev_suspend(struct dm_ioctl *param, size_t param_size)
static int dev_status(struct dm_ioctl *param, size_t param_size)
static void retrieve_status(struct dm_table *table,
struct dm_ioctl *param, size_t param_size)
static int dev_wait(struct dm_ioctl *param, size_t param_size)
static inline fmode_t get_mode(struct dm_ioctl *param)
static int next_target(struct dm_target_spec *last, uint32_t next, void *end,
struct dm_target_spec **spec, char **target_params)
static int populate_table(struct dm_table *table,
struct dm_ioctl *param, size_t param_size)
static int table_load(struct dm_ioctl *param, size_t param_size)
static int table_clear(struct dm_ioctl *param, size_t param_size)
static void retrieve_deps(struct dm_table *table,
struct dm_ioctl *param, size_t param_size)
static int table_deps(struct dm_ioctl *param, size_t param_size)
static int table_status(struct dm_ioctl *param, size_t param_size)
static int target_message(struct dm_ioctl *param, size_t param_size)
static ioctl_fn lookup_ioctl(unsigned int cmd)
static int check_version(unsigned int cmd, struct dm_ioctl __user *user)
static int copy_params(struct dm_ioctl __user *user, struct dm_ioctl **param)
static int validate_params(uint cmd, struct dm_ioctl *param)
static int ctl_ioctl(uint command, struct dm_ioctl __user *user)
static long dm_ctl_ioctl(struct file *file, uint command, ulong u)
static long dm_compat_ctl_ioctl(struct file *file, uint command, ulong u)
#define dm_compat_ctl_ioctl NULL
static const struct file_operations _ctl_fops = ;
static struct miscdevice _dm_misc = ;
MODULE_ALIAS_MISCDEV(MAPPER_CTRL_MINOR);
MODULE_ALIAS("devname:" DM_DIR "/" DM_CONTROL_NODE);
int __init dm_interface_init(void)
void dm_interface_exit(void)
int dm_copy_name_and_uuid(struct mapped_device *md, char *name, char *uuid)
