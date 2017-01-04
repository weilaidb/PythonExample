struct kmem_cache		*vxfs_inode_cachep;
void
vxfs_dumpi(struct vxfs_inode_info *vip, ino_t ino)
struct vxfs_inode_info *
vxfs_blkiget(struct super_block *sbp, u_long extent, ino_t ino)
static struct vxfs_inode_info *
__vxfs_iget(ino_t ino, struct inode *ilistp)
struct vxfs_inode_info *
vxfs_stiget(struct super_block *sbp, ino_t ino)
static __inline__ mode_t
vxfs_transmod(struct vxfs_inode_info *vip)
static void
vxfs_iinit(struct inode *ip, struct vxfs_inode_info *vip)
struct inode *
vxfs_get_fake_inode(struct super_block *sbp, struct vxfs_inode_info *vip)
void
vxfs_put_fake_inode(struct inode *ip)
struct inode *
vxfs_iget(struct super_block *sbp, ino_t ino)
static void vxfs_i_callback(struct rcu_head *head)
void
vxfs_evict_inode(struct inode *ip)
