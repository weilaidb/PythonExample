static int chkSuper(struct super_block *);
static int logMOUNT(struct super_block *sb);
int jfs_mount(struct super_block *sb)
int jfs_mount_rw(struct super_block *sb, int remount)
static int chkSuper(struct super_block *sb)
int updateSuper(struct super_block *sb, uint state)
int readSuper(struct super_block *sb, struct buffer_head **bpp)
static int logMOUNT(struct super_block *sb)
