static void put_pixels_clamped_msa(const int16_t *block, uint8_t *pixels,
int32_t stride)
static void put_signed_pixels_clamped_msa(const int16_t *block, uint8_t *pixels,
int32_t stride)
static void add_pixels_clamped_msa(const int16_t *block, uint8_t *pixels,
int32_t stride)
void ff_put_pixels_clamped_msa(const int16_t *block,
uint8_t *av_restrict pixels,
ptrdiff_t line_size)
void ff_put_signed_pixels_clamped_msa(const int16_t *block,
uint8_t *av_restrict pixels,
ptrdiff_t line_size)
void ff_add_pixels_clamped_msa(const int16_t *block,
uint8_t *av_restrict pixels,
ptrdiff_t line_size)
