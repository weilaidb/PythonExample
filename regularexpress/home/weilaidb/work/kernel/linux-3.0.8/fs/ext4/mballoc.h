#define _EXT4_MBALLOC_H
#define AGGRESSIVE_CHECK__
#define DOUBLE_CHECK__
extern u8 mb_enable_debug;
#define mb_debug(n, fmt, a...)	                                        \
do  while (0)
#define mb_debug(n, fmt, a...)
#define EXT4_MB_HISTORY_ALLOC		1
#define EXT4_MB_HISTORY_PREALLOC	2
#define MB_DEFAULT_MAX_TO_SCAN		200
#define MB_DEFAULT_MIN_TO_SCAN		10
#define MB_DEFAULT_MAX_GROUPS_TO_SCAN	5
#define MB_DEFAULT_STATS		0
#define MB_DEFAULT_STREAM_THRESHOLD	16
#define MB_DEFAULT_ORDER2_REQS		2
#define MB_DEFAULT_GROUP_PREALLOC	512
struct ext4_free_data ;
struct ext4_prealloc_space ;
enum ;
struct ext4_free_extent ;
#define PREALLOC_TB_SIZE 10
struct ext4_locality_group ;
struct ext4_allocation_context ;
#define AC_STATUS_CONTINUE	1
#define AC_STATUS_FOUND		2
#define AC_STATUS_BREAK		3
struct ext4_buddy ;
#define EXT4_MB_BITMAP(e4b)	((e4b)->bd_bitmap)
#define EXT4_MB_BUDDY(e4b)	((e4b)->bd_buddy)
static inline ext4_fsblk_t ext4_grp_offs_to_block(struct super_block *sb,
struct ext4_free_extent *fex)
