static bool sg_dwiter_next(struct sg_mapping_iter *miter)
static bool sg_dwiter_is_at_end(struct sg_mapping_iter *miter)
static uint32_t sg_dwiter_read_buffer(struct sg_mapping_iter *miter)
static inline bool needs_unaligned_copy(const void *ptr)
static bool sg_dwiter_get_next_block(struct sg_mapping_iter *miter, uint32_t **ptr)
uint32_t cb710_sg_dwiter_read_next_block(struct sg_mapping_iter *miter)
EXPORT_SYMBOL_GPL(cb710_sg_dwiter_read_next_block);
static void sg_dwiter_write_slow(struct sg_mapping_iter *miter, uint32_t data)
void cb710_sg_dwiter_write_next_block(struct sg_mapping_iter *miter, uint32_t data)
EXPORT_SYMBOL_GPL(cb710_sg_dwiter_write_next_block);
