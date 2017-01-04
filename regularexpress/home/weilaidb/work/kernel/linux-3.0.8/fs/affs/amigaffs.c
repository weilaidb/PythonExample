extern struct timezone sys_tz;
static char ErrorBuffer[256];
int
affs_insert_hash(struct inode *dir, struct buffer_head *bh)
int
affs_remove_hash(struct inode *dir, struct buffer_head *rem_bh)
static void
affs_fix_dcache(struct dentry *dentry, u32 entry_ino)
static int
affs_remove_link(struct dentry *dentry)
static int
affs_empty_dir(struct inode *inode)
int
affs_remove_header(struct dentry *dentry)
u32
affs_checksum_block(struct super_block *sb, struct buffer_head *bh)
void
affs_fix_checksum(struct super_block *sb, struct buffer_head *bh)
void
secs_to_datestamp(time_t secs, struct affs_date *ds)
mode_t
prot_to_mode(u32 prot)
void
mode_to_prot(struct inode *inode)
void
affs_error(struct super_block *sb, const char *function, const char *fmt, ...)
void
affs_warning(struct super_block *sb, const char *function, const char *fmt, ...)
int
affs_check_name(const unsigned char *name, int len)
int
affs_copy_name(unsigned char *bstr, struct dentry *dentry)
