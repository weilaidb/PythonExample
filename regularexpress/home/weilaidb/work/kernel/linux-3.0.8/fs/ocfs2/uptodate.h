#define OCFS2_UPTODATE_H
struct ocfs2_caching_operations ;
int __init init_ocfs2_uptodate_cache(void);
void exit_ocfs2_uptodate_cache(void);
void ocfs2_metadata_cache_init(struct ocfs2_caching_info *ci,
const struct ocfs2_caching_operations *ops);
void ocfs2_metadata_cache_purge(struct ocfs2_caching_info *ci);
void ocfs2_metadata_cache_exit(struct ocfs2_caching_info *ci);
u64 ocfs2_metadata_cache_owner(struct ocfs2_caching_info *ci);
void ocfs2_metadata_cache_io_lock(struct ocfs2_caching_info *ci);
void ocfs2_metadata_cache_io_unlock(struct ocfs2_caching_info *ci);
int ocfs2_buffer_uptodate(struct ocfs2_caching_info *ci,
struct buffer_head *bh);
void ocfs2_set_buffer_uptodate(struct ocfs2_caching_info *ci,
struct buffer_head *bh);
void ocfs2_set_new_buffer_uptodate(struct ocfs2_caching_info *ci,
struct buffer_head *bh);
void ocfs2_remove_from_cache(struct ocfs2_caching_info *ci,
struct buffer_head *bh);
void ocfs2_remove_xattr_clusters_from_cache(struct ocfs2_caching_info *ci,
sector_t block,
u32 c_len);
int ocfs2_buffer_read_ahead(struct ocfs2_caching_info *ci,
struct buffer_head *bh);
