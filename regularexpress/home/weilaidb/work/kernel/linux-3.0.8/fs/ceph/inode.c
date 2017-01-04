static const struct inode_operations ceph_symlink_iops;
static void ceph_invalidate_work(struct work_struct *work);
static void ceph_writeback_work(struct work_struct *work);
static void ceph_vmtruncate_work(struct work_struct *work);
static int ceph_set_ino_cb(struct inode *inode, void *data)
struct inode *ceph_get_inode(struct super_block *sb, struct ceph_vino vino)
struct inode *ceph_get_snapdir(struct inode *parent)
const struct inode_operations ceph_file_iops = ;
static struct ceph_inode_frag *__get_or_create_frag(struct ceph_inode_info *ci,
u32 f)
struct ceph_inode_frag *__ceph_find_frag(struct ceph_inode_info *ci, u32 f)
u32 ceph_choose_frag(struct ceph_inode_info *ci, u32 v,
struct ceph_inode_frag *pfrag,
int *found)
static int ceph_fill_dirfrag(struct inode *inode,
struct ceph_mds_reply_dirfrag *dirinfo)
struct inode *ceph_alloc_inode(struct super_block *sb)
static void ceph_i_callback(struct rcu_head *head)
void ceph_destroy_inode(struct inode *inode)
int ceph_fill_file_size(struct inode *inode, int issued,
u32 truncate_seq, u64 truncate_size, u64 size)
void ceph_fill_file_time(struct inode *inode, int issued,
u64 time_warp_seq, struct timespec *ctime,
struct timespec *mtime, struct timespec *atime)
static int fill_inode(struct inode *inode,
struct ceph_mds_reply_info_in *iinfo,
struct ceph_mds_reply_dirfrag *dirinfo,
struct ceph_mds_session *session,
unsigned long ttl_from, int cap_fmode,
struct ceph_cap_reservation *caps_reservation)
static void update_dentry_lease(struct dentry *dentry,
struct ceph_mds_reply_lease *lease,
struct ceph_mds_session *session,
unsigned long from_time)
static void ceph_set_dentry_offset(struct dentry *dn)
static struct dentry *splice_dentry(struct dentry *dn, struct inode *in,
bool *prehash, bool set_offset)
int ceph_fill_trace(struct super_block *sb, struct ceph_mds_request *req,
struct ceph_mds_session *session)
int ceph_readdir_prepopulate(struct ceph_mds_request *req,
struct ceph_mds_session *session)
int ceph_inode_set_size(struct inode *inode, loff_t size)
void ceph_queue_writeback(struct inode *inode)
static void ceph_writeback_work(struct work_struct *work)
void ceph_queue_invalidate(struct inode *inode)
static void ceph_invalidate_nondirty_pages(struct address_space *mapping)
static void ceph_invalidate_work(struct work_struct *work)
static void ceph_vmtruncate_work(struct work_struct *work)
void ceph_queue_vmtruncate(struct inode *inode)
void __ceph_do_pending_vmtruncate(struct inode *inode)
static void *ceph_sym_follow_link(struct dentry *dentry, struct nameidata *nd)
static const struct inode_operations ceph_symlink_iops = ;
int ceph_setattr(struct dentry *dentry, struct iattr *attr)
int ceph_do_getattr(struct inode *inode, int mask)
int ceph_permission(struct inode *inode, int mask, unsigned int flags)
int ceph_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
