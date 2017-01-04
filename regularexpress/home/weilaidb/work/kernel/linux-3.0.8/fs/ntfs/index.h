#define _LINUX_NTFS_INDEX_H
typedef struct  ntfs_index_context;
extern ntfs_index_context *ntfs_index_ctx_get(ntfs_inode *idx_ni);
extern void ntfs_index_ctx_put(ntfs_index_context *ictx);
extern int ntfs_index_lookup(const void *key, const int key_len,
ntfs_index_context *ictx);
static inline void ntfs_index_entry_flush_dcache_page(ntfs_index_context *ictx)
static inline void ntfs_index_entry_mark_dirty(ntfs_index_context *ictx)
