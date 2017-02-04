#define ASQRT 181
#define A4    669
#define A2    277
#define A5    196
IDCT_TRANSFORM
MUNGE_NONE (x)
IDCT_COL IDCT_TRANSFORM(dest,0,8,16,24,32,40,48,56,0,8,16,24,32,40,48,56,MUNGE_NONE,src)
MUNGE_8BIT av_clip_uint8((x)>>4)
IDCT_ROW IDCT_TRANSFORM(dest,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,MUNGE_8BIT,src)
ea_idct_col
ff_ea_idct_put_c
