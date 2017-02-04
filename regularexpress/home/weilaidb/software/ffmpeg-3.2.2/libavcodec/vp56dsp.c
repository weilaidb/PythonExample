vp5_adjust
vp6_adjust
VP56_EDGE_FILTER                   \
static void pfx##_edge_filter_##suf(uint8_t *yuv, int stride, int t)    \
VP56_EDGE_FILTER(vp5, hor, 1, stride)
VP56_EDGE_FILTER(vp5, ver, stride, 1)
VP56_EDGE_FILTER(vp6, hor, 1, stride)
VP56_EDGE_FILTER(vp6, ver, stride, 1)
ff_vp56dsp_init
