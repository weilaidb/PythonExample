#define AVCODEC_XFACE_H
#define XFACE_WIDTH  48
#define XFACE_HEIGHT 48
#define XFACE_PIXELS (XFACE_WIDTH * XFACE_HEIGHT)
#define XFACE_FIRST_PRINT '!'
#define XFACE_LAST_PRINT '~'
#define XFACE_PRINTS (XFACE_LAST_PRINT - XFACE_FIRST_PRINT + 1)
#define XFACE_MAX_DIGITS 666
#define XFACE_BITSPERWORD 8
#define XFACE_WORDCARRY (1 << XFACE_BITSPERWORD)
#define XFACE_WORDMASK (XFACE_WORDCARRY - 1)
#define XFACE_MAX_WORDS 546
typedef struct  BigInt;
void ff_big_add(BigInt *b, uint8_t a);
void ff_big_div(BigInt *b, uint8_t a, uint8_t *r);
void ff_big_mul(BigInt *b, uint8_t a);
enum XFaceColor ;
typedef struct  ProbRange;
extern const ProbRange ff_xface_probranges_per_level[4][3];
extern const ProbRange ff_xface_probranges_2x2[16];
void ff_xface_generate_face(uint8_t *dst, uint8_t * const src);
