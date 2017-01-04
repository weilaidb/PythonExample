#define AVFILTER_FSPP_H
#define BLOCKSZ 12
#define MAX_LEVEL 5
#define DCTSIZE 8
#define DCTSIZE_S "8"
#define FIX(x,s)  ((int) ((x) * (1 << s) + 0.5) & 0xffff)
#define C64(x)    ((uint64_t)((x) | (x) << 16)) <<32 | (uint64_t)(x) | (uint64_t)(x) << 16
#define FIX64(x,s)  C64(FIX(x,s))
#define MULTIPLY16H(x,k)   (((x) * (k)) >> 16)
#define THRESHOLD(r,x,t)                         \
if(((unsigned)((x) + t)) > t * 2) r = (x);   \
else r = 0;
#define DESCALE(x,n)  (((x) + (1 << ((n) - 1))) >> n)
typedef int32_t int_simd16_t;
static const int16_t FIX_0_382683433   = FIX(0.382683433, 14);
static const int16_t FIX_0_541196100   = FIX(0.541196100, 14);
static const int16_t FIX_0_707106781   = FIX(M_SQRT1_2  , 14);
static const int16_t FIX_1_306562965   = FIX(1.306562965, 14);
static const int16_t FIX_1_414213562_A = FIX(M_SQRT2    , 14);
static const int16_t FIX_1_847759065   = FIX(1.847759065, 13);
static const int16_t FIX_2_613125930   = FIX(-2.613125930, 13);
static const int16_t FIX_1_414213562   = FIX(M_SQRT2    , 13);
static const int16_t FIX_1_082392200   = FIX(1.082392200, 13);
typedef struct FSPPContext  FSPPContext;
void ff_fspp_init_x86(FSPPContext *fspp);
