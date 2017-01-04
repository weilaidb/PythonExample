void ocfs2_dentry_attach_gen(struct dentry *dentry)
static int ocfs2_dentry_revalidate(struct dentry *dentry,
struct nameidata *nd)
static int ocfs2_match_dentry(struct dentry *dentry,
u64 parent_blkno,
int skip_unhashed)
struct dentry *ocfs2_find_local_alias(struct inode *inode,
u64 parent_blkno,
int skip_unhashed)
DEFINE_SPINLOCK(dentry_attach_lock);
int ocfs2_dentry_attach_lock(struct dentry *dentry,
struct inode *inode,
u64 parent_blkno)
DEFINE_SPINLOCK(dentry_list_lock);
#define DL_INODE_DROP_COUNT 64
static void __ocfs2_drop_dl_inodes(struct ocfs2_super *osb, int drop_count)
void ocfs2_drop_dl_inodes(struct work_struct *work)
void ocfs2_drop_all_dl_inodes(struct ocfs2_super *osb)
static void ocfs2_drop_dentry_lock(struct ocfs2_super *osb,
struct ocfs2_dentry_lock *dl)
void ocfs2_dentry_lock_put(struct ocfs2_super *osb,
struct ocfs2_dentry_lock *dl)
static void ocfs2_dentry_iput(struct dentry *dentry, struct inode *inode)
void ocfs2_dentry_move(struct dentry *dentry, struct dentry *target,
struct inode *old_dir, struct inode *new_dir)
const struct dentry_operations ocfs2_dentry_ops = ;
