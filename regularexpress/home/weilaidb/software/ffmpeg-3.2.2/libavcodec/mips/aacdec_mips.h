#define AVCODEC_MIPS_AACDEC_MIPS_H
#if HAVE_INLINE_ASM && HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static inline float *VMUL2_mips(float *dst, const float *v, unsigned idx,
const float *scale)
static inline float *VMUL4_mips(float *dst, const float *v, unsigned idx,
const float *scale)
static inline float *VMUL2S_mips(float *dst, const float *v, unsigned idx,
unsigned sign, const float *scale)
static inline float *VMUL4S_mips(float *dst, const float *v, unsigned idx,
unsigned sign, const float *scale)
#define VMUL2 VMUL2_mips
#define VMUL4 VMUL4_mips
#define VMUL2S VMUL2S_mips
#define VMUL4S VMUL4S_mips
