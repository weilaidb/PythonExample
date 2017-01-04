#define ASQRT 181
#define A4    669
#define A2    277
#define A5    196
#define IDCT_TRANSFORM(dest,s0,s1,s2,s3,s4,s5,s6,s7,d0,d1,d2,d3,d4,d5,d6,d7,munge,src)
#define MUNGE_NONE(x) (x)
#define IDCT_COL(dest,src) IDCT_TRANSFORM(dest,0,8,16,24,32,40,48,56,0,8,16,24,32,40,48,56,MUNGE_NONE,src)
#define MUNGE_8BIT(x) av_clip_uint8((x)>>4)
#define IDCT_ROW(dest,src) IDCT_TRANSFORM(dest,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,MUNGE_8BIT,src)
static inline void ea_idct_col(int16_t *dest, const int16_t *src)
void ff_ea_idct_put_c(uint8_t *dest, int linesize, int16_t *block)
