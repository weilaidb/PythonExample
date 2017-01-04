int direct2indirect(struct reiserfs_transaction_handle *th, struct inode *inode,
struct treepath *path, struct buffer_head *unbh,
loff_t tail_offset)
void reiserfs_unmap_buffer(struct buffer_head *bh)
int indirect2direct(struct reiserfs_transaction_handle *th,
struct inode *inode, struct page *page,
struct treepath *path,
const struct cpu_key *item_key,
loff_t n_new_file_size,
char *mode)
