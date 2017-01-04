#define X264_PIXEL_H
typedef int  (*x264_pixel_cmp_t)( pixel *, intptr_t, pixel *, intptr_t );
typedef void (*x264_pixel_cmp_x3_t)( pixel *, pixel *, pixel *, pixel *, intptr_t, int[3] );
typedef void (*x264_pixel_cmp_x4_t)( pixel *, pixel *, pixel *, pixel *, pixel *, intptr_t, int[4] );
enum
;
static const struct  x264_pixel_size[12] =
;
static const uint8_t x264_size2pixel[5][5] =
;
static const uint8_t x264_luma2chroma_pixel[4][7] =
;
typedef struct
x264_pixel_function_t;
void x264_pixel_init( int cpu, x264_pixel_function_t *pixf );
void x264_pixel_ssd_nv12   ( x264_pixel_function_t *pf, pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2,
int i_width, int i_height, uint64_t *ssd_u, uint64_t *ssd_v );
uint64_t x264_pixel_ssd_wxh( x264_pixel_function_t *pf, pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2,
int i_width, int i_height );
float x264_pixel_ssim_wxh  ( x264_pixel_function_t *pf, pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2,
int i_width, int i_height, void *buf, int *cnt );
int x264_field_vsad( x264_t *h, int mb_x, int mb_y );
