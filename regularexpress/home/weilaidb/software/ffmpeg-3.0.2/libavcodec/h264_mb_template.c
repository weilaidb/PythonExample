#undef FUNC
#undef PIXEL_SHIFT
#if SIMPLE
#   define FUNC(n) AV_JOIN(n ## _simple_, BITS)
#   define PIXEL_SHIFT (BITS >> 4)
#   define FUNC(n) n ## _complex
#   define PIXEL_SHIFT h->pixel_shift
#undef  CHROMA_IDC
#define CHROMA_IDC 1
#undef  CHROMA_IDC
#define CHROMA_IDC 2
static av_noinline void FUNC(hl_decode_mb)(const H264Context *h, H264SliceContext *sl)
#if !SIMPLE || BITS == 8
#undef  CHROMA_IDC
#define CHROMA_IDC 3
static av_noinline void FUNC(hl_decode_mb_444)(const H264Context *h, H264SliceContext *sl)
