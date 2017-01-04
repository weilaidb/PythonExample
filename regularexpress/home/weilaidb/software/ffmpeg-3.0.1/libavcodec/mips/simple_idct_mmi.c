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
DECLARE_ALIGNED(8, static const int16_t, coeffs)[]= ;
void ff_simple_idct_mmi(int16_t *block)
