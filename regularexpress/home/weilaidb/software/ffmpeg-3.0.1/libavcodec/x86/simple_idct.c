#if HAVE_INLINE_ASM
#define C0 23170
#define C1 22725
#define C2 21407
#define C3 19266
#define C4 16383
#define C5 12873
#define C6 8867
#define C7 4520
#define ROW_SHIFT 11
#define COL_SHIFT 20
DECLARE_ASM_CONST(8, uint64_t, wm1010)= 0xFFFF0000FFFF0000ULL;
DECLARE_ASM_CONST(8, uint64_t, d40000)= 0x0000000000040000ULL;
DECLARE_ALIGNED(8, static const int16_t, coeffs)[]= ;
static inline void idct(int16_t *block)
void ff_simple_idct_mmx(int16_t *block)
void ff_simple_idct_put_mmx(uint8_t *dest, int line_size, int16_t *block)
void ff_simple_idct_add_mmx(uint8_t *dest, int line_size, int16_t *block)
