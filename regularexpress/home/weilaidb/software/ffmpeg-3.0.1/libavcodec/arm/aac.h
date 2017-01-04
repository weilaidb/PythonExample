#define AVCODEC_ARM_AAC_H
#if HAVE_NEON_INLINE
#define VMUL2 VMUL2
static inline float *VMUL2(float *dst, const float *v, unsigned idx,
const float *scale)
#define VMUL4 VMUL4
static inline float *VMUL4(float *dst, const float *v, unsigned idx,
const float *scale)
#define VMUL2S VMUL2S
static inline float *VMUL2S(float *dst, const float *v, unsigned idx,
unsigned sign, const float *scale)
#define VMUL4S VMUL4S
static inline float *VMUL4S(float *dst, const float *v, unsigned idx,
unsigned sign, const float *scale)
