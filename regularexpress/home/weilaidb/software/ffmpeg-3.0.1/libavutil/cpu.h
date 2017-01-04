#define AVUTIL_CPU_H
#define AV_CPU_FLAG_FORCE    0x80000000
#define AV_CPU_FLAG_MMX          0x0001
#define AV_CPU_FLAG_MMXEXT       0x0002
#define AV_CPU_FLAG_MMX2         0x0002
#define AV_CPU_FLAG_3DNOW        0x0004
#define AV_CPU_FLAG_SSE          0x0008
#define AV_CPU_FLAG_SSE2         0x0010
#define AV_CPU_FLAG_SSE2SLOW 0x40000000
#define AV_CPU_FLAG_3DNOWEXT     0x0020
#define AV_CPU_FLAG_SSE3         0x0040
#define AV_CPU_FLAG_SSE3SLOW 0x20000000
#define AV_CPU_FLAG_SSSE3        0x0080
#define AV_CPU_FLAG_ATOM     0x10000000
#define AV_CPU_FLAG_SSE4         0x0100
#define AV_CPU_FLAG_SSE42        0x0200
#define AV_CPU_FLAG_AESNI       0x80000
#define AV_CPU_FLAG_AVX          0x4000
#define AV_CPU_FLAG_AVXSLOW   0x8000000
#define AV_CPU_FLAG_XOP          0x0400
#define AV_CPU_FLAG_FMA4         0x0800
#define AV_CPU_FLAG_CMOV         0x1000
#define AV_CPU_FLAG_AVX2         0x8000
#define AV_CPU_FLAG_FMA3        0x10000
#define AV_CPU_FLAG_BMI1        0x20000
#define AV_CPU_FLAG_BMI2        0x40000
#define AV_CPU_FLAG_ALTIVEC      0x0001
#define AV_CPU_FLAG_VSX          0x0002
#define AV_CPU_FLAG_POWER8       0x0004
#define AV_CPU_FLAG_ARMV5TE      (1 << 0)
#define AV_CPU_FLAG_ARMV6        (1 << 1)
#define AV_CPU_FLAG_ARMV6T2      (1 << 2)
#define AV_CPU_FLAG_VFP          (1 << 3)
#define AV_CPU_FLAG_VFPV3        (1 << 4)
#define AV_CPU_FLAG_NEON         (1 << 5)
#define AV_CPU_FLAG_ARMV8        (1 << 6)
#define AV_CPU_FLAG_VFP_VM       (1 << 7)
#define AV_CPU_FLAG_SETEND       (1 <<16)
int av_get_cpu_flags(void);
void av_force_cpu_flags(int flags);
attribute_deprecated void av_set_cpu_flags_mask(int mask);
attribute_deprecated
int av_parse_cpu_flags(const char *s);
int av_parse_cpu_caps(unsigned *flags, const char *s);
int av_cpu_count(void);
