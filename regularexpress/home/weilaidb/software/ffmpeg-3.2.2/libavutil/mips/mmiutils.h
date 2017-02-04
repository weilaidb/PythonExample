#define AVUTIL_MIPS_MMIUTILS_H
#if HAVE_LOONGSON2
#define DECLARE_VAR_LOW32       int32_t low32
#define RESTRICT_ASM_LOW32      [low32](low32),
#define DECLARE_VAR_ALL64       int64_t all64
#define RESTRICT_ASM_ALL64      [all64](all64),
#define DECLARE_VAR_ADDRT       mips_reg addrt
#define RESTRICT_ASM_ADDRT      [addrt](addrt),
MMI_LWX                                    \
PTR_ADDU       \
MMI_SWX                                    \
PTR_ADDU       \
MMI_LDX                                    \
PTR_ADDU       \
MMI_SDX                                    \
PTR_ADDU       \
MMI_LWC1                                            \
MMI_ULWC1                                           \
\
MMI_LWXC1                                   \
PTR_ADDU       \
MMI_LWC1(fp, %[addrt], bias)
MMI_SWC1                                            \
MMI_USWC1                                           \
\
MMI_SWXC1                                   \
PTR_ADDU       \
MMI_SWC1(fp, %[addrt], bias)
MMI_LDC1                                            \
MMI_ULDC1                                           \
\
MMI_LDXC1                                   \
PTR_ADDU       \
MMI_LDC1(fp, %[addrt], bias)
MMI_SDC1                                            \
MMI_USDC1                                           \
\
MMI_SDXC1                                   \
PTR_ADDU       \
MMI_SDC1(fp, %[addrt], bias)
MMI_LQ                                      \
\
MMI_SQ                                      \
\
MMI_LQC1                                      \
\
MMI_SQC1                                      \
\
#elif HAVE_LOONGSON3
#define DECLARE_VAR_ALL64
#define RESTRICT_ASM_ALL64
#define DECLARE_VAR_ADDRT
#define RESTRICT_ASM_ADDRT
MMI_LWX                                    \
MMI_SWX                                    \
MMI_LDX                                    \
MMI_SDX                                    \
MMI_LWC1                                            \
#if _MIPS_SIM == _ABIO32
#define DECLARE_VAR_LOW32       int32_t low32
#define RESTRICT_ASM_LOW32      [low32](low32),
MMI_ULWC1                                           \
\
#define DECLARE_VAR_LOW32
#define RESTRICT_ASM_LOW32
MMI_ULWC1                                           \
\
MMI_LWXC1                                   \
MMI_SWC1                                            \
MMI_USWC1                                           \
\
MMI_SWXC1                                   \
MMI_LDC1                                            \
MMI_ULDC1                                           \
\
MMI_LDXC1                                   \
MMI_SDC1                                            \
MMI_USDC1                                           \
\
MMI_SDXC1                                   \
MMI_LQ                                      \
MMI_SQ                                      \
MMI_LQC1                                      \
MMI_SQC1                                      \
TRANSPOSE_4H \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
PSRAH_4_MMI                              \
\
\
\
PSRAH_8_MMI          \
PSRAH_4_MMI(fp1, fp2, fp3, fp4, shift)                              \
PSRAH_4_MMI(fp5, fp6, fp7, fp8, shift)
