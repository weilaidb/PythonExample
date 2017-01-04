static atomic_t permission_epoch = ATOMIC_INIT(0);
void coda_cache_enter(struct inode *inode, int mask)
void coda_cache_clear_inode(struct inode *inode)
void coda_cache_clear_all(struct super_block *sb)
int coda_cache_check(struct inode *inode, int mask)
static void coda_flag_children(struct dentry *parent, int flag)
void coda_flag_inode_children(struct inode *inode, int flag)
