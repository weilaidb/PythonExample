#define __BTRFS_I__
struct btrfs_inode ;
extern unsigned char btrfs_filetype_table[];
static inline struct btrfs_inode *BTRFS_I(struct inode *inode)
static inline u64 btrfs_ino(struct inode *inode)
static inline void btrfs_i_size_write(struct inode *inode, u64 size)
