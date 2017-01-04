#define X264_X264_H
#if !defined(_STDINT_H) && !defined(_STDINT_H_) && !defined(_STDINT_H_INCLUDED) && !defined(_STDINT) &&\
!defined(_SYS_STDINT_H_) && !defined(_INTTYPES_H) && !defined(_INTTYPES_H_) && !defined(_INTTYPES)
# ifdef _MSC_VER
#  pragma message("You must include stdint.h or inttypes.h before x264.h")
# else
#  warning You must include stdint.h or inttypes.h before x264.h
# endif
#define X264_BUILD 148
#define X264_API __declspec(dllimport)
#define X264_API
typedef struct x264_t x264_t;
enum nal_unit_type_e
;
enum nal_priority_e
;
typedef struct x264_nal_t
x264_nal_t;
#define X264_CPU_CMOV            0x0000001
#define X264_CPU_MMX             0x0000002
#define X264_CPU_MMX2            0x0000004
#define X264_CPU_MMXEXT          X264_CPU_MMX2
#define X264_CPU_SSE             0x0000008
#define X264_CPU_SSE2            0x0000010
#define X264_CPU_SSE3            0x0000020
#define X264_CPU_SSSE3           0x0000040
#define X264_CPU_SSE4            0x0000080
#define X264_CPU_SSE42           0x0000100
#define X264_CPU_LZCNT           0x0000200
#define X264_CPU_AVX             0x0000400
#define X264_CPU_XOP             0x0000800
#define X264_CPU_FMA4            0x0001000
#define X264_CPU_FMA3            0x0002000
#define X264_CPU_AVX2            0x0004000
#define X264_CPU_BMI1            0x0008000
#define X264_CPU_BMI2            0x0010000
#define X264_CPU_CACHELINE_32    0x0020000
#define X264_CPU_CACHELINE_64    0x0040000
#define X264_CPU_SSE2_IS_SLOW    0x0080000
#define X264_CPU_SSE2_IS_FAST    0x0100000
#define X264_CPU_SLOW_SHUFFLE    0x0200000
#define X264_CPU_STACK_MOD4      0x0400000
#define X264_CPU_SLOW_CTZ        0x0800000
#define X264_CPU_SLOW_ATOM       0x1000000
#define X264_CPU_SLOW_PSHUFB     0x2000000
#define X264_CPU_SLOW_PALIGNR    0x4000000
#define X264_CPU_ALTIVEC         0x0000001
#define X264_CPU_ARMV6           0x0000001
#define X264_CPU_NEON            0x0000002
#define X264_CPU_FAST_NEON_MRC   0x0000004
#define X264_CPU_ARMV8           0x0000008
#define X264_CPU_MSA             0x0000001
#define X264_ANALYSE_I4x4       0x0001
#define X264_ANALYSE_I8x8       0x0002
#define X264_ANALYSE_PSUB16x16  0x0010
#define X264_ANALYSE_PSUB8x8    0x0020
#define X264_ANALYSE_BSUB16x16  0x0100
#define X264_DIRECT_PRED_NONE        0
#define X264_DIRECT_PRED_SPATIAL     1
#define X264_DIRECT_PRED_TEMPORAL    2
#define X264_DIRECT_PRED_AUTO        3
#define X264_ME_DIA                  0
#define X264_ME_HEX                  1
#define X264_ME_UMH                  2
#define X264_ME_ESA                  3
#define X264_ME_TESA                 4
#define X264_CQM_FLAT                0
#define X264_CQM_JVT                 1
#define X264_CQM_CUSTOM              2
#define X264_RC_CQP                  0
#define X264_RC_CRF                  1
#define X264_RC_ABR                  2
#define X264_QP_AUTO                 0
#define X264_AQ_NONE                 0
#define X264_AQ_VARIANCE             1
#define X264_AQ_AUTOVARIANCE         2
#define X264_AQ_AUTOVARIANCE_BIASED  3
#define X264_B_ADAPT_NONE            0
#define X264_B_ADAPT_FAST            1
#define X264_B_ADAPT_TRELLIS         2
#define X264_WEIGHTP_NONE            0
#define X264_WEIGHTP_SIMPLE          1
#define X264_WEIGHTP_SMART           2
#define X264_B_PYRAMID_NONE          0
#define X264_B_PYRAMID_STRICT        1
#define X264_B_PYRAMID_NORMAL        2
#define X264_KEYINT_MIN_AUTO         0
#define X264_KEYINT_MAX_INFINITE     (1<<30)
static const char * const x264_direct_pred_names[] = ;
static const char * const x264_motion_est_names[] = ;
static const char * const x264_b_pyramid_names[] = ;
static const char * const x264_overscan_names[] = ;
static const char * const x264_vidformat_names[] = ;
static const char * const x264_fullrange_names[] = ;
static const char * const x264_colorprim_names[] = ;
static const char * const x264_transfer_names[] = ;
static const char * const x264_colmatrix_names[] = ;
static const char * const x264_nal_hrd_names[] = ;
#define X264_CSP_MASK           0x00ff
#define X264_CSP_NONE           0x0000
#define X264_CSP_I420           0x0001
#define X264_CSP_YV12           0x0002
#define X264_CSP_NV12           0x0003
#define X264_CSP_NV21           0x0004
#define X264_CSP_I422           0x0005
#define X264_CSP_YV16           0x0006
#define X264_CSP_NV16           0x0007
#define X264_CSP_V210           0x0008
#define X264_CSP_I444           0x0009
#define X264_CSP_YV24           0x000a
#define X264_CSP_BGR            0x000b
#define X264_CSP_BGRA           0x000c
#define X264_CSP_RGB            0x000d
#define X264_CSP_MAX            0x000e
#define X264_CSP_VFLIP          0x1000
#define X264_CSP_HIGH_DEPTH     0x2000
#define X264_TYPE_AUTO          0x0000
#define X264_TYPE_IDR           0x0001
#define X264_TYPE_I             0x0002
#define X264_TYPE_P             0x0003
#define X264_TYPE_BREF          0x0004
#define X264_TYPE_B             0x0005
#define X264_TYPE_KEYFRAME      0x0006
#define IS_X264_TYPE_I(x) ((x)==X264_TYPE_I || (x)==X264_TYPE_IDR || (x)==X264_TYPE_KEYFRAME)
#define IS_X264_TYPE_B(x) ((x)==X264_TYPE_B || (x)==X264_TYPE_BREF)
#define X264_LOG_NONE          (-1)
#define X264_LOG_ERROR          0
#define X264_LOG_WARNING        1
#define X264_LOG_INFO           2
#define X264_LOG_DEBUG          3
#define X264_THREADS_AUTO 0
#define X264_SYNC_LOOKAHEAD_AUTO (-1)
#define X264_NAL_HRD_NONE            0
#define X264_NAL_HRD_VBR             1
#define X264_NAL_HRD_CBR             2
typedef struct x264_zone_t
x264_zone_t;
typedef struct x264_param_t
x264_param_t;
void x264_nal_encode( x264_t *h, uint8_t *dst, x264_nal_t *nal );
typedef struct x264_level_t
x264_level_t;
X264_API extern const x264_level_t x264_levels[];
void    x264_param_default( x264_param_t * );
#define X264_PARAM_BAD_NAME  (-1)
#define X264_PARAM_BAD_VALUE (-2)
int x264_param_parse( x264_param_t *, const char *name, const char *value );
static const char * const x264_preset_names[] = ;
static const char * const x264_tune_names[] = ;
int     x264_param_default_preset( x264_param_t *, const char *preset, const char *tune );
void    x264_param_apply_fastfirstpass( x264_param_t * );
static const char * const x264_profile_names[] = ;
int     x264_param_apply_profile( x264_param_t *, const char *profile );
X264_API extern const int x264_bit_depth;
X264_API extern const int x264_chroma_format;
enum pic_struct_e
;
typedef struct x264_hrd_t
x264_hrd_t;
typedef struct x264_sei_payload_t
x264_sei_payload_t;
typedef struct x264_sei_t
x264_sei_t;
typedef struct x264_image_t
x264_image_t;
typedef struct x264_image_properties_t
x264_image_properties_t;
typedef struct x264_picture_t
x264_picture_t;
void x264_picture_init( x264_picture_t *pic );
int x264_picture_alloc( x264_picture_t *pic, int i_csp, int i_width, int i_height );
void x264_picture_clean( x264_picture_t *pic );
#define x264_encoder_glue1(x,y) x##y
#define x264_encoder_glue2(x,y) x264_encoder_glue1(x,y)
#define x264_encoder_open x264_encoder_glue2(x264_encoder_open_,X264_BUILD)
x264_t *x264_encoder_open( x264_param_t * );
int     x264_encoder_reconfig( x264_t *, x264_param_t * );
void    x264_encoder_parameters( x264_t *, x264_param_t * );
int     x264_encoder_headers( x264_t *, x264_nal_t **pp_nal, int *pi_nal );
int     x264_encoder_encode( x264_t *, x264_nal_t **pp_nal, int *pi_nal, x264_picture_t *pic_in, x264_picture_t *pic_out );
void    x264_encoder_close( x264_t * );
int     x264_encoder_delayed_frames( x264_t * );
int     x264_encoder_maximum_delayed_frames( x264_t *h );
void    x264_encoder_intra_refresh( x264_t * );
int x264_encoder_invalidate_reference( x264_t *, int64_t pts );
