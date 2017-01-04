static void simple_idct_msa(int16_t *block)
static void simple_idct_put_msa(uint8_t *dst, int32_t dst_stride,
int16_t *block)
static void simple_idct_add_msa(uint8_t *dst, int32_t dst_stride,
int16_t *block)
void ff_simple_idct_msa(int16_t *block)
void ff_simple_idct_put_msa(uint8_t *dst, int32_t dst_stride, int16_t *block)
void ff_simple_idct_add_msa(uint8_t *dst, int32_t dst_stride, int16_t *block)
