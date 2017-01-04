struct ufs_buffer_head * _ubh_bread_ (struct ufs_sb_private_info * uspi,
struct super_block *sb, u64 fragment, u64 size)
struct ufs_buffer_head * ubh_bread_uspi (struct ufs_sb_private_info * uspi,
struct super_block *sb, u64 fragment, u64 size)
void ubh_brelse (struct ufs_buffer_head * ubh)
void ubh_brelse_uspi (struct ufs_sb_private_info * uspi)
void ubh_mark_buffer_dirty (struct ufs_buffer_head * ubh)
void ubh_mark_buffer_uptodate (struct ufs_buffer_head * ubh, int flag)
void ubh_sync_block(struct ufs_buffer_head *ubh)
void ubh_bforget (struct ufs_buffer_head * ubh)
int ubh_buffer_dirty (struct ufs_buffer_head * ubh)
void _ubh_ubhcpymem_(struct ufs_sb_private_info * uspi,
unsigned char * mem, struct ufs_buffer_head * ubh, unsigned size)
void _ubh_memcpyubh_(struct ufs_sb_private_info * uspi,
struct ufs_buffer_head * ubh, unsigned char * mem, unsigned size)
dev_t
ufs_get_inode_dev(struct super_block *sb, struct ufs_inode_info *ufsi)
void
ufs_set_inode_dev(struct super_block *sb, struct ufs_inode_info *ufsi, dev_t dev)
struct page *ufs_get_locked_page(struct address_space *mapping,
pgoff_t index)
