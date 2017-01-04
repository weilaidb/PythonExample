constant sampler_t sampler = CLK_NORMALIZED_COORDS_FALSE | CLK_ADDRESS_CLAMP_TO_EDGE | CLK_FILTER_NEAREST;
typedef signed char int8_t;
typedef unsigned char   uint8_t;
typedef short  int16_t;
typedef unsigned short  uint16_t;
typedef int  int32_t;
typedef unsigned   uint32_t;
typedef uint8_t  pixel;
typedef uint16_t sum_t;
typedef uint32_t sum2_t;
#define LOWRES_COST_MASK ((1<<14)-1)
#define LOWRES_COST_SHIFT 14
#define COST_MAX (1<<28)
#define PIXEL_MAX 255
#define BITS_PER_SUM (8 * sizeof(sum_t))
#define COST_EST    0
#define COST_EST_AQ 1
#define INTRA_MBS   2
#define COPY2_IF_LT( x, y, a, b )\
if( (y) < (x) )\
constant int2 dia_offs[4] =
;
inline pixel x264_clip_pixel( int x )
inline int2 x264_median_mv( short2 a, short2 b, short2 c )
inline sum2_t abs2( sum2_t a )
#define HADAMARD4( d0, d1, d2, d3, s0, s1, s2, s3 )
#define HADAMARD4V( d0, d1, d2, d3, s0, s1, s2, s3 )
#define SATD_C_8x4_Q( name, q1, q2 )\
int name( q1 pixel *pix1, int i_pix1, q2 pixel *pix2, int i_pix2 )\
int parallel_sum( int value, int x, volatile local int *array )
int mv_cost( uint2 mvd )
