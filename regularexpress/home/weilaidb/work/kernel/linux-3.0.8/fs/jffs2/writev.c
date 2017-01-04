static inline int mtd_fake_writev(struct mtd_info *mtd, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen)
int jffs2_flash_direct_writev(struct jffs2_sb_info *c, const struct kvec *vecs,
unsigned long count, loff_t to, size_t *retlen)
int jffs2_flash_direct_write(struct jffs2_sb_info *c, loff_t ofs, size_t len,
size_t *retlen, const u_char *buf)
