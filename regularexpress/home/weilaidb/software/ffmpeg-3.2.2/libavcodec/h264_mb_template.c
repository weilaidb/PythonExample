#undef FUNC
#undef PIXEL_SHIFT
#if SIMPLE
FUNC AV_JOIN(n ## _simple_, BITS)
#   define PIXEL_SHIFT (BITS >> 4)
FUNC n ## _complex
#   define PIXEL_SHIFT h->pixel_shift
#undef  CHROMA_IDC
#define CHROMA_IDC 1
#undef  CHROMA_IDC
#define CHROMA_IDC 2
FUNC(const H264Context *h, H264SliceContext *sl)
#if !SIMPLE || BITS == 8
#undef  CHROMA_IDC
#define CHROMA_IDC 3
FUNC(const H264Context *h, H264SliceContext *sl)
