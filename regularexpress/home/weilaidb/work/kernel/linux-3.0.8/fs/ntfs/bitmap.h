#define _LINUX_NTFS_BITMAP_H
extern int __ntfs_bitmap_set_bits_in_run(struct inode *vi, const s64 start_bit,
const s64 count, const u8 value, const bool is_rollback);
static inline int ntfs_bitmap_set_bits_in_run(struct inode *vi,
const s64 start_bit, const s64 count, const u8 value)
static inline int ntfs_bitmap_set_run(struct inode *vi, const s64 start_bit,
const s64 count)
static inline int ntfs_bitmap_clear_run(struct inode *vi, const s64 start_bit,
const s64 count)
static inline int ntfs_bitmap_set_bit(struct inode *vi, const s64 bit)
static inline int ntfs_bitmap_clear_bit(struct inode *vi, const s64 bit)
