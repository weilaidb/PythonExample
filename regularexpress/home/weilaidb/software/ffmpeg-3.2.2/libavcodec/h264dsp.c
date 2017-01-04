#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 9
#undef BIT_DEPTH
#define BIT_DEPTH 10
#undef BIT_DEPTH
#define BIT_DEPTH 12
#undef BIT_DEPTH
#define BIT_DEPTH 14
#undef BIT_DEPTH
#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 16
#undef BIT_DEPTH
av_cold void ff_h264dsp_init(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc)
