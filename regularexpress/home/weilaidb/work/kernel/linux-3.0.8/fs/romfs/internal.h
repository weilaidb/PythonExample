struct romfs_inode_info ;
static inline size_t romfs_maxsize(struct super_block *sb)
static inline struct romfs_inode_info *ROMFS_I(struct inode *inode)
#if !defined(CONFIG_MMU) && defined(CONFIG_ROMFS_ON_MTD)
extern const struct file_operations romfs_ro_fops;
#define romfs_ro_fops	generic_ro_fops
extern int romfs_dev_read(struct super_block *sb, unsigned long pos,
void *buf, size_t buflen);
extern ssize_t romfs_dev_strnlen(struct super_block *sb,
unsigned long pos, size_t maxlen);
extern int romfs_dev_strcmp(struct super_block *sb, unsigned long pos,
const char *str, size_t size);
