struct files_stat_struct files_stat = ;
DECLARE_LGLOCK(files_lglock);
DEFINE_LGLOCK(files_lglock);
static struct kmem_cache *filp_cachep __read_mostly;
static struct percpu_counter nr_files __cacheline_aligned_in_smp;
static inline void file_free_rcu(struct rcu_head *head)
static inline void file_free(struct file *f)
static long get_nr_files(void)
unsigned long get_max_files(void)
EXPORT_SYMBOL_GPL(get_max_files);
#if defined(CONFIG_SYSCTL) && defined(CONFIG_PROC_FS)
int proc_nr_files(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int proc_nr_files(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
struct file *get_empty_filp(void)
struct file *alloc_file(struct path *path, fmode_t mode,
const struct file_operations *fop)
EXPORT_SYMBOL(alloc_file);
void drop_file_write_access(struct file *file)
EXPORT_SYMBOL_GPL(drop_file_write_access);
static void __fput(struct file *file)
void fput(struct file *file)
EXPORT_SYMBOL(fput);
struct file *fget(unsigned int fd)
EXPORT_SYMBOL(fget);
struct file *fget_raw(unsigned int fd)
EXPORT_SYMBOL(fget_raw);
struct file *fget_light(unsigned int fd, int *fput_needed)
struct file *fget_raw_light(unsigned int fd, int *fput_needed)
void put_filp(struct file *file)
static inline int file_list_cpu(struct file *file)
static inline void __file_sb_list_add(struct file *file, struct super_block *sb)
void file_sb_list_add(struct file *file, struct super_block *sb)
void file_sb_list_del(struct file *file)
#define do_file_list_for_each_entry(__sb, __file)		\
#define do_file_list_for_each_entry(__sb, __file)		\
int fs_may_remount_ro(struct super_block *sb)
void mark_files_ro(struct super_block *sb)
void __init files_init(unsigned long mempages)
