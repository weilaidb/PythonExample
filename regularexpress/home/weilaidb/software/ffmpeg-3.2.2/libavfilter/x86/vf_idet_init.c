#if HAVE_YASM
FUNC_MAIN_DECL                                        \
int ff_idet_filter_line_##KIND(const uint8_t *a, const uint8_t *b,        \
const uint8_t *c, int w);                  \
static int idet_filter_line_##KIND(const uint8_t *a, const uint8_t *b,    \
const uint8_t *c, int w)
FUNC_MAIN_DECL_16bit                                       \
int ff_idet_filter_line_16bit_##KIND(const uint16_t *a, const uint16_t *b,     \
const uint16_t *c, int w);                \
static int idet_filter_line_16bit_##KIND(const uint16_t *a, const uint16_t *b, \
const uint16_t *c, int w)
FUNC_MAIN_DECL(sse2, 16)
FUNC_MAIN_DECL_16bit(sse2, 8)
FUNC_MAIN_DECL
FUNC_MAIN_DECL(mmxext, 8)
FUNC_MAIN_DECL_16bit(mmx, 4)
ff_idet_init_x86
