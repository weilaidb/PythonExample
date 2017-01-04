#define _LINUX_NTFS_MFT_H
extern MFT_RECORD *map_mft_record(ntfs_inode *ni);
extern void unmap_mft_record(ntfs_inode *ni);
extern MFT_RECORD *map_extent_mft_record(ntfs_inode *base_ni, MFT_REF mref,
ntfs_inode **ntfs_ino);
static inline void unmap_extent_mft_record(ntfs_inode *ni)
static inline void flush_dcache_mft_record_page(ntfs_inode *ni)
extern void __mark_mft_record_dirty(ntfs_inode *ni);
static inline void mark_mft_record_dirty(ntfs_inode *ni)
extern int ntfs_sync_mft_mirror(ntfs_volume *vol, const unsigned long mft_no,
MFT_RECORD *m, int sync);
extern int write_mft_record_nolock(ntfs_inode *ni, MFT_RECORD *m, int sync);
static inline int write_mft_record(ntfs_inode *ni, MFT_RECORD *m, int sync)
extern bool ntfs_may_write_mft_record(ntfs_volume *vol,
const unsigned long mft_no, const MFT_RECORD *m,
ntfs_inode **locked_ni);
extern ntfs_inode *ntfs_mft_record_alloc(ntfs_volume *vol, const int mode,
ntfs_inode *base_ni, MFT_RECORD **mrec);
extern int ntfs_extent_mft_record_free(ntfs_inode *ni, MFT_RECORD *m);
