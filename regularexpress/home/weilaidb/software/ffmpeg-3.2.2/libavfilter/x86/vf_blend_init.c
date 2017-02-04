BLEND_FUNC \
void ff_blend_##name##_##opt(const uint8_t *top, ptrdiff_t top_linesize,       \
const uint8_t *bottom, ptrdiff_t bottom_linesize, \
uint8_t *dst, ptrdiff_t dst_linesize,             \
ptrdiff_t width, ptrdiff_t height,                \
struct FilterParams *param, double *values, int starty);
BLEND_FUNC(addition, sse2)
BLEND_FUNC(addition128, sse2)
BLEND_FUNC(average, sse2)
BLEND_FUNC(and, sse2)
BLEND_FUNC(darken, sse2)
BLEND_FUNC(difference128, sse2)
BLEND_FUNC(multiply, sse2)
BLEND_FUNC(screen, sse2)
BLEND_FUNC(hardmix, sse2)
BLEND_FUNC(divide, sse2)
BLEND_FUNC(lighten, sse2)
BLEND_FUNC(or, sse2)
BLEND_FUNC(phoenix, sse2)
BLEND_FUNC(subtract, sse2)
BLEND_FUNC(xor, sse2)
BLEND_FUNC(difference, sse2)
BLEND_FUNC(difference, ssse3)
BLEND_FUNC(negation, sse2)
BLEND_FUNC(negation, ssse3)
ff_blend_init_x86
