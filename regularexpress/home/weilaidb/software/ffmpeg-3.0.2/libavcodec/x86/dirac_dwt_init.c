#define COMPOSE_VERTICAL(ext, align) \
void ff_vertical_compose53iL0##ext(int16_t *b0, int16_t *b1, int16_t *b2, int width); \
void ff_vertical_compose_dirac53iH0##ext(int16_t *b0, int16_t *b1, int16_t *b2, int width); \
void ff_vertical_compose_dd137iL0##ext(int16_t *b0, int16_t *b1, int16_t *b2, int16_t *b3, int16_t *b4, int width); \
void ff_vertical_compose_dd97iH0##ext(int16_t *b0, int16_t *b1, int16_t *b2, int16_t *b3, int16_t *b4, int width); \
void ff_vertical_compose_haar##ext(int16_t *b0, int16_t *b1, int width); \
void ff_horizontal_compose_haar0i##ext(int16_t *b, int16_t *tmp, int w);\
void ff_horizontal_compose_haar1i##ext(int16_t *b, int16_t *tmp, int w);\
\
static void vertical_compose53iL0##ext(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width) \
\
\
static void vertical_compose_dirac53iH0##ext(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width) \
\
\
static void vertical_compose_dd137iL0##ext(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, \
uint8_t *_b3, uint8_t *_b4, int width) \
\
\
static void vertical_compose_dd97iH0##ext(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, \
uint8_t *_b3, uint8_t *_b4, int width) \
\
static void vertical_compose_haar##ext(uint8_t *_b0, uint8_t *_b1, int width) \
\
static void horizontal_compose_haar0i##ext(uint8_t *_b, uint8_t *_tmp, int w)\
\
static void horizontal_compose_haar1i##ext(uint8_t *_b, uint8_t *_tmp, int w)\
\
\
#if HAVE_YASM
#if !ARCH_X86_64
COMPOSE_VERTICAL(_mmx, 4)
COMPOSE_VERTICAL(_sse2, 8)
void ff_horizontal_compose_dd97i_ssse3(int16_t *_b, int16_t *_tmp, int w);
static void horizontal_compose_dd97i_ssse3(uint8_t *_b, uint8_t *_tmp, int w)
void ff_spatial_idwt_init_x86(DWTContext *d, enum dwt_type type)
