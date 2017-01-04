static inline void
vxfs_get_fshead(struct vxfs_oltfshead *fshp, struct vxfs_sb_info *infp)
static inline void
vxfs_get_ilist(struct vxfs_oltilist *ilistp, struct vxfs_sb_info *infp)
static inline u_long
vxfs_oblock(struct super_block *sbp, daddr_t block, u_long bsize)
int
vxfs_read_olt(struct super_block *sbp, u_long bsize)
