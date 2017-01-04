struct fileIdentDesc *udf_fileident_read(struct inode *dir, loff_t *nf_pos,
struct udf_fileident_bh *fibh,
struct fileIdentDesc *cfi,
struct extent_position *epos,
struct kernel_lb_addr *eloc, uint32_t *elen,
sector_t *offset)
struct fileIdentDesc *udf_get_fileident(void *buffer, int bufsize, int *offset)
struct short_ad *udf_get_fileshortad(uint8_t *ptr, int maxoffset, uint32_t *offset,
int inc)
struct long_ad *udf_get_filelongad(uint8_t *ptr, int maxoffset, uint32_t *offset, int inc)
