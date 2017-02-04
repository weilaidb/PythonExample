#define A1  2896
#define A2  2217
#define A3  3784
#define A4 -5352
IDCT_TRANSFORM
MUNGE_NONE (x)
IDCT_COL IDCT_TRANSFORM(dest,0,8,16,24,32,40,48,56,0,8,16,24,32,40,48,56,MUNGE_NONE,src)
MUNGE_ROW (((x) + 0x7F)>>8)
IDCT_ROW IDCT_TRANSFORM(dest,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,MUNGE_ROW,src)
bink_idct_col
bink_idct_c
bink_idct_add_c
bink_idct_put_c
scale_block_c
add_pixels8_c
ff_binkdsp_init
