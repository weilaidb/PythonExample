#define AVCODEC_AVR32_MATHOPS_H
#if HAVE_INLINE_ASM
#define MULL MULL
static inline av_const int MULL(int a, int b, unsigned shift)
#define MULH MULH
static inline av_const int MULH(int a, int b)
#define MUL64 MUL64
static inline av_const int64_t MUL64(int a, int b)
static inline av_const int64_t MAC64(int64_t d, int a, int b)
#define MAC64(d, a, b) ((d) = MAC64(d, a, b))
#define MLS64(d, a, b) MAC64(d, -(a), b)
static inline av_const int MAC16(int d, int a, int b)
#define MAC16(d, a, b) ((d) = MAC16(d, a, b))
#define MLS16(d, a, b) MAC16(d, -(a), b)
#define MUL16 MUL16
static inline av_const int MUL16(int a, int b)
#define mid_pred mid_pred
static inline av_const int mid_pred(int a, int b, int c)
