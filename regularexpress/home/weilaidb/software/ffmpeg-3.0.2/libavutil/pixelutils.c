#if CONFIG_PIXELUTILS
static av_always_inline int sad_wxh(const uint8_t *src1, ptrdiff_t stride1,
const uint8_t *src2, ptrdiff_t stride2,
int w, int h)
#define DECLARE_BLOCK_FUNCTIONS(size)                                               \
static int block_sad_##size##x##size##_c(const uint8_t *src1, ptrdiff_t stride1,    \
const uint8_t *src2, ptrdiff_t stride2)    \
DECLARE_BLOCK_FUNCTIONS(2)
DECLARE_BLOCK_FUNCTIONS(4)
DECLARE_BLOCK_FUNCTIONS(8)
DECLARE_BLOCK_FUNCTIONS(16)
static const av_pixelutils_sad_fn sad_c[] = ;
av_pixelutils_sad_fn av_pixelutils_get_sad_fn(int w_bits, int h_bits, int aligned, void *log_ctx)
#define W1 320
#define H1 240
#define W2 640
#define H2 480
static int run_single_test(const char *test,
const uint8_t *block1, ptrdiff_t stride1,
const uint8_t *block2, ptrdiff_t stride2,
int align, int n)
static int run_test(const char *test,
const uint8_t *b1, const uint8_t *b2)
int main(void)
