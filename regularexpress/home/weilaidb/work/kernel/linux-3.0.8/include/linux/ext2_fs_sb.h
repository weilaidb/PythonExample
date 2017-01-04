#define _LINUX_EXT2_FS_SB
typedef int ext2_grpblk_t;
typedef unsigned long ext2_fsblk_t;
#define E2FSBLK "%lu"
struct ext2_reserve_window ;
struct ext2_reserve_window_node ;
struct ext2_block_alloc_info ;
#define rsv_start rsv_window._rsv_start
#define rsv_end rsv_window._rsv_end
struct ext2_sb_info ;
static inline spinlock_t *
sb_bgl_lock(struct ext2_sb_info *sbi, unsigned int block_group)
