#define AVCODEC_AAC_DEFINES_H
#define USE_FIXED 0
#if USE_FIXED
#define FFT_FLOAT    0
#define FFT_FIXED_32 1
AAC_RENAME       x ## _fixed
AAC_RENAME_32    x ## _fixed_32
typedef int                 INTFLOAT;
typedef int64_t             INT64FLOAT;
typedef int16_t             SHORTFLOAT;
typedef SoftFloat           AAC_FLOAT;
typedef int                 AAC_SIGNE;
FIXR             ((int)((a) * 1 + 0.5))
FIXR10           ((int)((a) * 1024.0 + 0.5))
Q23              (int)((a) * 8388608.0 + 0.5)
Q30              (int)((x)*1073741824.0 + 0.5)
Q31              (int)((x)*2147483648.0 + 0.5)
RANGE15          x
GET_GAIN      (-(y) << (x)) + 1024
AAC_MUL16     (int)(((int64_t)(x) * (y) + 0x8000) >> 16)
AAC_MUL26     (int)(((int64_t)(x) * (y) + 0x2000000) >> 26)
AAC_MUL30     (int)(((int64_t)(x) * (y) + 0x20000000) >> 30)
AAC_MUL31     (int)(((int64_t)(x) * (y) + 0x40000000) >> 31)
AAC_MADD28 (int)((((int64_t)(x) * (y)) + \
((int64_t)(a) * (b)) + \
0x8000000) >> 28)
AAC_MADD30 (int)((((int64_t)(x) * (y)) + \
((int64_t)(a) * (b)) + \
0x20000000) >> 30)
AAC_MADD30_V8 (int)((((int64_t)(x) * (y)) + \
((int64_t)(a) * (b)) + \
((int64_t)(c) * (d)) + \
((int64_t)(e) * (f)) + \
0x20000000) >> 30)
AAC_MSUB30 (int)((((int64_t)(x) * (y)) - \
((int64_t)(a) * (b)) + \
0x20000000) >> 30)
AAC_MSUB30_V8 (int)((((int64_t)(x) * (y)) + \
((int64_t)(a) * (b)) - \
((int64_t)(c) * (d)) - \
((int64_t)(e) * (f)) + \
0x20000000) >> 30)
AAC_MSUB31_V3    (int)((((int64_t)(x) * (z)) - \
((int64_t)(y) * (z)) + \
0x40000000) >> 31)
AAC_HALF_SUM  (x) >> 1 + (y) >> 1
AAC_SRA_R     (int)(((x) + (1 << ((y) - 1))) >> (y))
#define FFT_FLOAT    1
#define FFT_FIXED_32 0
AAC_RENAME       x
AAC_RENAME_32    x
typedef float               INTFLOAT;
typedef float               INT64FLOAT;
typedef float               SHORTFLOAT;
typedef float               AAC_FLOAT;
typedef unsigned            AAC_SIGNE;
FIXR             ((float)(x))
FIXR10           ((float)(x))
Q23              ((float)(x))
Q30              ((float)(x))
Q31              ((float)(x))
RANGE15          (32768.0 * (x))
GET_GAIN      powf((x), -(y))
AAC_MUL16     ((x) * (y))
AAC_MUL26     ((x) * (y))
AAC_MUL30     ((x) * (y))
AAC_MUL31     ((x) * (y))
AAC_MADD28 ((x) * (y) + (a) * (b))
AAC_MADD30 ((x) * (y) + (a) * (b))
AAC_MADD30_V8 ((x) * (y) + (a) * (b) + \
(c) * (d) + (e) * (f))
AAC_MSUB30 ((x) * (y) - (a) * (b))
AAC_MSUB30_V8 ((x) * (y) + (a) * (b) - \
(c) * (d) - (e) * (f))
AAC_MSUB31_V3    ((x) - (y)) * (z)
AAC_HALF_SUM  ((x) + (y)) * 0.5f
AAC_SRA_R     (x)
