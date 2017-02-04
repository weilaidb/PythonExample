#undef FUNC
#undef sum_type
#undef MUL
#undef CLIP
#undef FSUF
FUNC AV_JOIN(n ## _, SAMPLE_SIZE)
#if SAMPLE_SIZE == 32
#   define sum_type  int64_t
MUL MUL64(a, b)
CLIP av_clipl_int32(x)
#   define sum_type  int32_t
MUL ((a) * (b))
CLIP (x)
LPC1
FUNC(int32_t *res,
const int32_t *smp, int len, int order,
const int32_t *coefs, int shift, int big)
FUNC(int32_t *res, const int32_t *smp, int len,
int order, const int32_t *coefs, int shift)
