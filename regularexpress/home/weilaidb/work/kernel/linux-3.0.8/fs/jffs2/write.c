int jffs2_do_new_inode(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
uint32_t mode, struct jffs2_raw_inode *ri)
struct jffs2_full_dnode *jffs2_write_dnode(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
struct jffs2_raw_inode *ri, const unsigned char *data,
uint32_t datalen, int alloc_mode)
struct jffs2_full_dirent *jffs2_write_dirent(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
struct jffs2_raw_dirent *rd, const unsigned char *name,
uint32_t namelen, int alloc_mode)
int jffs2_write_inode_range(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
struct jffs2_raw_inode *ri, unsigned char *buf,
uint32_t offset, uint32_t writelen, uint32_t *retlen)
int jffs2_do_create(struct jffs2_sb_info *c, struct jffs2_inode_info *dir_f,
struct jffs2_inode_info *f, struct jffs2_raw_inode *ri,
const struct qstr *qstr)
int jffs2_do_unlink(struct jffs2_sb_info *c, struct jffs2_inode_info *dir_f,
const char *name, int namelen, struct jffs2_inode_info *dead_f,
uint32_t time)
int jffs2_do_link (struct jffs2_sb_info *c, struct jffs2_inode_info *dir_f, uint32_t ino, uint8_t type, const char *name, int namelen, uint32_t time)
