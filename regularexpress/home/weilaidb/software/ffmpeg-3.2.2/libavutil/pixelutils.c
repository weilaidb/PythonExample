#if CONFIG_PIXELUTILS
sad_wxh
DECLARE_BLOCK_FUNCTIONS                                               \
static int block_sad_##size##x##size##_c(const uint8_t *src1, ptrdiff_t stride1,    \
const uint8_t *src2, ptrdiff_t stride2)    \
DECLARE_BLOCK_FUNCTIONS(2)
DECLARE_BLOCK_FUNCTIONS(4)
DECLARE_BLOCK_FUNCTIONS(8)
DECLARE_BLOCK_FUNCTIONS(16)
static const av_pixelutils_sad_fn sad_c[] = ;
av_pixelutils_get_sad_fn
