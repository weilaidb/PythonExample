static int ocfs2_mknod_locked(struct ocfs2_super *osb,
struct inode *dir,
struct inode *inode,
dev_t dev,
struct buffer_head **new_fe_bh,
struct buffer_head *parent_fe_bh,
handle_t *handle,
struct ocfs2_alloc_context *inode_ac);
static int ocfs2_prepare_orphan_dir(struct ocfs2_super *osb,
struct inode **ret_orphan_dir,
u64 blkno,
char *name,
struct ocfs2_dir_lookup_result *lookup);
static int ocfs2_orphan_add(struct ocfs2_super *osb,
handle_t *handle,
struct inode *inode,
struct buffer_head *fe_bh,
char *name,
struct ocfs2_dir_lookup_result *lookup,
struct inode *orphan_dir_inode);
static int ocfs2_create_symlink_data(struct ocfs2_super *osb,
handle_t *handle,
struct inode *inode,
const char *symname);
#define OCFS2_ORPHAN_NAMELEN ((int)(2 * sizeof(u64)))
static struct dentry *ocfs2_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static struct inode *ocfs2_get_init_inode(struct inode *dir, int mode)
static int ocfs2_mknod(struct inode *dir,
struct dentry *dentry,
int mode,
dev_t dev)
static int __ocfs2_mknod_locked(struct inode *dir,
struct inode *inode,
dev_t dev,
struct buffer_head **new_fe_bh,
struct buffer_head *parent_fe_bh,
handle_t *handle,
struct ocfs2_alloc_context *inode_ac,
u64 fe_blkno, u64 suballoc_loc, u16 suballoc_bit)
static int ocfs2_mknod_locked(struct ocfs2_super *osb,
struct inode *dir,
struct inode *inode,
dev_t dev,
struct buffer_head **new_fe_bh,
struct buffer_head *parent_fe_bh,
handle_t *handle,
struct ocfs2_alloc_context *inode_ac)
static int ocfs2_mkdir(struct inode *dir,
struct dentry *dentry,
int mode)
static int ocfs2_create(struct inode *dir,
struct dentry *dentry,
int mode,
struct nameidata *nd)
static int ocfs2_link(struct dentry *old_dentry,
struct inode *dir,
struct dentry *dentry)
static int ocfs2_remote_dentry_delete(struct dentry *dentry)
static inline int inode_is_unlinkable(struct inode *inode)
static int ocfs2_unlink(struct inode *dir,
struct dentry *dentry)
static int ocfs2_double_lock(struct ocfs2_super *osb,
struct buffer_head **bh1,
struct inode *inode1,
struct buffer_head **bh2,
struct inode *inode2)
static void ocfs2_double_unlock(struct inode *inode1, struct inode *inode2)
static int ocfs2_rename(struct inode *old_dir,
struct dentry *old_dentry,
struct inode *new_dir,
struct dentry *new_dentry)
static int ocfs2_create_symlink_data(struct ocfs2_super *osb,
handle_t *handle,
struct inode *inode,
const char *symname)
static int ocfs2_symlink(struct inode *dir,
struct dentry *dentry,
const char *symname)
static int ocfs2_blkno_stringify(u64 blkno, char *name)
static int ocfs2_lookup_lock_orphan_dir(struct ocfs2_super *osb,
struct inode **ret_orphan_dir,
struct buffer_head **ret_orphan_dir_bh)
static int __ocfs2_prepare_orphan_dir(struct inode *orphan_dir_inode,
struct buffer_head *orphan_dir_bh,
u64 blkno,
char *name,
struct ocfs2_dir_lookup_result *lookup)
static int ocfs2_prepare_orphan_dir(struct ocfs2_super *osb,
struct inode **ret_orphan_dir,
u64 blkno,
char *name,
struct ocfs2_dir_lookup_result *lookup)
static int ocfs2_orphan_add(struct ocfs2_super *osb,
handle_t *handle,
struct inode *inode,
struct buffer_head *fe_bh,
char *name,
struct ocfs2_dir_lookup_result *lookup,
struct inode *orphan_dir_inode)
int ocfs2_orphan_del(struct ocfs2_super *osb,
handle_t *handle,
struct inode *orphan_dir_inode,
struct inode *inode,
struct buffer_head *orphan_dir_bh)
static int ocfs2_prep_new_orphaned_file(struct inode *dir,
struct buffer_head *dir_bh,
char *orphan_name,
struct inode **ret_orphan_dir,
u64 *ret_di_blkno,
struct ocfs2_dir_lookup_result *orphan_insert,
struct ocfs2_alloc_context **ret_inode_ac)
int ocfs2_create_inode_in_orphan(struct inode *dir,
int mode,
struct inode **new_inode)
int ocfs2_mv_orphaned_inode_to_new(struct inode *dir,
struct inode *inode,
struct dentry *dentry)
const struct inode_operations ocfs2_dir_iops = ;
