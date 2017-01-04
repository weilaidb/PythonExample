#define AVUTIL_SOFTFLOAT_H
#define MIN_EXP -149
#define MAX_EXP  126
#define ONE_BITS 29
typedef struct SoftFloatSoftFloat;
static const SoftFloat FLOAT_0          = ;
static const SoftFloat FLOAT_05         = ;
static const SoftFloat FLOAT_1          = ;
static const SoftFloat FLOAT_EPSILON    = ;
static const SoftFloat FLOAT_1584893192 = ;
static const SoftFloat FLOAT_100000     = ;
static const SoftFloat FLOAT_0999999    = ;
static inline av_const double av_sf2double(SoftFloat v)
static av_const SoftFloat av_normalize_sf(SoftFloat a)
static inline av_const SoftFloat av_normalize1_sf(SoftFloat a)
static inline av_const SoftFloat av_mul_sf(SoftFloat a, SoftFloat b)
static inline av_const SoftFloat av_div_sf(SoftFloat a, SoftFloat b)
static inline av_const int av_cmp_sf(SoftFloat a, SoftFloat b)
static inline av_const int av_gt_sf(SoftFloat a, SoftFloat b)
static inline av_const SoftFloat av_add_sf(SoftFloat a, SoftFloat b)
static inline av_const SoftFloat av_sub_sf(SoftFloat a, SoftFloat b)
static inline av_const SoftFloat av_int2sf(int v, int frac_bits)
static inline av_const int av_sf2int(SoftFloat v, int frac_bits)
static av_always_inline SoftFloat av_sqrt_sf(SoftFloat val)
static av_unused void av_sincos_sf(int a, int *s, int *c)
