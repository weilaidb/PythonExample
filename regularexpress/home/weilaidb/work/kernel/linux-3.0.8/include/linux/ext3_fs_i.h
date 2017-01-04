#define _LINUX_EXT3_FS_I
typedef int ext3_grpblk_t;
typedef unsigned long ext3_fsblk_t;
#define E3FSBLK "%lu"
struct ext3_reserve_window ;
struct ext3_reserve_window_node ;
struct ext3_block_alloc_info ;
#define rsv_start rsv_window._rsv_start
#define rsv_end rsv_window._rsv_end
struct ext3_inode_info ;
