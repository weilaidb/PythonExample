#define X264_COMMON_H
#define X264_MIN(a,b) ( (a)<(b) ? (a) : (b) )
#define X264_MAX(a,b) ( (a)>(b) ? (a) : (b) )
#define X264_MIN3(a,b,c) X264_MIN((a),X264_MIN((b),(c)))
#define X264_MAX3(a,b,c) X264_MAX((a),X264_MAX((b),(c)))
#define X264_MIN4(a,b,c,d) X264_MIN((a),X264_MIN3((b),(c),(d)))
#define X264_MAX4(a,b,c,d) X264_MAX((a),X264_MAX3((b),(c),(d)))
#define XCHG(type,a,b) do  while( 0 )
#define IS_DISPOSABLE(type) ( type == X264_TYPE_B )
#define FIX8(f) ((int)(f*(1<<8)+.5))
#define ALIGN(x,a) (((x)+((a)-1))&~((a)-1))
#define ARRAY_ELEMS(a) ((sizeof(a))/(sizeof(a[0])))
#define CHECKED_MALLOC( var, size )\
do  while( 0 )
#define CHECKED_MALLOCZERO( var, size )\
do  while( 0 )
#define PREALLOC_BUF_SIZE 1024
#define PREALLOC_INIT\
int    prealloc_idx = 0;\
size_t prealloc_size = 0;\
uint8_t **preallocs[PREALLOC_BUF_SIZE];
#define PREALLOC( var, size )\
do  while( 0 )
#define PREALLOC_END( ptr )\
do  while( 0 )
#define ARRAY_SIZE(array)  (sizeof(array)/sizeof(array[0]))
#define X264_BFRAME_MAX 16
#define X264_REF_MAX 16
#define X264_THREAD_MAX 128
#define X264_LOOKAHEAD_THREAD_MAX 16
#define X264_PCM_COST (FRAME_SIZE(256*BIT_DEPTH)+16)
#define X264_LOOKAHEAD_MAX 250
#define QP_BD_OFFSET (6*(BIT_DEPTH-8))
#define QP_MAX_SPEC (51+QP_BD_OFFSET)
#define QP_MAX (QP_MAX_SPEC+18)
#define QP_MAX_MAX (51+2*6+18)
#define PIXEL_MAX ((1 << BIT_DEPTH)-1)
#define X264_LOOKAHEAD_QP (12+QP_BD_OFFSET)
#define SPEC_QP(x) X264_MIN((x), QP_MAX_SPEC)
#define X264_THREAD_HEIGHT 24
#define X264_WEIGHTP_FAKE (-1)
#define NALU_OVERHEAD 5
#define FILLER_OVERHEAD (NALU_OVERHEAD+1)
#define SEI_OVERHEAD (NALU_OVERHEAD - (h->param.b_annexb && !h->param.i_avcintra_class && (h->out.i_nal-1)))
#if HAVE_INTERLACED
#   define MB_INTERLACED h->mb.b_interlaced
#   define SLICE_MBAFF h->sh.b_mbaff
#   define PARAM_INTERLACED h->param.b_interlaced
#   define MB_INTERLACED 0
#   define SLICE_MBAFF 0
#   define PARAM_INTERLACED 0
#    define CHROMA_H_SHIFT (CHROMA_FORMAT == CHROMA_420 || CHROMA_FORMAT == CHROMA_422)
#    define CHROMA_V_SHIFT (CHROMA_FORMAT == CHROMA_420)
#    define CHROMA_FORMAT h->sps->i_chroma_format_idc
#    define CHROMA_H_SHIFT h->mb.chroma_h_shift
#    define CHROMA_V_SHIFT h->mb.chroma_v_shift
#define CHROMA_SIZE(s) ((s)>>(CHROMA_H_SHIFT+CHROMA_V_SHIFT))
#define FRAME_SIZE(s) ((s)+2*CHROMA_SIZE(s))
#define CHROMA444 (CHROMA_FORMAT == CHROMA_444)
typedef union  MAY_ALIAS x264_union16_t;
typedef union  MAY_ALIAS x264_union32_t;
typedef union  MAY_ALIAS x264_union64_t;
typedef struct  x264_uint128_t;
typedef union  MAY_ALIAS x264_union128_t;
#define M16(src) (((x264_union16_t*)(src))->i)
#define M32(src) (((x264_union32_t*)(src))->i)
#define M64(src) (((x264_union64_t*)(src))->i)
#define M128(src) (((x264_union128_t*)(src))->i)
#define M128_ZERO ((x264_uint128_t))
#define CP16(dst,src) M16(dst) = M16(src)
#define CP32(dst,src) M32(dst) = M32(src)
#define CP64(dst,src) M64(dst) = M64(src)
#define CP128(dst,src) M128(dst) = M128(src)
#if HIGH_BIT_DEPTH
typedef uint16_t pixel;
typedef uint64_t pixel4;
typedef int32_t  dctcoef;
typedef uint32_t udctcoef;
#   define PIXEL_SPLAT_X4(x) ((x)*0x0001000100010001ULL)
#   define MPIXEL_X4(src) M64(src)
typedef uint8_t  pixel;
typedef uint32_t pixel4;
typedef int16_t  dctcoef;
typedef uint16_t udctcoef;
#   define PIXEL_SPLAT_X4(x) ((x)*0x01010101U)
#   define MPIXEL_X4(src) M32(src)
#define BIT_DEPTH X264_BIT_DEPTH
#define CPPIXEL_X4(dst,src) MPIXEL_X4(dst) = MPIXEL_X4(src)
#define X264_SCAN8_LUMA_SIZE (5*8)
#define X264_SCAN8_SIZE (X264_SCAN8_LUMA_SIZE*3)
#define X264_SCAN8_0 (4+1*8)
#define LUMA_DC   48
#define CHROMA_DC 49
static const uint8_t x264_scan8[16*3 + 3] =
;
#if HAVE_OPENCL
void *x264_malloc( int );
void  x264_free( void * );
char *x264_slurp_file( const char *filename );
int64_t x264_mdate( void );
char *x264_param2string( x264_param_t *p, int b_res );
void x264_log( x264_t *h, int i_level, const char *psz_fmt, ... );
void x264_reduce_fraction( uint32_t *n, uint32_t *d );
void x264_reduce_fraction64( uint64_t *n, uint64_t *d );
void x264_cavlc_init( x264_t *h );
void x264_cabac_init( x264_t *h );
static ALWAYS_INLINE pixel x264_clip_pixel( int x )
static ALWAYS_INLINE int x264_clip3( int v, int i_min, int i_max )
static ALWAYS_INLINE double x264_clip3f( double v, double f_min, double f_max )
static ALWAYS_INLINE int x264_median( int a, int b, int c )
static ALWAYS_INLINE void x264_median_mv( int16_t *dst, int16_t *a, int16_t *b, int16_t *c )
static ALWAYS_INLINE int x264_predictor_difference( int16_t (*mvc)[2], intptr_t i_mvc )
static ALWAYS_INLINE uint16_t x264_cabac_mvd_sum( uint8_t *mvdleft, uint8_t *mvdtop )
extern const uint8_t x264_exp2_lut[64];
extern const float x264_log2_lut[128];
extern const float x264_log2_lz_lut[32];
static ALWAYS_INLINE int x264_exp2fix8( float x )
static ALWAYS_INLINE float x264_log2( uint32_t x )
enum slice_type_e
;
static const char slice_type_to_char[] = ;
enum sei_payload_type_e
;
typedef struct
x264_slice_header_t;
typedef struct x264_lookahead_t
x264_lookahead_t;
typedef struct x264_ratecontrol_t   x264_ratecontrol_t;
typedef struct x264_left_table_t
x264_left_table_t;
typedef struct
x264_frame_stat_t;
struct x264_t
;
typedef struct
mvsad_t;
static int ALWAYS_INLINE x264_predictor_roundclip( int16_t (*dst)[2], int16_t (*mvc)[2], int i_mvc, int16_t mv_limit[2][2], uint32_t pmv )
static int ALWAYS_INLINE x264_predictor_clip( int16_t (*dst)[2], int16_t (*mvc)[2], int i_mvc, int16_t mv_limit[2][2], uint32_t pmv )
#if ARCH_X86 || ARCH_X86_64
