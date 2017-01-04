struct buffer_head *udf_tgetblk(struct super_block *sb, int block)
struct buffer_head *udf_tread(struct super_block *sb, int block)
struct genericFormat *udf_add_extendedattr(struct inode *inode, uint32_t size,
uint32_t type, uint8_t loc)
struct genericFormat *udf_get_extendedattr(struct inode *inode, uint32_t type,
uint8_t subtype)
struct buffer_head *udf_read_tagged(struct super_block *sb, uint32_t block,
uint32_t location, uint16_t *ident)
struct buffer_head *udf_read_ptagged(struct super_block *sb,
struct kernel_lb_addr *loc,
uint32_t offset, uint16_t *ident)
void udf_update_tag(char *data, int length)
void udf_new_tag(char *data, uint16_t ident, uint16_t version, uint16_t snum,
uint32_t loc, int length)
u8 udf_tag_checksum(const struct tag *t)
