#define OCFS2_DIR_H
struct ocfs2_dx_hinfo ;
struct ocfs2_dir_lookup_result ;
void ocfs2_free_dir_lookup_result(struct ocfs2_dir_lookup_result *res);
int ocfs2_find_entry(const char *name, int namelen,
struct inode *dir,
struct ocfs2_dir_lookup_result *lookup);
int ocfs2_delete_entry(handle_t *handle,
struct inode *dir,
struct ocfs2_dir_lookup_result *res);
int __ocfs2_add_entry(handle_t *handle,
struct inode *dir,
const char *name, int namelen,
struct inode *inode, u64 blkno,
struct buffer_head *parent_fe_bh,
struct ocfs2_dir_lookup_result *lookup);
static inline int ocfs2_add_entry(handle_t *handle,
struct dentry *dentry,
struct inode *inode, u64 blkno,
struct buffer_head *parent_fe_bh,
struct ocfs2_dir_lookup_result *lookup)
int ocfs2_update_entry(struct inode *dir, handle_t *handle,
struct ocfs2_dir_lookup_result *res,
struct inode *new_entry_inode);
int ocfs2_check_dir_for_entry(struct inode *dir,
const char *name,
int namelen);
int ocfs2_empty_dir(struct inode *inode);
int ocfs2_find_files_on_disk(const char *name,
int namelen,
u64 *blkno,
struct inode *inode,
struct ocfs2_dir_lookup_result *res);
int ocfs2_lookup_ino_from_name(struct inode *dir, const char *name,
int namelen, u64 *blkno);
int ocfs2_readdir(struct file *filp, void *dirent, filldir_t filldir);
int ocfs2_dir_foreach(struct inode *inode, loff_t *f_pos, void *priv,
filldir_t filldir);
int ocfs2_prepare_dir_for_insert(struct ocfs2_super *osb,
struct inode *dir,
struct buffer_head *parent_fe_bh,
const char *name,
int namelen,
struct ocfs2_dir_lookup_result *lookup);
struct ocfs2_alloc_context;
int ocfs2_fill_new_dir(struct ocfs2_super *osb,
handle_t *handle,
struct inode *parent,
struct inode *inode,
struct buffer_head *fe_bh,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac);
int ocfs2_dx_dir_truncate(struct inode *dir, struct buffer_head *di_bh);
struct ocfs2_dir_block_trailer *ocfs2_dir_trailer_from_size(int blocksize,
void *data);
