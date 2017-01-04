#define NAMEI_RA_CHUNKS  2
#define NAMEI_RA_BLOCKS  4
#define NAMEI_RA_SIZE        (NAMEI_RA_CHUNKS * NAMEI_RA_BLOCKS)
#define NAMEI_RA_INDEX(c,b)  (((c) * NAMEI_RA_BLOCKS) + (b))
static unsigned char ocfs2_filetype_table[] = ;
static int ocfs2_do_extend_dir(struct super_block *sb,
handle_t *handle,
struct inode *dir,
struct buffer_head *parent_fe_bh,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac,
struct buffer_head **new_bh);
static int ocfs2_dir_indexed(struct inode *inode);
static int ocfs2_supports_dir_trailer(struct inode *dir)
static int ocfs2_new_dir_wants_trailer(struct inode *dir)
static inline unsigned int ocfs2_dir_trailer_blk_off(struct super_block *sb)
#define ocfs2_trailer_from_bh(_bh, _sb) ((struct ocfs2_dir_block_trailer *) ((_bh)->b_data + ocfs2_dir_trailer_blk_off((_sb))))
struct ocfs2_dir_block_trailer *ocfs2_dir_trailer_from_size(int blocksize,
void *data)
static int ocfs2_skip_dir_trailer(struct inode *dir,
struct ocfs2_dir_entry *de,
unsigned long offset,
unsigned long blklen)
static void ocfs2_init_dir_trailer(struct inode *inode,
struct buffer_head *bh, u16 rec_len)
static int ocfs2_dx_dir_link_trailer(struct inode *dir, handle_t *handle,
struct buffer_head *dx_root_bh,
struct buffer_head *dirdata_bh)
static int ocfs2_free_list_at_root(struct ocfs2_dir_lookup_result *res)
void ocfs2_free_dir_lookup_result(struct ocfs2_dir_lookup_result *res)
static int ocfs2_dir_indexed(struct inode *inode)
static inline int ocfs2_dx_root_inline(struct ocfs2_dx_root_block *dx_root)
#define DELTA 0x9E3779B9
static void TEA_transform(__u32 buf[4], __u32 const in[])
static void str2hashbuf(const char *msg, int len, __u32 *buf, int num)
static void ocfs2_dx_dir_name_hash(struct inode *dir, const char *name, int len,
struct ocfs2_dx_hinfo *hinfo)
static int ocfs2_check_dir_entry(struct inode * dir,
struct ocfs2_dir_entry * de,
struct buffer_head * bh,
unsigned long offset)
static inline int ocfs2_match(int len,
const char * const name,
struct ocfs2_dir_entry *de)
static inline int ocfs2_search_dirblock(struct buffer_head *bh,
struct inode *dir,
const char *name, int namelen,
unsigned long offset,
char *first_de,
unsigned int bytes,
struct ocfs2_dir_entry **res_dir)
static struct buffer_head *ocfs2_find_entry_id(const char *name,
int namelen,
struct inode *dir,
struct ocfs2_dir_entry **res_dir)
static int ocfs2_validate_dir_block(struct super_block *sb,
struct buffer_head *bh)
static int ocfs2_check_dir_trailer(struct inode *dir, struct buffer_head *bh)
static int ocfs2_read_dir_block(struct inode *inode, u64 v_block,
struct buffer_head **bh, int flags)
static int ocfs2_read_dir_block_direct(struct inode *dir, u64 phys,
struct buffer_head **bh)
static int ocfs2_validate_dx_root(struct super_block *sb,
struct buffer_head *bh)
static int ocfs2_read_dx_root(struct inode *dir, struct ocfs2_dinode *di,
struct buffer_head **dx_root_bh)
static int ocfs2_validate_dx_leaf(struct super_block *sb,
struct buffer_head *bh)
static int ocfs2_read_dx_leaf(struct inode *dir, u64 blkno,
struct buffer_head **dx_leaf_bh)
static int ocfs2_read_dx_leaves(struct inode *dir, u64 start, int num,
struct buffer_head **dx_leaf_bhs)
static struct buffer_head *ocfs2_find_entry_el(const char *name, int namelen,
struct inode *dir,
struct ocfs2_dir_entry **res_dir)
static int ocfs2_dx_dir_lookup_rec(struct inode *inode,
struct ocfs2_extent_list *el,
u32 major_hash,
u32 *ret_cpos,
u64 *ret_phys_blkno,
unsigned int *ret_clen)
static inline unsigned int __ocfs2_dx_dir_hash_idx(struct ocfs2_super *osb,
u32 minor_hash)
static inline unsigned int ocfs2_dx_dir_hash_idx(struct ocfs2_super *osb,
struct ocfs2_dx_hinfo *hinfo)
static int ocfs2_dx_dir_lookup(struct inode *inode,
struct ocfs2_extent_list *el,
struct ocfs2_dx_hinfo *hinfo,
u32 *ret_cpos,
u64 *ret_phys_blkno)
static int ocfs2_dx_dir_search(const char *name, int namelen,
struct inode *dir,
struct ocfs2_dx_root_block *dx_root,
struct ocfs2_dir_lookup_result *res)
static int ocfs2_find_entry_dx(const char *name, int namelen,
struct inode *dir,
struct ocfs2_dir_lookup_result *lookup)
int ocfs2_find_entry(const char *name, int namelen,
struct inode *dir, struct ocfs2_dir_lookup_result *lookup)
int ocfs2_update_entry(struct inode *dir, handle_t *handle,
struct ocfs2_dir_lookup_result *res,
struct inode *new_entry_inode)
static int __ocfs2_delete_entry(handle_t *handle, struct inode *dir,
struct ocfs2_dir_entry *de_del,
struct buffer_head *bh, char *first_de,
unsigned int bytes)
static unsigned int ocfs2_figure_dirent_hole(struct ocfs2_dir_entry *de)
static int ocfs2_find_max_rec_len(struct super_block *sb,
struct buffer_head *dirblock_bh)
static void ocfs2_dx_list_remove_entry(struct ocfs2_dx_entry_list *entry_list,
int index)
static int ocfs2_delete_entry_dx(handle_t *handle, struct inode *dir,
struct ocfs2_dir_lookup_result *lookup)
static inline int ocfs2_delete_entry_id(handle_t *handle,
struct inode *dir,
struct ocfs2_dir_entry *de_del,
struct buffer_head *bh)
static inline int ocfs2_delete_entry_el(handle_t *handle,
struct inode *dir,
struct ocfs2_dir_entry *de_del,
struct buffer_head *bh)
int ocfs2_delete_entry(handle_t *handle,
struct inode *dir,
struct ocfs2_dir_lookup_result *res)
static inline int ocfs2_dirent_would_fit(struct ocfs2_dir_entry *de,
unsigned int new_rec_len)
static void ocfs2_dx_dir_leaf_insert_tail(struct ocfs2_dx_leaf *dx_leaf,
struct ocfs2_dx_entry *dx_new_entry)
static void ocfs2_dx_entry_list_insert(struct ocfs2_dx_entry_list *entry_list,
struct ocfs2_dx_hinfo *hinfo,
u64 dirent_blk)
static int __ocfs2_dx_dir_leaf_insert(struct inode *dir, handle_t *handle,
struct ocfs2_dx_hinfo *hinfo,
u64 dirent_blk,
struct buffer_head *dx_leaf_bh)
static void ocfs2_dx_inline_root_insert(struct inode *dir, handle_t *handle,
struct ocfs2_dx_hinfo *hinfo,
u64 dirent_blk,
struct ocfs2_dx_root_block *dx_root)
static int ocfs2_dx_dir_insert(struct inode *dir, handle_t *handle,
struct ocfs2_dir_lookup_result *lookup)
static void ocfs2_remove_block_from_free_list(struct inode *dir,
handle_t *handle,
struct ocfs2_dir_lookup_result *lookup)
static void ocfs2_recalc_free_list(struct inode *dir, handle_t *handle,
struct ocfs2_dir_lookup_result *lookup)
int __ocfs2_add_entry(handle_t *handle,
struct inode *dir,
const char *name, int namelen,
struct inode *inode, u64 blkno,
struct buffer_head *parent_fe_bh,
struct ocfs2_dir_lookup_result *lookup)
static int ocfs2_dir_foreach_blk_id(struct inode *inode,
u64 *f_version,
loff_t *f_pos, void *priv,
filldir_t filldir, int *filldir_err)
static int ocfs2_dir_foreach_blk_el(struct inode *inode,
u64 *f_version,
loff_t *f_pos, void *priv,
filldir_t filldir, int *filldir_err)
static int ocfs2_dir_foreach_blk(struct inode *inode, u64 *f_version,
loff_t *f_pos, void *priv, filldir_t filldir,
int *filldir_err)
int ocfs2_dir_foreach(struct inode *inode, loff_t *f_pos, void *priv,
filldir_t filldir)
int ocfs2_readdir(struct file * filp, void * dirent, filldir_t filldir)
int ocfs2_find_files_on_disk(const char *name,
int namelen,
u64 *blkno,
struct inode *inode,
struct ocfs2_dir_lookup_result *lookup)
int ocfs2_lookup_ino_from_name(struct inode *dir, const char *name,
int namelen, u64 *blkno)
int ocfs2_check_dir_for_entry(struct inode *dir,
const char *name,
int namelen)
struct ocfs2_empty_dir_priv ;
static int ocfs2_empty_dir_filldir(void *priv, const char *name, int name_len,
loff_t pos, u64 ino, unsigned type)
static int ocfs2_empty_dir_dx(struct inode *inode,
struct ocfs2_empty_dir_priv *priv)
int ocfs2_empty_dir(struct inode *inode)
static struct ocfs2_dir_entry *ocfs2_fill_initial_dirents(struct inode *inode,
struct inode *parent,
char *start,
unsigned int size)
static int ocfs2_fill_new_dir_id(struct ocfs2_super *osb,
handle_t *handle,
struct inode *parent,
struct inode *inode,
struct buffer_head *di_bh)
static int ocfs2_fill_new_dir_el(struct ocfs2_super *osb,
handle_t *handle,
struct inode *parent,
struct inode *inode,
struct buffer_head *fe_bh,
struct ocfs2_alloc_context *data_ac,
struct buffer_head **ret_new_bh)
static int ocfs2_dx_dir_attach_index(struct ocfs2_super *osb,
handle_t *handle, struct inode *dir,
struct buffer_head *di_bh,
struct buffer_head *dirdata_bh,
struct ocfs2_alloc_context *meta_ac,
int dx_inline, u32 num_entries,
struct buffer_head **ret_dx_root_bh)
static int ocfs2_dx_dir_format_cluster(struct ocfs2_super *osb,
handle_t *handle, struct inode *dir,
struct buffer_head **dx_leaves,
int num_dx_leaves, u64 start_blk)
static int __ocfs2_dx_dir_new_cluster(struct inode *dir,
u32 cpos, handle_t *handle,
struct ocfs2_alloc_context *data_ac,
struct buffer_head **dx_leaves,
int num_dx_leaves, u64 *ret_phys_blkno)
static int ocfs2_dx_dir_new_cluster(struct inode *dir,
struct ocfs2_extent_tree *et,
u32 cpos, handle_t *handle,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac,
struct buffer_head **dx_leaves,
int num_dx_leaves)
static struct buffer_head **ocfs2_dx_dir_kmalloc_leaves(struct super_block *sb,
int *ret_num_leaves)
static int ocfs2_fill_new_dir_dx(struct ocfs2_super *osb,
handle_t *handle,
struct inode *parent,
struct inode *inode,
struct buffer_head *di_bh,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac)
int ocfs2_fill_new_dir(struct ocfs2_super *osb,
handle_t *handle,
struct inode *parent,
struct inode *inode,
struct buffer_head *fe_bh,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac)
static int ocfs2_dx_dir_index_block(struct inode *dir,
handle_t *handle,
struct buffer_head **dx_leaves,
int num_dx_leaves,
u32 *num_dx_entries,
struct buffer_head *dirent_bh)
static void ocfs2_dx_dir_index_root_block(struct inode *dir,
struct buffer_head *dx_root_bh,
struct buffer_head *dirent_bh)
static int ocfs2_new_dx_should_be_inline(struct inode *dir,
struct buffer_head *di_bh)
static unsigned int ocfs2_expand_last_dirent(char *start, unsigned int old_size,
struct inode *dir)
static int ocfs2_expand_inline_dir(struct inode *dir, struct buffer_head *di_bh,
unsigned int blocks_wanted,
struct ocfs2_dir_lookup_result *lookup,
struct buffer_head **first_block_bh)
static int ocfs2_do_extend_dir(struct super_block *sb,
handle_t *handle,
struct inode *dir,
struct buffer_head *parent_fe_bh,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac,
struct buffer_head **new_bh)
static int ocfs2_extend_dir(struct ocfs2_super *osb,
struct inode *dir,
struct buffer_head *parent_fe_bh,
unsigned int blocks_wanted,
struct ocfs2_dir_lookup_result *lookup,
struct buffer_head **new_de_bh)
static int ocfs2_find_dir_space_id(struct inode *dir, struct buffer_head *di_bh,
const char *name, int namelen,
struct buffer_head **ret_de_bh,
unsigned int *blocks_wanted)
static int ocfs2_find_dir_space_el(struct inode *dir, const char *name,
int namelen, struct buffer_head **ret_de_bh)
static int dx_leaf_sort_cmp(const void *a, const void *b)
static void dx_leaf_sort_swap(void *a, void *b, int size)
static int ocfs2_dx_leaf_same_major(struct ocfs2_dx_leaf *dx_leaf)
static int ocfs2_dx_dir_find_leaf_split(struct ocfs2_dx_leaf *dx_leaf,
u32 leaf_cpos, u32 insert_hash,
u32 *split_hash)
static void ocfs2_dx_dir_transfer_leaf(struct inode *dir, u32 split_hash,
handle_t *handle,
struct ocfs2_dx_leaf *tmp_dx_leaf,
struct buffer_head **orig_dx_leaves,
struct buffer_head **new_dx_leaves,
int num_dx_leaves)
static int ocfs2_dx_dir_rebalance_credits(struct ocfs2_super *osb,
struct ocfs2_dx_root_block *dx_root)
static int ocfs2_dx_dir_rebalance(struct ocfs2_super *osb, struct inode *dir,
struct buffer_head *dx_root_bh,
struct buffer_head *dx_leaf_bh,
struct ocfs2_dx_hinfo *hinfo, u32 leaf_cpos,
u64 leaf_blkno)
static int ocfs2_find_dir_space_dx(struct ocfs2_super *osb, struct inode *dir,
struct buffer_head *di_bh,
struct buffer_head *dx_root_bh,
const char *name, int namelen,
struct ocfs2_dir_lookup_result *lookup)
static int ocfs2_search_dx_free_list(struct inode *dir,
struct buffer_head *dx_root_bh,
int namelen,
struct ocfs2_dir_lookup_result *lookup)
static int ocfs2_expand_inline_dx_root(struct inode *dir,
struct buffer_head *dx_root_bh)
static int ocfs2_inline_dx_has_space(struct buffer_head *dx_root_bh)
static int ocfs2_prepare_dx_dir_for_insert(struct inode *dir,
struct buffer_head *di_bh,
const char *name,
int namelen,
struct ocfs2_dir_lookup_result *lookup)
int ocfs2_prepare_dir_for_insert(struct ocfs2_super *osb,
struct inode *dir,
struct buffer_head *parent_fe_bh,
const char *name,
int namelen,
struct ocfs2_dir_lookup_result *lookup)
static int ocfs2_dx_dir_remove_index(struct inode *dir,
struct buffer_head *di_bh,
struct buffer_head *dx_root_bh)
int ocfs2_dx_dir_truncate(struct inode *dir, struct buffer_head *di_bh)
