#if   ARCH_AARCH64
#   include "libavutil/aarch64/cpu.h"
#elif ARCH_ARM
#   include "libavutil/arm/cpu.h"
static void inline ff_dct_unquantize_h263_neon(int qscale, int qadd, int nCoeffs,
int16_t *block)
static void dct_unquantize_h263_inter_neon(MpegEncContext *s, int16_t *block,
int n, int qscale)
static void dct_unquantize_h263_intra_neon(MpegEncContext *s, int16_t *block,
int n, int qscale)
av_cold void ff_mpv_common_init_neon(MpegEncContext *s)
