#define _LINUX_EXT3_FS_SB
struct ext3_sb_info ;
static inline spinlock_t *
sb_bgl_lock(struct ext3_sb_info *sbi, unsigned int block_group)
