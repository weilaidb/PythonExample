int __ext4_journal_get_write_access(const char *where, unsigned int line,
handle_t *handle, struct buffer_head *bh)
int __ext4_forget(const char *where, unsigned int line, handle_t *handle,
int is_metadata, struct inode *inode,
struct buffer_head *bh, ext4_fsblk_t blocknr)
int __ext4_journal_get_create_access(const char *where, unsigned int line,
handle_t *handle, struct buffer_head *bh)
int __ext4_handle_dirty_metadata(const char *where, unsigned int line,
handle_t *handle, struct inode *inode,
struct buffer_head *bh)
int __ext4_handle_dirty_super(const char *where, unsigned int line,
handle_t *handle, struct super_block *sb)
