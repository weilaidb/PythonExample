#define pixeltmp int16_t
#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 9
#undef BIT_DEPTH
#define BIT_DEPTH 10
#undef BIT_DEPTH
#undef pixeltmp
#define pixeltmp int32_t
#define BIT_DEPTH 12
#undef BIT_DEPTH
#define BIT_DEPTH 14
#undef BIT_DEPTH
av_cold void ff_h264qpel_init(H264QpelContext *c, int bit_depth)
