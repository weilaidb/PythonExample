#define _FS_FUSE_I_H
#define FUSE_MAX_PAGES_PER_REQ 32
#define FUSE_NOWRITE INT_MIN
#define FUSE_NAME_MAX 1024
#define FUSE_CTL_NUM_DENTRIES 5
#define FUSE_DEFAULT_PERMISSIONS (1 << 0)
#define FUSE_ALLOW_OTHER         (1 << 1)
extern struct list_head fuse_conn_list;
extern struct mutex fuse_mutex;
extern unsigned max_user_bgreq;
extern unsigned max_user_congthresh;
struct fuse_forget_link ;
struct fuse_inode ;
struct fuse_conn;
struct fuse_file ;
struct fuse_in_arg ;
struct fuse_in ;
struct fuse_arg ;
struct fuse_out ;
enum fuse_req_state ;
struct fuse_req ;
struct fuse_conn ;
static inline struct fuse_conn *get_fuse_conn_super(struct super_block *sb)
static inline struct fuse_conn *get_fuse_conn(struct inode *inode)
static inline struct fuse_inode *get_fuse_inode(struct inode *inode)
static inline u64 get_node_id(struct inode *inode)
extern const struct file_operations fuse_dev_operations;
extern const struct dentry_operations fuse_dentry_operations;
int fuse_inode_eq(struct inode *inode, void *_nodeidp);
struct inode *fuse_iget(struct super_block *sb, u64 nodeid,
int generation, struct fuse_attr *attr,
u64 attr_valid, u64 attr_version);
int fuse_lookup_name(struct super_block *sb, u64 nodeid, struct qstr *name,
struct fuse_entry_out *outarg, struct inode **inode);
void fuse_queue_forget(struct fuse_conn *fc, struct fuse_forget_link *forget,
u64 nodeid, u64 nlookup);
struct fuse_forget_link *fuse_alloc_forget(void);
void fuse_read_fill(struct fuse_req *req, struct file *file,
loff_t pos, size_t count, int opcode);
int fuse_open_common(struct inode *inode, struct file *file, bool isdir);
struct fuse_file *fuse_file_alloc(struct fuse_conn *fc);
struct fuse_file *fuse_file_get(struct fuse_file *ff);
void fuse_file_free(struct fuse_file *ff);
void fuse_finish_open(struct inode *inode, struct file *file);
void fuse_sync_release(struct fuse_file *ff, int flags);
void fuse_release_common(struct file *file, int opcode);
int fuse_fsync_common(struct file *file, int datasync, int isdir);
int fuse_notify_poll_wakeup(struct fuse_conn *fc,
struct fuse_notify_poll_wakeup_out *outarg);
void fuse_init_file_inode(struct inode *inode);
void fuse_init_common(struct inode *inode);
void fuse_init_dir(struct inode *inode);
void fuse_init_symlink(struct inode *inode);
void fuse_change_attributes(struct inode *inode, struct fuse_attr *attr,
u64 attr_valid, u64 attr_version);
void fuse_change_attributes_common(struct inode *inode, struct fuse_attr *attr,
u64 attr_valid);
int fuse_dev_init(void);
void fuse_dev_cleanup(void);
int fuse_ctl_init(void);
void fuse_ctl_cleanup(void);
struct fuse_req *fuse_request_alloc(void);
struct fuse_req *fuse_request_alloc_nofs(void);
void fuse_request_free(struct fuse_req *req);
struct fuse_req *fuse_get_req(struct fuse_conn *fc);
struct fuse_req *fuse_get_req_nofail(struct fuse_conn *fc, struct file *file);
void fuse_put_request(struct fuse_conn *fc, struct fuse_req *req);
void fuse_request_send(struct fuse_conn *fc, struct fuse_req *req);
void fuse_request_send_background(struct fuse_conn *fc, struct fuse_req *req);
void fuse_request_send_background_locked(struct fuse_conn *fc,
struct fuse_req *req);
void fuse_abort_conn(struct fuse_conn *fc);
void fuse_invalidate_attr(struct inode *inode);
void fuse_invalidate_entry_cache(struct dentry *entry);
struct fuse_conn *fuse_conn_get(struct fuse_conn *fc);
void fuse_conn_kill(struct fuse_conn *fc);
void fuse_conn_init(struct fuse_conn *fc);
void fuse_conn_put(struct fuse_conn *fc);
int fuse_ctl_add_conn(struct fuse_conn *fc);
void fuse_ctl_remove_conn(struct fuse_conn *fc);
int fuse_valid_type(int m);
int fuse_allow_task(struct fuse_conn *fc, struct task_struct *task);
u64 fuse_lock_owner_id(struct fuse_conn *fc, fl_owner_t id);
int fuse_update_attributes(struct inode *inode, struct kstat *stat,
struct file *file, bool *refreshed);
void fuse_flush_writepages(struct inode *inode);
void fuse_set_nowrite(struct inode *inode);
void fuse_release_nowrite(struct inode *inode);
u64 fuse_get_attr_version(struct fuse_conn *fc);
int fuse_reverse_inval_inode(struct super_block *sb, u64 nodeid,
loff_t offset, loff_t len);
int fuse_reverse_inval_entry(struct super_block *sb, u64 parent_nodeid,
struct qstr *name);
int fuse_do_open(struct fuse_conn *fc, u64 nodeid, struct file *file,
bool isdir);
ssize_t fuse_direct_io(struct file *file, const char __user *buf,
size_t count, loff_t *ppos, int write);
long fuse_do_ioctl(struct file *file, unsigned int cmd, unsigned long arg,
unsigned int flags);
unsigned fuse_file_poll(struct file *file, poll_table *wait);
int fuse_dev_release(struct inode *inode, struct file *file);
void fuse_write_update_size(struct inode *inode, loff_t pos);
