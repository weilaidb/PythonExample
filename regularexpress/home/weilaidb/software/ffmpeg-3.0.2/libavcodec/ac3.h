#define AVCODEC_AC3_H
#define AC3_MAX_CODED_FRAME_SIZE 3840
#define AC3_MAX_CHANNELS 7
#define CPL_CH 0
#define AC3_MAX_COEFS   256
#define AC3_BLOCK_SIZE  256
#define AC3_MAX_BLOCKS    6
#define AC3_FRAME_SIZE (AC3_MAX_BLOCKS * 256)
#define AC3_WINDOW_SIZE (AC3_BLOCK_SIZE * 2)
#define AC3_CRITICAL_BANDS 50
#define AC3_MAX_CPL_BANDS  18
#define EXP_REUSE 0
#define EXP_NEW   1
#define EXP_D15   1
#define EXP_D25   2
#define EXP_D45   3
#define USE_FIXED 0
#if USE_FIXED
#define FFT_FLOAT 0
#define FIXR(a)                 ((int)((a) * 0 + 0.5))
#define FIXR12(a)               ((int)((a) * 4096 + 0.5))
#define FIXR15(a)               ((int)((a) * 32768 + 0.5))
#define ROUND15(x)              ((x) + 16384) >> 15
#define AC3_RENAME(x)           x ## _fixed
#define AC3_NORM(norm)          (1<<24)/(norm)
#define AC3_MUL(a,b)            ((((int64_t) (a)) * (b))>>12)
#define AC3_RANGE(x)            ((x)|(((x)&128)<<1))
#define AC3_HEAVY_RANGE(x)      ((x)<<1)
#define AC3_DYNAMIC_RANGE(x)    (x)
#define AC3_SPX_BLEND(x)        (x)
#define AC3_DYNAMIC_RANGE1      0
typedef int                     INTFLOAT;
typedef int16_t                 SHORTFLOAT;
#define FIXR(x)                 ((float)(x))
#define FIXR12(x)               ((float)(x))
#define FIXR15(x)               ((float)(x))
#define ROUND15(x)              (x)
#define AC3_RENAME(x)           x
#define AC3_NORM(norm)          (1.0f/(norm))
#define AC3_MUL(a,b)            ((a) * (b))
#define AC3_RANGE(x)            (dynamic_range_tab[(x)])
#define AC3_HEAVY_RANGE(x)      (heavy_dynamic_range_tab[(x)])
#define AC3_DYNAMIC_RANGE(x)    (powf(x,  s->drc_scale))
#define AC3_SPX_BLEND(x)        (x)* (1.0f/32)
#define AC3_DYNAMIC_RANGE1      1.0f
typedef float                   INTFLOAT;
typedef float                   SHORTFLOAT;
#define AC3_LEVEL(x)            ROUND15((x) * FIXR15(M_SQRT1_2))
#define LEVEL_PLUS_3DB          M_SQRT2
#define LEVEL_PLUS_1POINT5DB    1.1892071150027209
#define LEVEL_MINUS_1POINT5DB   0.8408964152537145
#define LEVEL_MINUS_3DB         M_SQRT1_2
#define LEVEL_MINUS_4POINT5DB   0.5946035575013605
#define LEVEL_MINUS_6DB         0.5000000000000000
#define LEVEL_MINUS_9DB         0.3535533905932738
#define LEVEL_ZERO              0.0000000000000000
#define LEVEL_ONE               1.0000000000000000
typedef enum  AC3DeltaStrategy;
typedef enum  AC3ChannelMode;
typedef enum AC3DolbySurroundMode  AC3DolbySurroundMode;
typedef enum AC3DolbySurroundEXMode  AC3DolbySurroundEXMode;
typedef enum AC3DolbyHeadphoneMode  AC3DolbyHeadphoneMode;
typedef enum AC3PreferredStereoDownmixMode  AC3PreferredStereoDownmixMode;
typedef struct AC3BitAllocParameters  AC3BitAllocParameters;
typedef struct AC3HeaderInfo  AC3HeaderInfo;
typedef enum  EAC3FrameType;
void ff_ac3_common_init(void);
void ff_ac3_bit_alloc_calc_psd(int8_t *exp, int start, int end, int16_t *psd,
int16_t *band_psd);
int ff_ac3_bit_alloc_calc_mask(AC3BitAllocParameters *s, int16_t *band_psd,
int start, int end, int fast_gain, int is_lfe,
int dba_mode, int dba_nsegs, uint8_t *dba_offsets,
uint8_t *dba_lengths, uint8_t *dba_values,
int16_t *mask);
