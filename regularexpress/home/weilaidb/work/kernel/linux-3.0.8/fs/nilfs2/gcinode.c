int nilfs_gccache_submit_read_data(struct inode *inode, sector_t blkoff,
sector_t pbn, __u64 vbn,
struct buffer_head **out_bh)
int nilfs_gccache_submit_read_node(struct inode *inode, sector_t pbn,
__u64 vbn, struct buffer_head **out_bh)
int nilfs_gccache_wait_and_mark_dirty(struct buffer_head *bh)
int nilfs_init_gcinode(struct inode *inode)
void nilfs_remove_all_gcinodes(struct the_nilfs *nilfs)
