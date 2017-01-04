#define MQUEUE_MAGIC	0x19800202
#define DIRENT_SIZE	20
#define FILENT_SIZE	80
#define SEND		0
#define RECV		1
#define STATE_NONE	0
#define STATE_PENDING	1
#define STATE_READY	2
struct ext_wait_queue ;
struct mqueue_inode_info ;
static const struct inode_operations mqueue_dir_inode_operations;
static const struct file_operations mqueue_file_operations;
static const struct super_operations mqueue_super_ops;
static void remove_notification(struct mqueue_inode_info *info);
static struct kmem_cache *mqueue_inode_cachep;
static struct ctl_table_header * mq_sysctl_table;
static inline struct mqueue_inode_info *MQUEUE_I(struct inode *inode)
static inline struct ipc_namespace *__get_ns_from_inode(struct inode *inode)
static struct ipc_namespace *get_ns_from_inode(struct inode *inode)
static struct inode *mqueue_get_inode(struct super_block *sb,
struct ipc_namespace *ipc_ns, int mode,
struct mq_attr *attr)
static int mqueue_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *mqueue_mount(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static void init_once(void *foo)
static struct inode *mqueue_alloc_inode(struct super_block *sb)
static void mqueue_i_callback(struct rcu_head *head)
static void mqueue_destroy_inode(struct inode *inode)
static void mqueue_evict_inode(struct inode *inode)
static int mqueue_create(struct inode *dir, struct dentry *dentry,
int mode, struct nameidata *nd)
static int mqueue_unlink(struct inode *dir, struct dentry *dentry)
static ssize_t mqueue_read_file(struct file *filp, char __user *u_data,
size_t count, loff_t *off)
static int mqueue_flush_file(struct file *filp, fl_owner_t id)
static unsigned int mqueue_poll_file(struct file *filp, struct poll_table_struct *poll_tab)
static void wq_add(struct mqueue_inode_info *info, int sr,
struct ext_wait_queue *ewp)
static int wq_sleep(struct mqueue_inode_info *info, int sr,
ktime_t *timeout, struct ext_wait_queue *ewp)
static struct ext_wait_queue *wq_get_first_waiter(
struct mqueue_inode_info *info, int sr)
static void msg_insert(struct msg_msg *ptr, struct mqueue_inode_info *info)
static inline struct msg_msg *msg_get(struct mqueue_inode_info *info)
static inline void set_cookie(struct sk_buff *skb, char code)
static void __do_notify(struct mqueue_inode_info *info)
static int prepare_timeout(const struct timespec __user *u_abs_timeout,
ktime_t *expires, struct timespec *ts)
static void remove_notification(struct mqueue_inode_info *info)
static int mq_attr_ok(struct ipc_namespace *ipc_ns, struct mq_attr *attr)
static struct file *do_create(struct ipc_namespace *ipc_ns, struct dentry *dir,
struct dentry *dentry, int oflag, mode_t mode,
struct mq_attr *attr)
static struct file *do_open(struct ipc_namespace *ipc_ns,
struct dentry *dentry, int oflag)
SYSCALL_DEFINE4(mq_open, const char __user *, u_name, int, oflag, mode_t, mode,
struct mq_attr __user *, u_attr)
SYSCALL_DEFINE1(mq_unlink, const char __user *, u_name)
static inline void pipelined_send(struct mqueue_inode_info *info,
struct msg_msg *message,
struct ext_wait_queue *receiver)
static inline void pipelined_receive(struct mqueue_inode_info *info)
SYSCALL_DEFINE5(mq_timedsend, mqd_t, mqdes, const char __user *, u_msg_ptr,
size_t, msg_len, unsigned int, msg_prio,
const struct timespec __user *, u_abs_timeout)
SYSCALL_DEFINE5(mq_timedreceive, mqd_t, mqdes, char __user *, u_msg_ptr,
size_t, msg_len, unsigned int __user *, u_msg_prio,
const struct timespec __user *, u_abs_timeout)
SYSCALL_DEFINE2(mq_notify, mqd_t, mqdes,
const struct sigevent __user *, u_notification)
SYSCALL_DEFINE3(mq_getsetattr, mqd_t, mqdes,
const struct mq_attr __user *, u_mqstat,
struct mq_attr __user *, u_omqstat)
static const struct inode_operations mqueue_dir_inode_operations = ;
static const struct file_operations mqueue_file_operations = ;
static const struct super_operations mqueue_super_ops = ;
static struct file_system_type mqueue_fs_type = ;
int mq_init_ns(struct ipc_namespace *ns)
void mq_clear_sbinfo(struct ipc_namespace *ns)
void mq_put_mnt(struct ipc_namespace *ns)
static int __init init_mqueue_fs(void)
__initcall(init_mqueue_fs);
