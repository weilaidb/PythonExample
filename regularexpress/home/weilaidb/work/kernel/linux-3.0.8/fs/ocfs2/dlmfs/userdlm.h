#define USERDLM_H
#define USER_LOCK_ATTACHED      (0x00000001)
#define USER_LOCK_BUSY          (0x00000002)
#define USER_LOCK_BLOCKED       (0x00000004)
#define USER_LOCK_IN_TEARDOWN   (0x00000008)
#define USER_LOCK_QUEUED        (0x00000010)
#define USER_LOCK_IN_CANCEL     (0x00000020)
struct user_lock_res ;
extern struct workqueue_struct *user_dlm_worker;
void user_dlm_lock_res_init(struct user_lock_res *lockres,
struct dentry *dentry);
int user_dlm_destroy_lock(struct user_lock_res *lockres);
int user_dlm_cluster_lock(struct user_lock_res *lockres,
int level,
int lkm_flags);
void user_dlm_cluster_unlock(struct user_lock_res *lockres,
int level);
void user_dlm_write_lvb(struct inode *inode,
const char *val,
unsigned int len);
ssize_t user_dlm_read_lvb(struct inode *inode,
char *val,
unsigned int len);
struct ocfs2_cluster_connection *user_dlm_register(struct qstr *name);
void user_dlm_unregister(struct ocfs2_cluster_connection *conn);
void user_dlm_set_locking_protocol(void);
struct dlmfs_inode_private ;
static inline struct dlmfs_inode_private *
DLMFS_I(struct inode *inode)
struct dlmfs_filp_private ;
#define DLMFS_MAGIC	0x76a9f425
