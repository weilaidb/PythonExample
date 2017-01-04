#define _LINUX_NTFS_MALLOC_H
static inline void *__ntfs_malloc(unsigned long size, gfp_t gfp_mask)
static inline void *ntfs_malloc_nofs(unsigned long size)
static inline void *ntfs_malloc_nofs_nofail(unsigned long size)
static inline void ntfs_free(void *addr)
