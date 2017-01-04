static int ocfs2_init_file_private(struct inode *inode, struct file *file)
static void ocfs2_free_file_private(struct inode *inode, struct file *file)
static int ocfs2_file_open(struct inode *inode, struct file *file)
static int ocfs2_file_release(struct inode *inode, struct file *file)
static int ocfs2_dir_open(struct inode *inode, struct file *file)
static int ocfs2_dir_release(struct inode *inode, struct file *file)
static int ocfs2_sync_file(struct file *file, int datasync)
int ocfs2_should_update_atime(struct inode *inode,
struct vfsmount *vfsmnt)
int ocfs2_update_inode_atime(struct inode *inode,
struct buffer_head *bh)
static int ocfs2_set_inode_size(handle_t *handle,
struct inode *inode,
struct buffer_head *fe_bh,
u64 new_i_size)
int ocfs2_simple_size_update(struct inode *inode,
struct buffer_head *di_bh,
u64 new_i_size)
static int ocfs2_cow_file_pos(struct inode *inode,
struct buffer_head *fe_bh,
u64 offset)
static int ocfs2_orphan_for_truncate(struct ocfs2_super *osb,
struct inode *inode,
struct buffer_head *fe_bh,
u64 new_i_size)
static int ocfs2_truncate_file(struct inode *inode,
struct buffer_head *di_bh,
u64 new_i_size)
int ocfs2_add_inode_data(struct ocfs2_super *osb,
struct inode *inode,
u32 *logical_offset,
u32 clusters_to_add,
int mark_unwritten,
struct buffer_head *fe_bh,
handle_t *handle,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac,
enum ocfs2_alloc_restarted *reason_ret)
static int __ocfs2_extend_allocation(struct inode *inode, u32 logical_start,
u32 clusters_to_add, int mark_unwritten)
static handle_t *ocfs2_zero_start_ordered_transaction(struct inode *inode)
static int ocfs2_write_zero_page(struct inode *inode, u64 abs_from,
u64 abs_to)
static int ocfs2_zero_extend_get_range(struct inode *inode,
struct buffer_head *di_bh,
u64 zero_start, u64 zero_end,
u64 *range_start, u64 *range_end)
static int ocfs2_zero_extend_range(struct inode *inode, u64 range_start,
u64 range_end)
int ocfs2_zero_extend(struct inode *inode, struct buffer_head *di_bh,
loff_t zero_to_size)
int ocfs2_extend_no_holes(struct inode *inode, struct buffer_head *di_bh,
u64 new_i_size, u64 zero_to)
static int ocfs2_extend_file(struct inode *inode,
struct buffer_head *di_bh,
u64 new_i_size)
int ocfs2_setattr(struct dentry *dentry, struct iattr *attr)
int ocfs2_getattr(struct vfsmount *mnt,
struct dentry *dentry,
struct kstat *stat)
int ocfs2_permission(struct inode *inode, int mask, unsigned int flags)
static int __ocfs2_write_remove_suid(struct inode *inode,
struct buffer_head *bh)
static int ocfs2_check_range_for_holes(struct inode *inode, loff_t pos,
size_t count)
static int ocfs2_write_remove_suid(struct inode *inode)
static int ocfs2_allocate_unwritten_extents(struct inode *inode,
u64 start, u64 len)
static void ocfs2_truncate_cluster_pages(struct inode *inode, u64 byte_start,
u64 byte_len)
static int ocfs2_zero_partial_clusters(struct inode *inode,
u64 start, u64 len)
static int ocfs2_find_rec(struct ocfs2_extent_list *el, u32 pos)
static void ocfs2_calc_trunc_pos(struct inode *inode,
struct ocfs2_extent_list *el,
struct ocfs2_extent_rec *rec,
u32 trunc_start, u32 *trunc_cpos,
u32 *trunc_len, u32 *trunc_end,
u64 *blkno, int *done)
static int ocfs2_remove_inode_range(struct inode *inode,
struct buffer_head *di_bh, u64 byte_start,
u64 byte_len)
static int __ocfs2_change_file_space(struct file *file, struct inode *inode,
loff_t f_pos, unsigned int cmd,
struct ocfs2_space_resv *sr,
int change_size)
int ocfs2_change_file_space(struct file *file, unsigned int cmd,
struct ocfs2_space_resv *sr)
static long ocfs2_fallocate(struct file *file, int mode, loff_t offset,
loff_t len)
int ocfs2_check_range_for_refcount(struct inode *inode, loff_t pos,
size_t count)
static int ocfs2_prepare_inode_for_refcount(struct inode *inode,
struct file *file,
loff_t pos, size_t count,
int *meta_level)
static int ocfs2_prepare_inode_for_write(struct file *file,
loff_t *ppos,
size_t count,
int appending,
int *direct_io,
int *has_refcount)
static ssize_t ocfs2_file_aio_write(struct kiocb *iocb,
const struct iovec *iov,
unsigned long nr_segs,
loff_t pos)
static int ocfs2_splice_to_file(struct pipe_inode_info *pipe,
struct file *out,
struct splice_desc *sd)
static ssize_t ocfs2_file_splice_write(struct pipe_inode_info *pipe,
struct file *out,
loff_t *ppos,
size_t len,
unsigned int flags)
static ssize_t ocfs2_file_splice_read(struct file *in,
loff_t *ppos,
struct pipe_inode_info *pipe,
size_t len,
unsigned int flags)
static ssize_t ocfs2_file_aio_read(struct kiocb *iocb,
const struct iovec *iov,
unsigned long nr_segs,
loff_t pos)
const struct inode_operations ocfs2_file_iops = ;
const struct inode_operations ocfs2_special_file_iops = ;
const struct file_operations ocfs2_fops = ;
const struct file_operations ocfs2_dops = ;
const struct file_operations ocfs2_fops_no_plocks = ;
const struct file_operations ocfs2_dops_no_plocks = ;
