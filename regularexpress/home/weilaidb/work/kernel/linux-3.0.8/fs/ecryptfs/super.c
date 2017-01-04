struct kmem_cache *ecryptfs_inode_info_cache;
static struct inode *ecryptfs_alloc_inode(struct super_block *sb)
static void ecryptfs_i_callback(struct rcu_head *head)
static void ecryptfs_destroy_inode(struct inode *inode)
static int ecryptfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static void ecryptfs_evict_inode(struct inode *inode)
static int ecryptfs_show_options(struct seq_file *m, struct vfsmount *mnt)
const struct super_operations ecryptfs_sops = ;
