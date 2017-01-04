struct ocfs2_find_inode_args
;
static struct lock_class_key ocfs2_sysfile_lock_key[NUM_SYSTEM_INODES];
static int ocfs2_read_locked_inode(struct inode *inode,
struct ocfs2_find_inode_args *args);
static int ocfs2_init_locked_inode(struct inode *inode, void *opaque);
static int ocfs2_find_actor(struct inode *inode, void *opaque);
static int ocfs2_truncate_for_delete(struct ocfs2_super *osb,
struct inode *inode,
struct buffer_head *fe_bh);
void ocfs2_set_inode_flags(struct inode *inode)
void ocfs2_get_inode_flags(struct ocfs2_inode_info *oi)
struct inode *ocfs2_ilookup(struct super_block *sb, u64 blkno)
struct inode *ocfs2_iget(struct ocfs2_super *osb, u64 blkno, unsigned flags,
int sysfile_type)
static int ocfs2_find_actor(struct inode *inode, void *opaque)
static int ocfs2_init_locked_inode(struct inode *inode, void *opaque)
void ocfs2_populate_inode(struct inode *inode, struct ocfs2_dinode *fe,
int create_ino)
static int ocfs2_read_locked_inode(struct inode *inode,
struct ocfs2_find_inode_args *args)
void ocfs2_sync_blockdev(struct super_block *sb)
static int ocfs2_truncate_for_delete(struct ocfs2_super *osb,
struct inode *inode,
struct buffer_head *fe_bh)
static int ocfs2_remove_inode(struct inode *inode,
struct buffer_head *di_bh,
struct inode *orphan_dir_inode,
struct buffer_head *orphan_dir_bh)
static int ocfs2_check_orphan_recovery_state(struct ocfs2_super *osb,
int slot)
static void ocfs2_signal_wipe_completion(struct ocfs2_super *osb,
int slot)
static int ocfs2_wipe_inode(struct inode *inode,
struct buffer_head *di_bh)
static int ocfs2_inode_is_valid_to_delete(struct inode *inode)
static int ocfs2_query_inode_wipe(struct inode *inode,
struct buffer_head *di_bh,
int *wipe)
static void ocfs2_cleanup_delete_inode(struct inode *inode,
int sync_data)
static void ocfs2_delete_inode(struct inode *inode)
static void ocfs2_clear_inode(struct inode *inode)
void ocfs2_evict_inode(struct inode *inode)
int ocfs2_drop_inode(struct inode *inode)
int ocfs2_inode_revalidate(struct dentry *dentry)
int ocfs2_mark_inode_dirty(handle_t *handle,
struct inode *inode,
struct buffer_head *bh)
void ocfs2_refresh_inode(struct inode *inode,
struct ocfs2_dinode *fe)
int ocfs2_validate_inode_block(struct super_block *sb,
struct buffer_head *bh)
int ocfs2_read_inode_block_full(struct inode *inode, struct buffer_head **bh,
int flags)
int ocfs2_read_inode_block(struct inode *inode, struct buffer_head **bh)
static u64 ocfs2_inode_cache_owner(struct ocfs2_caching_info *ci)
static struct super_block *ocfs2_inode_cache_get_super(struct ocfs2_caching_info *ci)
static void ocfs2_inode_cache_lock(struct ocfs2_caching_info *ci)
static void ocfs2_inode_cache_unlock(struct ocfs2_caching_info *ci)
static void ocfs2_inode_cache_io_lock(struct ocfs2_caching_info *ci)
static void ocfs2_inode_cache_io_unlock(struct ocfs2_caching_info *ci)
const struct ocfs2_caching_operations ocfs2_inode_caching_ops = ;
