#define AVCODEC_MIPS_AMRWBDEC_MIPS_H
#if HAVE_MIPSFPU && HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
ff_hb_fir_filter_mips;
#define hb_fir_filter ff_hb_fir_filter_mips
