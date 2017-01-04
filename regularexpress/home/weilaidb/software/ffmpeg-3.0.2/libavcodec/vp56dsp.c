static int vp5_adjust(int v, int t)
static int vp6_adjust(int v, int t)
#define VP56_EDGE_FILTER(pfx, suf, pix_inc, line_inc)                   \
static void pfx##_edge_filter_##suf(uint8_t *yuv, int stride, int t)    \
VP56_EDGE_FILTER(vp5, hor, 1, stride)
VP56_EDGE_FILTER(vp5, ver, stride, 1)
VP56_EDGE_FILTER(vp6, hor, 1, stride)
VP56_EDGE_FILTER(vp6, ver, stride, 1)
av_cold void ff_vp56dsp_init(VP56DSPContext *s, enum AVCodecID codec)
