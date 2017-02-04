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
DECLARE_ASM_CONST= 0xFFFF0000FFFF0000ULL;
DECLARE_ASM_CONST(8, uint64_t, d40000)= 0x0000000000040000ULL;
DECLARE_ALIGNED(8, static const int16_t, coeffs)[]= ;
idct
ff_simple_idct_mmx
ff_simple_idct_put_mmx
ff_simple_idct_add_mmx
