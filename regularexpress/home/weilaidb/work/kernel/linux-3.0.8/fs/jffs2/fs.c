static int jffs2_flash_setup(struct jffs2_sb_info *c);
int jffs2_do_setattr (struct inode *inode, struct iattr *iattr)
int jffs2_setattr(struct dentry *dentry, struct iattr *iattr)
int jffs2_statfs(struct dentry *dentry, struct kstatfs *buf)
void jffs2_evict_inode (struct inode *inode)
struct inode *jffs2_iget(struct super_block *sb, unsigned long ino)
void jffs2_dirty_inode(struct inode *inode, int flags)
int jffs2_remount_fs (struct super_block *sb, int *flags, char *data)
struct inode *jffs2_new_inode (struct inode *dir_i, int mode, struct jffs2_raw_inode *ri)
static int calculate_inocache_hashsize(uint32_t flash_size)
int jffs2_do_fill_super(struct super_block *sb, void *data, int silent)
void jffs2_gc_release_inode(struct jffs2_sb_info *c,
struct jffs2_inode_info *f)
struct jffs2_inode_info *jffs2_gc_fetch_inode(struct jffs2_sb_info *c,
int inum, int unlinked)
unsigned char *jffs2_gc_fetch_page(struct jffs2_sb_info *c,
struct jffs2_inode_info *f,
unsigned long offset,
unsigned long *priv)
void jffs2_gc_release_page(struct jffs2_sb_info *c,
unsigned char *ptr,
unsigned long *priv)
static int jffs2_flash_setup(struct jffs2_sb_info *c)
void jffs2_flash_cleanup(struct jffs2_sb_info *c)
