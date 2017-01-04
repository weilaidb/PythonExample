#undef FUNC
#undef sum_type
#undef MUL
#undef CLIP
#undef FSUF
#define FUNC(n) AV_JOIN(n ## _, SAMPLE_SIZE)
#if SAMPLE_SIZE == 32
#   define sum_type  int64_t
#   define MUL(a, b) MUL64(a, b)
#   define CLIP(x) av_clipl_int32(x)
#   define sum_type  int32_t
#   define MUL(a, b) ((a) * (b))
#   define CLIP(x) (x)
#define LPC1(x)
static av_always_inline void FUNC(lpc_encode_unrolled)(int32_t *res,
const int32_t *smp, int len, int order,
const int32_t *coefs, int shift, int big)
static void FUNC(flac_lpc_encode_c)(int32_t *res, const int32_t *smp, int len,
int order, const int32_t *coefs, int shift)
