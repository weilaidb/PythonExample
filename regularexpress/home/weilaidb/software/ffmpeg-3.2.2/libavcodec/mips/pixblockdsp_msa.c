static void diff_pixels_msa(int16_t *block, const uint8_t *src1,
const uint8_t *src2, int32_t stride)
static void copy_8bit_to_16bit_width8_msa(const uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void copy_16multx8mult_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t width)
static void copy_width16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
void ff_get_pixels_16_msa(int16_t *av_restrict dest, const uint8_t *src,
ptrdiff_t stride)
void ff_get_pixels_8_msa(int16_t *av_restrict dest, const uint8_t *src,
ptrdiff_t stride)
void ff_diff_pixels_msa(int16_t *av_restrict block, const uint8_t *src1,
const uint8_t *src2, int stride)
