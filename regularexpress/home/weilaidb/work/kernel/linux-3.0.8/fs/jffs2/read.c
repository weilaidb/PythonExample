int jffs2_read_dnode(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
struct jffs2_full_dnode *fd, unsigned char *buf,
int ofs, int len)
int jffs2_read_inode_range(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
unsigned char *buf, uint32_t offset, uint32_t len)
