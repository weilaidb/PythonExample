static const uint8_t expand5[32] = ;
static const uint8_t expand6[64] = ;
static const uint8_t match5[256][2] = ;
static const uint8_t match6[256][2] = ;
mul8 (((a) * (b) + 128 + (((a) * (b) + 128) >> 8)) >> 8)
rgb2rgb565 \
((mul8(r, 31) << 11) | (mul8(g, 63) << 5) | (mul8(b, 31) << 0))
lerp13 ((2 * (a) + (b)) / 3)
lerp13rgb
rgb5652rgb
match_colors
{
uint32_t mask = 0;
int dirr, dirg, dirb;
int dots[16];
int stops[4];
int x, y, k = 0;
int c0_point, half_point, c3_point;
uint8_t color[16];
static const int indexMap[8] = ;
rgb5652rgb(color + 0, c0);
rgb5652rgb(color + 4, c1);
lerp13rgb(color + 8, color + 0, color + 4);
lerp13rgb(color + 12, color + 4, color + 0);
dirr = color[0 * 4 + 0] - color[1 * 4 + 0];
dirg = color[0 * 4 + 1] - color[1 * 4 + 1];
dirb = color[0 * 4 + 2] - color[1 * 4 + 2];
for (y = 0; y < 4; y++)
optimize_colors
refine_colors
constant_color
compress_color
compress_alpha
rgba2ycocg
dxt1_block
dxt5_block
dxt5ys_block
ff_texturedspenc_init
