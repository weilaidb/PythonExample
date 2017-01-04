static inline sysv_ino_t *
sv_sb_fic_inode(struct super_block * sb, unsigned int i)
struct sysv_inode *
sysv_raw_inode(struct super_block *sb, unsigned ino, struct buffer_head **bh)
static int refill_free_cache(struct super_block *sb)
void sysv_free_inode(struct inode * inode)
struct inode * sysv_new_inode(const struct inode * dir, mode_t mode)
unsigned long sysv_count_free_inodes(struct super_block * sb)
