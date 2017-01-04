#define IS_POSIX(fl)	(fl->fl_flags & FL_POSIX)
#define IS_FLOCK(fl)	(fl->fl_flags & FL_FLOCK)
#define IS_LEASE(fl)	(fl->fl_flags & FL_LEASE)
int leases_enable = 1;
int lease_break_time = 45;
#define for_each_lock(inode, lockp) \
for (lockp = &inode->i_flock; *lockp != NULL; lockp = &(*lockp)->fl_next)
static LIST_HEAD(file_lock_list);
static LIST_HEAD(blocked_list);
static DEFINE_SPINLOCK(file_lock_lock);
void lock_flocks(void)
EXPORT_SYMBOL_GPL(lock_flocks);
void unlock_flocks(void)
EXPORT_SYMBOL_GPL(unlock_flocks);
static struct kmem_cache *filelock_cache __read_mostly;
static void locks_init_lock_always(struct file_lock *fl)
struct file_lock *locks_alloc_lock(void)
EXPORT_SYMBOL_GPL(locks_alloc_lock);
void locks_release_private(struct file_lock *fl)
EXPORT_SYMBOL_GPL(locks_release_private);
void locks_free_lock(struct file_lock *fl)
EXPORT_SYMBOL(locks_free_lock);
void locks_init_lock(struct file_lock *fl)
EXPORT_SYMBOL(locks_init_lock);
static void init_once(void *foo)
static void locks_copy_private(struct file_lock *new, struct file_lock *fl)
void __locks_copy_lock(struct file_lock *new, const struct file_lock *fl)
EXPORT_SYMBOL(__locks_copy_lock);
void locks_copy_lock(struct file_lock *new, struct file_lock *fl)
EXPORT_SYMBOL(locks_copy_lock);
static inline int flock_translate_cmd(int cmd)
static int flock_make_lock(struct file *filp, struct file_lock **lock,
unsigned int cmd)
static int assign_type(struct file_lock *fl, int type)
static int flock_to_posix_lock(struct file *filp, struct file_lock *fl,
struct flock *l)
#if BITS_PER_LONG == 32
static int flock64_to_posix_lock(struct file *filp, struct file_lock *fl,
struct flock64 *l)
static void lease_break_callback(struct file_lock *fl)
static void lease_release_private_callback(struct file_lock *fl)
static const struct lock_manager_operations lease_manager_ops = ;
static int lease_init(struct file *filp, int type, struct file_lock *fl)
static struct file_lock *lease_alloc(struct file *filp, int type)
static inline int locks_overlap(struct file_lock *fl1, struct file_lock *fl2)
static int posix_same_owner(struct file_lock *fl1, struct file_lock *fl2)
static void __locks_delete_block(struct file_lock *waiter)
static void locks_delete_block(struct file_lock *waiter)
static void locks_insert_block(struct file_lock *blocker,
struct file_lock *waiter)
static void locks_wake_up_blocks(struct file_lock *blocker)
static void locks_insert_lock(struct file_lock **pos, struct file_lock *fl)
static void locks_delete_lock(struct file_lock **thisfl_p)
static int locks_conflict(struct file_lock *caller_fl, struct file_lock *sys_fl)
static int posix_locks_conflict(struct file_lock *caller_fl, struct file_lock *sys_fl)
static int flock_locks_conflict(struct file_lock *caller_fl, struct file_lock *sys_fl)
void
posix_test_lock(struct file *filp, struct file_lock *fl)
EXPORT_SYMBOL(posix_test_lock);
#define MAX_DEADLK_ITERATIONS 10
static struct file_lock *what_owner_is_waiting_for(struct file_lock *block_fl)
static int posix_locks_deadlock(struct file_lock *caller_fl,
struct file_lock *block_fl)
static int flock_lock_file(struct file *filp, struct file_lock *request)
static int __posix_lock_file(struct inode *inode, struct file_lock *request, struct file_lock *conflock)
int posix_lock_file(struct file *filp, struct file_lock *fl,
struct file_lock *conflock)
EXPORT_SYMBOL(posix_lock_file);
int posix_lock_file_wait(struct file *filp, struct file_lock *fl)
EXPORT_SYMBOL(posix_lock_file_wait);
int locks_mandatory_locked(struct inode *inode)
int locks_mandatory_area(int read_write, struct inode *inode,
struct file *filp, loff_t offset,
size_t count)
EXPORT_SYMBOL(locks_mandatory_area);
int lease_modify(struct file_lock **before, int arg)
EXPORT_SYMBOL(lease_modify);
static void time_out_leases(struct inode *inode)
int __break_lease(struct inode *inode, unsigned int mode)
EXPORT_SYMBOL(__break_lease);
void lease_get_mtime(struct inode *inode, struct timespec *time)
EXPORT_SYMBOL(lease_get_mtime);
int fcntl_getlease(struct file *filp)
int generic_setlease(struct file *filp, long arg, struct file_lock **flp)
EXPORT_SYMBOL(generic_setlease);
static int __vfs_setlease(struct file *filp, long arg, struct file_lock **lease)
int vfs_setlease(struct file *filp, long arg, struct file_lock **lease)
EXPORT_SYMBOL_GPL(vfs_setlease);
static int do_fcntl_delete_lease(struct file *filp)
static int do_fcntl_add_lease(unsigned int fd, struct file *filp, long arg)
int fcntl_setlease(unsigned int fd, struct file *filp, long arg)
int flock_lock_file_wait(struct file *filp, struct file_lock *fl)
EXPORT_SYMBOL(flock_lock_file_wait);
SYSCALL_DEFINE2(flock, unsigned int, fd, unsigned int, cmd)
int vfs_test_lock(struct file *filp, struct file_lock *fl)
EXPORT_SYMBOL_GPL(vfs_test_lock);
static int posix_lock_to_flock(struct flock *flock, struct file_lock *fl)
#if BITS_PER_LONG == 32
static void posix_lock_to_flock64(struct flock64 *flock, struct file_lock *fl)
int fcntl_getlk(struct file *filp, struct flock __user *l)
int vfs_lock_file(struct file *filp, unsigned int cmd, struct file_lock *fl, struct file_lock *conf)
EXPORT_SYMBOL_GPL(vfs_lock_file);
static int do_lock_file_wait(struct file *filp, unsigned int cmd,
struct file_lock *fl)
int fcntl_setlk(unsigned int fd, struct file *filp, unsigned int cmd,
struct flock __user *l)
#if BITS_PER_LONG == 32
int fcntl_getlk64(struct file *filp, struct flock64 __user *l)
int fcntl_setlk64(unsigned int fd, struct file *filp, unsigned int cmd,
struct flock64 __user *l)
void locks_remove_posix(struct file *filp, fl_owner_t owner)
EXPORT_SYMBOL(locks_remove_posix);
void locks_remove_flock(struct file *filp)
int
posix_unblock_lock(struct file *filp, struct file_lock *waiter)
EXPORT_SYMBOL(posix_unblock_lock);
int vfs_cancel_lock(struct file *filp, struct file_lock *fl)
EXPORT_SYMBOL_GPL(vfs_cancel_lock);
static void lock_get_status(struct seq_file *f, struct file_lock *fl,
loff_t id, char *pfx)
static int locks_show(struct seq_file *f, void *v)
static void *locks_start(struct seq_file *f, loff_t *pos)
static void *locks_next(struct seq_file *f, void *v, loff_t *pos)
static void locks_stop(struct seq_file *f, void *v)
static const struct seq_operations locks_seq_operations = ;
static int locks_open(struct inode *inode, struct file *filp)
static const struct file_operations proc_locks_operations = ;
static int __init proc_locks_init(void)
module_init(proc_locks_init);
int lock_may_read(struct inode *inode, loff_t start, unsigned long len)
EXPORT_SYMBOL(lock_may_read);
int lock_may_write(struct inode *inode, loff_t start, unsigned long len)
EXPORT_SYMBOL(lock_may_write);
static int __init filelock_init(void)
core_initcall(filelock_init);
