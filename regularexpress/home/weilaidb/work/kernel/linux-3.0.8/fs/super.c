LIST_HEAD(super_blocks);
DEFINE_SPINLOCK(sb_lock);
static struct super_block *alloc_super(struct file_system_type *type)
static inline void destroy_super(struct super_block *s)
void __put_super(struct super_block *sb)
void put_super(struct super_block *sb)
void deactivate_locked_super(struct super_block *s)
EXPORT_SYMBOL(deactivate_locked_super);
void deactivate_super(struct super_block *s)
EXPORT_SYMBOL(deactivate_super);
static int grab_super(struct super_block *s) __releases(sb_lock)
void lock_super(struct super_block * sb)
void unlock_super(struct super_block * sb)
EXPORT_SYMBOL(lock_super);
EXPORT_SYMBOL(unlock_super);
void generic_shutdown_super(struct super_block *sb)
EXPORT_SYMBOL(generic_shutdown_super);
struct super_block *sget(struct file_system_type *type,
int (*test)(struct super_block *,void *),
int (*set)(struct super_block *,void *),
void *data)
EXPORT_SYMBOL(sget);
void drop_super(struct super_block *sb)
EXPORT_SYMBOL(drop_super);
void sync_supers(void)
void iterate_supers(void (*f)(struct super_block *, void *), void *arg)
struct super_block *get_super(struct block_device *bdev)
EXPORT_SYMBOL(get_super);
struct super_block *get_active_super(struct block_device *bdev)
struct super_block *user_get_super(dev_t dev)
int do_remount_sb(struct super_block *sb, int flags, void *data, int force)
static void do_emergency_remount(struct work_struct *work)
void emergency_remount(void)
static DEFINE_IDA(unnamed_dev_ida);
static DEFINE_SPINLOCK(unnamed_dev_lock);
static int unnamed_dev_start = 0;
int set_anon_super(struct super_block *s, void *data)
EXPORT_SYMBOL(set_anon_super);
void kill_anon_super(struct super_block *sb)
EXPORT_SYMBOL(kill_anon_super);
void kill_litter_super(struct super_block *sb)
EXPORT_SYMBOL(kill_litter_super);
static int ns_test_super(struct super_block *sb, void *data)
static int ns_set_super(struct super_block *sb, void *data)
struct dentry *mount_ns(struct file_system_type *fs_type, int flags,
void *data, int (*fill_super)(struct super_block *, void *, int))
EXPORT_SYMBOL(mount_ns);
static int set_bdev_super(struct super_block *s, void *data)
static int test_bdev_super(struct super_block *s, void *data)
struct dentry *mount_bdev(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data,
int (*fill_super)(struct super_block *, void *, int))
EXPORT_SYMBOL(mount_bdev);
void kill_block_super(struct super_block *sb)
EXPORT_SYMBOL(kill_block_super);
struct dentry *mount_nodev(struct file_system_type *fs_type,
int flags, void *data,
int (*fill_super)(struct super_block *, void *, int))
EXPORT_SYMBOL(mount_nodev);
static int compare_single(struct super_block *s, void *p)
struct dentry *mount_single(struct file_system_type *fs_type,
int flags, void *data,
int (*fill_super)(struct super_block *, void *, int))
EXPORT_SYMBOL(mount_single);
struct dentry *
mount_fs(struct file_system_type *type, int flags, const char *name, void *data)
int freeze_super(struct super_block *sb)
EXPORT_SYMBOL(freeze_super);
int thaw_super(struct super_block *sb)
EXPORT_SYMBOL(thaw_super);
