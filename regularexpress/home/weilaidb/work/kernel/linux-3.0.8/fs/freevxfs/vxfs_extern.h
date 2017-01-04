#define _VXFS_EXTERN_H_
struct kmem_cache;
struct super_block;
struct vxfs_inode_info;
struct inode;
extern daddr_t			vxfs_bmap1(struct inode *, long);
extern int			vxfs_read_fshead(struct super_block *);
extern const struct inode_operations vxfs_immed_symlink_iops;
extern const struct address_space_operations vxfs_immed_aops;
extern struct kmem_cache	*vxfs_inode_cachep;
extern void			vxfs_dumpi(struct vxfs_inode_info *, ino_t);
extern struct inode *		vxfs_get_fake_inode(struct super_block *,
struct vxfs_inode_info *);
extern void			vxfs_put_fake_inode(struct inode *);
extern struct vxfs_inode_info *	vxfs_blkiget(struct super_block *, u_long, ino_t);
extern struct vxfs_inode_info *	vxfs_stiget(struct super_block *, ino_t);
extern struct inode *		vxfs_iget(struct super_block *, ino_t);
extern void			vxfs_evict_inode(struct inode *);
extern const struct inode_operations	vxfs_dir_inode_ops;
extern const struct file_operations	vxfs_dir_operations;
extern int			vxfs_read_olt(struct super_block *, u_long);
extern const struct address_space_operations vxfs_aops;
extern struct page *		vxfs_get_page(struct address_space *, u_long);
extern void			vxfs_put_page(struct page *);
extern struct buffer_head *	vxfs_bread(struct inode *, int);
