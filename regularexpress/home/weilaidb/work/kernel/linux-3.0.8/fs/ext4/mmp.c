static int write_mmp_block(struct buffer_head *bh)
static int read_mmp_block(struct super_block *sb, struct buffer_head **bh,
ext4_fsblk_t mmp_block)
void __dump_mmp_msg(struct super_block *sb, struct mmp_struct *mmp,
const char *function, unsigned int line, const char *msg)
static int kmmpd(void *data)
static unsigned int mmp_new_seq(void)
int ext4_multi_mount_protect(struct super_block *sb,
ext4_fsblk_t mmp_block)
