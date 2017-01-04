#define VXFS_BLOCK_PER_PAGE(sbp)  ((PAGE_CACHE_SIZE / (sbp)->s_blocksize))
static struct dentry *	vxfs_lookup(struct inode *, struct dentry *, struct nameidata *);
static int		vxfs_readdir(struct file *, void *, filldir_t);
const struct inode_operations vxfs_dir_inode_ops = ;
const struct file_operations vxfs_dir_operations = ;
static inline u_long
dir_pages(struct inode *inode)
static inline u_long
dir_blocks(struct inode *ip)
static inline int
vxfs_match(int len, const char * const name, struct vxfs_direct *de)
static inline struct vxfs_direct *
vxfs_next_entry(struct vxfs_direct *de)
static struct vxfs_direct *
vxfs_find_entry(struct inode *ip, struct dentry *dp, struct page **ppp)
static ino_t
vxfs_inode_by_name(struct inode *dip, struct dentry *dp)
static struct dentry *
vxfs_lookup(struct inode *dip, struct dentry *dp, struct nameidata *nd)
static int
vxfs_readdir(struct file *fp, void *retp, filldir_t filler)
