#define AFS_LOCK_GRANTED	0
#define AFS_LOCK_PENDING	1
static void afs_fl_copy_lock(struct file_lock *new, struct file_lock *fl);
static void afs_fl_release_private(struct file_lock *fl);
static struct workqueue_struct *afs_lock_manager;
static DEFINE_MUTEX(afs_lock_manager_mutex);
static const struct file_lock_operations afs_lock_ops = ;
static int afs_init_lock_manager(void)
void __exit afs_kill_lock_manager(void)
void afs_lock_may_be_available(struct afs_vnode *vnode)
static void afs_schedule_lock_extension(struct afs_vnode *vnode)
static void afs_grant_locks(struct afs_vnode *vnode, struct file_lock *fl)
void afs_lock_work(struct work_struct *work)
static void afs_defer_unlock(struct afs_vnode *vnode, struct key *key)
static int afs_do_setlk(struct file *file, struct file_lock *fl)
static int afs_do_unlk(struct file *file, struct file_lock *fl)
static int afs_do_getlk(struct file *file, struct file_lock *fl)
int afs_lock(struct file *file, int cmd, struct file_lock *fl)
int afs_flock(struct file *file, int cmd, struct file_lock *fl)
static void afs_fl_copy_lock(struct file_lock *new, struct file_lock *fl)
static void afs_fl_release_private(struct file_lock *fl)
