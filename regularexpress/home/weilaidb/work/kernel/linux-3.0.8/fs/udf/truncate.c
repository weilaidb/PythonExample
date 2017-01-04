static void extent_trunc(struct inode *inode, struct extent_position *epos,
struct kernel_lb_addr *eloc, int8_t etype, uint32_t elen,
uint32_t nelen)
void udf_truncate_tail_extent(struct inode *inode)
void udf_discard_prealloc(struct inode *inode)
static void udf_update_alloc_ext_desc(struct inode *inode,
struct extent_position *epos,
u32 lenalloc)
void udf_truncate_extents(struct inode *inode)
