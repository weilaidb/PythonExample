#define SS_W 0
#define SS_H 0
#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 10
#undef BIT_DEPTH
#define BIT_DEPTH 12
#undef SS_W
#undef SS_H
#define SS_W 1
#define SS_H 0
#undef BIT_DEPTH
#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 10
#undef BIT_DEPTH
#define BIT_DEPTH 12
#undef SS_W
#undef SS_H
#define SS_W 1
#define SS_H 1
#undef BIT_DEPTH
#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 10
#undef BIT_DEPTH
#define BIT_DEPTH 12
static void multiply3x3_c(int16_t *buf[3], ptrdiff_t stride,
int w, int h, const int16_t m[3][3][8])
void ff_colorspacedsp_init(ColorSpaceDSPContext *dsp)
