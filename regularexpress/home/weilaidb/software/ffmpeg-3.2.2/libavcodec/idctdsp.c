av_cold void ff_init_scantable(uint8_t *permutation, ScanTable *st,
const uint8_t *src_scantable)
av_cold void ff_init_scantable_permutation(uint8_t *idct_permutation,
enum idct_permutation_type perm_type)
void (*ff_put_pixels_clamped)(const int16_t *block, uint8_t *pixels, ptrdiff_t line_size);
void (*ff_add_pixels_clamped)(const int16_t *block, uint8_t *pixels, ptrdiff_t line_size);
static void put_pixels_clamped_c(const int16_t *block, uint8_t *av_restrict pixels,
ptrdiff_t line_size)
static void put_pixels_clamped4_c(const int16_t *block, uint8_t *av_restrict pixels,
int line_size)
static void put_pixels_clamped2_c(const int16_t *block, uint8_t *av_restrict pixels,
int line_size)
static void put_signed_pixels_clamped_c(const int16_t *block,
uint8_t *av_restrict pixels,
ptrdiff_t line_size)
static void add_pixels_clamped_c(const int16_t *block, uint8_t *av_restrict pixels,
ptrdiff_t line_size)
static void add_pixels_clamped4_c(const int16_t *block, uint8_t *av_restrict pixels,
int line_size)
static void add_pixels_clamped2_c(const int16_t *block, uint8_t *av_restrict pixels,
int line_size)
static void ff_jref_idct4_put(uint8_t *dest, int line_size, int16_t *block)
static void ff_jref_idct4_add(uint8_t *dest, int line_size, int16_t *block)
static void ff_jref_idct2_put(uint8_t *dest, int line_size, int16_t *block)
static void ff_jref_idct2_add(uint8_t *dest, int line_size, int16_t *block)
static void ff_jref_idct1_put(uint8_t *dest, int line_size, int16_t *block)
static void ff_jref_idct1_add(uint8_t *dest, int line_size, int16_t *block)
av_cold void ff_idctdsp_init(IDCTDSPContext *c, AVCodecContext *avctx)
