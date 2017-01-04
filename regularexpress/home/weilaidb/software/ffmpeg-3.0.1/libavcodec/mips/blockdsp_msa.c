static void copy_8bit_value_width8_msa(uint8_t *src, uint8_t val,
int32_t src_stride, int32_t height)
static void copy_8bit_value_width16_msa(uint8_t *src, uint8_t val,
int32_t src_stride, int32_t height)
static void memset_zero_16width_msa(uint8_t *src, int32_t stride,
int32_t height)
void ff_fill_block16_msa(uint8_t *src, uint8_t val, int stride, int height)
void ff_fill_block8_msa(uint8_t *src, uint8_t val, int stride, int height)
void ff_clear_block_msa(int16_t *block)
void ff_clear_blocks_msa(int16_t *block)
