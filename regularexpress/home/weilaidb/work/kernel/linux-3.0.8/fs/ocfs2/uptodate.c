struct ocfs2_meta_cache_item ;
static struct kmem_cache *ocfs2_uptodate_cachep = NULL;
u64 ocfs2_metadata_cache_owner(struct ocfs2_caching_info *ci)
struct super_block *ocfs2_metadata_cache_get_super(struct ocfs2_caching_info *ci)
static void ocfs2_metadata_cache_lock(struct ocfs2_caching_info *ci)
static void ocfs2_metadata_cache_unlock(struct ocfs2_caching_info *ci)
void ocfs2_metadata_cache_io_lock(struct ocfs2_caching_info *ci)
void ocfs2_metadata_cache_io_unlock(struct ocfs2_caching_info *ci)
static void ocfs2_metadata_cache_reset(struct ocfs2_caching_info *ci,
int clear)
void ocfs2_metadata_cache_init(struct ocfs2_caching_info *ci,
const struct ocfs2_caching_operations *ops)
void ocfs2_metadata_cache_exit(struct ocfs2_caching_info *ci)
static unsigned int ocfs2_purge_copied_metadata_tree(struct rb_root *root)
void ocfs2_metadata_cache_purge(struct ocfs2_caching_info *ci)
static int ocfs2_search_cache_array(struct ocfs2_caching_info *ci,
sector_t item)
static struct ocfs2_meta_cache_item *
ocfs2_search_cache_tree(struct ocfs2_caching_info *ci,
sector_t block)
static int ocfs2_buffer_cached(struct ocfs2_caching_info *ci,
struct buffer_head *bh)
int ocfs2_buffer_uptodate(struct ocfs2_caching_info *ci,
struct buffer_head *bh)
int ocfs2_buffer_read_ahead(struct ocfs2_caching_info *ci,
struct buffer_head *bh)
static void ocfs2_append_cache_array(struct ocfs2_caching_info *ci,
sector_t block)
static void __ocfs2_insert_cache_tree(struct ocfs2_caching_info *ci,
struct ocfs2_meta_cache_item *new)
static inline int ocfs2_insert_can_use_array(struct ocfs2_caching_info *ci)
static void ocfs2_expand_cache(struct ocfs2_caching_info *ci,
struct ocfs2_meta_cache_item **tree)
static void __ocfs2_set_buffer_uptodate(struct ocfs2_caching_info *ci,
sector_t block,
int expand_tree)
void ocfs2_set_buffer_uptodate(struct ocfs2_caching_info *ci,
struct buffer_head *bh)
void ocfs2_set_new_buffer_uptodate(struct ocfs2_caching_info *ci,
struct buffer_head *bh)
static void ocfs2_remove_metadata_array(struct ocfs2_caching_info *ci,
int index)
static void ocfs2_remove_metadata_tree(struct ocfs2_caching_info *ci,
struct ocfs2_meta_cache_item *item)
static void ocfs2_remove_block_from_cache(struct ocfs2_caching_info *ci,
sector_t block)
void ocfs2_remove_from_cache(struct ocfs2_caching_info *ci,
struct buffer_head *bh)
void ocfs2_remove_xattr_clusters_from_cache(struct ocfs2_caching_info *ci,
sector_t block,
u32 c_len)
int __init init_ocfs2_uptodate_cache(void)
void exit_ocfs2_uptodate_cache(void)
