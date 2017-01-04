static void *	vxfs_immed_follow_link(struct dentry *, struct nameidata *);
static int	vxfs_immed_readpage(struct file *, struct page *);
const struct inode_operations vxfs_immed_symlink_iops = ;
const struct address_space_operations vxfs_immed_aops = ;
static void *
vxfs_immed_follow_link(struct dentry *dp, struct nameidata *np)
static int
vxfs_immed_readpage(struct file *fp, struct page *pp)
