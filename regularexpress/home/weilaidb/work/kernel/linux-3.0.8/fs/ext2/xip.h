extern void ext2_xip_verify_sb (struct super_block *);
extern int ext2_clear_xip_target (struct inode *, sector_t);
static inline int ext2_use_xip (struct super_block *sb)
int ext2_get_xip_mem(struct address_space *, pgoff_t, int,
void **, unsigned long *);
#define mapping_is_xip(map) unlikely(map->a_ops->get_xip_mem)
#define mapping_is_xip(map)			0
#define ext2_xip_verify_sb(sb)			do  while (0)
#define ext2_use_xip(sb)			0
#define ext2_clear_xip_target(inode, chain)	0
#define ext2_get_xip_mem			NULL
