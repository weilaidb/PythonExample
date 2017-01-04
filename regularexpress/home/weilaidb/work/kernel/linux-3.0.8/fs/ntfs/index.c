ntfs_index_context *ntfs_index_ctx_get(ntfs_inode *idx_ni)
void ntfs_index_ctx_put(ntfs_index_context *ictx)
int ntfs_index_lookup(const void *key, const int key_len,
ntfs_index_context *ictx)
