#define A1  2896
#define A2  2217
#define A3  3784
#define A4 -5352
#define IDCT_TRANSFORM(dest,s0,s1,s2,s3,s4,s5,s6,s7,d0,d1,d2,d3,d4,d5,d6,d7,munge,src)
#define MUNGE_NONE(x) (x)
#define IDCT_COL(dest,src) IDCT_TRANSFORM(dest,0,8,16,24,32,40,48,56,0,8,16,24,32,40,48,56,MUNGE_NONE,src)
#define MUNGE_ROW(x) (((x) + 0x7F)>>8)
#define IDCT_ROW(dest,src) IDCT_TRANSFORM(dest,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,MUNGE_ROW,src)
static inline void bink_idct_col(int *dest, const int32_t *src)
static void bink_idct_c(int32_t *block)
static void bink_idct_add_c(uint8_t *dest, int linesize, int32_t *block)
static void bink_idct_put_c(uint8_t *dest, int linesize, int32_t *block)
static void scale_block_c(const uint8_t src[64], uint8_t *dst, int linesize)
static void add_pixels8_c(uint8_t *av_restrict pixels, int16_t *block,
int line_size)
av_cold void ff_binkdsp_init(BinkDSPContext *c)
