static inline MFT_RECORD *map_mft_record_page(ntfs_inode *ni)
MFT_RECORD *map_mft_record(ntfs_inode *ni)
static inline void unmap_mft_record_page(ntfs_inode *ni)
void unmap_mft_record(ntfs_inode *ni)
MFT_RECORD *map_extent_mft_record(ntfs_inode *base_ni, MFT_REF mref,
ntfs_inode **ntfs_ino)
void __mark_mft_record_dirty(ntfs_inode *ni)
static const char *ntfs_please_email = "Please email "
"linux-ntfs-dev@lists.sourceforge.net and say that you saw "
"this message.  Thank you.";
static int ntfs_sync_mft_mirror_umount(ntfs_volume *vol,
const unsigned long mft_no, MFT_RECORD *m)
int ntfs_sync_mft_mirror(ntfs_volume *vol, const unsigned long mft_no,
MFT_RECORD *m, int sync)
int write_mft_record_nolock(ntfs_inode *ni, MFT_RECORD *m, int sync)
bool ntfs_may_write_mft_record(ntfs_volume *vol, const unsigned long mft_no,
const MFT_RECORD *m, ntfs_inode **locked_ni)
static const char *es = "  Leaving inconsistent metadata.  Unmount and run "
"chkdsk.";
static int ntfs_mft_bitmap_find_and_alloc_free_rec_nolock(ntfs_volume *vol,
ntfs_inode *base_ni)
static int ntfs_mft_bitmap_extend_allocation_nolock(ntfs_volume *vol)
static int ntfs_mft_bitmap_extend_initialized_nolock(ntfs_volume *vol)
static int ntfs_mft_data_extend_allocation_nolock(ntfs_volume *vol)
static int ntfs_mft_record_layout(const ntfs_volume *vol, const s64 mft_no,
MFT_RECORD *m)
static int ntfs_mft_record_format(const ntfs_volume *vol, const s64 mft_no)
ntfs_inode *ntfs_mft_record_alloc(ntfs_volume *vol, const int mode,
ntfs_inode *base_ni, MFT_RECORD **mrec)
int ntfs_extent_mft_record_free(ntfs_inode *ni, MFT_RECORD *m)
