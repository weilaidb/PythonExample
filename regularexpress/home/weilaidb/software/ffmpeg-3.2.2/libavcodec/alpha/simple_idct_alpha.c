#define W1 22725
#define W2 21407
#define W3 19266
#define W4 16383
#define W5 12873
#define W6  8867
#define W7  4520
#define ROW_SHIFT 11
#define COL_SHIFT 20
static inline int idct_row(int16_t *row)
static inline void idct_col(int16_t *col)
static inline void idct_col2(int16_t *col)
void ff_simple_idct_axp(int16_t *block)
void ff_simple_idct_put_axp(uint8_t *dest, int line_size, int16_t *block)
void ff_simple_idct_add_axp(uint8_t *dest, int line_size, int16_t *block)
