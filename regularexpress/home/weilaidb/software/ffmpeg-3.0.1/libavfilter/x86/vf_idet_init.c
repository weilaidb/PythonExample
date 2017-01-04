#if HAVE_YASM
#define FUNC_MAIN_DECL(KIND, SPAN)                                        \
int ff_idet_filter_line_##KIND(const uint8_t *a, const uint8_t *b,        \
const uint8_t *c, int w);                  \
static int idet_filter_line_##KIND(const uint8_t *a, const uint8_t *b,    \
const uint8_t *c, int w)
#define FUNC_MAIN_DECL_16bit(KIND, SPAN)                                       \
int ff_idet_filter_line_16bit_##KIND(const uint16_t *a, const uint16_t *b,     \
const uint16_t *c, int w);                \
static int idet_filter_line_16bit_##KIND(const uint16_t *a, const uint16_t *b, \
const uint16_t *c, int w)
FUNC_MAIN_DECL(sse2, 16)
FUNC_MAIN_DECL_16bit(sse2, 8)
#if ARCH_X86_32
FUNC_MAIN_DECL(mmx, 8)
FUNC_MAIN_DECL(mmxext, 8)
FUNC_MAIN_DECL_16bit(mmx, 4)
av_cold void ff_idet_init_x86(IDETContext *idet, int for_16b)
