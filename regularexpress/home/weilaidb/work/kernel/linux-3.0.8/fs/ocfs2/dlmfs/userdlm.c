#define MLOG_MASK_PREFIX ML_DLMFS
static inline struct user_lock_res *user_lksb_to_lock_res(struct ocfs2_dlm_lksb *lksb)
static inline int user_check_wait_flag(struct user_lock_res *lockres,
int flag)
static inline void user_wait_on_busy_lock(struct user_lock_res *lockres)
static inline void user_wait_on_blocked_lock(struct user_lock_res *lockres)
static inline struct ocfs2_cluster_connection *
cluster_connection_from_user_lockres(struct user_lock_res *lockres)
static struct inode *
user_dlm_inode_from_user_lockres(struct user_lock_res *lockres)
static inline void user_recover_from_dlm_error(struct user_lock_res *lockres)
#define user_log_dlm_error(_func, _stat, _lockres) do  while (0)
static inline int user_highest_compat_lock_level(int level)
static void user_ast(struct ocfs2_dlm_lksb *lksb)
static inline void user_dlm_grab_inode_ref(struct user_lock_res *lockres)
static void user_dlm_unblock_lock(struct work_struct *work);
static void __user_dlm_queue_lockres(struct user_lock_res *lockres)
static void __user_dlm_cond_queue_lockres(struct user_lock_res *lockres)
static void user_bast(struct ocfs2_dlm_lksb *lksb, int level)
static void user_unlock_ast(struct ocfs2_dlm_lksb *lksb, int status)
static struct ocfs2_locking_protocol user_dlm_lproto = ;
static inline void user_dlm_drop_inode_ref(struct user_lock_res *lockres)
static void user_dlm_unblock_lock(struct work_struct *work)
static inline void user_dlm_inc_holders(struct user_lock_res *lockres,
int level)
static inline int
user_may_continue_on_blocked_lock(struct user_lock_res *lockres,
int wanted)
int user_dlm_cluster_lock(struct user_lock_res *lockres,
int level,
int lkm_flags)
static inline void user_dlm_dec_holders(struct user_lock_res *lockres,
int level)
void user_dlm_cluster_unlock(struct user_lock_res *lockres,
int level)
void user_dlm_write_lvb(struct inode *inode,
const char *val,
unsigned int len)
ssize_t user_dlm_read_lvb(struct inode *inode,
char *val,
unsigned int len)
void user_dlm_lock_res_init(struct user_lock_res *lockres,
struct dentry *dentry)
int user_dlm_destroy_lock(struct user_lock_res *lockres)
static void user_dlm_recovery_handler_noop(int node_num,
void *recovery_data)
void user_dlm_set_locking_protocol(void)
struct ocfs2_cluster_connection *user_dlm_register(struct qstr *name)
void user_dlm_unregister(struct ocfs2_cluster_connection *conn)
