#define HASH_SHIFT ilog2(PAGE_SIZE / sizeof(struct list_head))
#define HASH_SIZE (1UL << HASH_SHIFT)
static int event;
static DEFINE_IDA(mnt_id_ida);
static DEFINE_IDA(mnt_group_ida);
static DEFINE_SPINLOCK(mnt_id_lock);
static int mnt_id_start = 0;
static int mnt_group_start = 1;
static struct list_head *mount_hashtable __read_mostly;
static struct kmem_cache *mnt_cache __read_mostly;
static struct rw_semaphore namespace_sem;
struct kobject *fs_kobj;
EXPORT_SYMBOL_GPL(fs_kobj);
DEFINE_BRLOCK(vfsmount_lock);
static inline unsigned long hash(struct vfsmount *mnt, struct dentry *dentry)
#define MNT_WRITER_UNDERFLOW_LIMIT -(1<<16)
static int mnt_alloc_id(struct vfsmount *mnt)
static void mnt_free_id(struct vfsmount *mnt)
static int mnt_alloc_group_id(struct vfsmount *mnt)
void mnt_release_group_id(struct vfsmount *mnt)
static inline void mnt_add_count(struct vfsmount *mnt, int n)
static inline void mnt_set_count(struct vfsmount *mnt, int n)
static inline void mnt_inc_count(struct vfsmount *mnt)
static inline void mnt_dec_count(struct vfsmount *mnt)
unsigned int mnt_get_count(struct vfsmount *mnt)
static struct vfsmount *alloc_vfsmnt(const char *name)
int __mnt_is_readonly(struct vfsmount *mnt)
EXPORT_SYMBOL_GPL(__mnt_is_readonly);
static inline void mnt_inc_writers(struct vfsmount *mnt)
static inline void mnt_dec_writers(struct vfsmount *mnt)
static unsigned int mnt_get_writers(struct vfsmount *mnt)
int mnt_want_write(struct vfsmount *mnt)
EXPORT_SYMBOL_GPL(mnt_want_write);
int mnt_clone_write(struct vfsmount *mnt)
EXPORT_SYMBOL_GPL(mnt_clone_write);
int mnt_want_write_file(struct file *file)
EXPORT_SYMBOL_GPL(mnt_want_write_file);
void mnt_drop_write(struct vfsmount *mnt)
EXPORT_SYMBOL_GPL(mnt_drop_write);
static int mnt_make_readonly(struct vfsmount *mnt)
static void __mnt_unmake_readonly(struct vfsmount *mnt)
static void free_vfsmnt(struct vfsmount *mnt)
struct vfsmount *__lookup_mnt(struct vfsmount *mnt, struct dentry *dentry,
int dir)
struct vfsmount *lookup_mnt(struct path *path)
static inline int check_mnt(struct vfsmount *mnt)
static void touch_mnt_namespace(struct mnt_namespace *ns)
static void __touch_mnt_namespace(struct mnt_namespace *ns)
static void dentry_reset_mounted(struct vfsmount *mnt, struct dentry *dentry)
static void detach_mnt(struct vfsmount *mnt, struct path *old_path)
void mnt_set_mountpoint(struct vfsmount *mnt, struct dentry *dentry,
struct vfsmount *child_mnt)
static void attach_mnt(struct vfsmount *mnt, struct path *path)
static inline void __mnt_make_longterm(struct vfsmount *mnt)
static inline void __mnt_make_shortterm(struct vfsmount *mnt)
static void commit_tree(struct vfsmount *mnt)
static struct vfsmount *next_mnt(struct vfsmount *p, struct vfsmount *root)
static struct vfsmount *skip_mnt_tree(struct vfsmount *p)
struct vfsmount *
vfs_kern_mount(struct file_system_type *type, int flags, const char *name, void *data)
EXPORT_SYMBOL_GPL(vfs_kern_mount);
static struct vfsmount *clone_mnt(struct vfsmount *old, struct dentry *root,
int flag)
static inline void mntfree(struct vfsmount *mnt)
static void mntput_no_expire(struct vfsmount *mnt)
void mntput(struct vfsmount *mnt)
EXPORT_SYMBOL(mntput);
struct vfsmount *mntget(struct vfsmount *mnt)
EXPORT_SYMBOL(mntget);
void mnt_pin(struct vfsmount *mnt)
EXPORT_SYMBOL(mnt_pin);
void mnt_unpin(struct vfsmount *mnt)
EXPORT_SYMBOL(mnt_unpin);
static inline void mangle(struct seq_file *m, const char *s)
int generic_show_options(struct seq_file *m, struct vfsmount *mnt)
EXPORT_SYMBOL(generic_show_options);
void save_mount_options(struct super_block *sb, char *options)
EXPORT_SYMBOL(save_mount_options);
void replace_mount_options(struct super_block *sb, char *options)
EXPORT_SYMBOL(replace_mount_options);
static void *m_start(struct seq_file *m, loff_t *pos)
static void *m_next(struct seq_file *m, void *v, loff_t *pos)
static void m_stop(struct seq_file *m, void *v)
int mnt_had_events(struct proc_mounts *p)
struct proc_fs_info ;
static int show_sb_opts(struct seq_file *m, struct super_block *sb)
static void show_mnt_opts(struct seq_file *m, struct vfsmount *mnt)
static void show_type(struct seq_file *m, struct super_block *sb)
static int show_vfsmnt(struct seq_file *m, void *v)
const struct seq_operations mounts_op = ;
static int show_mountinfo(struct seq_file *m, void *v)
const struct seq_operations mountinfo_op = ;
static int show_vfsstat(struct seq_file *m, void *v)
const struct seq_operations mountstats_op = ;
int may_umount_tree(struct vfsmount *mnt)
EXPORT_SYMBOL(may_umount_tree);
int may_umount(struct vfsmount *mnt)
EXPORT_SYMBOL(may_umount);
void release_mounts(struct list_head *head)
void umount_tree(struct vfsmount *mnt, int propagate, struct list_head *kill)
static void shrink_submounts(struct vfsmount *mnt, struct list_head *umounts);
static int do_umount(struct vfsmount *mnt, int flags)
SYSCALL_DEFINE2(umount, char __user *, name, int, flags)
SYSCALL_DEFINE1(oldumount, char __user *, name)
static int mount_is_safe(struct path *path)
struct vfsmount *copy_tree(struct vfsmount *mnt, struct dentry *dentry,
int flag)
struct vfsmount *collect_mounts(struct path *path)
void drop_collected_mounts(struct vfsmount *mnt)
int iterate_mounts(int (*f)(struct vfsmount *, void *), void *arg,
struct vfsmount *root)
static void cleanup_group_ids(struct vfsmount *mnt, struct vfsmount *end)
static int invent_group_ids(struct vfsmount *mnt, bool recurse)
static int attach_recursive_mnt(struct vfsmount *source_mnt,
struct path *path, struct path *parent_path)
static int lock_mount(struct path *path)
static void unlock_mount(struct path *path)
static int graft_tree(struct vfsmount *mnt, struct path *path)
static int flags_to_propagation_type(int flags)
static int do_change_type(struct path *path, int flag)
static int do_loopback(struct path *path, char *old_name,
int recurse)
static int change_mount_flags(struct vfsmount *mnt, int ms_flags)
static int do_remount(struct path *path, int flags, int mnt_flags,
void *data)
static inline int tree_contains_unbindable(struct vfsmount *mnt)
static int do_move_mount(struct path *path, char *old_name)
static struct vfsmount *fs_set_subtype(struct vfsmount *mnt, const char *fstype)
struct vfsmount *
do_kern_mount(const char *fstype, int flags, const char *name, void *data)
EXPORT_SYMBOL_GPL(do_kern_mount);
static int do_add_mount(struct vfsmount *newmnt, struct path *path, int mnt_flags)
static int do_new_mount(struct path *path, char *type, int flags,
int mnt_flags, char *name, void *data)
int finish_automount(struct vfsmount *m, struct path *path)
void mnt_set_expiry(struct vfsmount *mnt, struct list_head *expiry_list)
EXPORT_SYMBOL(mnt_set_expiry);
void mark_mounts_for_expiry(struct list_head *mounts)
EXPORT_SYMBOL_GPL(mark_mounts_for_expiry);
static int select_submounts(struct vfsmount *parent, struct list_head *graveyard)
static void shrink_submounts(struct vfsmount *mnt, struct list_head *umounts)
static long exact_copy_from_user(void *to, const void __user * from,
unsigned long n)
int copy_mount_options(const void __user * data, unsigned long *where)
int copy_mount_string(const void __user *data, char **where)
long do_mount(char *dev_name, char *dir_name, char *type_page,
unsigned long flags, void *data_page)
static struct mnt_namespace *alloc_mnt_ns(void)
void mnt_make_longterm(struct vfsmount *mnt)
void mnt_make_shortterm(struct vfsmount *mnt)
static struct mnt_namespace *dup_mnt_ns(struct mnt_namespace *mnt_ns,
struct fs_struct *fs)
struct mnt_namespace *copy_mnt_ns(unsigned long flags, struct mnt_namespace *ns,
struct fs_struct *new_fs)
struct mnt_namespace *create_mnt_ns(struct vfsmount *mnt)
EXPORT_SYMBOL(create_mnt_ns);
SYSCALL_DEFINE5(mount, char __user *, dev_name, char __user *, dir_name,
char __user *, type, unsigned long, flags, void __user *, data)
SYSCALL_DEFINE2(pivot_root, const char __user *, new_root,
const char __user *, put_old)
static void __init init_mount_tree(void)
void __init mnt_init(void)
void put_mnt_ns(struct mnt_namespace *ns)
EXPORT_SYMBOL(put_mnt_ns);
struct vfsmount *kern_mount_data(struct file_system_type *type, void *data)
EXPORT_SYMBOL_GPL(kern_mount_data);
