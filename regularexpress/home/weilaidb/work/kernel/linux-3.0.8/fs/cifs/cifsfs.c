#define DECLARE_GLOBALS_HERE
#define CIFS_MAGIC_NUMBER 0xFF534D42
int cifsFYI = 0;
int cifsERROR = 1;
int traceSMB = 0;
unsigned int oplockEnabled = 1;
unsigned int linuxExtEnabled = 1;
unsigned int lookupCacheEnabled = 1;
unsigned int multiuser_mount = 0;
unsigned int global_secflags = CIFSSEC_DEF;
unsigned int sign_CIFS_PDUs = 1;
static const struct super_operations cifs_super_ops;
unsigned int CIFSMaxBufSize = CIFS_MAX_MSGSIZE;
module_param(CIFSMaxBufSize, int, 0);
MODULE_PARM_DESC(CIFSMaxBufSize, "Network buffer size (not including header). "
"Default: 16384 Range: 8192 to 130048");
unsigned int cifs_min_rcv = CIFS_MIN_RCV_POOL;
module_param(cifs_min_rcv, int, 0);
MODULE_PARM_DESC(cifs_min_rcv, "Network buffers in pool. Default: 4 Range: "
"1 to 64");
unsigned int cifs_min_small = 30;
module_param(cifs_min_small, int, 0);
MODULE_PARM_DESC(cifs_min_small, "Small network buffers in pool. Default: 30 "
"Range: 2 to 256");
unsigned int cifs_max_pending = CIFS_MAX_REQ;
module_param(cifs_max_pending, int, 0);
MODULE_PARM_DESC(cifs_max_pending, "Simultaneous requests to server. "
"Default: 50 Range: 2 to 256");
unsigned short echo_retries = 5;
module_param(echo_retries, ushort, 0644);
MODULE_PARM_DESC(echo_retries, "Number of echo attempts before giving up and "
"reconnecting server. Default: 5. 0 means "
"never reconnect.");
extern mempool_t *cifs_sm_req_poolp;
extern mempool_t *cifs_req_poolp;
extern mempool_t *cifs_mid_poolp;
void
cifs_sb_active(struct super_block *sb)
void
cifs_sb_deactive(struct super_block *sb)
static int
cifs_read_super(struct super_block *sb)
static void cifs_kill_sb(struct super_block *sb)
static int
cifs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int cifs_permission(struct inode *inode, int mask, unsigned int flags)
static struct kmem_cache *cifs_inode_cachep;
static struct kmem_cache *cifs_req_cachep;
static struct kmem_cache *cifs_mid_cachep;
static struct kmem_cache *cifs_sm_req_cachep;
mempool_t *cifs_sm_req_poolp;
mempool_t *cifs_req_poolp;
mempool_t *cifs_mid_poolp;
static struct inode *
cifs_alloc_inode(struct super_block *sb)
static void cifs_i_callback(struct rcu_head *head)
static void
cifs_destroy_inode(struct inode *inode)
static void
cifs_evict_inode(struct inode *inode)
static void
cifs_show_address(struct seq_file *s, struct TCP_Server_Info *server)
static void
cifs_show_security(struct seq_file *s, struct TCP_Server_Info *server)
static int
cifs_show_options(struct seq_file *s, struct vfsmount *m)
static void cifs_umount_begin(struct super_block *sb)
static int cifs_show_stats(struct seq_file *s, struct vfsmount *mnt)
static int cifs_remount(struct super_block *sb, int *flags, char *data)
static int cifs_drop_inode(struct inode *inode)
static const struct super_operations cifs_super_ops = ;
static struct dentry *
cifs_get_root(struct smb_vol *vol, struct super_block *sb)
static int cifs_set_super(struct super_block *sb, void *data)
static struct dentry *
cifs_do_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static ssize_t cifs_file_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static loff_t cifs_llseek(struct file *file, loff_t offset, int origin)
static int cifs_setlease(struct file *file, long arg, struct file_lock **lease)
struct file_system_type cifs_fs_type = ;
const struct inode_operations cifs_dir_inode_ops = ;
const struct inode_operations cifs_file_inode_ops = ;
const struct inode_operations cifs_symlink_inode_ops = ;
const struct file_operations cifs_file_strict_ops = ;
const struct file_operations cifs_file_direct_ops = ;
const struct file_operations cifs_file_nobrl_ops = ;
const struct file_operations cifs_file_strict_nobrl_ops = ;
const struct file_operations cifs_file_direct_nobrl_ops = ;
const struct file_operations cifs_dir_ops = ;
static void
cifs_init_once(void *inode)
static int
cifs_init_inodecache(void)
static void
cifs_destroy_inodecache(void)
static int
cifs_init_request_bufs(void)
static void
cifs_destroy_request_bufs(void)
static int
cifs_init_mids(void)
static void
cifs_destroy_mids(void)
static int __init
init_cifs(void)
static void __exit
exit_cifs(void)
MODULE_AUTHOR("Steve French <sfrench@us.ibm.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION
("VFS to access servers complying with the SNIA CIFS Specification "
"e.g. Samba and Windows");
MODULE_VERSION(CIFS_VERSION);
module_init(init_cifs)
module_exit(exit_cifs)
