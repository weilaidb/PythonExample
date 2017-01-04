int ecryptfs_write_lower(struct inode *ecryptfs_inode, char *data,
loff_t offset, size_t size)
int ecryptfs_write_lower_page_segment(struct inode *ecryptfs_inode,
struct page *page_for_lower,
size_t offset_in_page, size_t size)
int ecryptfs_write(struct inode *ecryptfs_inode, char *data, loff_t offset,
size_t size)
int ecryptfs_read_lower(char *data, loff_t offset, size_t size,
struct inode *ecryptfs_inode)
int ecryptfs_read_lower_page_segment(struct page *page_for_ecryptfs,
pgoff_t page_index,
size_t offset_in_page, size_t size,
struct inode *ecryptfs_inode)
